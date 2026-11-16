// FUN_180278520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180278520 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180278520(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auStack_1c8 [32];
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined *local_190;
  char *local_188;
  longlong local_180;
  char *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  iVar4 = DAT_180c64c48;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  uVar12 = 0xffffffffffffffff;
  local_168 = param_2;
  if ((DAT_180c64c48 == 0) && (UVar6 = GetTickCount64(), DAT_180c64c28 <= UVar6)) {
    local_190 = &DAT_1808f00d0;
    iVar4 = FUN_1805f68d0(&DAT_1808f00d0);
    if (iVar4 != 0) goto LAB_180278f66;
    if (DAT_1808f011c == 0x7fffffff) {
      DAT_1808f011c = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64c48 == 0) && (DAT_180c64c28 <= UVar6)) {
      DAT_180c64c48 = FUN_1804174b0("C_CSWeaponBase",0xc32ca614);
      if (DAT_180c64c48 == 0) {
        DAT_180c64c28 = UVar6 + 1000;
      }
      else {
        DAT_180c64c28 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64c48;
    FUN_1805f68fc(&DAT_1808f00d0);
  }
  iVar5 = DAT_180c64c38;
  if ((DAT_180c64c38 == 0) && (UVar6 = GetTickCount64(), DAT_180c64c30 <= UVar6)) {
    local_190 = &DAT_1808f0030;
    iVar5 = FUN_1805f68d0(&DAT_1808f0030);
    if (iVar5 != 0) goto LAB_180278f66;
    if (DAT_1808f007c == 0x7fffffff) {
      DAT_1808f007c = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64c38 == 0) && (DAT_180c64c30 <= UVar6)) {
      DAT_180c64c38 = FUN_1804174b0("C_CSWeaponBase",0xd779e87b);
      if (DAT_180c64c38 == 0) {
        DAT_180c64c30 = UVar6 + 1000;
      }
      else {
        DAT_180c64c30 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c64c38;
    FUN_1805f68fc(&DAT_1808f0030);
  }
  lVar8 = DAT_180cc9330;
  if (DAT_180cc9330 == 0) {
  }
  if (param_2 == 0) {
  }
  if (iVar4 < 1) {
  }
  if (iVar5 < iVar4) {
  }
  puVar10 = (undefined *)((longlong)(iVar5 - iVar4) + 4);
  if ((undefined *)0x100 < puVar10) {
  }
  local_190 = puVar10;
  FUN_18063ab10(local_158,0,0x100);
  local_160 = (longlong)iVar4;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  cVar3 = FUN_1804514f0(local_158,iVar4 + lVar8,puVar10);
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  iVar4 = DAT_180c64c18;
  if (cVar3 == '\0') {
  }
  if ((DAT_180c64c18 == 0) && (UVar6 = GetTickCount64(), DAT_180c64c20 <= UVar6)) {
    local_198 = &DAT_1808f0080;
    iVar4 = FUN_1805f68d0(&DAT_1808f0080);
    if (iVar4 != 0) goto LAB_180278f66;
    if (DAT_1808f00cc == 0x7fffffff) {
      DAT_1808f00cc = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64c18 == 0) && (DAT_180c64c20 <= UVar6)) {
      DAT_180c64c18 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
      if (DAT_180c64c18 == 0) {
        DAT_180c64c20 = UVar6 + 1000;
      }
      else {
        DAT_180c64c20 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64c18;
    FUN_1805f68fc(&DAT_1808f0080);
  }
  iVar5 = DAT_180c64c10;
  uVar15 = *(undefined8 *)(iVar4 + param_2);
  local_1a0 = *(undefined4 *)((longlong)iVar4 + 8 + param_2);
  if ((DAT_180c64c10 == 0) && (UVar6 = GetTickCount64(), DAT_180c64c08 <= UVar6)) {
    local_198 = &DAT_1808effe0;
    iVar4 = FUN_1805f68d0(&DAT_1808effe0);
    if (iVar4 != 0) goto LAB_180278f66;
    if (DAT_1808f002c == 0x7fffffff) {
      DAT_1808f002c = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64c10 == 0) && (DAT_180c64c08 <= UVar6)) {
      DAT_180c64c10 = FUN_1804174b0("C_BaseEntity",0x466c684a);
      if (DAT_180c64c10 == 0) {
        DAT_180c64c08 = UVar6 + 1000;
      }
      else {
        DAT_180c64c08 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c64c10;
    FUN_1805f68fc(&DAT_1808effe0);
  }
  iVar4 = DAT_180c64c14;
  uVar2 = *(uint *)(iVar5 + param_2);
  local_198 = (undefined *)CONCAT44(local_198._4_4_,uVar2);
  if ((DAT_180c64c14 == 0) && (UVar6 = GetTickCount64(), DAT_180c64bf0 <= UVar6)) {
    local_1a8 = &DAT_1808eff90;
    iVar4 = FUN_1805f68d0(&DAT_1808eff90);
    if (iVar4 != 0) goto LAB_180278f66;
    if (DAT_1808effdc == 0x7fffffff) {
      DAT_1808effdc = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64c14 == 0) && (DAT_180c64bf0 <= UVar6)) {
      DAT_180c64c14 = FUN_1804174b0("C_BaseEntity",0x466c684a);
      if (DAT_180c64c14 == 0) {
        DAT_180c64bf0 = UVar6 + 1000;
      }
      else {
        DAT_180c64bf0 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64c14;
    FUN_1805f68fc(&DAT_1808eff90);
  }
  *(uint *)(iVar4 + param_2) = uVar2 & 0xffffefff;
  iVar4 = DAT_180c64c00;
  if ((DAT_180c64c00 == 0) && (UVar6 = GetTickCount64(), DAT_180c64bf8 <= UVar6)) {
    local_1a8 = &DAT_1808eff30;
    iVar4 = FUN_1805f68d0(&DAT_1808eff30);
    if (iVar4 != 0) goto LAB_180278f66;
    if (DAT_1808eff7c == 0x7fffffff) {
      DAT_1808eff7c = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64c00 == 0) && (DAT_180c64bf8 <= UVar6)) {
      DAT_180c64c00 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
      if (DAT_180c64c00 == 0) {
        DAT_180c64bf8 = UVar6 + 1000;
      }
      else {
        DAT_180c64bf8 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64c00;
    FUN_1805f68fc(&DAT_1808eff30);
  }
  *(undefined8 *)(iVar4 + param_2) = *param_3;
  *(undefined4 *)((longlong)iVar4 + 8 + param_2) = *(undefined4 *)(param_3 + 1);
  lVar8 = DAT_180cc9330;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808eff80;
  lVar7 = DAT_1808da460;
  uVar13 = 1000;
  if ((DAT_1808eff80 == DAT_1808da460) && (pcVar11 = (code *)DAT_180c64be0, DAT_180c64be0 != 0)) {
LAB_180278bc2:
    (*pcVar11)(lVar8);
  }
  else {
    UVar6 = GetTickCount64();
    if ((lVar9 != lVar7) || (DAT_180c64be8 <= UVar6)) {
      local_1a8 = &DAT_1808efed0;
      iVar4 = FUN_1805f68d0(&DAT_1808efed0);
      if (iVar4 != 0) goto LAB_180278f66;
      if (DAT_1808eff1c == 0x7fffffff) {
        DAT_1808eff1c = 0x7ffffffe;
        goto LAB_180278f5b;
      }
      if (DAT_1808eff80 == lVar7) {
        if ((DAT_180c64be0 == 0) && (DAT_180c64be8 <= UVar6)) goto LAB_180278b25;
      }
      else {
        DAT_1808efec8 = 1000;
LAB_180278b25:
        lVar9 = -1;
        do {
          local_180 = lVar9 + 1;
          pcVar1 = "lient.dll:405741564883EC??488BF9E8????????4C8BF04885C0" + lVar9;
          lVar9 = local_180;
        } while (*pcVar1 != '\0');
        local_188 = "client.dll:405741564883EC??488BF9E8????????4C8BF04885C0";
        local_178 = "patterns::weapon_update_accuracy";
        local_170 = 0x20;
        DAT_180c64be0 = FUN_1800e5d20(&local_178,&local_188);
        DAT_1808eff80 = lVar7;
        DAT_180c64be8 = 0xffffffffffffffff;
        if (DAT_180c64be0 == 0) {
          DAT_180c64be8 = DAT_1808efec8 + UVar6;
          bVar14 = 59999 < DAT_1808efec8;
          DAT_1808efec8 = DAT_1808efec8 * 2;
          if (bVar14) {
            DAT_1808efec8 = 60000;
          }
        }
        else {
          DAT_1808efec8 = 1000;
        }
      }
      pcVar11 = (code *)DAT_180c64be0;
      FUN_1805f68fc(&DAT_1808efed0);
      if (pcVar11 != (code *)0x0) goto LAB_180278bc2;
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1808eff20;
  lVar8 = DAT_1808da460;
  if ((DAT_1808eff20 == DAT_1808da460) && (pcVar11 = (code *)DAT_180c64bd8, DAT_180c64bd8 != 0)) {
LAB_180278c17:
    (*pcVar11)(DAT_180cc9330,0,0);
  }
  else {
    UVar6 = GetTickCount64();
    if ((lVar7 != lVar8) || (DAT_180c64bc8 <= UVar6)) {
      local_1a8 = &DAT_1808efe70;
      iVar4 = FUN_1805f68d0(&DAT_1808efe70);
      if (iVar4 != 0) goto LAB_180278f66;
      if (DAT_1808efebc == 0x7fffffff) {
        DAT_1808efebc = 0x7ffffffe;
        goto LAB_180278f5b;
      }
      if (DAT_1808eff20 == lVar8) {
        if ((DAT_180c64bd8 == 0) && (DAT_180c64bc8 <= UVar6)) goto LAB_180278d15;
      }
      else {
        DAT_1808efec0 = 1000;
LAB_180278d15:
        lVar7 = -1;
        do {
          local_170 = lVar7 + 1;
          pcVar1 = "lient.dll:498BF0488BEA488BF9E8????????488BD8450F57C04885C00F84-18" + lVar7;
          lVar7 = local_170;
        } while (*pcVar1 != '\0');
        local_178 = "client.dll:498BF0488BEA488BF9E8????????488BD8450F57C04885C00F84-18";
        local_188 = "patterns::get_inaccuracy";
        local_180 = 0x18;
        DAT_180c64bd8 = FUN_1800e5d20(&local_188,&local_178);
        DAT_1808eff20 = lVar8;
        DAT_180c64bc8 = 0xffffffffffffffff;
        if (DAT_180c64bd8 == 0) {
          DAT_180c64bc8 = UVar6 + DAT_1808efec0;
          uVar13 = DAT_1808efec0 * 2;
          if (59999 < DAT_1808efec0) {
            uVar13 = 60000;
          }
        }
        DAT_1808efec0 = uVar13;
      }
      pcVar11 = (code *)DAT_180c64bd8;
      FUN_1805f68fc(&DAT_1808efe70);
      if (pcVar11 != (code *)0x0) goto LAB_180278c17;
    }
  }
  iVar4 = DAT_180c64bd0;
  if ((DAT_180c64bd0 == 0) && (UVar6 = GetTickCount64(), DAT_180c64bb0 <= UVar6)) {
    local_1a8 = &DAT_1808efe20;
    iVar4 = FUN_1805f68d0(&DAT_1808efe20);
    if (iVar4 != 0) goto LAB_180278f66;
    if (DAT_1808efe6c == 0x7fffffff) {
      DAT_1808efe6c = 0x7ffffffe;
      goto LAB_180278f5b;
    }
    if ((DAT_180c64bd0 == 0) && (DAT_180c64bb0 <= UVar6)) {
      DAT_180c64bd0 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
      if (DAT_180c64bd0 == 0) {
        DAT_180c64bb0 = UVar6 + 1000;
      }
      else {
        DAT_180c64bb0 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64bd0;
    FUN_1805f68fc(&DAT_1808efe20);
  }
  lVar8 = local_168;
  *(undefined8 *)(iVar4 + local_168) = uVar15;
  *(undefined4 *)((longlong)iVar4 + 8 + local_168) = local_1a0;
  iVar4 = DAT_180c64bc0;
  if ((DAT_180c64bc0 == 0) && (UVar6 = GetTickCount64(), DAT_180c64bb8 <= UVar6)) {
    local_1a8 = &DAT_1808efd80;
    iVar4 = FUN_1805f68d0(&DAT_1808efd80);
    if (iVar4 != 0) {
LAB_180278f66:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808efdcc == 0x7fffffff) {
      DAT_1808efdcc = 0x7ffffffe;
LAB_180278f5b:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c64bc0 == 0) && (DAT_180c64bb8 <= UVar6)) {
      DAT_180c64bc0 = FUN_1804174b0("C_BaseEntity",0x466c684a);
      if (DAT_180c64bc0 == 0) {
        uVar12 = UVar6 + 1000;
      }
      DAT_180c64bb8 = uVar12;
    }
    iVar4 = DAT_180c64bc0;
    FUN_1805f68fc(&DAT_1808efd80);
  }
  puVar10 = local_190;
  *(undefined4 *)(iVar4 + lVar8) = local_198._0_4_;
  lVar8 = local_160 + DAT_180cc9330;
  if ((lVar8 != 0) && (local_190 != (undefined *)0x0)) {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1804514c0(lVar8,local_158,puVar10);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
  }
}



