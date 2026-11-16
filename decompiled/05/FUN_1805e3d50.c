// FUN_1805e3d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e3d50 */

bool FUN_1805e3d50(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 < param_1) {
    uVar1 = (uint)((param_2 << 4) / param_1);
  }
  else {
    uVar1 = 0xf;
  }
  iVar3 = (int)(param_1 >> 8);
  lVar2 = (ulonglong)uVar1 * 0x10;
  uVar1 = iVar3 * *(int *)(&DAT_1806879cc + lVar2) + *(int *)(&DAT_1806879c8 + lVar2);
  return (uVar1 >> 5) + uVar1 <
         (uint)(iVar3 * *(int *)(&DAT_1806879c4 + lVar2) + *(int *)(&DAT_1806879c0 + lVar2));
}



