// FUN_18043ff10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ff10 */

undefined1 (*) [16] FUN_18043ff10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  longlong lVar10;
  
  lVar6 = *param_1;
  lVar10 = (param_2 - lVar6) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_2 - lVar6),8);
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar6),8) +
          (param_1[1] - lVar6);
  lVar5 = (lVar5 >> 6) - (lVar5 >> 0x3f);
  if (lVar5 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - lVar6),8) +
          (param_1[2] - lVar6);
  uVar7 = (lVar6 >> 6) - (lVar6 >> 0x3f);
  if (0x222222222222222 - (uVar7 >> 1) < uVar7) {
    uVar9 = 0x222222222222222;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar9 = uVar1;
    if (uVar1 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x222222222222222 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar5 = FUN_18015bca0(uVar9 * 0x78);
  pauVar8 = (undefined1 (*) [16])(((lVar10 >> 6) - (lVar10 >> 0x3f)) * 0x78 + lVar5);
  *pauVar8 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar8[1] = 0;
  *(undefined8 *)(pauVar8[1] + 8) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined8 *)*pauVar8 = *param_3;
  *(undefined8 *)(*pauVar8 + 8) = uVar2;
  *(undefined8 *)pauVar8[1] = uVar3;
  *(undefined8 *)(pauVar8[1] + 8) = uVar4;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  uVar2 = param_3[5];
  *(undefined8 *)pauVar8[2] = param_3[4];
  *(undefined8 *)(pauVar8[2] + 8) = uVar2;
  *(undefined4 *)pauVar8[3] = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(pauVar8[3] + 4) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(pauVar8[3] + 8) = *(undefined4 *)(param_3 + 7);
  uVar2 = *(undefined8 *)((longlong)param_3 + 0x44);
  *(undefined8 *)(pauVar8[3] + 0xc) = *(undefined8 *)((longlong)param_3 + 0x3c);
  *(undefined8 *)(pauVar8[4] + 4) = uVar2;
  *(undefined2 *)(pauVar8[4] + 0xc) = *(undefined2 *)((longlong)param_3 + 0x4c);
  pauVar8[4][0xe] = *(undefined1 *)((longlong)param_3 + 0x4e);
  *(undefined4 *)pauVar8[5] = *(undefined4 *)(param_3 + 10);
  *(undefined8 *)(pauVar8[5] + 8) = param_3[0xb];
  *(undefined8 *)pauVar8[6] = param_3[0xc];
  pauVar8[6][8] = *(undefined1 *)(param_3 + 0xd);
  pauVar8[6][9] = *(undefined1 *)((longlong)param_3 + 0x69);
  *(undefined4 *)(pauVar8[6] + 0xc) = *(undefined4 *)((longlong)param_3 + 0x6c);
  *(undefined4 *)pauVar8[7] = *(undefined4 *)(param_3 + 0xe);
  *(undefined4 *)(pauVar8[7] + 4) = *(undefined4 *)((longlong)param_3 + 0x74);
  lVar10 = param_1[1];
  lVar6 = *param_1;
  if (param_2 == lVar10) {
    if (lVar6 != lVar10) {
      do {
        FUN_1801da890();
        lVar6 = lVar6 + 0x78;
      } while (lVar6 != lVar10);
    }
  }
  else {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x78) {
      FUN_1801da890();
    }
    lVar10 = param_1[1];
    if (param_2 != lVar10) {
      do {
        FUN_1801da890();
        param_2 = param_2 + 0x78;
      } while (param_2 != lVar10);
    }
  }
  FUN_1801da360(param_1,lVar5,uVar1,uVar9);
  return pauVar8;
}



