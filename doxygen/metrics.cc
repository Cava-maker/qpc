/** @page metrics Code Metrics 

@code 
                   Standard Code Metrics for QP/C 5.6.1 

           Resource Standard Metrics (TM) for C, C++, C# and Java
                   Version 7.75 - mSquaredTechnologies.com

  License Type: Windows Single User License
  Licensed To : Quantum Leaps, LLC
  License No. : WS2975                          License Date: Dec 15, 2013
  Build Date  : Sep  2 2009                         Run Date: Jan 23, 2016
  (C)1996-2009 M Squared Technologies LLC
  ________________________________________________________________________

                           ~~ Function Metrics ~~
                      ~~ Complexity Detail Analysis ~~

  File: ..\include\qassert.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 43       eLOC 42       lLOC 3        Comment 240      Lines      303
  ________________________________________________________________________
  End of File: ..\include\qassert.h


  File: ..\include\qep.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 148      eLOC 144      lLOC 54       Comment 381      Lines      578
  ________________________________________________________________________
  End of File: ..\include\qep.h


  File: ..\include\qequeue.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 33       eLOC 33       lLOC 15       Comment 180      Lines      233
  ________________________________________________________________________
  End of File: ..\include\qequeue.h


  File: ..\include\qf.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 196      eLOC 196      lLOC 77       Comment 566      Lines      869
  ________________________________________________________________________
  End of File: ..\include\qf.h


  File: ..\include\qk.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 67       eLOC 67       lLOC 17       Comment 112      Lines      197
  ________________________________________________________________________
  End of File: ..\include\qk.h


  File: ..\include\qmpool.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 42       eLOC 42       lLOC 18       Comment 109      Lines      169
  ________________________________________________________________________
  End of File: ..\include\qmpool.h


  File: ..\include\qp_port.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 4        eLOC 4        lLOC 0        Comment 40       Lines       45
  ________________________________________________________________________
  End of File: ..\include\qp_port.h


  File: ..\include\qpc.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 62       eLOC 61       lLOC 8        Comment 120      Lines      213
  ________________________________________________________________________
  End of File: ..\include\qpc.h


  File: ..\include\qpset.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 49       eLOC 49       lLOC 13       Comment 101      Lines      167
  ________________________________________________________________________
  End of File: ..\include\qpset.h


  File: ..\include\qs.h
  ________________________________________________________________________


    NOTICE: The end of the source file has been reached where the
            open brace count { 26 != 24 } close brace count 
            This is an indication of non-compilable code within the source
            file.  RSM processes all source code including code wrapped
            with preprocessor directives.  Accurate metrics requires that
            all code present in this file must be compilable.
                          ~~ Total File Summary ~~

  LOC 452      eLOC 447      lLOC 106      Comment 663      Lines     1140
  ________________________________________________________________________
  End of File: ..\include\qs.h


  File: ..\include\qs_dummy.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 68       eLOC 68       lLOC 0        Comment 43       Lines      119
  ________________________________________________________________________
  End of File: ..\include\qs_dummy.h


  File: ..\include\qv.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 35       eLOC 35       lLOC 3        Comment 80       Lines      119
  ________________________________________________________________________
  End of File: ..\include\qv.h


  File: ..\include\qxk.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 79       eLOC 78       lLOC 28       Comment 111      Lines      199
  ________________________________________________________________________
  End of File: ..\include\qxk.h


  File: ..\include\qxthread.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 36       eLOC 36       lLOC 18       Comment 126      Lines      177
  ________________________________________________________________________
  End of File: ..\include\qxthread.h


  File: ..\source\qf_pkg.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 63       eLOC 63       lLOC 8        Comment 120      Lines      205
  ________________________________________________________________________
  End of File: ..\source\qf_pkg.h


  File: ..\source\qk_pkg.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 4        eLOC 4        lLOC 0        Comment 41       Lines       46
  ________________________________________________________________________
  End of File: ..\source\qk_pkg.h


  File: ..\source\qs_pkg.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 25       eLOC 23       lLOC 6        Comment 59       Lines       93
  ________________________________________________________________________
  End of File: ..\source\qs_pkg.h


  File: ..\source\qxk_pkg.h
  ________________________________________________________________________

                          ~~ Total File Summary ~~

  LOC 20       eLOC 19       lLOC 8        Comment 49       Lines       78
  ________________________________________________________________________
  End of File: ..\source\qxk_pkg.h


  File: ..\source\qep_hsm.c
  ________________________________________________________________________

  Function: QHsm_ctor
  Parameters: (QHsm * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 9        eLOC 7        lLOC 4        Comment 30       Lines       10

  Function: QHsm_init_
  Parameters: (QHsm * const me, QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 3     
      Conditional if / else if: 1     
      Logical and ( && )      : 2     
  Complexity   Param 2       Return 1      Cyclo Vg 7       Total       10
  LOC 50       eLOC 47       lLOC 31       Comment 34       Lines       70

  Function: QHsm_top
  Parameters: (void const * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 18       Lines        5

  Function: QHsm_dispatch_
  Parameters: (QHsm * const me, QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 4     
      Loops for / foreach     : 2     
      Conditional if / else if: 5     
  Complexity   Param 2       Return 1      Cyclo Vg 12      Total       15
  LOC 105      eLOC 94       lLOC 62       Comment 65       Lines      144

  Function: QHsm_tran_
  Parameters: (QHsm * const me, QStateHandler path[QHSM_MAX_NEST_DEPTH_])
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 4     
      Conditional if / else if: 10    
  Complexity   Param 2       Return 1      Cyclo Vg 15      Total       18
  LOC 97       eLOC 76       lLOC 48       Comment 62       Lines      134

  Function: QHsm_isIn
  Parameters: (QHsm * const me, QStateHandler const state)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Conditional if / else if: 1     
      Logical and ( && )      : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 4       Total        7
  LOC 17       eLOC 14       lLOC 9        Comment 23       Lines       24

  Function: QHsm_childState
  Parameters: (QHsm * const me, QStateHandler const parent)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Conditional if / else if: 1     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 20       eLOC 16       lLOC 13       Comment 29       Lines       28

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 345      eLOC 298      lLOC 177      Comment 322      Lines      635
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          7
  Total Function LOC.....:        303  Total Function Pts LOC :        2.7
  Total Function eLOC....:        258  Total Function Pts eLOC:        2.3
  Total Function lLOC....:        170  Total Function Pts lLOC:        1.4
  Total Function Params .:         14  Total Function Return .:          7
  Total Cyclo Complexity :         43  Total Function Complex.:         64
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:        105  Average Function LOC ..:      43.29
  Max Function eLOC .....:         94  Average Function eLOC .:      36.86
  Max Function lLOC .....:         62  Average Function lLOC .:      24.29
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       2.00
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       3.00
  Max Cyclomatic Complex.:         15  Avg Cyclomatic Complex.:       6.14
  Max Total Complexity ..:         18  Avg Total Complexity ..:       9.14
  ________________________________________________________________________
  End of File: ..\source\qep_hsm.c


  File: ..\source\qep_msm.c
  ________________________________________________________________________

  Function: QMsm_ctor
  Parameters: (QMsm * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 9        eLOC 7        lLOC 4        Comment 19       Lines        9

  Function: QMsm_init_
  Parameters: (QMsm * const me, QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Logical and ( && )      : 2     
  Complexity   Param 2       Return 1      Cyclo Vg 4       Total        7
  LOC 23       eLOC 22       lLOC 13       Comment 25       Lines       37

  Function: QMsm_dispatch_
  Parameters: (QMsm * const me, QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 2     
      Conditional if / else if: 12    
  Complexity   Param 2       Return 1      Cyclo Vg 15      Total       18
  LOC 107      eLOC 91       lLOC 56       Comment 70       Lines      148

  Function: QMsm_execTatbl_
  Parameters: (QMsm * const me, QMTranActTable const *tatbl)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 6     
  Complexity   Param 2       Return 1      Cyclo Vg 8       Total       11
  LOC 53       eLOC 43       lLOC 21       Comment 33       Lines       64

  Function: QMsm_exitToTranSource_
  Parameters: (QMsm * const me, QMState const *s, QMState const * const ts
              )
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Conditional if / else if: 3     
  Complexity   Param 3       Return 1      Cyclo Vg 5       Total        9
  LOC 24       eLOC 16       lLOC 7        Comment 21       Lines       32

  Function: QMsm_enterHistory_
  Parameters: (QMsm * const me, QMState const * const hist)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Loops for / foreach     : 1     
      Conditional if / else if: 2     
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 37       eLOC 31       lLOC 21       Comment 23       Lines       45

  Function: QMsm_isInState
  Parameters: (QMsm * const me, QMState const * const state)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 1     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 12       eLOC 9        lLOC 7        Comment 17       Lines       15

  Function: QMsm_childStateObj
  Parameters: (QMsm const * const me, QMState const * const parent)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 1     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 20       eLOC 14       lLOC 10       Comment 19       Lines       26

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 312      eLOC 258      lLOC 144      Comment 284      Lines      574
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          8
  Total Function LOC.....:        285  Total Function Pts LOC :        2.4
  Total Function eLOC....:        233  Total Function Pts eLOC:        2.0
  Total Function lLOC....:        139  Total Function Pts lLOC:        1.1
  Total Function Params .:         17  Total Function Return .:          8
  Total Cyclo Complexity :         44  Total Function Complex.:         69
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:        107  Average Function LOC ..:      35.63
  Max Function eLOC .....:         91  Average Function eLOC .:      29.13
  Max Function lLOC .....:         56  Average Function lLOC .:      17.38
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       2.13
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       3.13
  Max Cyclomatic Complex.:         15  Avg Cyclomatic Complex.:       5.50
  Max Total Complexity ..:         18  Avg Total Complexity ..:       8.63
  ________________________________________________________________________
  End of File: ..\source\qep_msm.c


  File: ..\source\qf_act.c
  ________________________________________________________________________

  Function: QF_add_
  Parameters: (QMActive * const a)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 15       eLOC 14       lLOC 8        Comment 23       Lines       25

  Function: QF_remove_
  Parameters: (QMActive const * const a)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 15       eLOC 14       lLOC 8        Comment 22       Lines       24

  Function: QF_bzero
  Parameters: (void * const start, uint_fast16_t len)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 8        eLOC 6        lLOC 4        Comment 14       Lines        8

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 175      eLOC 167      lLOC 25       Comment 122      Lines      298
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          3
  Total Function LOC.....:         38  Total Function Pts LOC :        1.4
  Total Function eLOC....:         34  Total Function Pts eLOC:        1.3
  Total Function lLOC....:         20  Total Function Pts lLOC:        0.2
  Total Function Params .:          4  Total Function Return .:          3
  Total Cyclo Complexity :          8  Total Function Complex.:         15
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         15  Average Function LOC ..:      12.67
  Max Function eLOC .....:         14  Average Function eLOC .:      11.33
  Max Function lLOC .....:          8  Average Function lLOC .:       6.67
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       1.33
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       2.33
  Max Cyclomatic Complex.:          3  Avg Cyclomatic Complex.:       2.67
  Max Total Complexity ..:          5  Avg Total Complexity ..:       5.00
  ________________________________________________________________________
  End of File: ..\source\qf_act.c


  File: ..\source\qf_actq.c
  ________________________________________________________________________

  Function: QActive_post_
  Parameters: (QMActive * const me, QEvt const * const e, uint_fast16_t co
              nst margin)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 5     
  Complexity   Param 3       Return 1      Cyclo Vg 6       Total       10
  LOC 55       eLOC 46       lLOC 34       Comment 79       Lines       74

  Function: QActive_postLIFO_
  Parameters: (QMActive * const me, QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 37       eLOC 31       lLOC 22       Comment 36       Lines       50

  Function: QActive_get_
  Parameters: (QMActive * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 37       eLOC 33       lLOC 24       Comment 32       Lines       48

  Function: QF_getQueueMin
  Parameters: (uint_fast8_t const prio)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 18       Lines       13

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 156      eLOC 136      lLOC 86       Comment 216      Lines      338
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          4
  Total Function LOC.....:        139  Total Function Pts LOC :        1.2
  Total Function eLOC....:        119  Total Function Pts eLOC:        1.1
  Total Function lLOC....:         86  Total Function Pts lLOC:        0.7
  Total Function Params .:          7  Total Function Return .:          4
  Total Cyclo Complexity :         16  Total Function Complex.:         27
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         55  Average Function LOC ..:      34.75
  Max Function eLOC .....:         46  Average Function eLOC .:      29.75
  Max Function lLOC .....:         34  Average Function lLOC .:      21.50
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       1.75
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       2.75
  Max Cyclomatic Complex.:          6  Avg Cyclomatic Complex.:       4.00
  Max Total Complexity ..:         10  Avg Total Complexity ..:       6.75
  ________________________________________________________________________
  End of File: ..\source\qf_actq.c


  File: ..\source\qf_defer.c
  ________________________________________________________________________

  Function: QActive_defer
  Parameters: (QMActive * const me, QEQueue * const eq, QEvt const * const
               e)
  Complexity   Param 3       Return 1      Cyclo Vg 1       Total        5
  LOC 4        eLOC 2        lLOC 2        Comment 24       Lines        4

  Function: QActive_recall
  Parameters: (QMActive * const me, QEQueue * const eq)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 19       eLOC 15       lLOC 10       Comment 33       Lines       36

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 30       eLOC 24       lLOC 12       Comment 100      Lines      132
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          2
  Total Function LOC.....:         23  Total Function Pts LOC :        0.2
  Total Function eLOC....:         17  Total Function Pts eLOC:        0.2
  Total Function lLOC....:         12  Total Function Pts lLOC:        0.1
  Total Function Params .:          5  Total Function Return .:          2
  Total Cyclo Complexity :          4  Total Function Complex.:         11
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         19  Average Function LOC ..:      11.50
  Max Function eLOC .....:         15  Average Function eLOC .:       8.50
  Max Function lLOC .....:         10  Average Function lLOC .:       6.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       2.50
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       3.50
  Max Cyclomatic Complex.:          3  Avg Cyclomatic Complex.:       2.00
  Max Total Complexity ..:          6  Avg Total Complexity ..:       5.50
  ________________________________________________________________________
  End of File: ..\source\qf_defer.c


  File: ..\source\qf_dyn.c
  ________________________________________________________________________

  Function: QEvt_ctor
  Parameters: (QEvt * const me, enum_t const sig)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 9        Lines        6

  Function: QF_poolInit
  Parameters: (void * const poolSto, uint_fast32_t const poolSize, uint_fa
              st16_t const evtSize)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical or ( || )       : 1     
  Complexity   Param 3       Return 1      Cyclo Vg 2       Total        6
  LOC 9        eLOC 7        lLOC 4        Comment 38       Lines       13

  Function: QF_newX_
  Parameters: (uint_fast16_t const evtSize, uint_fast16_t const margin, en
              um_t const sig)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 2     
  Complexity   Param 3       Return 1      Cyclo Vg 4       Total        8
  LOC 26       eLOC 20       lLOC 14       Comment 35       Lines       35

  Function: QF_gc
  Parameters: (QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 26       eLOC 22       lLOC 13       Comment 35       Lines       39

  Function: QF_newRef_
  Parameters: (QEvt const * const e, QEvt const * const evtRef)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 7        eLOC 5        lLOC 3        Comment 16       Lines       11

  Function: QF_poolGetMaxBlockSize
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 5        Lines        3

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 94       eLOC 78       lLOC 40       Comment 191      Lines      283
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          6
  Total Function LOC.....:         76  Total Function Pts LOC :        0.7
  Total Function eLOC....:         60  Total Function Pts eLOC:        0.6
  Total Function lLOC....:         38  Total Function Pts lLOC:        0.3
  Total Function Params .:         11  Total Function Return .:          6
  Total Cyclo Complexity :         13  Total Function Complex.:         30
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         26  Average Function LOC ..:      12.67
  Max Function eLOC .....:         22  Average Function eLOC .:      10.00
  Max Function lLOC .....:         14  Average Function lLOC .:       6.33
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       1.83
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       2.83
  Max Cyclomatic Complex.:          4  Avg Cyclomatic Complex.:       2.17
  Max Total Complexity ..:          8  Avg Total Complexity ..:       5.00
  ________________________________________________________________________
  End of File: ..\source\qf_dyn.c


  File: ..\source\qf_mem.c
  ________________________________________________________________________

  Function: QMPool_init
  Parameters: (QMPool * const me, void * const poolSto, uint_fast32_t pool
              Size, uint_fast16_t blockSize)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 2     
      Logical and ( && )      : 2     
  Complexity   Param 4       Return 1      Cyclo Vg 5       Total       10
  LOC 36       eLOC 32       lLOC 24       Comment 58       Lines       52

  Function: QMPool_put
  Parameters: (QMPool * const me, void *b)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 15       eLOC 14       lLOC 9        Comment 29       Lines       22

  Function: QMPool_get
  Parameters: (QMPool * const me, uint_fast16_t const margin)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 3     
  Complexity   Param 2       Return 1      Cyclo Vg 4       Total        7
  LOC 41       eLOC 35       lLOC 23       Comment 54       Lines       65

  Function: QF_getPoolMin
  Parameters: (uint_fast8_t const poolId)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 13       Lines       14

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 114      eLOC 102      lLOC 62       Comment 201      Lines      301
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          4
  Total Function LOC.....:        102  Total Function Pts LOC :        0.9
  Total Function eLOC....:         90  Total Function Pts eLOC:        0.8
  Total Function lLOC....:         62  Total Function Pts lLOC:        0.5
  Total Function Params .:          9  Total Function Return .:          4
  Total Cyclo Complexity :         13  Total Function Complex.:         26
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         41  Average Function LOC ..:      25.50
  Max Function eLOC .....:         35  Average Function eLOC .:      22.50
  Max Function lLOC .....:         24  Average Function lLOC .:      15.50
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          4  Avg Function Parameters:       2.25
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          5  Avg Interface Complex. :       3.25
  Max Cyclomatic Complex.:          5  Avg Cyclomatic Complex.:       3.25
  Max Total Complexity ..:         10  Avg Total Complexity ..:       6.50
  ________________________________________________________________________
  End of File: ..\source\qf_mem.c


  File: ..\source\qf_ps.c
  ________________________________________________________________________

  Function: QF_psInit
  Parameters: (QSubscrList * const subscrSto, enum_t const maxSignal)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 7        eLOC 6        lLOC 3        Comment 32       Lines       12

  Function: QF_publish_
  Parameters: (QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 3     
      Conditional if / else if: 1     
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 43       eLOC 34       lLOC 24       Comment 39       Lines       70

  Function: QActive_subscribe
  Parameters: (QActive const * const me, enum_t const sig)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 4     
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 17       eLOC 16       lLOC 9        Comment 22       Lines       22

  Function: QActive_unsubscribe
  Parameters: (QActive const * const me, enum_t const sig)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 4     
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 17       eLOC 16       lLOC 9        Comment 29       Lines       25

  Function: QActive_unsubscribeAll
  Parameters: (QActive const * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 1     
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 25       eLOC 21       lLOC 12       Comment 25       Lines       30

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 126      eLOC 110      lLOC 59       Comment 195      Lines      329
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          5
  Total Function LOC.....:        109  Total Function Pts LOC :        1.0
  Total Function eLOC....:         93  Total Function Pts eLOC:        0.9
  Total Function lLOC....:         57  Total Function Pts lLOC:        0.5
  Total Function Params .:          8  Total Function Return .:          5
  Total Cyclo Complexity :         21  Total Function Complex.:         34
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         43  Average Function LOC ..:      21.80
  Max Function eLOC .....:         34  Average Function eLOC .:      18.60
  Max Function lLOC .....:         24  Average Function lLOC .:      11.40
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       1.60
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       2.60
  Max Cyclomatic Complex.:          5  Avg Cyclomatic Complex.:       4.20
  Max Total Complexity ..:          8  Avg Total Complexity ..:       6.80
  ________________________________________________________________________
  End of File: ..\source\qf_ps.c


  File: ..\source\qf_qact.c
  ________________________________________________________________________

  Function: QActive_ctor
  Parameters: (QActive * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 12       eLOC 10       lLOC 4        Comment 19       Lines       17

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 14       eLOC 12       lLOC 4        Comment 69       Lines       81
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          1
  Total Function LOC.....:         12  Total Function Pts LOC :        0.1
  Total Function eLOC....:         10  Total Function Pts eLOC:        0.1
  Total Function lLOC....:          4  Total Function Pts lLOC:        0.0
  Total Function Params .:          2  Total Function Return .:          1
  Total Cyclo Complexity :          1  Total Function Complex.:          4
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         12  Average Function LOC ..:      12.00
  Max Function eLOC .....:         10  Average Function eLOC .:      10.00
  Max Function lLOC .....:          4  Average Function lLOC .:       4.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       2.00
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       3.00
  Max Cyclomatic Complex.:          1  Avg Cyclomatic Complex.:       1.00
  Max Total Complexity ..:          4  Avg Total Complexity ..:       4.00
  ________________________________________________________________________
  End of File: ..\source\qf_qact.c


  File: ..\source\qf_qeq.c
  ________________________________________________________________________

  Function: QEQueue_init
  Parameters: (QEQueue * const me, QEvt const *qSto[], uint_fast16_t const
               qLen)
  Complexity   Param 3       Return 1      Cyclo Vg 1       Total        5
  LOC 14       eLOC 12       lLOC 9        Comment 22       Lines       16

  Function: QEQueue_post
  Parameters: (QEQueue * const me, QEvt const * const e, uint_fast16_t con
              st margin)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 5     
  Complexity   Param 3       Return 1      Cyclo Vg 6       Total       10
  LOC 51       eLOC 42       lLOC 30       Comment 55       Lines       72

  Function: QEQueue_postLIFO
  Parameters: (QEQueue * const me, QEvt const * const e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 34       eLOC 29       lLOC 21       Comment 41       Lines       44

  Function: QEQueue_get
  Parameters: (QEQueue * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 3     
  Complexity   Param 1       Return 1      Cyclo Vg 4       Total        6
  LOC 36       eLOC 31       lLOC 21       Comment 35       Lines       46

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 149      eLOC 128      lLOC 81       Comment 204      Lines      317
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          4
  Total Function LOC.....:        135  Total Function Pts LOC :        1.2
  Total Function eLOC....:        114  Total Function Pts eLOC:        1.0
  Total Function lLOC....:         81  Total Function Pts lLOC:        0.6
  Total Function Params .:          9  Total Function Return .:          4
  Total Cyclo Complexity :         16  Total Function Complex.:         29
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         51  Average Function LOC ..:      33.75
  Max Function eLOC .....:         42  Average Function eLOC .:      28.50
  Max Function lLOC .....:         30  Average Function lLOC .:      20.25
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       2.25
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       3.25
  Max Cyclomatic Complex.:          6  Avg Cyclomatic Complex.:       4.00
  Max Total Complexity ..:         10  Avg Total Complexity ..:       7.25
  ________________________________________________________________________
  End of File: ..\source\qf_qeq.c


  File: ..\source\qf_qmact.c
  ________________________________________________________________________

  Function: QMActive_ctor
  Parameters: (QMActive * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 12       eLOC 10       lLOC 4        Comment 28       Lines       28

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 15       eLOC 13       lLOC 4        Comment 79       Lines       94
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          1
  Total Function LOC.....:         12  Total Function Pts LOC :        0.1
  Total Function eLOC....:         10  Total Function Pts eLOC:        0.1
  Total Function lLOC....:          4  Total Function Pts lLOC:        0.0
  Total Function Params .:          2  Total Function Return .:          1
  Total Cyclo Complexity :          1  Total Function Complex.:          4
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         12  Average Function LOC ..:      12.00
  Max Function eLOC .....:         10  Average Function eLOC .:      10.00
  Max Function lLOC .....:          4  Average Function lLOC .:       4.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       2.00
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       3.00
  Max Cyclomatic Complex.:          1  Avg Cyclomatic Complex.:       1.00
  Max Total Complexity ..:          4  Avg Total Complexity ..:       4.00
  ________________________________________________________________________
  End of File: ..\source\qf_qmact.c


  File: ..\source\qf_time.c
  ________________________________________________________________________

  Function: QF_tickX_
  Parameters: (uint_fast8_t const tickRate)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 5     
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 65       eLOC 53       lLOC 36       Comment 53       Lines       93

  Function: QF_noTimeEvtsActiveX
  Parameters: (uint_fast8_t const tickRate)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 14       eLOC 10       lLOC 6        Comment 13       Lines       17

  Function: QTimeEvt_ctorX
  Parameters: (QTimeEvt * const me, QMActive * const act, enum_t const sig
              , uint_fast8_t tickRate)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 1     
  Complexity   Param 4       Return 1      Cyclo Vg 2       Total        7
  LOC 11       eLOC 9        lLOC 8        Comment 32       Lines       31

  Function: QTimeEvt_armX
  Parameters: (QTimeEvt * const me, QTimeEvtCtr const nTicks, QTimeEvtCtr 
              const interval)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
      Logical and ( && )      : 4     
  Complexity   Param 3       Return 1      Cyclo Vg 6       Total       10
  LOC 28       eLOC 25       lLOC 16       Comment 49       Lines       50

  Function: QTimeEvt_disarm
  Parameters: (QTimeEvt * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 29       eLOC 26       lLOC 17       Comment 30       Lines       37

  Function: QTimeEvt_rearm
  Parameters: (QTimeEvt * const me, QTimeEvtCtr const nTicks)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
      Logical and ( && )      : 3     
  Complexity   Param 2       Return 1      Cyclo Vg 6       Total        9
  LOC 33       eLOC 29       lLOC 18       Comment 47       Lines       59

  Function: QTimeEvt_ctr
  Parameters: (QTimeEvt const * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 16       eLOC 15       lLOC 11       Comment 20       Lines       19

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 216      eLOC 187      lLOC 113      Comment 304      Lines      512
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          7
  Total Function LOC.....:        196  Total Function Pts LOC :        1.7
  Total Function eLOC....:        167  Total Function Pts eLOC:        1.5
  Total Function lLOC....:        112  Total Function Pts lLOC:        0.9
  Total Function Params .:         13  Total Function Return .:          7
  Total Cyclo Complexity :         27  Total Function Complex.:         47
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         65  Average Function LOC ..:      28.00
  Max Function eLOC .....:         53  Average Function eLOC .:      23.86
  Max Function lLOC .....:         36  Average Function lLOC .:      16.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          4  Avg Function Parameters:       1.86
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          5  Avg Interface Complex. :       2.86
  Max Cyclomatic Complex.:          7  Avg Cyclomatic Complex.:       3.86
  Max Total Complexity ..:         10  Avg Total Complexity ..:       6.71
  ________________________________________________________________________
  End of File: ..\source\qf_time.c


  File: ..\source\qk.c
  ________________________________________________________________________

  Function: QF_init
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 13       eLOC 12       lLOC 9        Comment 19       Lines       21

  Function: QF_stop
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 14       Lines        4

  Function: initial_events
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 8        eLOC 6        lLOC 4        Comment 6        Lines       11

  Function: QF_run
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 12       eLOC 10       lLOC 7        Comment 21       Lines       15

  Function: QActive_start_
  Parameters: (QMActive * const me, uint_fast8_t prio, QEvt const *qSto[],
               uint_fast16_t qLen, void *stkSto, uint_fast16_t stkSize, QE
              vt const *ie)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 2     
  Complexity   Param 7       Return 1      Cyclo Vg 3       Total       11
  LOC 11       eLOC 9        lLOC 8        Comment 30       Lines       15

  Function: QActive_stop
  Parameters: (QMActive *me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 3        eLOC 2        lLOC 1        Comment 13       Lines        3

  Function: QK_schedPrio_
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 8        eLOC 6        lLOC 4        Comment 18       Lines       12

  Function: QK_sched_
  Parameters: (uint_fast8_t p)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Conditional if / else if: 3     
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 48       eLOC 43       lLOC 23       Comment 44       Lines       72

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 131      eLOC 115      lLOC 62       Comment 217      Lines      333
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          8
  Total Function LOC.....:        106  Total Function Pts LOC :        1.0
  Total Function eLOC....:         90  Total Function Pts eLOC:        0.9
  Total Function lLOC....:         57  Total Function Pts lLOC:        0.5
  Total Function Params .:          9  Total Function Return .:          8
  Total Cyclo Complexity :         17  Total Function Complex.:         34
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         48  Average Function LOC ..:      13.25
  Max Function eLOC .....:         43  Average Function eLOC .:      11.25
  Max Function lLOC .....:         23  Average Function lLOC .:       7.13
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          7  Avg Function Parameters:       1.13
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          8  Avg Interface Complex. :       2.13
  Max Cyclomatic Complex.:          5  Avg Cyclomatic Complex.:       2.13
  Max Total Complexity ..:         11  Avg Total Complexity ..:       4.25
  ________________________________________________________________________
  End of File: ..\source\qk.c


  File: ..\source\qk_mutex.c
  ________________________________________________________________________

  Function: QMutex_init
  Parameters: (QMutex * const me, uint_fast8_t prioCeiling)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 2     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 11       eLOC 10       lLOC 6        Comment 20       Lines       20

  Function: QMutex_lock
  Parameters: (QMutex * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 33       eLOC 27       lLOC 15       Comment 29       Lines       50

  Function: QMutex_unlock
  Parameters: (QMutex * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 34       eLOC 28       lLOC 16       Comment 27       Lines       51

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 91       eLOC 78       lLOC 37       Comment 125      Lines      222
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          3
  Total Function LOC.....:         78  Total Function Pts LOC :        0.7
  Total Function eLOC....:         65  Total Function Pts eLOC:        0.6
  Total Function lLOC....:         37  Total Function Pts lLOC:        0.3
  Total Function Params .:          4  Total Function Return .:          3
  Total Cyclo Complexity :         17  Total Function Complex.:         24
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         34  Average Function LOC ..:      26.00
  Max Function eLOC .....:         28  Average Function eLOC .:      21.67
  Max Function lLOC .....:         16  Average Function lLOC .:      12.33
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       1.33
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       2.33
  Max Cyclomatic Complex.:          7  Avg Cyclomatic Complex.:       5.67
  Max Total Complexity ..:          9  Avg Total Complexity ..:       8.00
  ________________________________________________________________________
  End of File: ..\source\qk_mutex.c


  File: ..\source\qs.c
  ________________________________________________________________________

  Function: QS_initBuf
  Parameters: (uint8_t sto[], uint_fast16_t stoSize)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 21       eLOC 20       lLOC 19       Comment 30       Lines       35

  Function: QS_filterOn
  Parameters: (uint_fast8_t rec)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 1     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 17       eLOC 12       lLOC 6        Comment 16       Lines       19

  Function: QS_filterOff
  Parameters: (uint_fast8_t rec)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
      Conditional if / else if: 1     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 20       eLOC 15       lLOC 10       Comment 16       Lines       25

  Function: QS_beginRec
  Parameters: (uint_fast8_t rec)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 14       eLOC 13       lLOC 10       Comment 18       Lines       18

  Function: QS_endRec
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
      Logical and ( && )      : 1     
  Complexity   Param 0       Return 1      Cyclo Vg 4       Total        5
  LOC 22       eLOC 18       lLOC 10       Comment 17       Lines       28

  Function: QS_target_info_
  Parameters: (uint8_t isReset)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Selection case          : 12    
      Conditional if / else if: 2     
  Complexity   Param 1       Return 1      Cyclo Vg 15      Total       17
  LOC 97       eLOC 90       lLOC 48       Comment 10       Lines      111

  Function: QS_u8
  Parameters: (uint8_t format, uint8_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 11       eLOC 10       lLOC 7        Comment 13       Lines       14

  Function: QS_u16
  Parameters: (uint8_t format, uint16_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 15       eLOC 14       lLOC 10       Comment 13       Lines       20

  Function: QS_u32
  Parameters: (uint8_t format, uint32_t d)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 16       eLOC 14       lLOC 11       Comment 14       Lines       20

  Function: QS_u8_
  Parameters: (uint8_t d)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 10       eLOC 9        lLOC 7        Comment 12       Lines       12

  Function: QS_u8u8_
  Parameters: (uint8_t d1, uint8_t d2)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 11       eLOC 10       lLOC 7        Comment 11       Lines       13

  Function: QS_u16_
  Parameters: (uint16_t d)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 14       eLOC 13       lLOC 10       Comment 12       Lines       18

  Function: QS_u32_
  Parameters: (uint32_t d)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 15       eLOC 13       lLOC 11       Comment 11       Lines       17

  Function: QS_str_
  Parameters: (char_t const *s)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 20       eLOC 18       lLOC 14       Comment 16       Lines       22

  Function: QS_getByte
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 0       Return 1      Cyclo Vg 3       Total        4
  LOC 18       eLOC 14       lLOC 10       Comment 20       Lines       18

  Function: QS_getBlock
  Parameters: (uint16_t *pNbytes)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 28       eLOC 22       lLOC 16       Comment 32       Lines       32

  Function: QS_sig_dict
  Parameters: (enum_t const sig, void const * const obj, char_t const *nam
              e)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 3       Return 1      Cyclo Vg 2       Total        6
  LOC 14       eLOC 11       lLOC 9        Comment 3        Lines       15

  Function: QS_obj_dict
  Parameters: (void const * const obj, char_t const *name)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 13       eLOC 10       lLOC 8        Comment 3        Lines       14

  Function: QS_fun_dict
  Parameters: (void (* const fun)(void), char_t const *name)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 13       eLOC 11       lLOC 8        Comment 3        Lines       14

  Function: QS_usr_dict
  Parameters: (enum_t const rec, char_t const * const name)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 10       eLOC 8        lLOC 7        Comment 3        Lines       11

  Function: QS_mem
  Parameters: (uint8_t const *blk, uint8_t size)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 18       eLOC 16       lLOC 11       Comment 11       Lines       23

  Function: QS_str
  Parameters: (char_t const *s)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 21       eLOC 19       lLOC 14       Comment 16       Lines       24

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 451      eLOC 393      lLOC 266      Comment 345      Lines      760
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:         22
  Total Function LOC.....:        438  Total Function Pts LOC :        3.5
  Total Function eLOC....:        380  Total Function Pts eLOC:        3.1
  Total Function lLOC....:        263  Total Function Pts lLOC:        2.1
  Total Function Params .:         31  Total Function Return .:         22
  Total Cyclo Complexity :         57  Total Function Complex.:        110
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         97  Average Function LOC ..:      19.91
  Max Function eLOC .....:         90  Average Function eLOC .:      17.27
  Max Function lLOC .....:         48  Average Function lLOC .:      11.95
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       1.41
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       2.41
  Max Cyclomatic Complex.:         15  Avg Cyclomatic Complex.:       2.59
  Max Total Complexity ..:         17  Avg Total Complexity ..:       5.00
  ________________________________________________________________________
  End of File: ..\source\qs.c


  File: ..\source\qs_64bit.c
  ________________________________________________________________________

  Function: QS_u64_
  Parameters: (uint64_t d)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 15       eLOC 13       lLOC 11       Comment 7        Lines       17

  Function: QS_u64
  Parameters: (uint8_t format, uint64_t d)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 16       eLOC 14       lLOC 11       Comment 9        Lines       20

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 35       eLOC 31       lLOC 22       Comment 57       Lines       94
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          2
  Total Function LOC.....:         31  Total Function Pts LOC :        0.3
  Total Function eLOC....:         27  Total Function Pts eLOC:        0.2
  Total Function lLOC....:         22  Total Function Pts lLOC:        0.2
  Total Function Params .:          3  Total Function Return .:          2
  Total Cyclo Complexity :          4  Total Function Complex.:          9
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         16  Average Function LOC ..:      15.50
  Max Function eLOC .....:         14  Average Function eLOC .:      13.50
  Max Function lLOC .....:         11  Average Function lLOC .:      11.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       1.50
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       2.50
  Max Cyclomatic Complex.:          2  Avg Cyclomatic Complex.:       2.00
  Max Total Complexity ..:          5  Avg Total Complexity ..:       4.50
  ________________________________________________________________________
  End of File: ..\source\qs_64bit.c


  File: ..\source\qs_fp.c
  ________________________________________________________________________

  Function: QS_f32
  Parameters: (uint8_t format, float32_t f)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 21       eLOC 19       lLOC 15       Comment 16       Lines       26

  Function: QS_f64
  Parameters: (uint8_t format, float64_t d)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 2     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 29       eLOC 26       lLOC 20       Comment 14       Lines       36

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 52       eLOC 47       lLOC 35       Comment 70       Lines      116
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          2
  Total Function LOC.....:         50  Total Function Pts LOC :        0.4
  Total Function eLOC....:         45  Total Function Pts eLOC:        0.4
  Total Function lLOC....:         35  Total Function Pts lLOC:        0.3
  Total Function Params .:          4  Total Function Return .:          2
  Total Cyclo Complexity :          5  Total Function Complex.:         11
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         29  Average Function LOC ..:      25.00
  Max Function eLOC .....:         26  Average Function eLOC .:      22.50
  Max Function lLOC .....:         20  Average Function lLOC .:      17.50
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       2.00
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       3.00
  Max Cyclomatic Complex.:          3  Avg Cyclomatic Complex.:       2.50
  Max Total Complexity ..:          6  Avg Total Complexity ..:       5.50
  ________________________________________________________________________
  End of File: ..\source\qs_fp.c


  File: ..\source\qs_rx.c
  ________________________________________________________________________

  Function: QS_rxInitBuf
  Parameters: (uint8_t sto[], uint16_t stoSize)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 18       eLOC 17       lLOC 15       Comment 19       Lines       21

  Function: QS_rxGetNfree
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 0       Return 1      Cyclo Vg 3       Total        4
  LOC 14       eLOC 10       lLOC 5        Comment 9        Lines       14

  Function: QS_rxParse
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops while / do        : 1     
      Conditional if / else if: 5     
  Complexity   Param 0       Return 1      Cyclo Vg 7       Total        8
  LOC 36       eLOC 26       lLOC 16       Comment 5        Lines       41

  Function: QS_rxParseData_
  Parameters: (uint8_t b)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Selection case          : 40    
      Conditional if / else if: 16    
  Complexity   Param 1       Return 1      Cyclo Vg 57      Total       59
  LOC 254      eLOC 197      lLOC 125      Comment 18       Lines      265

  Function: QS_rxHandleGoodFrame_
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 3     
      Selection case          : 17    
      Conditional if / else if: 4     
  Complexity   Param 0       Return 1      Cyclo Vg 25      Total       26
  LOC 127      eLOC 103      lLOC 69       Comment 15       Lines      137

  Function: QS_rxHandleBadFrame_
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Selection case          : 1     
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 12       eLOC 8        lLOC 4        Comment 1        Lines       12

  Function: QS_rxReportSuccess_
  Parameters: (enum QSpyRxRecords recId)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 7        eLOC 6        lLOC 2        Comment 3        Lines        7

  Function: QS_rxReportError_
  Parameters: (uint8_t stateId)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 7        eLOC 6        lLOC 2        Comment 3        Lines        7

  Function: QS_rxAddr_
  Parameters: (uint8_t b, QSAddr *addr, uint8_t *idx)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Inlined if-else ( ? : ) : 1     
  Complexity   Param 3       Return 1      Cyclo Vg 2       Total        6
  LOC 5        eLOC 4        lLOC 3        Comment 1        Lines        5

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 590      eLOC 486      lLOC 299      Comment 131      Lines      731
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          9
  Total Function LOC.....:        480  Total Function Pts LOC :        4.6
  Total Function eLOC....:        377  Total Function Pts eLOC:        3.8
  Total Function lLOC....:        241  Total Function Pts lLOC:        2.3
  Total Function Params .:          8  Total Function Return .:          9
  Total Cyclo Complexity :         99  Total Function Complex.:        116
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:        254  Average Function LOC ..:      53.33
  Max Function eLOC .....:        197  Average Function eLOC .:      41.89
  Max Function lLOC .....:        125  Average Function lLOC .:      26.78
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       0.89
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       1.89
  Max Cyclomatic Complex.:         57  Avg Cyclomatic Complex.:      11.00
  Max Total Complexity ..:         59  Avg Total Complexity ..:      12.89
  ________________________________________________________________________
  End of File: ..\source\qs_rx.c


  File: ..\source\qv.c
  ________________________________________________________________________

  Function: QF_init
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 8        eLOC 7        lLOC 6        Comment 15       Lines       13

  Function: QF_stop
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 14       Lines        4


    NOTICE: The end of the source file has been reached where the
            open brace count { 10 != 9 } close brace count 
            This is an indication of non-compilable code within the source
            file.  RSM processes all source code including code wrapped
            with preprocessor directives.  Accurate metrics requires that
            all code present in this file must be compilable.

    NOTICE: The end of the source file has been reached where the
            local function scope remains open.  The last known function
            will be emitted but metrics cannot be generated in this
            condition.
  Function: QF_run
  Parameters: (void)
  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 94       eLOC 84       lLOC 39       Comment 169      Lines      255
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          3
  Total Function LOC.....:         11  Total Function Pts LOC :        0.7
  Total Function eLOC....:          9  Total Function Pts eLOC:        0.7
  Total Function lLOC....:          7  Total Function Pts lLOC:        0.3
  Total Function Params .:          0  Total Function Return .:          2
  Total Cyclo Complexity :          2  Total Function Complex.:          4
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:          8  Average Function LOC ..:       3.67
  Max Function eLOC .....:          7  Average Function eLOC .:       3.00
  Max Function lLOC .....:          6  Average Function lLOC .:       2.33
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          0  Avg Function Parameters:       0.00
  Max Function Returns ..:          1  Avg Function Returns ..:       0.67
  Max Interface Complex. :          1  Avg Interface Complex. :       0.67
  Max Cyclomatic Complex.:          1  Avg Cyclomatic Complex.:       0.67
  Max Total Complexity ..:          2  Avg Total Complexity ..:       1.33
  ________________________________________________________________________
  End of File: ..\source\qv.c


  File: ..\source\qxk.c
  ________________________________________________________________________

  Function: thread_ao
  Parameters: (void *par)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 7        eLOC 5        lLOC 4        Comment 5        Lines        8

  Function: thread_idle
  Parameters: (void *par)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Loops for / foreach     : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 9        eLOC 7        lLOC 6        Comment 3        Lines       11

  Function: QF_init
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 8        eLOC 7        lLOC 6        Comment 15       Lines       13

  Function: QF_stop
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 14       Lines        4

  Function: QF_run
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 11       eLOC 10       lLOC 9        Comment 21       Lines       20

  Function: QActive_start_
  Parameters: (QMActive * const me, uint_fast8_t prio, QEvt const *qSto[],
               uint_fast16_t qLen, void *stkSto, uint_fast16_t stkSize, QE
              vt const *ie)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
      Logical and ( && )      : 5     
  Complexity   Param 7       Return 1      Cyclo Vg 7       Total       15
  LOC 22       eLOC 19       lLOC 12       Comment 30       Lines       32

  Function: QActive_stop
  Parameters: (QMActive *me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 14       Lines       14

  Function: QXK_init
  Parameters: (void *idleStkSto, uint_fast16_t idleStkSize)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 14       Lines       13

  Function: QXK_sched_
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 14       eLOC 12       lLOC 6        Comment 16       Lines       22

  Function: QXK_threadRet_
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 10       eLOC 9        lLOC 7        Comment 12       Lines       12

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 125      eLOC 110      lLOC 67       Comment 196      Lines      333
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:         10
  Total Function LOC.....:        104  Total Function Pts LOC :        1.0
  Total Function eLOC....:         89  Total Function Pts eLOC:        0.9
  Total Function lLOC....:         63  Total Function Pts lLOC:        0.5
  Total Function Params .:         12  Total Function Return .:         10
  Total Cyclo Complexity :         20  Total Function Complex.:         42
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         22  Average Function LOC ..:      10.40
  Max Function eLOC .....:         19  Average Function eLOC .:       8.90
  Max Function lLOC .....:         12  Average Function lLOC .:       6.30
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          7  Avg Function Parameters:       1.20
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          8  Avg Interface Complex. :       2.20
  Max Cyclomatic Complex.:          7  Avg Cyclomatic Complex.:       2.00
  Max Total Complexity ..:         15  Avg Total Complexity ..:       4.20
  ________________________________________________________________________
  End of File: ..\source\qxk.c


  File: ..\source\qxk_mutex.c
  ________________________________________________________________________

  Function: QXMutex_init
  Parameters: (QXMutex * const me, uint_fast8_t prioCeiling)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 2     
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 12       eLOC 11       lLOC 7        Comment 20       Lines       21

  Function: QXMutex_lock
  Parameters: (QXMutex * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 35       eLOC 29       lLOC 17       Comment 31       Lines       54

  Function: QXMutex_unlock
  Parameters: (QXMutex * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
      Logical and ( && )      : 2     
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 45       eLOC 39       lLOC 24       Comment 35       Lines       71

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 105      eLOC 92       lLOC 48       Comment 135      Lines      247
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          3
  Total Function LOC.....:         92  Total Function Pts LOC :        0.8
  Total Function eLOC....:         79  Total Function Pts eLOC:        0.7
  Total Function lLOC....:         48  Total Function Pts lLOC:        0.4
  Total Function Params .:          4  Total Function Return .:          3
  Total Cyclo Complexity :         17  Total Function Complex.:         24
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         45  Average Function LOC ..:      30.67
  Max Function eLOC .....:         39  Average Function eLOC .:      26.33
  Max Function lLOC .....:         24  Average Function lLOC .:      16.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          2  Avg Function Parameters:       1.33
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          3  Avg Interface Complex. :       2.33
  Max Cyclomatic Complex.:          7  Avg Cyclomatic Complex.:       5.67
  Max Total Complexity ..:          9  Avg Total Complexity ..:       8.00
  ________________________________________________________________________
  End of File: ..\source\qxk_mutex.c


  File: ..\source\qxk_sema.c
  ________________________________________________________________________

  Function: QXSemaphore_init
  Parameters: (QXSemaphore * const me, uint_fast16_t count)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 4        eLOC 3        lLOC 2        Comment 1        Lines        4

  Function: QXSemaphore_wait
  Parameters: (QXSemaphore * const me, uint_fast16_t const nTicks, uint_fa
              st8_t const tickRate)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
      Logical and ( && )      : 1     
  Complexity   Param 3       Return 1      Cyclo Vg 3       Total        7
  LOC 20       eLOC 16       lLOC 12       Comment 4        Lines       27

  Function: QXSemaphore_signal
  Parameters: (QXSemaphore * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
      Logical and ( && )      : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 4       Total        6
  LOC 21       eLOC 16       lLOC 10       Comment 4        Lines       27

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 60       eLOC 50       lLOC 24       Comment 58       Lines      122
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:          3
  Total Function LOC.....:         45  Total Function Pts LOC :        0.5
  Total Function eLOC....:         35  Total Function Pts eLOC:        0.4
  Total Function lLOC....:         24  Total Function Pts lLOC:        0.2
  Total Function Params .:          6  Total Function Return .:          3
  Total Cyclo Complexity :          8  Total Function Complex.:         17
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         21  Average Function LOC ..:      15.00
  Max Function eLOC .....:         16  Average Function eLOC .:      11.67
  Max Function lLOC .....:         12  Average Function lLOC .:       8.00
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          3  Avg Function Parameters:       2.00
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          4  Avg Interface Complex. :       3.00
  Max Cyclomatic Complex.:          4  Avg Cyclomatic Complex.:       2.67
  Max Total Complexity ..:          7  Avg Total Complexity ..:       5.67
  ________________________________________________________________________
  End of File: ..\source\qxk_sema.c


  File: ..\source\qxk_xthr.c
  ________________________________________________________________________

  Function: QXThread_init_
  Parameters: (QMsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 2        Lines        5

  Function: QXThread_dispatch_
  Parameters: (QMsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 1        Lines        5

  Function: QXThread_start_
  Parameters: (QMActive * const me, uint_fast8_t prio, QEvt const *qSto[],
               uint_fast16_t qLen, void *stkSto, uint_fast16_t stkSize, QE
              vt const *ie)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
      Logical and ( && )      : 4     
  Complexity   Param 7       Return 1      Cyclo Vg 7       Total       15
  LOC 22       eLOC 18       lLOC 11       Comment 9        Lines       34

  Function: QXThread_post_
  Parameters: (QMActive * const me, QEvt const * const e, uint_fast16_t co
              nst margin)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 3       Return 1      Cyclo Vg 3       Total        7
  LOC 27       eLOC 22       lLOC 15       Comment 15       Lines       37

  Function: QXThread_postLIFO_
  Parameters: (QMActive * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 1        Lines        5

  Function: QXThread_ctor
  Parameters: (QXThread * const me, QXThreadHandler handler, uint_fast8_t 
              tickRate)
  Complexity   Param 3       Return 1      Cyclo Vg 1       Total        5
  LOC 13       eLOC 10       lLOC 5        Comment 9        Lines       16

  Function: QXThread_block_
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 4        eLOC 3        lLOC 2        Comment 2        Lines        4

  Function: QXThread_unblock_
  Parameters: (QXThread * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
      Logical and ( && )      : 1     
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 8        eLOC 5        lLOC 2        Comment 4        Lines        8

  Function: QXThread_teArm_
  Parameters: (QXThread * const me, QSignal sig, uint_fast16_t const nTick
              s, uint_fast8_t const tickRate)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 2     
  Complexity   Param 4       Return 1      Cyclo Vg 3       Total        8
  LOC 12       eLOC 8        lLOC 6        Comment 15       Lines       27

  Function: QXThread_teDisarm_
  Parameters: (QXThread * const me)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 1     
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 11       eLOC 8        lLOC 5        Comment 5        Lines       13

  Function: QXThread_block
  Parameters: (void)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Logical and ( && )      : 1     
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 10       eLOC 9        lLOC 6        Comment 4        Lines       12

  Function: QXThread_unblock
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 7        eLOC 6        lLOC 4        Comment 3        Lines       10

  Function: QXThread_delay
  Parameters: (uint_fast16_t const nTicks, uint_fast8_t const tickRate)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 11       eLOC 10       lLOC 8        Comment 6        Lines       17

  Function: QXThread_delayCancel
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 9        eLOC 8        lLOC 6        Comment 2        Lines       11

  Function: QXThread_queueGet
  Parameters: (uint_fast16_t const nTicks, uint_fast8_t const tickRate)
    Cyclomatic Complexity Vg Detail
      Function Base           : 1
      Conditional if / else if: 4     
      Logical and ( && )      : 1     
  Complexity   Param 2       Return 1      Cyclo Vg 6       Total        9
  LOC 54       eLOC 46       lLOC 33       Comment 25       Lines       70

  ------------------------------------------------------------------------

                          ~~ Total File Summary ~~

  LOC 248      eLOC 210      lLOC 118      Comment 153      Lines      413
  ------------------------------------------------------------------------

                        ~~ File Functional Summary ~~

  File Function Count....:         15
  Total Function LOC.....:        203  Total Function Pts LOC :        1.9
  Total Function eLOC....:        165  Total Function Pts eLOC:        1.6
  Total Function lLOC....:        112  Total Function Pts lLOC:        0.9
  Total Function Params .:         32  Total Function Return .:         15
  Total Cyclo Complexity :         34  Total Function Complex.:         81
         ------     -----     -----     ------     ------     -----       
  Max Function LOC ......:         54  Average Function LOC ..:      13.53
  Max Function eLOC .....:         46  Average Function eLOC .:      11.00
  Max Function lLOC .....:         33  Average Function lLOC .:       7.47
         ------     -----     -----     ------     ------     -----       
  Max Function Parameters:          7  Avg Function Parameters:       2.13
  Max Function Returns ..:          1  Avg Function Returns ..:       1.00
  Max Interface Complex. :          8  Avg Interface Complex. :       3.13
  Max Cyclomatic Complex.:          7  Avg Cyclomatic Complex.:       2.27
  Max Total Complexity ..:         15  Avg Total Complexity ..:       5.40
  ________________________________________________________________________
  End of File: ..\source\qxk_xthr.c


  ------------------------------------------------------------------------

                     ~~ Project Analysis For 41 Files ~~

  ------------------------------------------------------------------------

                         ~~ Total Project Summary ~~

  LOC 5154     eLOC 4620     lLOC 2206     Comment 7084     Lines    12470
  Average per File, metric/41 files
  LOC 125      eLOC 112      lLOC 53       Comment 172      Lines      304

  ------------------------------------------------------------------------

                      ~~ Project Functional Metrics ~~

  Function: QHsm_ctor
  Parameters: (QHsm * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 9        eLOC 7        lLOC 4        Comment 30       Lines       10

  Function: QHsm_init_
  Parameters: (QHsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 7       Total       10
  LOC 50       eLOC 47       lLOC 31       Comment 34       Lines       70

  Function: QHsm_top
  Parameters: (void const * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 18       Lines        5

  Function: QHsm_dispatch_
  Parameters: (QHsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 12      Total       15
  LOC 105      eLOC 94       lLOC 62       Comment 65       Lines      144

  Function: QHsm_tran_
  Parameters: (QHsm * const me, QStateHandler path[QHSM_MAX_NEST_DEPTH_])
  Complexity   Param 2       Return 1      Cyclo Vg 15      Total       18
  LOC 97       eLOC 76       lLOC 48       Comment 62       Lines      134

  Function: QHsm_isIn
  Parameters: (QHsm * const me, QStateHandler const state)
  Complexity   Param 2       Return 1      Cyclo Vg 4       Total        7
  LOC 17       eLOC 14       lLOC 9        Comment 23       Lines       24

  Function: QHsm_childState
  Parameters: (QHsm * const me, QStateHandler const parent)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 20       eLOC 16       lLOC 13       Comment 29       Lines       28

  Function: QMsm_ctor
  Parameters: (QMsm * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 9        eLOC 7        lLOC 4        Comment 19       Lines        9

  Function: QMsm_init_
  Parameters: (QMsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 4       Total        7
  LOC 23       eLOC 22       lLOC 13       Comment 25       Lines       37

  Function: QMsm_dispatch_
  Parameters: (QMsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 15      Total       18
  LOC 107      eLOC 91       lLOC 56       Comment 70       Lines      148

  Function: QMsm_execTatbl_
  Parameters: (QMsm * const me, QMTranActTable const *tatbl)
  Complexity   Param 2       Return 1      Cyclo Vg 8       Total       11
  LOC 53       eLOC 43       lLOC 21       Comment 33       Lines       64

  Function: QMsm_exitToTranSource_
  Parameters: (QMsm * const me, QMState const *s, QMState const * const ts
              )
  Complexity   Param 3       Return 1      Cyclo Vg 5       Total        9
  LOC 24       eLOC 16       lLOC 7        Comment 21       Lines       32

  Function: QMsm_enterHistory_
  Parameters: (QMsm * const me, QMState const * const hist)
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 37       eLOC 31       lLOC 21       Comment 23       Lines       45

  Function: QMsm_isInState
  Parameters: (QMsm * const me, QMState const * const state)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 12       eLOC 9        lLOC 7        Comment 17       Lines       15

  Function: QMsm_childStateObj
  Parameters: (QMsm const * const me, QMState const * const parent)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 20       eLOC 14       lLOC 10       Comment 19       Lines       26

  Function: QF_add_
  Parameters: (QMActive * const a)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 15       eLOC 14       lLOC 8        Comment 23       Lines       25

  Function: QF_remove_
  Parameters: (QMActive const * const a)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 15       eLOC 14       lLOC 8        Comment 22       Lines       24

  Function: QF_bzero
  Parameters: (void * const start, uint_fast16_t len)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 8        eLOC 6        lLOC 4        Comment 14       Lines        8

  Function: QActive_post_
  Parameters: (QMActive * const me, QEvt const * const e, uint_fast16_t co
              nst margin)
  Complexity   Param 3       Return 1      Cyclo Vg 6       Total       10
  LOC 55       eLOC 46       lLOC 34       Comment 79       Lines       74

  Function: QActive_postLIFO_
  Parameters: (QMActive * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 37       eLOC 31       lLOC 22       Comment 36       Lines       50

  Function: QActive_get_
  Parameters: (QMActive * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 37       eLOC 33       lLOC 24       Comment 32       Lines       48

  Function: QF_getQueueMin
  Parameters: (uint_fast8_t const prio)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 18       Lines       13

  Function: QActive_defer
  Parameters: (QMActive * const me, QEQueue * const eq, QEvt const * const
               e)
  Complexity   Param 3       Return 1      Cyclo Vg 1       Total        5
  LOC 4        eLOC 2        lLOC 2        Comment 24       Lines        4

  Function: QActive_recall
  Parameters: (QMActive * const me, QEQueue * const eq)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 19       eLOC 15       lLOC 10       Comment 33       Lines       36

  Function: QEvt_ctor
  Parameters: (QEvt * const me, enum_t const sig)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 9        Lines        6

  Function: QF_poolInit
  Parameters: (void * const poolSto, uint_fast32_t const poolSize, uint_fa
              st16_t const evtSize)
  Complexity   Param 3       Return 1      Cyclo Vg 2       Total        6
  LOC 9        eLOC 7        lLOC 4        Comment 38       Lines       13

  Function: QF_newX_
  Parameters: (uint_fast16_t const evtSize, uint_fast16_t const margin, en
              um_t const sig)
  Complexity   Param 3       Return 1      Cyclo Vg 4       Total        8
  LOC 26       eLOC 20       lLOC 14       Comment 35       Lines       35

  Function: QF_gc
  Parameters: (QEvt const * const e)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 26       eLOC 22       lLOC 13       Comment 35       Lines       39

  Function: QF_newRef_
  Parameters: (QEvt const * const e, QEvt const * const evtRef)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 7        eLOC 5        lLOC 3        Comment 16       Lines       11

  Function: QF_poolGetMaxBlockSize
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 5        Lines        3

  Function: QMPool_init
  Parameters: (QMPool * const me, void * const poolSto, uint_fast32_t pool
              Size, uint_fast16_t blockSize)
  Complexity   Param 4       Return 1      Cyclo Vg 5       Total       10
  LOC 36       eLOC 32       lLOC 24       Comment 58       Lines       52

  Function: QMPool_put
  Parameters: (QMPool * const me, void *b)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 15       eLOC 14       lLOC 9        Comment 29       Lines       22

  Function: QMPool_get
  Parameters: (QMPool * const me, uint_fast16_t const margin)
  Complexity   Param 2       Return 1      Cyclo Vg 4       Total        7
  LOC 41       eLOC 35       lLOC 23       Comment 54       Lines       65

  Function: QF_getPoolMin
  Parameters: (uint_fast8_t const poolId)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 13       Lines       14

  Function: QF_psInit
  Parameters: (QSubscrList * const subscrSto, enum_t const maxSignal)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 7        eLOC 6        lLOC 3        Comment 32       Lines       12

  Function: QF_publish_
  Parameters: (QEvt const * const e)
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 43       eLOC 34       lLOC 24       Comment 39       Lines       70

  Function: QActive_subscribe
  Parameters: (QActive const * const me, enum_t const sig)
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 17       eLOC 16       lLOC 9        Comment 22       Lines       22

  Function: QActive_unsubscribe
  Parameters: (QActive const * const me, enum_t const sig)
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 17       eLOC 16       lLOC 9        Comment 29       Lines       25

  Function: QActive_unsubscribeAll
  Parameters: (QActive const * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 25       eLOC 21       lLOC 12       Comment 25       Lines       30

  Function: QActive_ctor
  Parameters: (QActive * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 12       eLOC 10       lLOC 4        Comment 19       Lines       17

  Function: QEQueue_init
  Parameters: (QEQueue * const me, QEvt const *qSto[], uint_fast16_t const
               qLen)
  Complexity   Param 3       Return 1      Cyclo Vg 1       Total        5
  LOC 14       eLOC 12       lLOC 9        Comment 22       Lines       16

  Function: QEQueue_post
  Parameters: (QEQueue * const me, QEvt const * const e, uint_fast16_t con
              st margin)
  Complexity   Param 3       Return 1      Cyclo Vg 6       Total       10
  LOC 51       eLOC 42       lLOC 30       Comment 55       Lines       72

  Function: QEQueue_postLIFO
  Parameters: (QEQueue * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 5       Total        8
  LOC 34       eLOC 29       lLOC 21       Comment 41       Lines       44

  Function: QEQueue_get
  Parameters: (QEQueue * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 4       Total        6
  LOC 36       eLOC 31       lLOC 21       Comment 35       Lines       46

  Function: QMActive_ctor
  Parameters: (QMActive * const me, QStateHandler initial)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 12       eLOC 10       lLOC 4        Comment 28       Lines       28

  Function: QF_tickX_
  Parameters: (uint_fast8_t const tickRate)
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 65       eLOC 53       lLOC 36       Comment 53       Lines       93

  Function: QF_noTimeEvtsActiveX
  Parameters: (uint_fast8_t const tickRate)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 14       eLOC 10       lLOC 6        Comment 13       Lines       17

  Function: QTimeEvt_ctorX
  Parameters: (QTimeEvt * const me, QMActive * const act, enum_t const sig
              , uint_fast8_t tickRate)
  Complexity   Param 4       Return 1      Cyclo Vg 2       Total        7
  LOC 11       eLOC 9        lLOC 8        Comment 32       Lines       31

  Function: QTimeEvt_armX
  Parameters: (QTimeEvt * const me, QTimeEvtCtr const nTicks, QTimeEvtCtr 
              const interval)
  Complexity   Param 3       Return 1      Cyclo Vg 6       Total       10
  LOC 28       eLOC 25       lLOC 16       Comment 49       Lines       50

  Function: QTimeEvt_disarm
  Parameters: (QTimeEvt * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 29       eLOC 26       lLOC 17       Comment 30       Lines       37

  Function: QTimeEvt_rearm
  Parameters: (QTimeEvt * const me, QTimeEvtCtr const nTicks)
  Complexity   Param 2       Return 1      Cyclo Vg 6       Total        9
  LOC 33       eLOC 29       lLOC 18       Comment 47       Lines       59

  Function: QTimeEvt_ctr
  Parameters: (QTimeEvt const * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 16       eLOC 15       lLOC 11       Comment 20       Lines       19

  Function: QF_init
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 13       eLOC 12       lLOC 9        Comment 19       Lines       21

  Function: QF_stop
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 14       Lines        4

  Function: initial_events
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 8        eLOC 6        lLOC 4        Comment 6        Lines       11

  Function: QF_run
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 12       eLOC 10       lLOC 7        Comment 21       Lines       15

  Function: QActive_start_
  Parameters: (QMActive * const me, uint_fast8_t prio, QEvt const *qSto[],
               uint_fast16_t qLen, void *stkSto, uint_fast16_t stkSize, QE
              vt const *ie)
  Complexity   Param 7       Return 1      Cyclo Vg 3       Total       11
  LOC 11       eLOC 9        lLOC 8        Comment 30       Lines       15

  Function: QActive_stop
  Parameters: (QMActive *me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 3        eLOC 2        lLOC 1        Comment 13       Lines        3

  Function: QK_schedPrio_
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 8        eLOC 6        lLOC 4        Comment 18       Lines       12

  Function: QK_sched_
  Parameters: (uint_fast8_t p)
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 48       eLOC 43       lLOC 23       Comment 44       Lines       72

  Function: QMutex_init
  Parameters: (QMutex * const me, uint_fast8_t prioCeiling)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 11       eLOC 10       lLOC 6        Comment 20       Lines       20

  Function: QMutex_lock
  Parameters: (QMutex * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 33       eLOC 27       lLOC 15       Comment 29       Lines       50

  Function: QMutex_unlock
  Parameters: (QMutex * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 34       eLOC 28       lLOC 16       Comment 27       Lines       51

  Function: QS_initBuf
  Parameters: (uint8_t sto[], uint_fast16_t stoSize)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 21       eLOC 20       lLOC 19       Comment 30       Lines       35

  Function: QS_filterOn
  Parameters: (uint_fast8_t rec)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 17       eLOC 12       lLOC 6        Comment 16       Lines       19

  Function: QS_filterOff
  Parameters: (uint_fast8_t rec)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 20       eLOC 15       lLOC 10       Comment 16       Lines       25

  Function: QS_beginRec
  Parameters: (uint_fast8_t rec)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 14       eLOC 13       lLOC 10       Comment 18       Lines       18

  Function: QS_endRec
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 4       Total        5
  LOC 22       eLOC 18       lLOC 10       Comment 17       Lines       28

  Function: QS_target_info_
  Parameters: (uint8_t isReset)
  Complexity   Param 1       Return 1      Cyclo Vg 15      Total       17
  LOC 97       eLOC 90       lLOC 48       Comment 10       Lines      111

  Function: QS_u8
  Parameters: (uint8_t format, uint8_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 11       eLOC 10       lLOC 7        Comment 13       Lines       14

  Function: QS_u16
  Parameters: (uint8_t format, uint16_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 15       eLOC 14       lLOC 10       Comment 13       Lines       20

  Function: QS_u32
  Parameters: (uint8_t format, uint32_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 16       eLOC 14       lLOC 11       Comment 14       Lines       20

  Function: QS_u8_
  Parameters: (uint8_t d)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 10       eLOC 9        lLOC 7        Comment 12       Lines       12

  Function: QS_u8u8_
  Parameters: (uint8_t d1, uint8_t d2)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 11       eLOC 10       lLOC 7        Comment 11       Lines       13

  Function: QS_u16_
  Parameters: (uint16_t d)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 14       eLOC 13       lLOC 10       Comment 12       Lines       18

  Function: QS_u32_
  Parameters: (uint32_t d)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 15       eLOC 13       lLOC 11       Comment 11       Lines       17

  Function: QS_str_
  Parameters: (char_t const *s)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 20       eLOC 18       lLOC 14       Comment 16       Lines       22

  Function: QS_getByte
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 3       Total        4
  LOC 18       eLOC 14       lLOC 10       Comment 20       Lines       18

  Function: QS_getBlock
  Parameters: (uint16_t *pNbytes)
  Complexity   Param 1       Return 1      Cyclo Vg 5       Total        7
  LOC 28       eLOC 22       lLOC 16       Comment 32       Lines       32

  Function: QS_sig_dict
  Parameters: (enum_t const sig, void const * const obj, char_t const *nam
              e)
  Complexity   Param 3       Return 1      Cyclo Vg 2       Total        6
  LOC 14       eLOC 11       lLOC 9        Comment 3        Lines       15

  Function: QS_obj_dict
  Parameters: (void const * const obj, char_t const *name)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 13       eLOC 10       lLOC 8        Comment 3        Lines       14

  Function: QS_fun_dict
  Parameters: (void (* const fun)(void), char_t const *name)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 13       eLOC 11       lLOC 8        Comment 3        Lines       14

  Function: QS_usr_dict
  Parameters: (enum_t const rec, char_t const * const name)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 10       eLOC 8        lLOC 7        Comment 3        Lines       11

  Function: QS_mem
  Parameters: (uint8_t const *blk, uint8_t size)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 18       eLOC 16       lLOC 11       Comment 11       Lines       23

  Function: QS_str
  Parameters: (char_t const *s)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 21       eLOC 19       lLOC 14       Comment 16       Lines       24

  Function: QS_u64_
  Parameters: (uint64_t d)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 15       eLOC 13       lLOC 11       Comment 7        Lines       17

  Function: QS_u64
  Parameters: (uint8_t format, uint64_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 16       eLOC 14       lLOC 11       Comment 9        Lines       20

  Function: QS_f32
  Parameters: (uint8_t format, float32_t f)
  Complexity   Param 2       Return 1      Cyclo Vg 2       Total        5
  LOC 21       eLOC 19       lLOC 15       Comment 16       Lines       26

  Function: QS_f64
  Parameters: (uint8_t format, float64_t d)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 29       eLOC 26       lLOC 20       Comment 14       Lines       36

  Function: QS_rxInitBuf
  Parameters: (uint8_t sto[], uint16_t stoSize)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 18       eLOC 17       lLOC 15       Comment 19       Lines       21

  Function: QS_rxGetNfree
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 3       Total        4
  LOC 14       eLOC 10       lLOC 5        Comment 9        Lines       14

  Function: QS_rxParse
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 7       Total        8
  LOC 36       eLOC 26       lLOC 16       Comment 5        Lines       41

  Function: QS_rxParseData_
  Parameters: (uint8_t b)
  Complexity   Param 1       Return 1      Cyclo Vg 57      Total       59
  LOC 254      eLOC 197      lLOC 125      Comment 18       Lines      265

  Function: QS_rxHandleGoodFrame_
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 25      Total       26
  LOC 127      eLOC 103      lLOC 69       Comment 15       Lines      137

  Function: QS_rxHandleBadFrame_
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 12       eLOC 8        lLOC 4        Comment 1        Lines       12

  Function: QS_rxReportSuccess_
  Parameters: (enum QSpyRxRecords recId)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 7        eLOC 6        lLOC 2        Comment 3        Lines        7

  Function: QS_rxReportError_
  Parameters: (uint8_t stateId)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 7        eLOC 6        lLOC 2        Comment 3        Lines        7

  Function: QS_rxAddr_
  Parameters: (uint8_t b, QSAddr *addr, uint8_t *idx)
  Complexity   Param 3       Return 1      Cyclo Vg 2       Total        6
  LOC 5        eLOC 4        lLOC 3        Comment 1        Lines        5

  Function: QF_init
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 8        eLOC 7        lLOC 6        Comment 15       Lines       13

  Function: QF_stop
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 14       Lines        4

  Function: thread_ao
  Parameters: (void *par)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 7        eLOC 5        lLOC 4        Comment 5        Lines        8

  Function: thread_idle
  Parameters: (void *par)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 9        eLOC 7        lLOC 6        Comment 3        Lines       11

  Function: QF_init
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 8        eLOC 7        lLOC 6        Comment 15       Lines       13

  Function: QF_stop
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 3        eLOC 2        lLOC 1        Comment 14       Lines        4

  Function: QF_run
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 11       eLOC 10       lLOC 9        Comment 21       Lines       20

  Function: QActive_start_
  Parameters: (QMActive * const me, uint_fast8_t prio, QEvt const *qSto[],
               uint_fast16_t qLen, void *stkSto, uint_fast16_t stkSize, QE
              vt const *ie)
  Complexity   Param 7       Return 1      Cyclo Vg 7       Total       15
  LOC 22       eLOC 19       lLOC 12       Comment 30       Lines       32

  Function: QActive_stop
  Parameters: (QMActive *me)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 14       Lines       14

  Function: QXK_init
  Parameters: (void *idleStkSto, uint_fast16_t idleStkSize)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 10       eLOC 9        lLOC 6        Comment 14       Lines       13

  Function: QXK_sched_
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 14       eLOC 12       lLOC 6        Comment 16       Lines       22

  Function: QXK_threadRet_
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 1       Total        2
  LOC 10       eLOC 9        lLOC 7        Comment 12       Lines       12

  Function: QXMutex_init
  Parameters: (QXMutex * const me, uint_fast8_t prioCeiling)
  Complexity   Param 2       Return 1      Cyclo Vg 3       Total        6
  LOC 12       eLOC 11       lLOC 7        Comment 20       Lines       21

  Function: QXMutex_lock
  Parameters: (QXMutex * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 35       eLOC 29       lLOC 17       Comment 31       Lines       54

  Function: QXMutex_unlock
  Parameters: (QXMutex * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 7       Total        9
  LOC 45       eLOC 39       lLOC 24       Comment 35       Lines       71

  Function: QXSemaphore_init
  Parameters: (QXSemaphore * const me, uint_fast16_t count)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 4        eLOC 3        lLOC 2        Comment 1        Lines        4

  Function: QXSemaphore_wait
  Parameters: (QXSemaphore * const me, uint_fast16_t const nTicks, uint_fa
              st8_t const tickRate)
  Complexity   Param 3       Return 1      Cyclo Vg 3       Total        7
  LOC 20       eLOC 16       lLOC 12       Comment 4        Lines       27

  Function: QXSemaphore_signal
  Parameters: (QXSemaphore * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 4       Total        6
  LOC 21       eLOC 16       lLOC 10       Comment 4        Lines       27

  Function: QXThread_init_
  Parameters: (QMsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 2        Lines        5

  Function: QXThread_dispatch_
  Parameters: (QMsm * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 1        Lines        5

  Function: QXThread_start_
  Parameters: (QMActive * const me, uint_fast8_t prio, QEvt const *qSto[],
               uint_fast16_t qLen, void *stkSto, uint_fast16_t stkSize, QE
              vt const *ie)
  Complexity   Param 7       Return 1      Cyclo Vg 7       Total       15
  LOC 22       eLOC 18       lLOC 11       Comment 9        Lines       34

  Function: QXThread_post_
  Parameters: (QMActive * const me, QEvt const * const e, uint_fast16_t co
              nst margin)
  Complexity   Param 3       Return 1      Cyclo Vg 3       Total        7
  LOC 27       eLOC 22       lLOC 15       Comment 15       Lines       37

  Function: QXThread_postLIFO_
  Parameters: (QMActive * const me, QEvt const * const e)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 5        eLOC 4        lLOC 3        Comment 1        Lines        5

  Function: QXThread_ctor
  Parameters: (QXThread * const me, QXThreadHandler handler, uint_fast8_t 
              tickRate)
  Complexity   Param 3       Return 1      Cyclo Vg 1       Total        5
  LOC 13       eLOC 10       lLOC 5        Comment 9        Lines       16

  Function: QXThread_block_
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 4        eLOC 3        lLOC 2        Comment 2        Lines        4

  Function: QXThread_unblock_
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 3       Total        5
  LOC 8        eLOC 5        lLOC 2        Comment 4        Lines        8

  Function: QXThread_teArm_
  Parameters: (QXThread * const me, QSignal sig, uint_fast16_t const nTick
              s, uint_fast8_t const tickRate)
  Complexity   Param 4       Return 1      Cyclo Vg 3       Total        8
  LOC 12       eLOC 8        lLOC 6        Comment 15       Lines       27

  Function: QXThread_teDisarm_
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 2       Total        4
  LOC 11       eLOC 8        lLOC 5        Comment 5        Lines       13

  Function: QXThread_block
  Parameters: (void)
  Complexity   Param 0       Return 1      Cyclo Vg 2       Total        3
  LOC 10       eLOC 9        lLOC 6        Comment 4        Lines       12

  Function: QXThread_unblock
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 7        eLOC 6        lLOC 4        Comment 3        Lines       10

  Function: QXThread_delay
  Parameters: (uint_fast16_t const nTicks, uint_fast8_t const tickRate)
  Complexity   Param 2       Return 1      Cyclo Vg 1       Total        4
  LOC 11       eLOC 10       lLOC 8        Comment 6        Lines       17

  Function: QXThread_delayCancel
  Parameters: (QXThread * const me)
  Complexity   Param 1       Return 1      Cyclo Vg 1       Total        3
  LOC 9        eLOC 8        lLOC 6        Comment 2        Lines       11

  Function: QXThread_queueGet
  Parameters: (uint_fast16_t const nTicks, uint_fast8_t const tickRate)
  Complexity   Param 2       Return 1      Cyclo Vg 6       Total        9
  LOC 54       eLOC 46       lLOC 33       Comment 25       Lines       70

  Total: Functions  
  LOC 3068     eLOC 2566     lLOC 1694     InCmp 345      CycloCmp     487
  Function Points         FP(LOC) 24.0    FP(eLOC) 20.0   FP(lLOC)    13.2

  ------------------------------------------------------------------------

                      ~~ Project Functional Analysis ~~

  Total Functions .......:        131  Total Physical Lines ..:       4070
  Total LOC .............:       3068  Total Function Pts LOC :       24.0
  Total eLOC ............:       2566  Total Function Pts eLOC:       20.0
  Total lLOC.............:       1694  Total Function Pts lLOC:       13.2
  Total Cyclomatic Comp. :        487  Total Interface Comp. .:        345
  Total Parameters ......:        214  Total Return Points ...:        131
  Total Comment Lines ...:       2684  Total Blank Lines .....:        531
         ------     -----     -----     ------     ------     -----       
  Avg Physical Lines ....:      31.07
  Avg LOC ...............:      23.42  Avg eLOC ..............:      19.59
  Avg lLOC ..............:      12.93  Avg Cyclomatic Comp. ..:       3.72
  Avg Interface Comp. ...:       2.63  Avg Parameters ........:       1.63
  Avg Return Points .....:       1.00  Avg Comment Lines .....:      20.49
         ------     -----     -----     ------     ------     -----       
  Max LOC ...............:        254
  Max eLOC ..............:        197  Max lLOC ..............:        125
  Max Cyclomatic Comp. ..:         57  Max Interface Comp. ...:          8
  Max Parameters ........:          7  Max Return Points .....:          1
  Max Comment Lines .....:         79  Max Total Lines .......:        265
         ------     -----     -----     ------     ------     -----       
  Min LOC ...............:          3
  Min eLOC ..............:          2  Min lLOC ..............:          1
  Min Cyclomatic Comp. ..:          1  Min Interface Comp. ...:          1
  Min Parameters ........:          0  Min Return Points .....:          1
  Min Comment Lines .....:          1  Min Total Lines .......:          3

  ------------------------------------------------------------------------

                             ~~ File Summary ~~

  C Source Files *.c ....:         23  C/C++ Include Files *.h:         18
  C++ Source Files *.c* .:          0  C++ Include Files *.h* :          0
  C# Source Files *.cs ..:          0  Java Source File *.jav*:          0
  Other File Count ......:          0  Total File Count ......:         41
  ________________________________________________________________________

@endcode 
*/ 