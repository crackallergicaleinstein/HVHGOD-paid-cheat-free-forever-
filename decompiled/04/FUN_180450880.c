// FUN_180450880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450880 */

void FUN_180450880(void)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar2 = DAT_180bbb180;
  uVar6 = 1;
  if (DAT_180bbb178 != 0) {
    uVar6 = DAT_180bbb178;
  }
  for (; (uVar6 == DAT_180bbb178 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x666666666666666 - uVar6 < uVar6) {
      FUN_180450a60();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar3 = FUN_18015bca0(uVar6 * 8);
  lVar5 = uVar2 * 8;
  uVar4 = uVar6 >> 1;
  for (; uVar6 <= uVar4; uVar6 = uVar6 * 2) {
  }
  uVar6 = uVar6 - DAT_180bbb178;
  lVar7 = (DAT_180bbb178 * 8 - (lVar5 + DAT_180bbb170)) + DAT_180bbb170;
  FUN_18063aed0(lVar5 + lVar3,lVar5 + DAT_180bbb170,lVar7);
  lVar7 = lVar5 + lVar3 + lVar7;
  if (uVar6 < uVar2) {
    FUN_18063aed0(lVar7,DAT_180bbb170,uVar6 * 8);
    lVar7 = uVar6 * 8 + DAT_180bbb170;
    lVar5 = (lVar5 - lVar7) + DAT_180bbb170;
    FUN_18063aed0(lVar3,lVar7,lVar5);
    lVar5 = lVar5 + lVar3;
  }
  else {
    FUN_18063aed0(lVar7,DAT_180bbb170,lVar5);
    FUN_18063ab10(lVar5 + lVar7,0,(uVar6 - uVar2) * 8);
    lVar5 = lVar3;
  }
  FUN_18063ab10(lVar5,0);
  if (DAT_180bbb170 != 0) {
    if ((0xfff < DAT_180bbb178 * 8) &&
       (0x1f < (DAT_180bbb170 - *(longlong *)(DAT_180bbb170 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
  DAT_180bbb170 = lVar3;
  DAT_180bbb178 = DAT_180bbb178 + uVar6;
  return;
}



