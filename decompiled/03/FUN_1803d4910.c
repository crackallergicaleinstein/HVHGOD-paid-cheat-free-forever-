// FUN_1803d4910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d4910 */

longlong * FUN_1803d4910(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (param_2[1] - *param_2) / 0x18;
  if (uVar1 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar2 = FUN_18015bca0(uVar1 * 0x18);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + uVar1 * 0x18;
    lVar3 = param_2[1] - *param_2;
    FUN_18063aed0(lVar2,*param_2,lVar3);
    param_1[1] = lVar2 + (lVar3 / 0x18) * 0x18;
  }
  return param_1;
}



