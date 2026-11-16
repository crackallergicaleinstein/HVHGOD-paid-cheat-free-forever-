// FUN_18036fc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036fc30 */

undefined1 (*) [16] FUN_18036fc30(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  
  lVar8 = *param_1;
  lVar5 = param_1[1] - lVar8 >> 6;
  if (lVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  uVar7 = param_1[2] - lVar8 >> 6;
  if (0x3ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar9 = 0x3ffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar9 = uVar1;
    if (uVar1 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x3ffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  pauVar6 = (undefined1 (*) [16])FUN_18015bca0(uVar9 << 6);
  pauVar10 = (undefined1 (*) [16])(*pauVar6 + (param_2 - lVar8 & 0xffffffffffffffc0));
  *pauVar10 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar10[1] = 0;
  *(undefined8 *)(pauVar10[1] + 8) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined8 *)*pauVar10 = *param_3;
  *(undefined8 *)(*pauVar10 + 8) = uVar2;
  *(undefined8 *)pauVar10[1] = uVar3;
  *(undefined8 *)(pauVar10[1] + 8) = uVar4;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  pauVar10[2] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar10[3] = 0;
  *(undefined8 *)(pauVar10[3] + 8) = 0;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  *(undefined8 *)pauVar10[2] = param_3[4];
  *(undefined8 *)(pauVar10[2] + 8) = uVar2;
  *(undefined8 *)pauVar10[3] = uVar3;
  *(undefined8 *)(pauVar10[3] + 8) = uVar4;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  param_3[7] = 0xf;
  lVar5 = param_1[1];
  lVar8 = *param_1;
  pauVar11 = pauVar6;
  if (param_2 != lVar5) {
    FUN_18036fb90(lVar8,param_2,pauVar6);
    pauVar6 = pauVar10 + 4;
    lVar5 = param_1[1];
    lVar8 = param_2;
  }
  FUN_18036fb90(lVar8,lVar5,pauVar6);
  FUN_18036fe10(param_1,pauVar11,uVar1,uVar9);
  return pauVar10;
}



