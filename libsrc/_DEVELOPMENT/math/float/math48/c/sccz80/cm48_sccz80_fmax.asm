
; double __CALLEE__ fmax(double x, double y)

SECTION code_fp_math48

PUBLIC cm48_sccz80_fmax

EXTERN am48_fmax, cm48_sccz80p_dcallee2

cm48_sccz80_fmax:

   call cm48_sccz80p_dcallee2
   
   ; AC'= y
   ; AC = x

   jp am48_fmax
