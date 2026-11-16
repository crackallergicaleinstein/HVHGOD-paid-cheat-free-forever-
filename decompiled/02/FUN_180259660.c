// FUN_180259660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180259660 */

ulonglong FUN_180259660(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ULONGLONG UVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined1 auVar12 [64];
  undefined8 local_48;
  char local_40;
  char local_3c;
  
  iVar6 = DAT_180c64850;
  uVar9 = 0xffffffffffffffff;
  if ((DAT_180c64850 == 0) && (UVar7 = GetTickCount64(), DAT_180c64860 <= UVar7)) {
    local_48 = &DAT_1808ef540;
    iVar6 = FUN_1805f68d0(&DAT_1808ef540);
    if (iVar6 != 0) goto LAB_180259960;
    if (DAT_1808ef58c == 0x7fffffff) {
      DAT_1808ef58c = 0x7ffffffe;
      goto LAB_180259955;
    }
    if ((DAT_180c64850 == 0) && (DAT_180c64860 <= UVar7)) {
      DAT_180c64850 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
      if (DAT_180c64850 == 0) {
        DAT_180c64860 = UVar7 + 1000;
      }
      else {
        DAT_180c64860 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c64850;
    FUN_1805f68fc(&DAT_1808ef540);
  }
  iVar8 = DAT_180c64848;
  uVar1 = *(undefined4 *)((longlong)iVar6 + *(longlong *)*param_1);
  if ((DAT_180c64848 == 0) && (UVar7 = GetTickCount64(), DAT_180c64840 <= UVar7)) {
    local_48 = &DAT_1808ef4f0;
    iVar6 = FUN_1805f68d0(&DAT_1808ef4f0);
    if (iVar6 != 0) goto LAB_180259960;
    if (DAT_1808ef53c == 0x7fffffff) {
      DAT_1808ef53c = 0x7ffffffe;
      goto LAB_180259955;
    }
    if ((DAT_180c64848 == 0) && (DAT_180c64840 <= UVar7)) {
      DAT_180c64848 = FUN_1804174b0("C_BasePlayerWeapon",0xd9a9e18);
      if (DAT_180c64848 == 0) {
        DAT_180c64840 = UVar7 + 1000;
      }
      else {
        DAT_180c64840 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c64848;
    FUN_1805f68fc(&DAT_1808ef4f0);
  }
  iVar6 = DAT_180c6484c;
  auVar12 = ZEXT464(*(uint *)((longlong)iVar8 + *(longlong *)*param_1));
  uVar11 = (ulonglong)*(uint *)((longlong)iVar8 + *(longlong *)*param_1);
  if (DAT_180c6484c == 0) {
    UVar7 = GetTickCount64();
    uVar11 = auVar12._0_8_;
    if (DAT_180c64838 <= UVar7) {
      local_48 = &DAT_1808ef4a0;
      iVar6 = FUN_1805f68d0(&DAT_1808ef4a0);
      if (iVar6 != 0) {
LAB_180259960:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ef4ec == 0x7fffffff) {
        DAT_1808ef4ec = 0x7ffffffe;
LAB_180259955:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6484c == 0) && (DAT_180c64838 <= UVar7)) {
        DAT_180c6484c = FUN_1804174b0("C_CSWeaponBase",0x8d5552cc);
        if (DAT_180c6484c == 0) {
          uVar9 = UVar7 + 1000;
        }
        DAT_180c64838 = uVar9;
      }
      iVar6 = DAT_180c6484c;
      FUN_1805f68fc(&DAT_1808ef4a0);
      uVar11 = auVar12._0_8_;
    }
  }
  plVar2 = (longlong *)*param_1;
  lVar3 = *(longlong *)param_1[1];
  lVar4 = *(longlong *)(lVar3 + 0x40);
  puVar10 = (undefined4 *)&DAT_00000044;
  if (lVar4 != 0) {
    puVar10 = (undefined4 *)(lVar4 + 0x54);
  }
  FUN_180234110(&local_48,uVar1,uVar11,*(undefined4 *)((longlong)iVar6 + *plVar2),*puVar10);
  if (((local_3c == '\0') || (local_40 == '\0')) || (local_48._4_4_ <= 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((*(char *)(param_1[2] + 0x380) == '\0') && (!bVar5)) ||
     (*(short *)((longlong)plVar2 + 0x1c) == 0x40)) {
    uVar9 = param_1[2] & 0xffffffffffffff00;
  }
  else {
    uVar9 = FUN_180255970(param_1[3],lVar3,param_1[4],param_2);
  }
  return uVar9;
}



