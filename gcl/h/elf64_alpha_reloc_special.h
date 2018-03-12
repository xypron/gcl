static ul ggot1,ggote;

static int
write_stub(ul s,ul *got,ul *gote) {

  unsigned int *goti;

  *gote=(ul)(goti=(void *)(gote+2));
  *++gote=s;
  *goti++=(0x29<<26)|(0x1b<<21)|(0x1d<<16)|((void *)gote-(void *)got);
  *goti++=(0x29<<26)|(0x1b<<21)|(0x1b<<16)|0;
  *goti++=(0x1a<<26)|(0x1f<<21)|(0x1b<<16)|0x4000;
  *goti++=0;

  return 0;
  
}

static int
make_got_room_for_stub(Shdr *sec1,Shdr *sece,Sym *sym,const char *st1,ul *gs) {

  Shdr *ssec=sec1+sym->st_shndx;
  struct node *a;

  if ((ssec>=sece || !ALLOC_SEC(ssec)) && 
      (a=find_sym_ptable(st1+sym->st_name)) &&
      a->address>=ggot1 && a->address<ggote)
    (*gs)+=3;

  return 0;

}

static int
find_special_params(void *v,Shdr *sec1,Shdr *sece,const char *sn,
		    const char *st1,Sym *ds1,Sym *dse,Sym *sym1,Sym *syme) {

  Shdr *sec;
  Rela *r;
  void *ve;

  massert((sec=get_section(".got",sec1,sece,sn)));

  ggot1=sec->sh_addr;
  ggote=ggot1+sec->sh_size;

  massert((sec=get_section(".rel.dyn",sec1,sece,sn))||
	  (sec=get_section(".rela.dyn",sec1,sece,sn)));

  v+=sec->sh_offset;
  ve=v+sec->sh_size;

  for (r=v;v<ve;v+=sec->sh_entsize,r=v) 
    if (ELF_R_TYPE(r->r_info) && !ds1[ELF_R_SYM(r->r_info)].st_value)
      ds1[ELF_R_SYM(r->r_info)].st_value=r->r_offset;

  return 0;

}

static int
label_got_symbols(void *v1,Shdr *sec1,Shdr *sece,Sym *sym1,Sym *syme,const char *st1,const char *sn,ul *gs) {

  Rela *r,*rr;
  Shdr *sec;
  void *v,*ve,*vv;
  ul b,q;

  for (*gs=0,sec=sec1;sec<sece;sec++)
    if (sec->sh_type==SHT_RELA)
      for (v=v1+sec->sh_offset,ve=v+sec->sh_size,r=v;v<ve;v+=sec->sh_entsize,r=v)
	if (ELF_R_TYPE(r->r_info)==R_ALPHA_LITERAL) {

	  for (rr=vv=v-sec->sh_entsize;
	       vv>=v1 &&
		 (ELF_R_TYPE(rr->r_info)!=ELF_R_TYPE(r->r_info) ||
		  ELF_R_SYM(rr->r_info)!=ELF_R_SYM(r->r_info) ||
		  rr->r_addend!=r->r_addend);
	       vv-=sec->sh_entsize,rr=vv);

	  b=sizeof(r->r_addend)*4;
	  if (vv>=v1)
	    q=rr->r_addend>>b;
	  else {
	    q=++*gs;
	    massert(!make_got_room_for_stub(sec1,sece,sym1+ELF_R_SYM(r->r_info),st1,gs));
	  }
	  massert(*gs==q || !r->r_addend);
	  massert(!(r->r_addend>>b));
	  r->r_addend|=(q<<b);

	}
  
  return 0;
  
}
