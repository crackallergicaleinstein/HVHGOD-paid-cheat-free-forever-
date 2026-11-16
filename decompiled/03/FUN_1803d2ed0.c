// FUN_1803d2ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d2ed0 */

longlong FUN_1803d2ed0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ULONGLONG UVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = DAT_180c71e38;
  uVar6 = 0xffffffffffffffff;
  if ((DAT_180c71e38 == 0) && (UVar4 = GetTickCount64(), DAT_180c71e30 <= UVar4)) {
    iVar2 = FUN_1805f68d0(&DAT_1809ba0a0);
    if (iVar2 != 0) goto LAB_1803d309d;
    if (DAT_1809ba0ec == 0x7fffffff) {
      DAT_1809ba0ec = 0x7ffffffe;
      goto LAB_1803d3092;
    }
    if ((DAT_180c71e38 == 0) && (DAT_180c71e30 <= UVar4)) {
      DAT_180c71e38 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c71e38 == 0) {
        DAT_180c71e30 = UVar4 + 1000;
      }
      else {
        DAT_180c71e30 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c71e38;
    FUN_1805f68fc(&DAT_1809ba0a0);
  }
  iVar5 = DAT_180c71e3c;
  lVar1 = *(longlong *)(iVar2 + param_2);
  if (lVar1 != 0) {
    if ((DAT_180c71e3c == 0) && (UVar4 = GetTickCount64(), DAT_180c71e40 <= UVar4)) {
      iVar2 = FUN_1805f68d0(&DAT_1809ba0f0);
      if (iVar2 != 0) {
LAB_1803d309d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809ba13c == 0x7fffffff) {
        DAT_1809ba13c = 0x7ffffffe;
LAB_1803d3092:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c71e3c == 0) && (DAT_180c71e40 <= UVar4)) {
        DAT_180c71e3c = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c71e3c == 0) {
          uVar6 = UVar4 + 1000;
        }
        DAT_180c71e40 = uVar6;
      }
      iVar5 = DAT_180c71e3c;
      FUN_1805f68fc(&DAT_1809ba0f0);
    }
    lVar1 = *(longlong *)((longlong)iVar5 + 0x80 + lVar1);
    if (lVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        uVar3 = FUN_1803d2d50();
        *param_3 = uVar3;
      }
      return lVar1;
    }
  }
  return 0;
}



