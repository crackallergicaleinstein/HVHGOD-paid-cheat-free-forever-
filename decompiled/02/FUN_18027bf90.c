// FUN_18027bf90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027bf90 */

void FUN_18027bf90(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = 1;
  if (uVar1 != 0) {
    uVar6 = uVar1;
  }
  for (; (uVar6 == uVar1 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x7292cc157b864 - uVar6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18017a930();
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar2 = FUN_18015bca0(uVar6 * 8);
  lVar4 = uVar1 * 8;
  uVar3 = uVar6 >> 1;
  for (; uVar6 <= uVar3; uVar6 = uVar6 * 2) {
  }
  uVar6 = uVar6 - *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 8) + lVar4;
  lVar7 = (*(longlong *)(param_1 + 0x10) * 8 - lVar5) + *(longlong *)(param_1 + 8);
  FUN_18063aed0(lVar4 + lVar2,lVar5,lVar7);
  lVar7 = lVar4 + lVar2 + lVar7;
  if (uVar6 < uVar1) {
    FUN_18063aed0(lVar7,*(undefined8 *)(param_1 + 8),uVar6 * 8);
    lVar5 = uVar6 * 8 + *(longlong *)(param_1 + 8);
    lVar4 = (*(longlong *)(param_1 + 8) - lVar5) + lVar4;
    FUN_18063aed0(lVar2,lVar5,lVar4);
    lVar4 = lVar4 + lVar2;
  }
  else {
    FUN_18063aed0(lVar7,*(undefined8 *)(param_1 + 8),lVar4);
    FUN_18063ab10(lVar4 + lVar7,0,(uVar6 - uVar1) * 8);
    lVar4 = lVar2;
  }
  FUN_18063ab10(lVar4,0);
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (lVar5 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar5);
  }
  *(longlong *)(param_1 + 8) = lVar2;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6;
  return;
}



