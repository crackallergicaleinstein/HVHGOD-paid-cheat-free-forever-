// FUN_180277ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180277ea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180277ea0(undefined8 param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [48];
  undefined8 local_188;
  longlong local_180;
  char *local_178;
  longlong local_170;
  char *local_168;
  longlong local_160;
  undefined *local_158;
  undefined1 local_148 [264];
  ulonglong local_40;
  
  iVar4 = DAT_180c64c80;
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  if ((DAT_180c64c80 == 0) && (UVar6 = GetTickCount64(), DAT_180c64c78 <= UVar6)) {
    local_188 = &DAT_1808f01e0;
    iVar4 = FUN_1805f68d0(&DAT_1808f01e0);
    if (iVar4 != 0) goto LAB_18027850a;
    if (DAT_1808f022c == 0x7fffffff) {
      DAT_1808f022c = 0x7ffffffe;
      goto LAB_1802784ff;
    }
    if ((DAT_180c64c80 == 0) && (DAT_180c64c78 <= UVar6)) {
      DAT_180c64c80 = FUN_1804174b0("C_CSWeaponBase",0xc32ca614);
      if (DAT_180c64c80 == 0) {
        DAT_180c64c78 = UVar6 + 1000;
      }
      else {
        DAT_180c64c78 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64c80;
    FUN_1805f68fc(&DAT_1808f01e0);
  }
  iVar5 = DAT_180c64c68;
  if ((DAT_180c64c68 == 0) && (UVar6 = GetTickCount64(), DAT_180c64c70 <= UVar6)) {
    local_188 = &DAT_1808f0230;
    iVar5 = FUN_1805f68d0(&DAT_1808f0230);
    if (iVar5 != 0) goto LAB_18027850a;
    if (DAT_1808f027c == 0x7fffffff) {
      DAT_1808f027c = 0x7ffffffe;
      goto LAB_1802784ff;
    }
    if ((DAT_180c64c68 == 0) && (DAT_180c64c70 <= UVar6)) {
      DAT_180c64c68 = FUN_1804174b0("C_CSWeaponBase",0xd779e87b);
      if (DAT_180c64c68 == 0) {
        DAT_180c64c70 = UVar6 + 1000;
      }
      else {
        DAT_180c64c70 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c64c68;
    FUN_1805f68fc(&DAT_1808f0230);
  }
  puVar9 = DAT_180cc9330;
  if (DAT_180cc9330 == (undefined *)0x0) {
  }
  if (iVar4 < 1) {
  }
  if (iVar5 < iVar4) {
  }
  uVar12 = (longlong)(iVar5 - iVar4) + 4;
  if (0x100 < uVar12) {
  }
  FUN_18063ab10(local_148,0,0x100);
  lVar13 = (longlong)iVar4;
  local_180 = lVar13;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  cVar2 = FUN_1804514f0(local_148,puVar9 + lVar13,uVar12);
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if (cVar2 == '\0') {
  }
  uVar11 = 1000;
  if (param_2 != '\0') {
    local_188 = DAT_180cc9330;
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar10 = DAT_1808f0188;
    lVar7 = DAT_1808da460;
    if (DAT_1808f0188 == DAT_1808da460) {
      lVar8 = DAT_180c64c58;
      if (DAT_180c64c58 == 0) goto LAB_18027811d;
    }
    else {
LAB_18027811d:
      UVar6 = GetTickCount64();
      if ((lVar10 == lVar7) && (UVar6 < DAT_180c64c60)) {
        lVar8 = 0;
      }
      else {
        local_158 = &DAT_1808f0190;
        iVar4 = FUN_1805f68d0(&DAT_1808f0190);
        if (iVar4 != 0) goto LAB_18027850a;
        if (DAT_1808f01dc == 0x7fffffff) {
          DAT_1808f01dc = 0x7ffffffe;
          goto LAB_1802784ff;
        }
        if (DAT_1808f0188 == lVar7) {
          if ((DAT_180c64c58 == 0) && (DAT_180c64c60 <= UVar6)) goto LAB_1802781aa;
        }
        else {
          DAT_1808f0178 = 1000;
LAB_1802781aa:
          lVar13 = -1;
          do {
            local_170 = lVar13 + 1;
            pcVar1 = "lient.dll:405741564883EC??488BF9E8????????4C8BF04885C0" + lVar13;
            lVar13 = local_170;
          } while (*pcVar1 != '\0');
          local_178 = "client.dll:405741564883EC??488BF9E8????????4C8BF04885C0";
          local_168 = "patterns::weapon_update_accuracy";
          local_160 = 0x20;
          DAT_180c64c58 = FUN_1800e5d20(&local_168,&local_178);
          DAT_1808f0188 = lVar7;
          DAT_180c64c60 = 0xffffffffffffffff;
          if (DAT_180c64c58 == 0) {
            DAT_180c64c60 = DAT_1808f0178 + UVar6;
            if (DAT_1808f0178 < 60000) {
              DAT_1808f0178 = DAT_1808f0178 * 2;
            }
            else {
              DAT_1808f0178 = 60000;
            }
          }
          else {
            DAT_1808f0178 = 1000;
          }
        }
        lVar8 = DAT_180c64c58;
        FUN_1805f68fc(&DAT_1808f0190);
      }
      lVar13 = local_180;
    }
    cVar2 = FUN_1801a5f80(lVar8,local_188);
    if (cVar2 == '\0') {
      puVar9 = DAT_180cc9330 + lVar13;
      if (puVar9 == (undefined *)0x0) {
      }
      if (uVar12 == 0) {
      }
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      FUN_1804514c0(puVar9,local_148,uVar12);
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) == 0) {
      }
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1808f0180;
  lVar13 = DAT_1808da460;
  if ((DAT_1808f0180 == DAT_1808da460) && (lVar10 = DAT_180c64c50, DAT_180c64c50 != 0))
  goto LAB_180278424;
  UVar6 = GetTickCount64();
  if ((lVar7 == lVar13) && (UVar6 < DAT_180c64c40)) {
    lVar10 = 0;
    goto LAB_180278424;
  }
  local_158 = &DAT_1808f0120;
  iVar4 = FUN_1805f68d0(&DAT_1808f0120);
  if (iVar4 != 0) {
LAB_18027850a:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f016c == 0x7fffffff) {
    DAT_1808f016c = 0x7ffffffe;
LAB_1802784ff:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808f0180 == lVar13) {
    if ((DAT_180c64c50 == 0) && (DAT_180c64c40 <= UVar6)) goto LAB_180278390;
  }
  else {
    DAT_1808f0170 = 1000;
LAB_180278390:
    lVar7 = -1;
    do {
      local_160 = lVar7 + 1;
      pcVar1 = "lient.dll:498BF0488BEA488BF9E8????????488BD8450F57C04885C00F84-18" + lVar7;
      lVar7 = local_160;
    } while (*pcVar1 != '\0');
    local_168 = "client.dll:498BF0488BEA488BF9E8????????488BD8450F57C04885C00F84-18";
    local_178 = "patterns::get_inaccuracy";
    local_170 = 0x18;
    DAT_180c64c50 = FUN_1800e5d20(&local_178,&local_168);
    DAT_1808f0180 = lVar13;
    DAT_180c64c40 = 0xffffffffffffffff;
    if (DAT_180c64c50 == 0) {
      DAT_180c64c40 = DAT_1808f0170 + UVar6;
      uVar11 = DAT_1808f0170 * 2;
      if (59999 < DAT_1808f0170) {
        uVar11 = 60000;
      }
    }
    DAT_1808f0170 = uVar11;
  }
  lVar10 = DAT_180c64c50;
  FUN_1805f68fc(&DAT_1808f0120);
LAB_180278424:
  puVar9 = DAT_180cc9330;
  cVar2 = FUN_1804513c0(lVar10,1,2);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    FUN_18027b310(&local_188,lVar10,puVar9);
    lVar13 = FUN_18017ea70();
    cVar2 = local_188._4_1_;
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
  }
  puVar9 = DAT_180cc9330 + local_180;
  if ((puVar9 != (undefined *)0x0) && (uVar12 != 0)) {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    cVar3 = FUN_1804514c0(puVar9,local_148,uVar12);
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if ((cVar3 != '\0') && (cVar2 != '\0')) {
      thunk_FUN_180624430((ulonglong)local_188 & 0xffffffff);
    }
  }
}



