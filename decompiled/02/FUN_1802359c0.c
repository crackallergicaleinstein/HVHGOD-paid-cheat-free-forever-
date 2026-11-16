// FUN_1802359c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802359c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802359c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  char cVar17;
  undefined1 in_ZMM6 [64];
  undefined1 auVar18 [64];
  undefined4 uVar19;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 local_78 [12];
  uint uStack_6c;
  undefined1 local_68 [24];
  ulonglong local_50;
  undefined1 local_38 [16];
  
  iVar7 = DAT_180c643a0;
  local_38 = in_ZMM6._0_16_;
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  uVar15 = 0xffffffffffffffff;
  if ((DAT_180c643a0 == 0) && (UVar10 = GetTickCount64(), DAT_180c643a8 <= UVar10)) {
    local_a8._0_8_ = &DAT_1808edb70;
    iVar7 = FUN_1805f68d0(&DAT_1808edb70);
    if (iVar7 != 0) goto LAB_180235e56;
    if (DAT_1808edbbc == 0x7fffffff) {
      DAT_1808edbbc = 0x7ffffffe;
      goto LAB_180235e4b;
    }
    if ((DAT_180c643a0 == 0) && (DAT_180c643a8 <= UVar10)) {
      DAT_180c643a0 = FUN_1804174b0("C_SmokeGrenadeProjectile",0x81a8b092);
      if (DAT_180c643a0 == 0) {
        DAT_180c643a8 = UVar10 + 1000;
      }
      else {
        DAT_180c643a8 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c643a0;
    FUN_1805f68fc(&DAT_1808edb70);
  }
  iVar8 = DAT_180c64398;
  if ((DAT_180c64398 == 0) && (UVar10 = GetTickCount64(), DAT_180c64390 <= UVar10)) {
    local_a8._0_8_ = &DAT_1808edad0;
    iVar8 = FUN_1805f68d0(&DAT_1808edad0);
    if (iVar8 != 0) goto LAB_180235e56;
    if (DAT_1808edb1c == 0x7fffffff) {
      DAT_1808edb1c = 0x7ffffffe;
      goto LAB_180235e4b;
    }
    if ((DAT_180c64398 == 0) && (DAT_180c64390 <= UVar10)) {
      DAT_180c64398 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c64398 == 0) {
        DAT_180c64390 = UVar10 + 1000;
      }
      else {
        DAT_180c64390 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c64398;
    FUN_1805f68fc(&DAT_1808edad0);
  }
  iVar9 = DAT_180c6439c;
  if ((DAT_180c6439c == 0) && (UVar10 = GetTickCount64(), DAT_180c64378 <= UVar10)) {
    local_a8._0_8_ = &DAT_1808eda80;
    iVar9 = FUN_1805f68d0(&DAT_1808eda80);
    if (iVar9 != 0) {
LAB_180235e56:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808edacc == 0x7fffffff) {
      DAT_1808edacc = 0x7ffffffe;
LAB_180235e4b:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6439c == 0) && (DAT_180c64378 <= UVar10)) {
      DAT_180c6439c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c6439c == 0) {
        uVar15 = UVar10 + 1000;
      }
      DAT_180c64378 = uVar15;
    }
    iVar9 = DAT_180c6439c;
    FUN_1805f68fc(&DAT_1808eda80);
  }
  if (((iVar7 != 0) && (iVar8 != 0)) && (iVar9 != 0)) {
    plVar11 = (longlong *)FUN_1803d44c0();
    plVar13 = (longlong *)plVar11[1];
    plVar11 = (longlong *)*plVar11;
    local_b0 = plVar13;
    if (plVar11 != plVar13) {
      uVar19 = 0;
      lVar16 = local_a8._0_8_;
      cVar17 = local_b8[0];
      do {
        if ((*plVar11 != 0) && ((int)plVar11[1] == 0x4e65f325)) {
          lVar14 = (longlong)iVar7 + *plVar11;
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          bVar3 = false;
          if (lVar14 != 0) {
            local_b8[0] = '\0';
            cVar5 = FUN_1804514f0(local_b8,lVar14,1);
            if (cVar5 == '\0') {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              cVar17 = local_b8[0];
            }
          }
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
          if ((bVar3) && (cVar17 != '\0')) {
            lVar12 = *plVar11;
            lVar14 = FUN_18017ea70();
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
            bVar3 = false;
            if (iVar8 + lVar12 != 0) {
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_a8._8_8_;
              local_a8 = auVar2 << 0x40;
              cVar5 = FUN_1804514f0(local_a8,iVar8 + lVar12,8);
              if (cVar5 == '\0') {
                bVar3 = false;
              }
              else {
                bVar3 = true;
                lVar16 = local_a8._0_8_;
              }
            }
            lVar12 = FUN_18017ea70();
            if (*(int *)(lVar12 + 4) != 0) {
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
            }
            if ((!bVar3) || (lVar16 == 0)) {
              uStack_6c = uStack_6c & 0xffffff00;
              auVar1._12_4_ = uStack_6c;
              auVar1._0_12_ = local_78;
            }
            else {
              lVar12 = FUN_18017ea70();
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
              if (iVar9 + lVar16 == 0) {
LAB_180235d57:
                uStack_7c = uStack_7c & 0xffffff00;
              }
              else {
                local_98 = uVar19;
                uStack_94 = uVar19;
                local_90 = uVar19;
                cVar5 = FUN_1804514f0(&local_98,iVar9 + lVar16,0xc);
                if (cVar5 == '\0') goto LAB_180235d57;
                local_88 = CONCAT44(uStack_94,local_98);
                uStack_80 = local_90;
                uStack_7c = CONCAT31(uStack_7c._1_3_,1);
              }
              lVar12 = FUN_18017ea70();
              if (*(int *)(lVar12 + 4) != 0) {
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
              }
              auVar1._8_4_ = uStack_80;
              auVar1._0_8_ = local_88;
              auVar1._12_4_ = uStack_7c;
            }
            auVar18 = ZEXT1664(auVar1);
            local_a8 = auVar1;
            if ((auVar1[0xc] != '\0') && (sVar6 = thunk_FUN_180624430(auVar1._0_8_), sVar6 < 1)) {
              auVar2 = vshufps_avx(auVar18._0_16_,auVar18._0_16_,0x55);
              sVar6 = thunk_FUN_180624430(auVar2._0_8_);
              if (sVar6 < 1) {
                sVar6 = thunk_FUN_180624430(auVar1._8_4_);
                puVar4 = DAT_180b8f7f8;
                if (sVar6 < 1) {
                  if (DAT_180b8f7f8 == DAT_180b8f800) {
                    FUN_180241ef0(&DAT_180b8f7f0,DAT_180b8f7f8,local_a8);
                  }
                  else {
                    *DAT_180b8f7f8 = auVar18._0_8_;
                    *(int *)(puVar4 + 1) = auVar1._8_4_;
                    DAT_180b8f7f8 = (undefined8 *)((longlong)DAT_180b8f7f8 + 0xc);
                  }
                }
              }
            }
          }
          plVar13 = local_b0;
        }
        plVar11 = plVar11 + 3;
      } while (plVar11 != plVar13);
    }
    FUN_1801abba0(local_68);
  }
}



