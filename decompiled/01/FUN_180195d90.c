// FUN_180195d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195d90 */

ulonglong FUN_180195d90(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  int iVar2;
  size_t in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  sVar1 = param_1[2];
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  if (sVar1 == param_2[2]) {
    if (sVar1 != 0) {
      iVar2 = memcmp(puVar3,puVar4,sVar1);
      in_RAX = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 0) goto LAB_180195e1a;
    }
    puVar4 = param_2 + 4;
    in_RAX = param_2[6];
    puVar3 = param_1 + 4;
    if (0xf < (ulonglong)param_2[7]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    sVar1 = param_1[6];
    if (0xf < (ulonglong)param_1[7]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if (sVar1 == in_RAX) {
      if (sVar1 != 0) {
        iVar2 = memcmp(puVar3,puVar4,sVar1);
        in_RAX = CONCAT44(extraout_var_00,iVar2);
        if (iVar2 != 0) goto LAB_180195e1a;
      }
      in_RAX = param_2[8];
      if (param_1[8] == in_RAX) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_180195e1a:
  return in_RAX & 0xffffffffffffff00;
}



