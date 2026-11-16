// FUN_18015a6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a6e0 */

undefined1 (*) [16]
FUN_18015a6e0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar2 + uVar3;
  if ((param_3[3] - uVar2 < uVar3) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar3 < uVar2) {
      if (0x7fffffffffffffff - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      uVar8 = uVar1 | 0xf;
      uVar10 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar10 = uVar8, uVar8 < 0x16)) {
        uVar10 = 0x16;
      }
      lVar9 = FUN_18015bca0(uVar10 + 1);
      *(longlong *)*param_1 = lVar9;
      *(ulonglong *)param_1[1] = uVar1;
      *(ulonglong *)(param_1[1] + 8) = uVar10;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_18063aed0(lVar9,param_3,uVar2);
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      FUN_18063aed0(lVar9 + uVar2,param_4,uVar3 + 1);
    }
    else {
      uVar4 = param_4[1];
      uVar5 = param_4[2];
      uVar6 = param_4[3];
      *(undefined8 *)*param_1 = *param_4;
      *(undefined8 *)(*param_1 + 8) = uVar4;
      *(undefined8 *)param_1[1] = uVar5;
      *(undefined8 *)(param_1[1] + 8) = uVar6;
      *(undefined1 *)param_4 = 0;
      param_4[2] = 0;
      param_4[3] = 0xf;
      lVar9 = *(longlong *)*param_1;
      FUN_18063aed0(lVar9 + uVar2,lVar9,uVar3 + 1);
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_18063aed0(lVar9,param_3,uVar2);
      *(ulonglong *)param_1[1] = uVar1;
    }
  }
  else {
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)*param_1 = *param_3;
    *(undefined8 *)(*param_1 + 8) = uVar4;
    *(undefined8 *)param_1[1] = uVar5;
    *(undefined8 *)(param_1[1] + 8) = uVar6;
    *(undefined1 *)param_3 = 0;
    param_3[2] = 0;
    param_3[3] = 0xf;
    pauVar7 = param_1;
    if (0xf < *(ulonglong *)(param_1[1] + 8)) {
      pauVar7 = *(undefined1 (**) [16])*param_1;
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_18063aed0(*pauVar7 + uVar2,param_4,uVar3 + 1);
    *(ulonglong *)param_1[1] = uVar1;
  }
  return param_1;
}



