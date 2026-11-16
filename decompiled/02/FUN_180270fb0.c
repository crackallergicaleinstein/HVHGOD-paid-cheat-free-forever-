// FUN_180270fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180270fb0 */

void FUN_180270fb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  
  iVar2 = DAT_180c64ec8;
  if (((*(char *)(param_1 + 0x23b8) != '\0') && (*(char *)(param_1 + 0x23ba) == '\0')) &&
     (*(longlong *)(param_1 + 8) != 0)) {
    if ((DAT_180c64ec8 == 0) && (UVar3 = GetTickCount64(), DAT_180c64ec0 <= UVar3)) {
      iVar2 = FUN_1805f68d0(&DAT_1808f0ea0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f0eec == 0x7fffffff) {
        DAT_1808f0eec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64ec8 == 0) && (DAT_180c64ec0 <= UVar3)) {
        DAT_180c64ec8 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c64ec8 == 0) {
          DAT_180c64ec0 = UVar3 + 1000;
        }
        else {
          DAT_180c64ec0 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c64ec8;
      FUN_1805f68fc(&DAT_1808f0ea0);
    }
    lVar1 = *(longlong *)((longlong)iVar2 + 0x80 + *(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x36c) << 5;
      FUN_18063aed0(param_1 + 0x1370,lVar1,lVar4);
      FUN_18063aed0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x370,lVar4);
      *(undefined1 *)(param_1 + 0x23ba) = 1;
    }
  }
  return;
}



