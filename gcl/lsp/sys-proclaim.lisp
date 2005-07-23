;; -*-Lisp-*-
(IN-PACKAGE "SYSTEM") 
(PROCLAIM '(FTYPE (FUNCTION (T T) T) OBJLT)) 
 (PROCLAIM
    '(FTYPE (FUNCTION () T) DEFAULT-SYSTEM-BANNER LISP-IMPLEMENTATION-VERSION))
(PROCLAIM
    '(FTYPE (FUNCTION (T) FIXNUM) S-DATA-LENGTH S-DATA-SIZE
            INSTREAM-LINE THE-START)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) FIXNUM) RELATIVE-LINE GET-NODE-INDEX
            THE-END)) 
(PROCLAIM '(FTYPE (FUNCTION (FIXNUM) FIXNUM) DBL-WHAT-FRAME)) 
(PROCLAIM '(FTYPE (FUNCTION (STRING FIXNUM) FIXNUM) ATOI)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T *) *) SORT STABLE-SORT SUBTYPEP TYPEP
            SLOOP::FIND-IN-ORDERED-LIST REDUCE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) *) LIST-MERGE-SORT READ-INSPECT-COMMAND
            SHARP-S-READER)) 
(PROCLAIM '(FTYPE (FUNCTION (T T T T T T T) *) TRACE-CALL)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T *) T) COUNT COUNT-IF INTERNAL-COUNT-IF
            SUBSETP INTERNAL-COUNT-IF-NOT COUNT-IF-NOT
            SLOOP::IN-ARRAY-SLOOP-FOR UNION DELETE DELETE-IF
            VECTOR-PUSH-EXTEND DELETE-IF-NOT EVERY FILL FIND FIND-IF
            FIND-IF-NOT INTERSECTION SLOOP::PARSE-LOOP-MACRO
            SLOOP::LOOP-ADD-BINDING MAKE-SEQUENCE MISMATCH
            NINTERSECTION NOTANY NOTEVERY SET-DIFFERENCE-REV
            NSET-DIFFERENCE NSET-DIFFERENCE-REV NSET-EXCLUSIVE-OR
            NUNION POSITION POSITION-IF POSITION-IF-NOT BIT-AND REMOVE
            BIT-ANDC1 BIT-ANDC2 REMOVE-IF BIT-EQV REMOVE-IF-NOT BIT-IOR
            REPLACE BIT-NAND MAP-INTO BIT-NOR BIT-ORC1 BIT-ORC2 SEARCH
            BIT-XOR BREAK-CALL SET-DIFFERENCE SET-EXCLUSIVE-OR
            INTERNAL-COUNT SOME)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T) T) MAKE-CONSTRUCTOR MAKE-PREDICATE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T) T) MAYBE-BREAK
            SLOOP::FIRST-USE-SLOOP-FOR SLOOP::FIRST-SLOOP-FOR
            SETF-STRUCTURE-ACCESS FIND-LINE-IN-FUN CALL-TEST)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T) T) MAKE-BREAK-POINT DEPOSIT-FIELD
	    WARN-VERSION
            CHECK-TRACE-ARGS DPB APPLY-DISPLAY-FUN SETF-EXPAND-1 DM-VL
            SLOOP::LOOP-PARSE-ADDITIONAL-COLLECTIONS
            TYPECASE-ERROR-STRING SHARP-A-READER KEY-LIST MAKE-T-TYPE
            GET-SLOT-POS CHECK-S-DATA DEFMACRO* SHARP-U-READER)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T *) T) SUBSTITUTE SUBSTITUTE-IF
            SUBSTITUTE-IF-NOT SLOOP::LOOP-DECLARE-BINDING MAP
            NSUBSTITUTE NSUBSTITUTE-IF NSUBSTITUTE-IF-NOT
            COMPLETE-PROP)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T T T T T T T *) T)
            MAKE-ACCESS-FUNCTION)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T T T T T T T T T T *) T)
            DEFINE-STRUCTURE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T T T *) T) PRINT-STACK-FRAME
            SLOOP::DEF-LOOP-INTERNAL MERGE)) 
(PROCLAIM '(FTYPE (FUNCTION (T T T T T T *) T) ENCODE-UNIVERSAL-TIME)) 
(PROCLAIM '(FTYPE (FUNCTION (T T T T T *) T) UNIVERSAL-ERROR-HANDLER)) 
(PROCLAIM '(FTYPE (FUNCTION (FIXNUM FIXNUM) FIXNUM) ROUND-UP)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL *) BREAK-MESSAGE BREAK-CURRENT
            SIMPLE-BACKTRACE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) *) BREAK-NEXT BREAK-LOCAL BREAK-BDS
            IHS-BACKTRACE SHOW-BREAK-VARIABLES DBL-BACKTRACE
            SERROR::INF-SIGNAL LOC INFO-ERROR BREAK-QUIT BREAK-PREVIOUS
            BREAK-VS)) 
(PROCLAIM
    '(FTYPE (FUNCTION NIL T) CLEANUP SETUP-LINEINFO INIT-BREAK-POINTS
            SLOOP::TYPE-ERROR TOP-LEVEL ALL-TRACE-DECLARATIONS
            STEP-READ-LINE BREAK-HELP DBL SLOOP::PARSE-LOOP1
            SET-UP-TOP-LEVEL SLOOP::LOOP-PEEK SLOOP::LOOP-POP
            SLOOP::PARSE-LOOP-FOR INSPECT-INDENT-1 SLOOP::PARSE-LOOP-DO
            SLOOP::PARSE-LOOP-WHEN INSPECT-INDENT
            SLOOP::PARSE-LOOP-COLLECT INSPECT-READ-LINE
            DM-TOO-MANY-ARGUMENTS DM-TOO-FEW-ARGUMENTS
            SLOOP::LOOP-UN-POP SLOOP::PARSE-ONE-WHEN-CLAUSE
            GET-INDEX-NODE ILLEGAL-BOA SET-CURRENT SET-ENV
            DEFAULT-INFO-HOTLIST TEST-ERROR)) 
(PROCLAIM
    '(FTYPE (FUNCTION (*) T) CURRENT-STEP-FUN DESCRIBE-ENVIRONMENT
            Y-OR-N-P YES-OR-NO-P DRIBBLE VECTOR STEP-INTO STEP-NEXT
            SLOOP::PARSE-LOOP-WITH SLOOP::PARSE-LOOP-DECLARE
            SERROR::MAKE-ERROR-CONDITION MAKE-S-DATA DBL-READ BREAK
            BREAK-LOCALS MAKE-INSTREAM)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) *) BREAK-GO INSTREAM-NAME ALOAD DESCRIBE
            INSPECT INSPECT-OBJECT GET-&ENVIRONMENT FIND-DECLARATIONS
            INFO-SUBFILE PRIN1-TO-STRING PRINC-TO-STRING WAITING
            END-WAITING IHS-FNAME)) 
(PROCLAIM '(FTYPE (FUNCTION (T :DYNAMIC-EXTENT *) T) ADJUST-ARRAY)) 
(PROCLAIM '(FTYPE (FUNCTION (T FIXNUM FIXNUM T T) T) QUICK-SORT)) 
(PROCLAIM '(FTYPE (FUNCTION (STRING) STRING) COERCE-SLASH-TERMINATED)) 
(PROCLAIM '(FTYPE (FUNCTION (STRING) T) RE-QUOTE-STRING)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T) T) RESET-SYS-PATHS PRINT-FRS GET-INSTREAM FRS-KIND COSH
            ADD-TO-HOTLIST IHS-NOT-INTERPRETED-ENV BKPT-FUNCTION
            BKPT-FILE-LINE FIX-LOAD-PATH WALK-THROUGH BKPT-FILE
            SERROR::ERROR-FUNCTION BKPT-FORM
            SERROR::ERROR-ERROR-HANDLER-ARGS TANH TRACE-ONE
            TERMINAL-INTERRUPT SLOOP::SLOOP-SLOOP-MACRO UNTRACE-ONE
            DO-F DWIM INSERT-BREAK-POINT SHOW-BREAK-POINT S-DATA-P
            SHORT-NAME VECTOR-POP FREEZE-DEFSTRUCT
            BREAK-BACKWARD-SEARCH-STACK S-DATA-NAME
            BREAK-FORWARD-SEARCH-STACK S-DATA-RAW
            S-DATA-INCLUDED GET-NEXT-VISIBLE-FUN S-DATA-INCLUDES
            S-DATA-STATICP S-DATA-PRINT-FUNCTION
            S-DATA-SLOT-DESCRIPTIONS S-DATA-SLOT-POSITION
            NEXT-STACK-FRAME COMPUTING-ARGS-P CHECK-DECLARATIONS
            S-DATA-HAS-HOLES CHECK-TRACE-SPEC S-DATA-FROZEN
            TRACE-ONE-PREPROCESS S-DATA-DOCUMENTATION
            RESET-TRACE-DECLARATIONS S-DATA-CONSTRUCTORS S-DATA-OFFSET
            SEARCH-STACK S-DATA-NAMED S-DATA-TYPE S-DATA-CONC-NAME
            FIND-ALL-SYMBOLS SLOOP::PARSE-LOOP INSTREAM-P
            SLOOP::SUBSTITUTE-SLOOP-BODY SLOOP::LOOP-LET-BINDINGS ISQRT
            FIND-DOCUMENTATION SLOOP::PARSE-LOOP-INITIALLY
            INSPECT-SYMBOL DM-KEY-NOT-ALLOWED RATIONAL INSPECT-PACKAGE
            INSPECT-CHARACTER INSPECT-NUMBER SERROR:ERROR-NAME
            INSPECT-CONS SERROR:ERROR-STRING LOGNOT INSPECT-STRING
            SERROR:ERROR-CONTINUE-STRING INSPECT-VECTOR
            SERROR:ERROR-FORMAT-ARGS INSPECT-ARRAY
            SLOOP::POINTER-FOR-COLLECT SLOOP::LOOP-COLLECT-KEYWORD-P
            INSPECT-STRUCTURE DM-BAD-KEY INSTREAM-STREAM IDESCRIBE
            INSTREAM-STREAM-NAME SLOOP::PARSE-NO-BODY ASK-FOR-FORM
            TYPECASE-ERROR-STRINGS BOIN-P SLOOP::TRANSLATE-NAME
            SERROR::|WTA-tester|
            SERROR::|SUBSCRIPT-OUT-OF-BOUNDS-tester|
            SERROR::|ERROR-tester| SERROR::|WRONG-TYPE-ARGUMENT-tester|
            COMPILE-FILE-PATHNAME SERROR::|TOO-FEW-ARGUMENTS-tester|
            COMPLEMENT SERROR::|TOO-MANY-ARGUMENTS-tester| PHASE ABS
            CONSTANTLY SERROR::|UNEXPECTED-KEYWORD-tester| ACOS
            SERROR::|INVALID-FORM-tester| ACOSH
            SERROR::|UNBOUND-VARIABLE-tester|
            SERROR::|INVALID-VARIABLE-tester|
            SERROR::|UNDEFINED-FUNCTION-tester|
            NUMBER-OF-DAYS-FROM-1900 SERROR::|INVALID-FUNCTION-tester|
            PROVIDE LEAP-YEAR-P ARRAY-DIMENSIONS ASIN ASINH ATANH
            INFO-GET-TAGS NODES-FROM-INDEX SERROR::ERROR-CONDITION-P
            PRINT-SYMBOL-APROPOS PROCESS-SOME-ARGS INFO-GET-FILE
            SETUP-INFO CLASSP CLASS-OF CLASS-PRECEDENCE-LIST
            BEST-ARRAY-ELEMENT-TYPE SIMPLE-ARRAY-P BYTE-POSITION
            BYTE-SIZE IHS-VISIBLE 
            SIGNUM SLOOP::AVERAGING-SLOOP-MACRO KNOWN-TYPE-P SINH
            SHOW-ENVIRONMENT CIS NODE-OFFSET PRINT-IHS
            SLOOP::REPEAT-SLOOP-MACRO INFO-NODE-FROM-POSITION
            SLOOP::RETURN-SLOOP-MACRO SEQTYPE)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) *) INFO DECODE-UNIVERSAL-TIME PRINT-DOC
            APROPOS-DOC BREAK-FUNCTION STEPPER WRITE-TO-STRING FCEILING
            FFLOOR FROUND NLOAD FTRUNCATE GET-SETF-METHOD
            GET-SETF-METHOD-MULTIPLE-VALUE APROPOS READ-FROM-STRING
            SHOW-INFO)) 
(PROCLAIM '(FTYPE (FUNCTION (STRING *) *) GET-COMMAND-ARG)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T *) T) NORMALIZE-TYPE FIND-CLASS CONCATENATE LIST-MATCHES FILE-SEARCH
            WARN DELETE-DUPLICATES NTH-STACK-FRAME 
            UPGRADED-ARRAY-ELEMENT-TYPE SLOOP::LOOP-ADD-TEMPS
            SLOOP::ADD-FROM-DATA MAKE-ARRAY BIT APROPOS-LIST
            FILE-TO-STRING ARRAY-IN-BOUNDS-P 
            REMOVE-DUPLICATES REQUIRE BIT-NOT SBIT BREAK-LEVEL
            BAD-SEQ-LIMIT INFO-SEARCH)) 
(PROCLAIM '(ftype (function (SEQIND *) SEQIND) ARRAY-ROW-MAJOR-INDEX))
(PROCLAIM
    '(FTYPE (FUNCTION (T T) *) NEWLINE NEW-SEMI-COLON-READER FIND-DOC)) 
(PROCLAIM
    '(FTYPE (FUNCTION (T T) T) SLOOP::IN-TABLE-SLOOP-MAP
            CHECK-SEQ-START-END LIST-DELQ SLOOP::IN-PACKAGE-SLOOP-MAP
            SLOOP::=-SLOOP-FOR ITERATE-OVER-BKPTS SET-DIR
            SLOOP::IN-CAREFULLY-SLOOP-FOR SLOOP::COLLATE-SLOOP-COLLECT
            VECTOR-PUSH SLOOP::IN-FRINGE-SLOOP-MAP GET-LINE-OF-FORM
            DOCUMENTATION SAFE-EVAL SETF-EXPAND SLOOP::DESETQ1
            COMPILER::COMPILER-DEF-HOOK AUTOLOAD AUTOLOAD-MACRO LDB
            LDB-TEST DBL-UP SETF-HELPER LOGANDC1 LOGANDC2 LOGNAND
            LOGNOR LOGORC1 LOGORC2 DM-NTH-CDR SEQUENCE-CURSOR LOGTEST
            INCREMENT-CURSOR DM-V SLOOP::MAKE-VALUE SUBSTRINGP DM-NTH
            SLOOP::PARSE-LOOP-MAP SLOOP::THE-TYPE SLOOP::L-EQUAL
            MASK-FIELD SUPER-GO LEFT-PARENTHESIS-READER
            SLOOP::SUM-SLOOP-COLLECT GET-MATCH QUOTATION-READER
            GET-NODES SLOOP::LOGXOR-SLOOP-COLLECT
            SLOOP::MAXIMIZE-SLOOP-COLLECT SLOOP::MINIMIZE-SLOOP-COLLECT
            OVERWRITE-SLOT-DESCRIPTIONS SLOOP::COUNT-SLOOP-COLLECT
            BREAK-STEP-INTO *BREAK-POINTS* SLOOP::THEREIS-SLOOP-COLLECT
            BREAK-STEP-NEXT SET-BACK SLOOP::ALWAYS-SLOOP-COLLECT
            IN-INTERVAL-P GET-INFO-CHOICES DISPLAY-ENV MATCH-DIMENSIONS
            ADD-FILE DISPLAY-COMPILED-ENV BYTE INFO-AUX
            SLOOP::NEVER-SLOOP-COLLECT PARSE-SLOT-DESCRIPTION
            ALL-MATCHES SUB-INTERVAL-P COERCE)) 