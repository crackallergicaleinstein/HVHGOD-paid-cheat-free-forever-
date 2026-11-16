// FUN_1804556e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804556e0 */

undefined8 *
FUN_1804556e0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  plVar1 = DAT_180c62c40;
  if (param_3 == param_4) {
    *param_2 = param_3;
  }
  else {
    plVar4 = param_3;
    local_res8 = param_1;
    if (param_4 != DAT_180c62c40) {
      do {
        if (plVar4 != param_4) {
          lVar3 = *plVar4;
          if (lVar3 != 0) {
            lVar2 = FUN_18017ea70();
            *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
            FUN_1804551e0(&local_res8,lVar3,2);
            lVar3 = FUN_18017ea70();
            if (*(int *)(lVar3 + 4) != 0) {
              *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
            }
          }
          *plVar4 = *param_4;
          *param_4 = 0;
        }
        plVar4 = plVar4 + 1;
        param_4 = param_4 + 1;
      } while (param_4 != plVar1);
    }
    FUN_1804555b0(plVar4,DAT_180c62c40);
    DAT_180c62c40 = plVar4;
    *param_2 = param_3;
  }
  return param_2;
}



