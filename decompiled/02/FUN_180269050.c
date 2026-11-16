// FUN_180269050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180269050 */

void FUN_180269050(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ULONGLONG UVar5;
  
  FUN_180273950(&DAT_180cc93e8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
  iVar4 = DAT_180c64930;
  if ((DAT_180c64930 == 0) && (UVar5 = GetTickCount64(), DAT_180c64928 <= UVar5)) {
    iVar4 = FUN_1805f68d0(&DAT_1808ef9f0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808efa3c == 0x7fffffff) {
      DAT_1808efa3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c64930 == 0) && (DAT_180c64928 <= UVar5)) {
      DAT_180c64930 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
      if (DAT_180c64930 == 0) {
        DAT_180c64928 = UVar5 + 1000;
      }
      else {
        DAT_180c64928 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64930;
    FUN_1805f68fc(&DAT_1808ef9f0);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)iVar4);
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar3 + 0xc) = *(undefined8 *)(lVar2 + iVar4);
  *(undefined4 *)(lVar3 + 0x14) = uVar1;
  return;
}



