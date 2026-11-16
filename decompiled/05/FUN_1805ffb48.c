// FUN_1805ffb48 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ffb48 */

void FUN_1805ffb48(double param_1,undefined8 param_2)

{
  double dVar1;
  double local_res8;
  
  local_res8 = param_1;
  if (param_1 <= 0.0) {
    dVar1 = (double)FUN_18061ccf0();
    if (dVar1 == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_180601c60(PTR_s_boost_math_tgamma<_1_>__1___1808d6d48,
                    "Evaluation of tgamma at a negative integer %1%.",&local_res8,param_2);
    }
    if (param_1 <= -20.0) {
      FUN_1805ffb48();
      FUN_180601e48();
      return;
    }
    if (param_1 < 0.0) {
      do {
        param_1 = param_1 + 1.0;
      } while (param_1 < 0.0);
      local_res8 = param_1;
    }
  }
  dVar1 = (double)FUN_18061ccf0();
  if ((dVar1 != param_1) || (170.0 <= param_1)) {
    if (1.4901161193847656e-08 <= param_1) {
      FUN_180600274(&local_res8);
      dVar1 = (double)FUN_18061cdb0();
      if (709.0 < dVar1 * param_1) {
        if (dVar1 * param_1 * 0.5 <= 709.0) {
          FUN_18061d2e0();
          FUN_18061c8d0();
        }
      }
      else {
        FUN_18061d2e0();
        FUN_18061c8d0();
      }
    }
  }
  else {
    FUN_180600124(&local_res8,param_2);
  }
  return;
}



