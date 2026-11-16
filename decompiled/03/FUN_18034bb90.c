// FUN_18034bb90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034bb90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034bb90(char *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  ULONGLONG UVar6;
  undefined1 (*pauVar7) [16];
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar17;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined *local_b8 [2];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (param_2 == 0) {
    return;
  }
  if (param_1[1] == '\0') {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar8 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar8 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (puVar8 == (uint *)0x0) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_a0 = _DAT_180bb8890;
  puStack_98 = puRam0000000180bb8898;
  uStack_90 = uRam0000000180bb88a0;
  uStack_88 = uRam0000000180bb88a8;
  local_60 = _DAT_180bb88b0;
  uStack_58 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar4 = puStack_98;
  uVar12 = 0xffffffffffffffff;
  local_a8 = puStack_98;
  if (puStack_98 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    iVar5 = DAT_180c6f674;
    if (DAT_180c6f674 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6f660) {
        uVar11 = *puVar4;
        goto LAB_18034bd16;
      }
      local_b8[0] = &DAT_180900690;
      iVar5 = FUN_1805f68d0(&DAT_180900690);
      if (iVar5 != 0) goto LAB_18034c033;
      if (DAT_1809006dc == 0x7fffffff) {
        DAT_1809006dc = 0x7ffffffe;
        goto LAB_18034c048;
      }
      if ((DAT_180c6f674 == 0) && (DAT_180c6f660 <= UVar6)) {
        DAT_180c6f674 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f674 == 0) {
          DAT_180c6f660 = UVar6 + 1000;
        }
        else {
          DAT_180c6f660 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c6f674;
      FUN_1805f68fc(&DAT_180900690);
    }
    uVar11 = *(undefined8 *)((longlong)iVar5 + (longlong)puVar4);
  }
LAB_18034bd16:
  lVar1 = *(longlong *)(puVar8 + 0xc);
  uVar3 = DAT_180b0dfc8._4_4_;
  if ((lVar1 != 0) && (lVar1 != -0x10)) {
    uVar3 = *(uint *)(lVar1 + 0x1c);
  }
  auVar13 = ZEXT416(uVar3);
  if (DAT_180b8e622 == '\0') {
    if (*(int *)(param_1 + 0x44) < 0) {
      auVar16 = ZEXT1664(auVar13);
      pauVar7 = (undefined1 (*) [16])FUN_18033d780(&local_a0);
      fVar15 = auVar16._0_4_;
    }
    else {
      auVar16 = ZEXT1664(auVar13);
      pauVar7 = (undefined1 (*) [16])FUN_18033d670(local_b8);
      fVar15 = auVar16._0_4_;
    }
    auVar13 = *pauVar7;
    auVar2 = vshufps_avx(auVar13,auVar13,0xaa);
    fVar14 = auVar2._0_4_;
  }
  else {
    auVar16 = ZEXT1664(auVar13);
    pauVar7 = (undefined1 (*) [16])FUN_18033d780(&local_c8);
    fVar14 = auVar16._0_4_;
    auVar13 = *pauVar7;
    fVar15 = fVar14;
  }
  auVar2 = vshufps_avx(auVar13,auVar13,0x55);
  if ((param_1[0x11] == '\0') || (DAT_180b8e622 != '\0')) {
    if ((*(int *)(param_1 + 0xc) < 1) || ((param_1[0x10] == '\0' || (DAT_180b8e622 != '\0')))) {
      if (fVar14 != fVar15) {
        *puVar8 = *puVar8 | 4;
        puVar9 = (uint *)0x0;
        if (*(longlong *)(puVar8 + 0xc) != 0) {
          puVar9 = (uint *)(*(longlong *)(puVar8 + 0xc) + 0x10);
        }
        if (puVar9 != (uint *)0x0) {
          *puVar9 = *puVar9 | 2;
          puVar9[3] = (uint)fVar14;
        }
      }
      FUN_18033cc00(param_2,uVar11,param_1[4],auVar13._0_8_,CONCAT44(uVar17,auVar2._0_4_));
    }
    else {
      FUN_18033d070(param_2,uVar11,param_1[4],*(undefined4 *)(param_1 + 0x3c),&DAT_180b8e118);
    }
  }
  else {
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    iVar5 = DAT_180c6f658;
    if (DAT_180c6f658 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6f650) {
        iVar5 = 0;
      }
      else {
        local_b8[0] = &DAT_180900730;
        iVar5 = FUN_1805f68d0(&DAT_180900730);
        if (iVar5 != 0) goto LAB_18034c033;
        if (DAT_18090077c == 0x7fffffff) {
          DAT_18090077c = 0x7ffffffe;
          goto LAB_18034c048;
        }
        if ((DAT_180c6f658 == 0) && (DAT_180c6f650 <= UVar6)) {
          DAT_180c6f658 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c6f658 == 0) {
            DAT_180c6f650 = UVar6 + 1000;
          }
          else {
            DAT_180c6f650 = 0xffffffffffffffff;
          }
        }
        iVar5 = DAT_180c6f658;
        FUN_1805f68fc(&DAT_180900730);
      }
    }
    lVar1 = *(longlong *)((longlong)iVar5 + (longlong)local_a8);
    if (lVar1 != 0) {
      iVar5 = DAT_180c6f670;
      if (DAT_180c6f670 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c6f668) {
          iVar5 = 0;
        }
        else {
          local_b8[0] = &DAT_1809006e0;
          iVar5 = FUN_1805f68d0(&DAT_1809006e0);
          if (iVar5 != 0) {
LAB_18034c033:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_18090072c == 0x7fffffff) {
            DAT_18090072c = 0x7ffffffe;
LAB_18034c048:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f670 == 0) && (DAT_180c6f668 <= UVar6)) {
            DAT_180c6f670 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
            if (DAT_180c6f670 == 0) {
              uVar12 = UVar6 + 1000;
            }
            DAT_180c6f668 = uVar12;
          }
          iVar5 = DAT_180c6f670;
          FUN_1805f68fc(&DAT_1809006e0);
        }
      }
      uVar12 = *(ulonglong *)(iVar5 + lVar1);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar12;
      local_c8 = (undefined4)uVar12;
      auVar13 = vshufps_avx(auVar13,auVar13,0x55);
      local_c4 = auVar13._0_4_;
      local_c0 = *(undefined4 *)((longlong)iVar5 + 8 + lVar1);
    }
    uVar10 = 1;
    if (1 < *(int *)(param_1 + 8)) {
      uVar10 = *(undefined4 *)(param_1 + 8);
    }
    FUN_18033d2f0(param_2,uVar11,param_1[4],param_1 + 0x14,CONCAT44(uVar17,uVar10),&local_c8,
                  &DAT_180b8e118);
  }
  return;
}



