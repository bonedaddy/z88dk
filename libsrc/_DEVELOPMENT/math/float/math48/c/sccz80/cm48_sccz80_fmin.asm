
; double __CALLEE__ fmin(double x, double y)

SECTION code_fp_math48

PUBLIC cm48_sccz80_fmin

EXTERN am48_fmin, cm48_sccz80p_dcallee2

cm48_sccz80_fmin:

   call cm48_sccz80p_dcallee2
   
   ; AC'= y
   ; AC = x

   jp am48_fmin
