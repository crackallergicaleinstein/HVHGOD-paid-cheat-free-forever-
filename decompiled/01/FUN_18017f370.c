// FUN_18017f370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017f370 */

undefined8 FUN_18017f370(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 ****local_38;
  undefined8 local_30;
  undefined8 ****local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
  bVar7 = false;
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if ((((param_1[2] == 0x40) &&
       (lVar3 = FUN_1801b16b0(puVar4,0x40,param_3,"0123456789abcdef",0x10), lVar3 == -1)) &&
      (param_1[8] - 0x20 < 0xfffffe1)) && ((ulonglong)param_1[6] < 0xf1)) {
    if (0x7fffffffffffffff - param_1[6] < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    FUN_18015a9c0(local_28);
    bVar7 = true;
    local_38 = local_28;
    if (0xf < local_10) {
      local_38 = local_28[0];
    }
    local_30 = local_18;
    cVar2 = FUN_18017eed0(&local_38);
    if (cVar2 != '\0') {
      puVar4 = param_1 + 4;
      if (0xf < (ulonglong)param_1[7]) {
        puVar4 = (undefined8 *)param_1[4];
      }
      uVar1 = param_1[6];
      if (4 < uVar1) {
        iVar5 = *(int *)((longlong)puVar4 + (uVar1 - 5)) + -0x646d762e;
        if (iVar5 == 0) {
          iVar5 = *(byte *)((longlong)puVar4 + (uVar1 - 1)) - 0x6c;
        }
        if (iVar5 == 0) {
          uVar6 = 1;
          goto LAB_18017f4a0;
        }
      }
    }
  }
  uVar6 = 0;
LAB_18017f4a0:
  if (bVar7) {
    FUN_18015c010(local_28);
  }
  return uVar6;
}



