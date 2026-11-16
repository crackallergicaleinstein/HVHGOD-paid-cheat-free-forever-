// FUN_180255970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180255970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180255970(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ULONGLONG UVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auStack_e8 [32];
  char local_c8;
  char local_c7;
  char local_c6;
  char local_c5;
  undefined *local_c0;
  int local_b8 [2];
  undefined1 local_b0 [16];
  uint *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  uint local_80 [2];
  ulonglong local_78;
  
  auVar21 = local_b0;
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_b0._0_4_ = local_b0._1_4_ << 8;
  local_b0._4_4_ = 0xffffffff;
  local_b0._12_4_ = auVar21._12_4_;
  local_b0._8_4_ = 0;
  auVar27._12_4_ = 0;
  auVar27._0_12_ = ZEXT812(0);
  auVar27 = auVar27 << 0x20;
  auVar28 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar21 = vinsertps_avx(local_b0,auVar27,0x30);
  *(undefined1 (*) [16])(param_1 + 0x78) = auVar21;
  auVar21 = vunpcklps_avx(auVar27,auVar27);
  *(longlong *)(param_1 + 0x88) = auVar21._0_8_;
  if (param_4 != '\0') {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    lVar14 = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      lVar14 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
    if (lVar14 == 0) {
    }
    if (*param_3 == 0) {
    }
    if (DAT_180cc9330 == 0) {
    }
    local_80[0] = *(uint *)(lVar14 + 0x44);
    local_b0._8_8_ = param_1;
    local_b0._0_8_ = &local_88;
    local_a0 = local_80;
    iVar8 = DAT_180c64920;
    local_98 = param_3;
    local_90 = param_1;
    local_88 = param_2;
    if (DAT_180c64920 == 0) {
      UVar13 = GetTickCount64();
      if (UVar13 < DAT_180c64918) {
        iVar8 = 0;
      }
      else {
        local_c0 = &DAT_1808ef9a0;
        iVar8 = FUN_1805f68d0(&DAT_1808ef9a0);
        if (iVar8 != 0) goto LAB_180256360;
        if (DAT_1808ef9ec == 0x7fffffff) {
          DAT_1808ef9ec = 0x7ffffffe;
          goto LAB_180256375;
        }
        if ((DAT_180c64920 == 0) && (DAT_180c64918 <= UVar13)) {
          DAT_180c64920 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
          if (DAT_180c64920 == 0) {
            DAT_180c64918 = UVar13 + 1000;
          }
          else {
            DAT_180c64918 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c64920;
        FUN_1805f68fc(&DAT_1808ef9a0);
      }
    }
    uVar18 = (undefined4)((ulonglong)param_3 >> 0x20);
    iVar9 = DAT_180c64924;
    if (DAT_180c64924 == 0) {
      UVar13 = GetTickCount64();
      if (UVar13 < DAT_180c64900) {
        iVar9 = 0;
      }
      else {
        local_c0 = &DAT_1808ef950;
        iVar9 = FUN_1805f68d0(&DAT_1808ef950);
        if (iVar9 != 0) goto LAB_180256360;
        if (DAT_1808ef99c == 0x7fffffff) {
          DAT_1808ef99c = 0x7ffffffe;
          goto LAB_180256375;
        }
        if ((DAT_180c64924 == 0) && (DAT_180c64900 <= UVar13)) {
          DAT_180c64924 = FUN_1804174b0("C_BasePlayerWeapon",0xd9a9e18);
          if (DAT_180c64924 == 0) {
            DAT_180c64900 = UVar13 + 1000;
          }
          else {
            DAT_180c64900 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c64924;
        FUN_1805f68fc(&DAT_1808ef950);
      }
    }
    iVar19 = DAT_180c64910;
    if (DAT_180c64910 == 0) {
      UVar13 = GetTickCount64();
      if (UVar13 < DAT_180c64908) {
        iVar19 = 0;
      }
      else {
        local_c0 = &DAT_1808ef8b0;
        iVar19 = FUN_1805f68d0(&DAT_1808ef8b0);
        if (iVar19 != 0) goto LAB_180256360;
        if (DAT_1808ef8fc == 0x7fffffff) {
          DAT_1808ef8fc = 0x7ffffffe;
          goto LAB_180256375;
        }
        if ((DAT_180c64910 == 0) && (DAT_180c64908 <= UVar13)) {
          DAT_180c64910 = FUN_1804174b0("C_CSWeaponBase",0x8d5552cc);
          if (DAT_180c64910 == 0) {
            DAT_180c64908 = UVar13 + 1000;
          }
          else {
            DAT_180c64908 = 0xffffffffffffffff;
          }
        }
        iVar19 = DAT_180c64910;
        FUN_1805f68fc(&DAT_1808ef8b0);
      }
    }
    iVar10 = DAT_180c648f0;
    if (DAT_180c648f0 == 0) {
      UVar13 = GetTickCount64();
      if (UVar13 < DAT_180c648f8) {
        iVar10 = 0;
      }
      else {
        local_c0 = &DAT_1808ef900;
        iVar10 = FUN_1805f68d0(&DAT_1808ef900);
        if (iVar10 != 0) goto LAB_180256360;
        if (DAT_1808ef94c == 0x7fffffff) {
          DAT_1808ef94c = 0x7ffffffe;
          goto LAB_180256375;
        }
        if ((DAT_180c648f0 == 0) && (DAT_180c648f8 <= UVar13)) {
          DAT_180c648f0 = FUN_1804174b0("C_CSWeaponBase",0x184f0553);
          if (DAT_180c648f0 == 0) {
            DAT_180c648f8 = UVar13 + 1000;
          }
          else {
            DAT_180c648f8 = 0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c648f0;
        FUN_1805f68fc(&DAT_1808ef900);
      }
    }
    iVar11 = DAT_180c648e8;
    if (DAT_180c648e8 == 0) {
      UVar13 = GetTickCount64();
      if (UVar13 < DAT_180c648e0) {
        iVar11 = 0;
      }
      else {
        local_c0 = &DAT_1808ef860;
        iVar11 = FUN_1805f68d0(&DAT_1808ef860);
        if (iVar11 != 0) goto LAB_180256360;
        if (DAT_1808ef8ac == 0x7fffffff) {
          DAT_1808ef8ac = 0x7ffffffe;
          goto LAB_180256375;
        }
        if ((DAT_180c648e8 == 0) && (DAT_180c648e0 <= UVar13)) {
          DAT_180c648e8 = FUN_1804174b0("C_BasePlayerWeapon",0xd0250969);
          if (DAT_180c648e8 == 0) {
            DAT_180c648e0 = UVar13 + 1000;
          }
          else {
            DAT_180c648e0 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c648e8;
        FUN_1805f68fc(&DAT_1808ef860);
      }
    }
    iVar12 = DAT_180c648ec;
    if ((DAT_180c648ec == 0) && (UVar13 = GetTickCount64(), DAT_180c648d8 <= UVar13)) {
      local_c0 = &DAT_1808ef810;
      iVar12 = FUN_1805f68d0(&DAT_1808ef810);
      if (iVar12 != 0) {
LAB_180256360:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ef85c == 0x7fffffff) {
        DAT_1808ef85c = 0x7ffffffe;
LAB_180256375:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c648ec == 0) && (DAT_180c648d8 <= UVar13)) {
        DAT_180c648ec = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
        if (DAT_180c648ec == 0) {
          DAT_180c648d8 = UVar13 + 1000;
        }
        else {
          DAT_180c648d8 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c648ec;
      FUN_1805f68fc(&DAT_1808ef810);
    }
    if (((((iVar8 == 0) || (iVar9 == 0)) || (iVar19 == 0)) || ((iVar10 == 0 || (iVar11 == 0)))) ||
       (iVar12 == 0)) {
      FUN_180256380(local_b0,"schema",0xffffffff,0);
    }
    else {
      lVar16 = iVar8 + DAT_180cc9330;
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (lVar16 == 0) {
        local_c7 = '\0';
        local_b8[0] = (uint)local_c0;
      }
      else {
        local_b8[0] = 0;
        uVar18 = 0;
        cVar5 = FUN_1804514f0(local_b8,lVar16,4);
        if (cVar5 == '\0') {
          local_b8[0] = (uint)local_c0;
          local_c7 = '\0';
        }
        else {
          local_c7 = '\x01';
        }
      }
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      lVar16 = iVar9 + DAT_180cc9330;
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (lVar16 == 0) {
        local_c6 = '\0';
      }
      else {
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,auVar28._0_4_);
        uVar18 = 0;
        cVar5 = FUN_1804514f0(&local_c0,lVar16,4);
        local_c6 = '\0';
        if (cVar5 != '\0') {
          local_c6 = '\x01';
        }
      }
      auVar26 = ZEXT464((uint)local_c0);
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      lVar16 = iVar19 + DAT_180cc9330;
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (lVar16 == 0) {
        local_c5 = '\0';
      }
      else {
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,auVar28._0_4_);
        uVar18 = 0;
        cVar5 = FUN_1804514f0(&local_c0,lVar16,4);
        local_c5 = '\0';
        if (cVar5 != '\0') {
          local_c5 = '\x01';
        }
      }
      auVar24 = ZEXT464((uint)local_c0);
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      lVar16 = iVar10 + DAT_180cc9330;
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (lVar16 == 0) {
        bVar2 = false;
      }
      else {
        local_c8 = '\0';
        uVar18 = 0;
        cVar5 = FUN_1804514f0(&local_c8,lVar16,1);
        if (cVar5 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      cVar5 = local_c8;
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      lVar16 = iVar11 + DAT_180cc9330;
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (lVar16 == 0) {
        bVar3 = false;
      }
      else {
        local_c0 = (undefined *)((ulonglong)local_c0 & 0xffffffff00000000);
        uVar18 = 0;
        cVar6 = FUN_1804514f0(&local_c0,lVar16,4);
        if (cVar6 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      iVar8 = (uint)local_c0;
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      lVar14 = *local_98;
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      bVar4 = false;
      if (iVar12 + lVar14 != 0) {
        local_c0 = (undefined *)((ulonglong)local_c0 & 0xffffffff00000000);
        uVar18 = 0;
        cVar6 = FUN_1804514f0(&local_c0,iVar12 + lVar14,4);
        if (cVar6 == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      iVar9 = (uint)local_c0;
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      if (((local_c7 == '\0') || (local_c6 == '\0')) ||
         ((local_c5 == '\0' || (((!bVar2 || (!bVar3)) || (!bVar4)))))) {
        FUN_180256380(local_b0,&DAT_1807cfbe8,0xffffffff,0);
      }
      else {
        sVar7 = thunk_FUN_180624430(auVar26._0_8_);
        if ((((0 < sVar7) || (sVar7 = thunk_FUN_180624430(auVar24._0_8_), 0 < sVar7)) ||
            ((fVar25 = auVar26._0_4_, fVar25 < -1.0 ||
             ((2.0 < fVar25 || (fVar23 = auVar24._0_4_, fVar23 < -2.0)))))) || (2.0 < fVar23)) {
          FUN_180256380(local_b0,"timing_range",0xffffffff,0);
        }
        else {
          dVar1 = (double)fVar25 + (double)local_b8[0] + (double)fVar23;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = dVar1;
          auVar21 = vroundsd_avx(ZEXT816(0),auVar21,1);
          dVar20 = auVar21._0_8_;
          if ((dVar20 < -2147483648.0) || (2147483647.0 < dVar20)) {
            FUN_180256380(local_b0,"timing_overflow",0xffffffff,0);
          }
          else {
            dVar1 = dVar1 - dVar20;
            auVar22._0_4_ = (float)dVar1;
            auVar22._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
            auVar22._8_8_ = 0;
            iVar19 = *(int *)(local_88 + 0x30) + -1;
            if (-1 < iVar19) {
              lVar14 = *(longlong *)
                        (*(longlong *)(local_88 + 0x38) + (longlong)*(int *)(local_88 + 0x30) * 8);
              lVar16 = 0;
              if (lVar14 != 0) {
                lVar16 = lVar14 + 0x10;
              }
              if (lVar16 != 0) {
                if ((cVar5 != '\0') || (iVar8 < 1)) {
                  pcVar15 = "empty";
                  if (cVar5 != '\0') {
                    pcVar15 = "reload";
                  }
                  FUN_180256380(local_b0,pcVar15,CONCAT44(uVar18,(int)dVar20));
                }
                uVar17 = (uint)dVar20;
                if (((int)local_80[0] < (int)uVar17) || (iVar9 <= DAT_180cc9680)) {
                  FUN_180256380(local_b0,"cooldown");
                }
                *(ulonglong *)(local_88 + 0x60) =
                     *(ulonglong *)(local_88 + 0x60) & 0xfffffffffffffffe;
                *(ulonglong *)(local_88 + 0x68) = *(ulonglong *)(local_88 + 0x68) | 1;
                *(ulonglong *)(local_88 + 0x70) =
                     *(ulonglong *)(local_88 + 0x70) & 0xfffffffffffffffe;
                *(uint *)(local_88 + 0x20) = *(uint *)(local_88 + 0x20) | 0x20;
                *(undefined4 *)(local_88 + 0x4c) = 0xffffffff;
                *(undefined1 *)(local_90 + 0x78) = 1;
                *(int *)(local_90 + 0x7c) = iVar19;
                *(uint *)(local_90 + 0x80) = uVar17;
                auVar21 = vpcmpeqd_avx(ZEXT416(local_80[0]),ZEXT416(uVar17));
                auVar21 = vblendvps_avx(auVar28._0_16_,auVar22,auVar21);
                *(int *)(local_90 + 0x84) = auVar21._0_4_;
                *(float *)(local_90 + 0x88) = fVar25;
                *(float *)(local_90 + 0x8c) = fVar23;
              }
            }
            FUN_180256380(local_b0,"history",CONCAT44(uVar18,(int)dVar20));
          }
        }
      }
    }
  }
}



