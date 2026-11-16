// FUN_1802f47d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f47d0 */

void FUN_1802f47d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  ULONGLONG UVar4;
  
  iVar3 = DAT_180c6ee40;
  if ((DAT_180c6ee40 == 0) && (UVar4 = GetTickCount64(), DAT_180c6ee48 <= UVar4)) {
    iVar3 = FUN_1805f68d0(&DAT_1808fe390);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fe3dc == 0x7fffffff) {
      DAT_1808fe3dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6ee40 == 0) && (DAT_180c6ee48 <= UVar4)) {
      DAT_180c6ee40 = FUN_1804174b0("C_BaseEntity",0x7cf77892);
      if (DAT_180c6ee40 == 0) {
        DAT_180c6ee48 = UVar4 + 1000;
      }
      else {
        DAT_180c6ee48 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c6ee40;
    FUN_1805f68fc(&DAT_1808fe390);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
  puVar2 = *(undefined8 **)(param_1 + 8);
  *puVar2 = *(undefined8 *)(lVar1 + iVar3);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar1 + 8 + (longlong)iVar3);
  return;
}



