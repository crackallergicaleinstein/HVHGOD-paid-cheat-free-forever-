// FUN_18029a820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029a820 */

void FUN_18029a820(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar2 = (longlong)(param_3[6] - param_3[5]) / 0x1020;
  if (uVar2 != 0) {
    if (0xfe03f80fe03f8 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar6 = FUN_18015bca0(uVar2 * 0x1020);
    param_2[5] = lVar6;
    param_2[6] = lVar6;
    param_2[7] = uVar2 * 0x1020 + lVar6;
    lVar6 = param_2[5];
    lVar7 = param_3[6] - param_3[5];
    FUN_18063aed0(lVar6,param_3[5],lVar7);
    param_2[6] = (lVar7 / 0x1020) * 0x1020 + lVar6;
  }
  param_2[8] = param_3[8];
  param_2[9] = param_3[9];
  param_2[10] = 0;
  param_2[0xb] = 0;
  if (param_3[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[0xb] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[10] = param_3[10];
  param_2[0xb] = param_3[0xb];
  FUN_18063aed0(param_2 + 0xc,param_3 + 0xc,0x1020);
  *(undefined1 *)(param_2 + 0x210) = *(undefined1 *)(param_3 + 0x210);
  *(undefined4 *)((longlong)param_2 + 0x1084) = *(undefined4 *)((longlong)param_3 + 0x1084);
  return;
}



