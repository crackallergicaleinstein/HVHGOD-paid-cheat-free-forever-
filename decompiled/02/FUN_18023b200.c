// FUN_18023b200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023b200 */

undefined8 FUN_18023b200(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 auVar10 [64];
  undefined8 local_58;
  char local_50;
  char local_4c;
  
  cVar2 = FUN_180278f80(param_1,param_2,*param_3,1);
  iVar4 = DAT_180c64234;
  if (cVar2 != '\0') {
    uVar7 = 0xffffffffffffffff;
    if ((DAT_180c64234 == 0) && (UVar5 = GetTickCount64(), DAT_180c64220 <= UVar5)) {
      local_58 = &DAT_1808ed300;
      iVar4 = FUN_1805f68d0(&DAT_1808ed300);
      if (iVar4 != 0) goto LAB_18023b518;
      if (DAT_1808ed34c == 0x7fffffff) {
        DAT_1808ed34c = 0x7ffffffe;
        goto LAB_18023b50d;
      }
      if ((DAT_180c64234 == 0) && (DAT_180c64220 <= UVar5)) {
        DAT_180c64234 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
        if (DAT_180c64234 == 0) {
          DAT_180c64220 = UVar5 + 1000;
        }
        else {
          DAT_180c64220 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c64234;
      FUN_1805f68fc(&DAT_1808ed300);
    }
    iVar6 = DAT_180c64230;
    uVar1 = *(undefined4 *)(iVar4 + DAT_180cc9330);
    if ((DAT_180c64230 == 0) && (UVar5 = GetTickCount64(), DAT_180c64228 <= UVar5)) {
      local_58 = &DAT_1808ed260;
      iVar4 = FUN_1805f68d0(&DAT_1808ed260);
      if (iVar4 != 0) goto LAB_18023b518;
      if (DAT_1808ed2ac == 0x7fffffff) {
        DAT_1808ed2ac = 0x7ffffffe;
        goto LAB_18023b50d;
      }
      if ((DAT_180c64230 == 0) && (DAT_180c64228 <= UVar5)) {
        DAT_180c64230 = FUN_1804174b0("C_BasePlayerWeapon",0xd9a9e18);
        if (DAT_180c64230 == 0) {
          DAT_180c64228 = UVar5 + 1000;
        }
        else {
          DAT_180c64228 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c64230;
      FUN_1805f68fc(&DAT_1808ed260);
    }
    iVar4 = DAT_180c64210;
    auVar10 = ZEXT464(*(uint *)(iVar6 + DAT_180cc9330));
    uVar9 = (ulonglong)*(uint *)(iVar6 + DAT_180cc9330);
    if (DAT_180c64210 == 0) {
      UVar5 = GetTickCount64();
      uVar9 = auVar10._0_8_;
      if (DAT_180c64218 <= UVar5) {
        local_58 = &DAT_1808ed2b0;
        iVar4 = FUN_1805f68d0(&DAT_1808ed2b0);
        if (iVar4 != 0) {
LAB_18023b518:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ed2fc == 0x7fffffff) {
          DAT_1808ed2fc = 0x7ffffffe;
LAB_18023b50d:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c64210 == 0) && (DAT_180c64218 <= UVar5)) {
          DAT_180c64210 = FUN_1804174b0("C_CSWeaponBase",0x8d5552cc);
          if (DAT_180c64210 == 0) {
            uVar7 = UVar5 + 1000;
          }
          DAT_180c64218 = uVar7;
        }
        iVar4 = DAT_180c64210;
        FUN_1805f68fc(&DAT_1808ed2b0);
        uVar9 = auVar10._0_8_;
      }
    }
    puVar8 = (undefined4 *)&DAT_00000044;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      puVar8 = (undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x54);
    }
    FUN_180234110(&local_58,uVar1,uVar9,*(undefined4 *)(iVar4 + DAT_180cc9330),*puVar8);
    if (((local_4c != '\0') && (local_50 != '\0')) &&
       (sVar3 = thunk_FUN_180624430(param_4), sVar3 < 1)) {
      if (((local_58._4_4_ <= (float)param_4) && ((float)param_4 < 1.0)) &&
         (cVar2 = FUN_180240f90(param_2), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



