
(IN-PACKAGE "COMPILER") 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) FIXNUM) ANALYZE-REGS ANALYZE-REGS1
            PROCLAIMED-ARGD)) 
(PROCLAIM '(FTYPE (FUNCTION (T FIXNUM) T) MEMOIZED-HASH-EQUAL)) 
(PROCLAIM '(FTYPE (FUNCTION (STRING) T) DASH-TO-UNDERSCORE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (STRING FIXNUM FIXNUM) T) DASH-TO-UNDERSCORE-INT)) 
(PROCLAIM '(FTYPE (FUNCTION ((VECTOR T)) T) COPY-ARRAY)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) T) FIXNUM-LOC-P C1LOAD-TIME-VALUE
            C1DEFINE-STRUCTURE SET-TOP SET-RETURN BLK-EXIT SCH-GLOBAL
            SAFE-SYSTEM C1TAGBODY WT-H1 C1LABELS FUN-P C2GO-CLB
            C2LOCATION WT-VV FUNCTION-RETURN-TYPE T1PROGN FUN-REF-CCB
            WT-LIST C1LOCAL-CLOSURE C1FUNCTION WT-VS* C1APPLY VAR-KIND
            AET-C-TYPE WT-DATA1 C1MACROLET C1GO MACRO-DEF-P PUSH-ARGS
            CHECK-VREF C1LET CHECK-DOWNWARD C1OR ADD-CONSTANT
            TAG-REF-CCB OBJECT-TYPE C1VAR C1MAPCAN C1STACK-LET ADD-REG1
            C2GET C1SETQ TAG-REF-CLB SCH-LOCAL-FUN WT-VS SAVE-FUNOB
            T1ORDINARY VAR-REF-CCB NAME-TO-SD C2DM-RESERVE-VL
            CHARACTER-LOC-P C1ASSOC FASD-FILEPOS C1MEMBER
            SET-UP-VAR-CVS C1LET* INLINE-POSSIBLE C1STRUCTURE-REF
            C1NTHCDR-CONDITION FUN-REF C1NTH-CONDITION C1SHARP-COMMA
            FASD-EVALD_FORMS TAG-UNWIND-EXIT SHORT-FLOAT-LOC-P
            C1COMPILER-LET CONS-TO-LISTA REPLACE-CONSTANT C1THROW
            RESET-INFO-TYPE LONG-FLOAT-LOC-P GET-RETURN-TYPE TAG-VAR
            REGISTER C1EVAL-WHEN C2TAGBODY-BODY C1MULTIPLE-VALUE-CALL
            C1BOOLE-CONDITION C1TERPRI NEED-TO-SET-VS-POINTERS FIX-OPT
            CMP-MACRO-FUNCTION INFO-VOLATILE C1LIST-NTH FASD-EOF
            VERIFY-DATA-VECTOR C1MAPCAR GET-LOCAL-RETURN-TYPE REP-TYPE
            INFO-SP-CHANGE C1ASH-CONDITION VAR-NAME T1MACROLET
            C1ADD-GLOBALS C1FLET WRITE-BLOCK-OPEN GET-ARG-TYPES
            FUN-CFUN VARARG-P C1MAPC C1LENGTH NAME-SD1 WT-VS-BASE
            C1MULTIPLE-VALUE-BIND C1SWITCH WT-CCB-VS TAG-SWITCH
            INFO-CHANGED-ARRAY WT-FUNCALL-C MDELETE-FILE
            INFO-REFERRED-ARRAY LTVP WT-DATA-PACKAGE-OPERATION
            C2DM-RESERVE-V C1NTHCDR C1BOOLE3 FASD-PACKAGE WT-DOWN
            C1DM-BAD-KEY INFO-P TAG-LABEL CLINK C1ASH
            T1DEFINE-STRUCTURE C1RPLACD SET-PUSH-CATCH-FRAME
            C1LOCAL-FUN C1DECLARE WT-CDR TYPE-FILTER T1DEFLA C2GETHASH
            BLK-REF-CLB GET-INCLUDED BLK-REF-CCB CTOP-WRITE C1EXPR
            DEFAULT-INIT C1MAPLIST C1FUNCALL ADD-ADDRESS FSET-FN-NAME
            FASD-INDEX VAR-REF C2VAR C2GO-CCB C2BIND
            WT-DOWNWARD-CLOSURE-MACRO CONSTANT-FOLD-P
            ADD-LOOP-REGISTERS VAR-TYPE INLINE-BOOLE3-STRING
            C1MULTIPLE-VALUE-SETQ C1CATCH UNWIND-NO-EXIT C1MAPL
            T1CLINES GET-LOCAL-ARG-TYPES SYSTEM:UNDEF-COMPILER-MACRO
            C1FMLA-CONSTANT T3ORDINARY WT-VAR-DECL C1UNWIND-PROTECT WT1
            C1VREF THE-PARAMETER C1FSET CMP-MACROEXPAND-1
            BLK-VALUE-TO-GO COPY-INFO SAVE-AVMA T1DEFCFUN T1DEFENTRY
            INLINE-TYPE FUN-NAME TAG-REF FASD-STREAM FASD-TABLE_LENGTH
            C1PRINC T2DECLARE C1BLOCK C1VALUES C2TAGBODY-CCB
            WT-SYMBOL-FUNCTION VAR-REP-LOC VAR-LOC C1MEMQ
            FASD-DIRECTION C1DOWNWARD-FUNCTION LTVP-EVAL C2VALUES
            PUSH-DATA-INCF C1AND INFO-TYPE C1QUOTE BLK-P T1DEFUN
            C1PSETQ WT-CADR PUSH-ARGS-LISPCALL TAG-P BLK-NAME
            ADD-SYMBOL BLK-VAR TAG-NAME C1PROGV C1ECASE T1DEFMACRO
            WT-FUNCTION-LINK C1RETURN-FROM C1PROGN C2FUNCTION
            C2TAGBODY-CLB WT-CAR C2TAGBODY-LOCAL VAR-P
            UNDEFINED-VARIABLE T3CLINES PROCLAMATION CMP-MACROEXPAND
            ARGS-CAUSE-SIDE-EFFECT C1THE FLAGS-POS FASD-TABLE
            C2GO-LOCAL RESULT-TYPE C2DOWNWARD-FUNCTION C2RPLACD
            C1MULTIPLE-VALUE-PROG1 C1GET MAXARGS C1FUNOB VAR-REGISTER
            DECLARATION-TYPE C1IF PARSE-CVSPECS ADD-OBJECT2 ADD-OBJECT
            C1STRUCTURE-SET C2VAR-KIND WT-SWITCH-CASE C1NTH VOLATILE
            FUNCTION-ARG-TYPES C2FUNCALL-AUX BLK-REF FUN-INFO PROCLAIM
            C1GETHASH C1MAPCON C2EXPR* C1RPLACA-NTHCDR C2RPLACA
            C1RPLACA FUN-LEVEL)) 
(PROCLAIM '(FTYPE (FUNCTION (*) *) INLINE-BOOLE3)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) T) CO1CONS SHIFT>> CO1TYPEP C1SETQ1
            COMPILER-CLEAR-COMPILER-PROPERTIES SET-BDS-BIND
            C2UNWIND-PROTECT MULTIPLE-VALUE-CHECK SET-VS
            COERCE-LOC-STRUCTURE-REF C1ARGS C2LAMBDA-EXPR-WITHOUT-KEY
            CO1READ-BYTE COMPILER-DEF-HOOK CO1VECTOR-PUSH C2BIND-LOC
            SET-JUMP-TRUE IS-REP-REFERRED WT-CHARACTER-VALUE
            WT-LONG-FLOAT-VALUE SHIFT<< FAST-READ ADD-DEBUG-INFO WT-VAR
            INLINE-PROC STRUCT-TYPE-OPT C2SETQ C2BIND-INIT
            RESULT-TYPE-FROM-ARGS DO-MACRO-EXPANSION C2EXPR-TOP*
            WT-MAKE-DCLOSURE C2CATCH COERCE-LOC CO1SPECIAL-FIX-DECL
            C2PSETQ C2BLOCK-CLB PROCLAIM-VAR CO1WRITE-CHAR
            MAKE-USER-INIT CO1CONSTANT-FOLD MAYBE-EVAL CFAST-WRITE
            C2DM-BIND-VL SYSTEM::ADD-DEBUG GET-INLINE-LOC UNWIND-BDS
            C1DECL-BODY CO1READ-CHAR C2THROW WT-V*-MACROS
            PUSH-CHANGED-VARS C2MULTIPLE-VALUE-PROG1 CO1SUBLIS C1FMLA
            WT-REQUIREDS CHECK-FNAME-ARGS C2EXPR-TOP C2CALL-LOCAL
            T3SHARP-COMMA C2DM-BIND-LOC CHECK-END TYPE-AND CO1EQL
            CO1WRITE-BYTE WT-SHORT-FLOAT-VALUE CO1LDB C1EXPR*
            JUMPS-TO-P C2MULTIPLE-VALUE-SETQ C1LAMBDA-FUN
            CAN-BE-REPLACED ADD-INFO ARGS-INFO-CHANGED-VARS C1PROGN*
            CO1STRUCTURE-PREDICATE C1CONSTANT-VALUE C2RETURN-CCB
            ARGS-INFO-REFERRED-VARS CMPFIX-ARGS C2MULTIPLE-VALUE-CALL
            WT-FIXNUM-VALUE NEED-TO-PROTECT C2LAMBDA-EXPR-WITH-KEY
            C2DM-BIND-INIT C2LIST-NTH-IMMEDIATE PRIN1-CMP COMPILER-CC
            CO1SCHAR C2STACK-LET TYPE>= SET-DBIND SET-JUMP-FALSE
            C2CALL-LAMBDA CONVERT-CASE-TO-SWITCH C2MEMBER!2 C2BLOCK-CCB
            C2RETURN-CLB C2ASSOC!2 C2APPLY)) 
(PROCLAIM '(FTYPE (FUNCTION (T *) *) COMPILE-FILE1)) 
(PROCLAIM '(FTYPE (FUNCTION (FIXNUM FIXNUM) T) MLIN)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) T) T3DEFCFUN TOO-MANY-ARGS C2GO
            INLINE-TYPE-MATCHES CJT C2PROGV MYSUB C2LET C2CASE
            C2FUNCALL-SFUN CHECK-VDECL COMPILER-PASS2 CMP-EXPAND-MACRO
            SET-VAR C2MAPCAR CJF BOOLE3 ADD-FUNCTION-PROCLAMATION
            CAN-BE-REPLACED* C1DM WT-IF-PROCLAIMED C1MAP-FUNCTIONS
            WT-INLINE-COND ASSIGN-DOWN-VARS WT-INLINE-INTEGER C2PRINC
            C2MAPC AND-FORM-TYPE MAKE-INLINE-STRING GET-INLINE-INFO
            WT-INLINE-SHORT-FLOAT C-FUNCTION-NAME C1STRUCTURE-REF1
            WT-INLINE-LONG-FLOAT C2MULTIPLE-VALUE-BIND ADD-FAST-LINK
            WT-INLINE-FIXNUM C2MAPCAN SUBLIS1-INLINE CHECK-FORM-TYPE
            ADD-FUNCTION-DECLARATION TOO-FEW-ARGS WT-INLINE-CHARACTER
            C2LET* WT-MAKE-CCLOSURE C2TAGBODY FIX-DOWN-ARGS)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T) T) C2CALL-UNKNOWN-GLOBAL MY-CALL
            T3INIT-FUN T3DEFUN-VARARG T3DEFUN-NORMAL C2CALL-GLOBAL
            C1MAKE-VAR WT-GLOBAL-ENTRY C2SWITCH C2STRUCTURE-REF)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T *) T) GET-OUTPUT-PATHNAME WT-SIMPLE-CALL)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T) T) T2DEFMACRO T2DEFENTRY T3DEFMACRO
            T3DEFENTRY DEFSYSFUN)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T) T) T3DEFUN T3DEFUN-LOCAL-ENTRY
            C2STRUCTURE-SET T2DEFUN C1APPLY-OPTIMIZE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T *) T) T3LOCAL-DCFUN T3LOCAL-FUN)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T *) T) LINK C2LAMBDA-EXPR C2FUNCALL
            INLINE-ARGS)) 
(PROCLAIM '(FTYPE (FUNCTION (T) FIXNUM) F-TYPE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T (VECTOR T) FIXNUM T) FIXNUM) PUSH-ARRAY)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T (VECTOR T) FIXNUM FIXNUM T) FIXNUM)
            BSEARCHLEQ)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) *) SET-LOC WT-TO-STRING WT-SHORT-FLOAT-LOC
            C2PROGN T1EVAL-WHEN WT-LONG-FLOAT-LOC C2EXPR C2AND
            CMP-TOPLEVEL-EVAL CMP-EVAL WT-FIXNUM-LOC WT-LOC VV-STR
            T1EXPR WT-CHARACTER-LOC C2OR)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) T) MAKE-FUN FCALLN-INLINE MAKE-BLK
            COMPILE-FILE LIST-INLINE WT-CLINK LIST*-INLINE CS-PUSH
            MAKE-INFO COMPILER-COMMAND MAKE-TAG C2FSET MAKE-VAR)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) *) COMPILER-BUILD C1SYMBOL-FUN NCONC-FILES
            C2BLOCK C1BODY C2BLOCK-LOCAL WT-INLINE-LOC C2DECL-BODY
            C2RETURN-LOCAL)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) T) CMPWARN CMPNOTE WT-INTEGER-LOC
            C1LAMBDA-EXPR ADD-INIT INIT-NAME WT-COMMENT WT-CVAR
            FAST-LINK-PROCLAIMED-TYPE-P C1CASE CMPERR UNWIND-EXIT)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T) *) C2RETURN-FROM C2DM C1DM-VL
            C2APPLY-OPTIMIZE C1DM-V)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) *) C2COMPILER-LET C2IF WT-INLINE C2LABELS
            C2FLET)) 
(PROCLAIM '(FTYPE (FUNCTION (T T *) *) T3DEFUN-AUX)) 
(PROCLAIM '(FTYPE (FUNCTION (STRING *) T) TS)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL T) WT-DATA-FILE WT-FASD-DATA-FILE C1T
            WT-DATA-BEGIN ADD-LOAD-TIME-SHARP-COMMA WT-NEXT-VAR-ARG
            RESET-TOP TAIL-RECURSION-POSSIBLE WT-DATA-END CVS-PUSH
            CCB-VS-PUSH BABOON CLOSE-INLINE-BLOCKS PRINT-CURRENT-FORM
            INC-INLINE-BLOCKS WT-FIRST-VAR-ARG C1NIL VS-PUSH WT-CVARS
            PRINT-COMPILER-INFO GAZONK-NAME INIT-ENV WFS-ERROR
            WT-C-PUSH)) 
(MAPC (LAMBDA (X) (SETF (GET X 'PROCLAIMED-CLOSURE) T))
      '(DISASSEMBLE COMPILE CMP-ANON CMP-TMP-MACRO)) 