// FUN_180587c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587c60 */

uint FUN_180587c60(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar4 = 0;
  uVar8 = 0;
  if (param_2 < uVar1) {
    lVar3 = *(longlong *)(param_1 + 0x440);
    if (*(short *)(param_1 + 0x132) == 0) {
      uVar4 = param_2 * 2;
      uVar7 = lVar3 + 4 + (ulonglong)uVar4;
      uVar4 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar4 + lVar3),
                             *(undefined1 *)((ulonglong)uVar4 + 1 + lVar3));
      uVar8 = uVar4;
      if (uVar7 <= (ulonglong)(uVar1 * 2) + lVar3) {
        uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar7 - 2),*(undefined1 *)(uVar7 - 1));
      }
      uVar4 = uVar4 * 2;
      uVar8 = uVar8 * 2;
    }
    else {
      uVar4 = param_2 * 4;
      uVar7 = (ulonglong)uVar4;
      uVar6 = lVar3 + 8 + uVar7;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar4 + lVar3),
                                         *(undefined1 *)((ulonglong)uVar4 + 1 + lVar3)),
                                *(undefined1 *)(uVar7 + 2 + lVar3)),
                       *(undefined1 *)(uVar7 + 3 + lVar3));
      uVar8 = uVar4;
      if (uVar6 <= (ulonglong)(uVar1 * 4) + lVar3) {
        uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar6 - 4),*(undefined1 *)(uVar6 - 3)),
                                  *(undefined1 *)(uVar6 - 2)),*(undefined1 *)(uVar6 - 1));
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x3f8);
  if (uVar2 < uVar4) {
LAB_180587d8e:
    *param_3 = 0;
    return 0;
  }
  if (uVar2 < uVar8) {
    if (param_2 != uVar1 - 2) goto LAB_180587d8e;
    uVar8 = uVar2;
  }
  iVar5 = uVar8 - uVar4;
  if (uVar8 < uVar4) {
    iVar5 = uVar2 - uVar4;
  }
  *param_3 = iVar5;
  return uVar4;
}



