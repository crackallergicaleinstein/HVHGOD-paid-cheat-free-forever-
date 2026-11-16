// FUN_1805fdddc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fdddc */

double FUN_1805fdddc(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double local_res8;
  
  dVar1 = 0.0;
  local_res8 = param_1;
  if (param_1 <= -1.0) {
    param_1 = 1.0 - param_1;
    local_res8 = param_1;
    dVar1 = (double)FUN_18061ccf0(param_1);
    dVar1 = param_1 - dVar1;
    if (0.5 < dVar1) {
      dVar1 = dVar1 - 1.0;
    }
    if (dVar1 == 0.0) {
      local_res8 = 1.0 - param_1;
                    /* WARNING: Subroutine does not return */
      FUN_180601c90("boost::math::digamma<%1%>(%1%)",0,&local_res8,param_3);
    }
    dVar1 = (double)FUN_18061e1f0(dVar1 * 3.141592653589793);
    dVar1 = 3.141592653589793 / dVar1;
  }
  if (param_1 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_180601c90("boost::math::digamma<%1%>(%1%)",0,&local_res8,param_3);
  }
  if (param_1 < 10.0) {
    while (2.0 < param_1) {
      param_1 = param_1 + -1.0;
      dVar1 = dVar1 + 1.0 / param_1;
    }
    for (; param_1 < 1.0; param_1 = param_1 + 1.0) {
      dVar1 = dVar1 - 1.0 / param_1;
    }
    dVar2 = (double)FUN_1805fe038(param_1,param_2);
  }
  else {
    dVar2 = (double)FUN_1805fe128(param_1,param_2);
  }
  return dVar1 + dVar2;
}



