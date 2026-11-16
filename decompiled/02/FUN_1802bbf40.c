// FUN_1802bbf40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bbf40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bbf40(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  float param_5,longlong param_6)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  short sVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auStack_278 [32];
  float local_258;
  float local_250;
  undefined4 local_248;
  float local_240;
  undefined1 *local_238;
  float local_230;
  float local_228;
  float local_218 [6];
  float local_200;
  undefined4 local_1fc;
  float local_1f8 [6];
  float local_1e0 [6];
  undefined1 local_1c8 [16];
  undefined1 local_1b8;
  char cStack_1b7;
  undefined2 uStack_1b6;
  undefined4 uStack_1b4;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  undefined8 *local_178;
  float *local_170;
  undefined1 *local_168;
  float *local_160;
  float local_158 [2];
  undefined8 local_150;
  longlong local_148;
  float local_140 [2];
  float local_138 [4];
  undefined8 local_128;
  undefined8 local_120;
  float local_118 [2];
  float local_110 [2];
  float local_108 [2];
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  if (DAT_180b0d018 == '\0') {
    DAT_180c71a40 = 0.0;
    DAT_180c71a44 = 0.0;
    DAT_180c71a48 = 0.0;
    DAT_180c71a50 = 0.0;
    DAT_180c71a54 = 0;
  }
  uVar13 = 0xffffffffffffffff;
  iVar12 = DAT_180c6e868;
  local_200 = param_4;
  local_1fc = param_3;
  local_100 = param_2;
  if (DAT_180c6e868 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6e850) {
      iVar12 = 0;
    }
    else {
      local_128 = (undefined8 *)&DAT_1808f57e0;
      iVar12 = FUN_1805f68d0(&DAT_1808f57e0);
      if (iVar12 != 0) goto LAB_1802bd45e;
      if (DAT_1808f582c == 0x7fffffff) {
        DAT_1808f582c = 0x7ffffffe;
        goto LAB_1802bd453;
      }
      if ((DAT_180c6e868 == 0) && (DAT_180c6e850 <= UVar8)) {
        DAT_180c6e868 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
        if (DAT_180c6e868 == 0) {
          DAT_180c6e850 = UVar8 + 1000;
        }
        else {
          DAT_180c6e850 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c6e868;
      FUN_1805f68fc(&DAT_1808f57e0);
    }
  }
  bVar1 = *(byte *)(iVar12 + param_6);
  fVar14 = 0.1;
  local_218[4] = 0.1;
  auVar22 = ZEXT864(0);
  local_218[0] = 0.0;
  auVar21 = ZEXT464((uint)DAT_180bbae00);
  local_218[2] = DAT_180bbae00;
  sVar7 = thunk_FUN_180624430(DAT_180bbae00);
  if (sVar7 < 1) {
    pfVar11 = local_218;
    if (auVar22._0_4_ <= auVar21._0_4_) {
      pfVar11 = local_218 + 2;
    }
    pfVar10 = local_218 + 4;
    if (auVar21._0_4_ <= fVar14) {
      pfVar10 = pfVar11;
    }
    auVar30 = ZEXT464((uint)*pfVar10);
  }
  else {
    auVar30 = ZEXT864(0);
  }
  local_158[0] = auVar30._0_4_;
  fVar14 = 30.0;
  local_140[0] = 30.0;
  auVar29 = ZEXT464(0x3f800000);
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
  auVar24 = ZEXT464((uint)DAT_180b0d100);
  local_138[0] = DAT_180b0d100;
  sVar7 = thunk_FUN_180624430(DAT_180b0d100);
  if (sVar7 < 1) {
    pfVar11 = (float *)&local_128;
    if (auVar29._0_4_ <= auVar24._0_4_) {
      pfVar11 = local_138;
    }
    pfVar10 = local_140;
    if (auVar24._0_4_ <= fVar14) {
      pfVar10 = pfVar11;
    }
    fVar14 = *pfVar10;
  }
  else {
    fVar14 = 10.0;
  }
  auVar23 = vminss_avx(auVar29._0_16_,ZEXT416((uint)(fVar14 * auVar30._0_4_)));
  auVar16 = vpcmpeqd_avx(ZEXT116(bVar1),SUB6416(ZEXT464(0),0));
  auVar16 = vblendvps_avx(auVar29._0_16_,auVar22._0_16_,auVar16);
  auVar24._0_8_ = FUN_180242260(DAT_180c71a40,auVar16._0_8_,auVar23._0_8_);
  auVar24._8_56_ = extraout_var;
  auVar25 = ZEXT1664(auVar24._0_16_);
  DAT_180c71a40 = (float)auVar24._0_8_;
  if (DAT_180c71a40 < 0.01) {
    DAT_180c71a50 = auVar22._0_4_;
    DAT_180c71a54 = 0;
  }
  DAT_180c71a54 = DAT_180c71a54 + 1;
  if ((1 < DAT_180c71a54) || (DAT_180c71a50 <= auVar22._0_4_)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  fVar31 = 0.5;
  local_118[0] = 0.5;
  fVar14 = auVar21._0_4_;
  if ((DAT_180b0d080 != '\0') && (bVar5)) {
    DAT_180c71a54 = 0;
    iVar12 = DAT_180c6e858;
    if (DAT_180c6e858 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c6e860) {
        iVar12 = 0;
      }
      else {
        local_128 = (undefined8 *)&DAT_1808f5740;
        iVar12 = FUN_1805f68d0(&DAT_1808f5740);
        if (iVar12 != 0) goto LAB_1802bd45e;
        if (DAT_1808f578c == 0x7fffffff) {
          DAT_1808f578c = 0x7ffffffe;
          goto LAB_1802bd453;
        }
        if ((DAT_180c6e858 == 0) && (DAT_180c6e860 <= UVar8)) {
          DAT_180c6e858 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
          if (DAT_180c6e858 == 0) {
            DAT_180c6e860 = UVar8 + 1000;
          }
          else {
            DAT_180c6e860 = 0xffffffffffffffff;
          }
        }
        iVar12 = DAT_180c6e858;
        FUN_1805f68fc(&DAT_1808f5740);
      }
    }
    lVar9 = *(longlong *)(iVar12 + param_6);
    if (lVar9 != 0) {
      iVar12 = DAT_180c6e844;
      if (DAT_180c6e844 == 0) {
        UVar8 = GetTickCount64();
        if (UVar8 < DAT_180c6e848) {
          iVar12 = 0;
        }
        else {
          local_128 = (undefined8 *)&DAT_1808f5790;
          iVar12 = FUN_1805f68d0(&DAT_1808f5790);
          if (iVar12 != 0) goto LAB_1802bd45e;
          if (DAT_1808f57dc == 0x7fffffff) {
            DAT_1808f57dc = 0x7ffffffe;
            goto LAB_1802bd453;
          }
          if ((DAT_180c6e844 == 0) && (DAT_180c6e848 <= UVar8)) {
            DAT_180c6e844 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
            if (DAT_180c6e844 == 0) {
              DAT_180c6e848 = UVar8 + 1000;
            }
            else {
              DAT_180c6e848 = 0xffffffffffffffff;
            }
          }
          iVar12 = DAT_180c6e844;
          FUN_1805f68fc(&DAT_1808f5790);
        }
      }
      iVar12 = *(int *)(iVar12 + lVar9);
      if (((iVar12 != 0) && (iVar12 != -1)) && (lVar9 = FUN_1803d4150(), lVar9 != 0)) {
        iVar12 = DAT_180c6e830;
        if (DAT_180c6e830 == 0) {
          UVar8 = GetTickCount64();
          if (UVar8 < DAT_180c6e838) {
            iVar12 = 0;
          }
          else {
            local_128 = (undefined8 *)&DAT_1808f56f0;
            iVar12 = FUN_1805f68d0(&DAT_1808f56f0);
            if (iVar12 != 0) goto LAB_1802bd45e;
            if (DAT_1808f573c == 0x7fffffff) {
              DAT_1808f573c = 0x7ffffffe;
              goto LAB_1802bd453;
            }
            if ((DAT_180c6e830 == 0) && (DAT_180c6e838 <= UVar8)) {
              DAT_180c6e830 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
              if (DAT_180c6e830 == 0) {
                DAT_180c6e838 = UVar8 + 1000;
              }
              else {
                DAT_180c6e838 = 0xffffffffffffffff;
              }
            }
            iVar12 = DAT_180c6e830;
            FUN_1805f68fc(&DAT_1808f56f0);
          }
        }
        lVar3 = *(longlong *)((longlong)iVar12 + 8 + lVar9);
        if (lVar3 != 0) {
          iVar12 = DAT_180c6e840;
          if (DAT_180c6e840 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e818) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f56a0;
              iVar12 = FUN_1805f68d0(&DAT_1808f56a0);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f56ec == 0x7fffffff) {
                DAT_1808f56ec = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e840 == 0) && (DAT_180c6e818 <= UVar8)) {
                DAT_180c6e840 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
                if (DAT_180c6e840 == 0) {
                  DAT_180c6e818 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e818 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e840;
              FUN_1805f68fc(&DAT_1808f56a0);
            }
          }
          local_150 = *(undefined8 *)(iVar12 + param_6);
          local_110[0] = *(float *)((longlong)iVar12 + 8 + param_6);
          iVar12 = DAT_180c6e820;
          if (DAT_180c6e820 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e828) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f5600;
              iVar12 = FUN_1805f68d0(&DAT_1808f5600);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f564c == 0x7fffffff) {
                DAT_1808f564c = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e820 == 0) && (DAT_180c6e828 <= UVar8)) {
                DAT_180c6e820 = FUN_1804174b0("C_CSWeaponBase",0xaa0e449e);
                if (DAT_180c6e820 == 0) {
                  DAT_180c6e828 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e828 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e820;
              FUN_1805f68fc(&DAT_1808f5600);
            }
          }
          uVar2 = *(uint *)(iVar12 + lVar9);
          iVar12 = DAT_180c6e80c;
          if (DAT_180c6e80c == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e810) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f5650;
              iVar12 = FUN_1805f68d0(&DAT_1808f5650);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f569c == 0x7fffffff) {
                DAT_1808f569c = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e80c == 0) && (DAT_180c6e810 <= UVar8)) {
                DAT_180c6e80c = FUN_1804174b0("C_CSWeaponBase",0x7fb6de25);
                if (DAT_180c6e80c == 0) {
                  DAT_180c6e810 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e810 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e80c;
              FUN_1805f68fc(&DAT_1808f5650);
            }
          }
          fVar14 = *(float *)(iVar12 + lVar9);
          iVar12 = DAT_180c6e7f8;
          if (DAT_180c6e7f8 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e800) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f55b0;
              iVar12 = FUN_1805f68d0(&DAT_1808f55b0);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f55fc == 0x7fffffff) {
                DAT_1808f55fc = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e7f8 == 0) && (DAT_180c6e800 <= UVar8)) {
                DAT_180c6e7f8 = FUN_1804174b0("C_CSWeaponBase",0x533b6902);
                if (DAT_180c6e7f8 == 0) {
                  DAT_180c6e800 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e800 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e7f8;
              FUN_1805f68fc(&DAT_1808f55b0);
            }
          }
          fVar31 = *(float *)(iVar12 + lVar9);
          iVar12 = DAT_180c6e808;
          if (DAT_180c6e808 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e7e0) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f5560;
              iVar12 = FUN_1805f68d0(&DAT_1808f5560);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f55ac == 0x7fffffff) {
                DAT_1808f55ac = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e808 == 0) && (DAT_180c6e7e0 <= UVar8)) {
                DAT_180c6e808 = FUN_1804174b0("CCSWeaponBaseVData",0xec4c9592);
                if (DAT_180c6e808 == 0) {
                  DAT_180c6e7e0 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e7e0 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e808;
              FUN_1805f68fc(&DAT_1808f5560);
            }
          }
          auVar21 = ZEXT464(*(uint *)(iVar12 + lVar3));
          auVar30 = ZEXT464(*(uint *)((longlong)iVar12 + 4 + lVar3));
          iVar12 = DAT_180c6e7e8;
          if (DAT_180c6e7e8 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e7f0) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f54c0;
              iVar12 = FUN_1805f68d0(&DAT_1808f54c0);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f550c == 0x7fffffff) {
                DAT_1808f550c = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e7e8 == 0) && (DAT_180c6e7f0 <= UVar8)) {
                DAT_180c6e7e8 = FUN_1804174b0("CCSWeaponBaseVData",0x724cfcb0);
                if (DAT_180c6e7e8 == 0) {
                  DAT_180c6e7f0 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e7f0 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e7e8;
              FUN_1805f68fc(&DAT_1808f54c0);
            }
          }
          auVar24 = ZEXT464(*(uint *)(iVar12 + lVar3));
          auVar25 = ZEXT464(*(uint *)((longlong)iVar12 + 4 + lVar3));
          iVar12 = DAT_180c6e7d4;
          if (DAT_180c6e7d4 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e7d8) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f5510;
              iVar12 = FUN_1805f68d0(&DAT_1808f5510);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f555c == 0x7fffffff) {
                DAT_1808f555c = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e7d4 == 0) && (DAT_180c6e7d8 <= UVar8)) {
                DAT_180c6e7d4 = FUN_1804174b0("CCSWeaponBaseVData",0xca4877b7);
                if (DAT_180c6e7d4 == 0) {
                  DAT_180c6e7d8 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e7d8 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e7d4;
              FUN_1805f68fc(&DAT_1808f5510);
            }
          }
          auVar16 = auVar24._0_16_;
          auVar28 = auVar25._0_16_;
          auVar17 = auVar30._0_16_;
          auVar23 = auVar21._0_16_;
          auVar26 = ZEXT464(*(uint *)(iVar12 + lVar3));
          iVar12 = DAT_180c6e7c0;
          if (DAT_180c6e7c0 == 0) {
            UVar8 = GetTickCount64();
            auVar16 = auVar24._0_16_;
            auVar28 = auVar25._0_16_;
            auVar17 = auVar30._0_16_;
            auVar23 = auVar21._0_16_;
            if (UVar8 < DAT_180c6e7c8) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f5470;
              iVar12 = FUN_1805f68d0(&DAT_1808f5470);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f54bc == 0x7fffffff) {
                DAT_1808f54bc = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e7c0 == 0) && (DAT_180c6e7c8 <= UVar8)) {
                DAT_180c6e7c0 = FUN_1804174b0("CCSWeaponBaseVData",0x7f1cc92d);
                if (DAT_180c6e7c0 == 0) {
                  DAT_180c6e7c8 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e7c8 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e7c0;
              FUN_1805f68fc(&DAT_1808f5470);
              auVar16 = auVar24._0_16_;
              auVar28 = auVar25._0_16_;
              auVar17 = auVar30._0_16_;
              auVar23 = auVar21._0_16_;
            }
          }
          auVar24 = ZEXT464(*(uint *)(iVar12 + lVar3));
          auVar4 = vpcmpeqd_avx(ZEXT416(uVar2),SUB6416(ZEXT464(0),0));
          auVar23 = vblendvps_avx(auVar17,auVar23,auVar4);
          auVar21 = ZEXT1664(auVar23);
          auVar23 = vpcmpeqd_avx(ZEXT416(uVar2),SUB6416(ZEXT464(0),0));
          auVar16 = vblendvps_avx(auVar28,auVar16,auVar23);
          auVar30 = ZEXT1664(auVar16);
          fVar15 = local_150._4_4_ * local_150._4_4_ + (float)local_150 * (float)local_150;
          if (fVar15 == auVar22._0_4_) {
            auVar25 = ZEXT864(0);
          }
          else if (fVar15 < 0.0) {
            auVar25._0_8_ = FUN_18061e150(fVar15);
            auVar25._8_56_ = extraout_var_00;
            auVar25 = ZEXT1664(auVar25._0_16_);
          }
          else {
            auVar25 = ZEXT464((uint)SQRT(fVar15));
          }
          iVar12 = DAT_180c6e7d0;
          if (DAT_180c6e7d0 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6e7a8) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f5420;
              iVar12 = FUN_1805f68d0(&DAT_1808f5420);
              if (iVar12 != 0) goto LAB_1802bd45e;
              if (DAT_1808f546c == 0x7fffffff) {
                DAT_1808f546c = 0x7ffffffe;
                goto LAB_1802bd453;
              }
              if ((DAT_180c6e7d0 == 0) && (DAT_180c6e7a8 <= UVar8)) {
                DAT_180c6e7d0 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
                if (DAT_180c6e7d0 == 0) {
                  DAT_180c6e7a8 = UVar8 + 1000;
                }
                else {
                  DAT_180c6e7a8 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180c6e7d0;
              FUN_1805f68fc(&DAT_1808f5420);
            }
          }
          auVar16 = auVar25._0_16_;
          fVar15 = auVar21._0_4_;
          uVar2 = *(uint *)(iVar12 + param_6);
          iVar12 = DAT_180c6e7b0;
          if (DAT_180c6e7b0 == 0) {
            UVar8 = GetTickCount64();
            auVar16 = auVar25._0_16_;
            fVar15 = auVar21._0_4_;
            if (UVar8 < DAT_180c6e7b8) {
              iVar12 = 0;
            }
            else {
              local_128 = (undefined8 *)&DAT_1808f53d0;
              iVar12 = FUN_1805f68d0(&DAT_1808f53d0);
              if (iVar12 != 0) {
LAB_1802bd45e:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808f541c == 0x7fffffff) {
                DAT_1808f541c = 0x7ffffffe;
LAB_1802bd453:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c6e7b0 == 0) && (DAT_180c6e7b8 <= UVar8)) {
                DAT_180c6e7b0 = FUN_1804174b0("C_CSPlayerPawn",0x9441c788);
                if (DAT_180c6e7b0 == 0) {
                  uVar13 = UVar8 + 1000;
                }
                DAT_180c6e7b8 = uVar13;
              }
              iVar12 = DAT_180c6e7b0;
              FUN_1805f68fc(&DAT_1808f53d0);
              auVar16 = auVar25._0_16_;
              fVar15 = auVar21._0_4_;
            }
          }
          fVar27 = auVar30._0_4_;
          fVar19 = fVar15 * 0.34;
          fVar15 = fVar15 * 0.95;
          fVar20 = auVar22._0_4_;
          if (fVar19 == fVar15) {
            auVar16 = vcmpss_avx(ZEXT416((uint)fVar15),auVar16,2);
            auVar16 = vblendvps_avx(auVar22._0_16_,auVar29._0_16_,auVar16);
            uVar13 = auVar16._0_8_;
          }
          else {
            local_140[0] = auVar29._0_4_;
            local_128 = (undefined8 *)CONCAT44(local_128._4_4_,fVar20);
            local_138[0] = (auVar16._0_4_ - fVar19) / (fVar15 - fVar19);
            pfVar11 = (float *)&local_128;
            if (fVar20 <= local_138[0]) {
              pfVar11 = local_138;
            }
            pfVar10 = local_140;
            if (local_138[0] <= auVar29._0_4_) {
              pfVar10 = pfVar11;
            }
            uVar13 = (ulonglong)(uint)*pfVar10;
          }
          fVar15 = 0.0;
          auVar21 = ZEXT464(0x3e800000);
          if (fVar20 < (float)uVar13) {
            if (*(char *)(iVar12 + param_6) == '\0') {
              uVar13 = FUN_180637bd0(uVar13,auVar21._0_8_);
              fVar27 = auVar30._0_4_;
            }
            fVar15 = (float)uVar13 * fVar27;
          }
          fVar19 = 0.0;
          if ((uVar2 & 1) == 0) {
            if ((DAT_180cd3e28 & 1) == 0) {
              DAT_180cd3e28 = DAT_180cd3e28 | 1;
              local_150 = CONCAT44(local_150._4_4_,0x7a7ef71d);
              local_148 = 0;
              local_128 = &local_150;
              local_120 = 1;
              FUN_18044c9c0(DAT_180c64058,&local_128);
              DAT_180cd3e30 = local_148;
            }
            fVar19 = ABS(*(float *)(DAT_180cd3e30 + 0x58));
            if (fVar19 < 0.0) {
              auVar30._0_8_ = FUN_18061e150(fVar19);
              auVar30._8_56_ = extraout_var_01;
              auVar16 = auVar30._0_16_;
            }
            else {
              auVar16 = ZEXT416((uint)SQRT(fVar19));
            }
            auVar23 = auVar26._0_16_;
            auVar28 = auVar24._0_16_;
            fVar19 = auVar21._0_4_;
            auVar30 = ZEXT1664(auVar16);
            if (ABS(local_110[0]) < 0.0) {
              auVar18._0_8_ = FUN_18061e150();
              auVar23 = auVar26._0_16_;
              auVar28 = auVar24._0_16_;
              fVar19 = auVar21._0_4_;
              auVar16 = auVar30._0_16_;
              auVar18._8_56_ = extraout_var_02;
              auVar17 = auVar18._0_16_;
            }
            else {
              auVar17 = ZEXT416((uint)SQRT(ABS(local_110[0])));
            }
            fVar20 = auVar16._0_4_;
            fVar19 = fVar20 * fVar19;
            fVar27 = auVar23._0_4_;
            if (fVar19 == fVar20) {
              auVar16 = vcmpss_avx(auVar16,auVar17,2);
              auVar16 = vblendvps_avx(auVar28,auVar23,auVar16);
              local_138[0] = auVar16._0_4_;
            }
            else {
              local_138[0] = ((auVar17._0_4_ - fVar19) / (fVar20 - fVar19)) *
                             (fVar27 - auVar28._0_4_) + auVar28._0_4_;
            }
            local_140[0] = fVar27 + fVar27;
            local_128 = (undefined8 *)CONCAT44(local_128._4_4_,auVar22._0_4_);
            pfVar11 = (float *)&local_128;
            if (auVar22._0_4_ <= local_138[0]) {
              pfVar11 = local_138;
            }
            pfVar10 = local_140;
            if (local_138[0] <= fVar27 + fVar27) {
              pfVar10 = pfVar11;
            }
            fVar19 = *pfVar10;
          }
          fVar14 = (float)FUN_1806156a0(auVar29._0_8_,fVar15 + fVar31 + fVar19 + fVar14);
          fVar14 = fVar14 * 320.0;
          fVar31 = 0.5;
          fVar15 = (float)FUN_180639470(DAT_180b8e2cc * 0.017453292 * 0.5);
          DAT_180c71a50 = (fVar14 / fVar15) * (param_5 / 480.0);
          auVar30 = ZEXT464((uint)local_158[0]);
        }
      }
    }
    auVar25 = ZEXT464((uint)DAT_180c71a40);
    param_2 = local_100;
    fVar14 = DAT_180bbae00;
  }
  fVar15 = 50.0;
  auVar16 = vminss_avx(auVar29._0_16_,ZEXT416((uint)(fVar14 * 50.0)));
  DAT_180c71a48 = (float)FUN_180242260(DAT_180c71a48,DAT_180c71a50,auVar16._0_8_);
  if (DAT_180b0d080 != '\0') {
    fVar19 = 2000.0;
    local_140[0] = 2000.0;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,auVar22._0_4_);
    local_138[0] = DAT_180c71a48;
    fVar14 = DAT_180c71a48;
    sVar7 = thunk_FUN_180624430();
    if (sVar7 < 1) {
      pfVar11 = (float *)&local_128;
      if (auVar22._0_4_ <= fVar14) {
        pfVar11 = local_138;
      }
      pfVar10 = local_140;
      if (fVar14 <= fVar19) {
        pfVar10 = pfVar11;
      }
      auVar21 = ZEXT464((uint)*pfVar10);
      goto LAB_1802bcf41;
    }
  }
  auVar21 = ZEXT864(0);
LAB_1802bcf41:
  auVar24 = ZEXT464((uint)DAT_180b0d0f8);
  local_138[0] = DAT_180b0d0f8;
  local_140[0] = fVar15;
  local_128._0_4_ = auVar22._0_4_;
  sVar7 = thunk_FUN_180624430(DAT_180b0d0f8);
  if (sVar7 < 1) {
    pfVar11 = (float *)&local_128;
    if (auVar22._0_4_ <= auVar24._0_4_) {
      pfVar11 = local_138;
    }
    pfVar10 = local_140;
    if (auVar24._0_4_ <= fVar15) {
      pfVar10 = pfVar11;
    }
    auVar16 = ZEXT416((uint)*pfVar10);
  }
  else {
    auVar16 = SUB6416(ZEXT464(0x41000000),0);
  }
  auVar16 = vmaxss_avx(auVar21._0_16_,auVar16);
  auVar24 = ZEXT1664(auVar16);
  fVar14 = 500.0;
  local_140[0] = 500.0;
  fVar15 = 10.0;
  local_128._0_4_ = 10.0;
  auVar21 = ZEXT464((uint)DAT_180b0d0f4);
  local_138[0] = DAT_180b0d0f4;
  sVar7 = thunk_FUN_180624430(DAT_180b0d0f4);
  if (sVar7 < 1) {
    pfVar11 = (float *)&local_128;
    if (fVar15 <= auVar21._0_4_) {
      pfVar11 = local_138;
    }
    pfVar10 = local_140;
    if (auVar21._0_4_ <= fVar14) {
      pfVar10 = pfVar11;
    }
    fVar14 = *pfVar10;
  }
  else {
    fVar14 = 125.0;
  }
  fVar15 = 5.0;
  local_140[0] = 5.0;
  auVar21 = ZEXT464((uint)DAT_180b0d0fc);
  local_138[0] = DAT_180b0d0fc;
  local_128._0_4_ = fVar31;
  sVar7 = thunk_FUN_180624430(DAT_180b0d0fc);
  auVar16 = local_1c8;
  if (sVar7 < 1) {
    pfVar11 = (float *)&local_128;
    if (fVar31 <= auVar21._0_4_) {
      pfVar11 = local_138;
    }
    pfVar10 = local_140;
    if (auVar21._0_4_ <= fVar15) {
      pfVar10 = pfVar11;
    }
    local_118[0] = *pfVar10;
  }
  local_1c8._4_4_ = DAT_180b0d0ec;
  local_1c8._0_4_ = DAT_180b0d0e8;
  local_1c8._12_4_ = auVar16._12_4_;
  local_1c8._8_4_ = DAT_180b0d108;
  local_1b8 = DAT_180b0d180;
  cStack_1b7 = DAT_180b0d110;
  uStack_1b4 = DAT_180b0d104;
  local_1c8 = vinsertps_avx(local_1c8,ZEXT416(DAT_180b0d0f0),0x30);
  local_e8 = CONCAT44(DAT_180b0d104,CONCAT22(uStack_1b6,CONCAT11(DAT_180b0d110,DAT_180b0d180)));
  local_e0 = DAT_180b0d10c;
  if ((DAT_180b0d108 == 1) && (DAT_180b0d110 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  auVar26 = ZEXT464(DAT_180b0d178);
  local_140[0] = auVar29._0_4_;
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,auVar22._0_4_);
  auVar21 = ZEXT464((uint)DAT_180c71a44);
  local_138[0] = DAT_180c71a44;
  local_f8 = local_1c8;
  sVar7 = thunk_FUN_180624430(DAT_180c71a44);
  fVar31 = auVar24._0_4_;
  if (sVar7 < 1) {
    pfVar11 = (float *)&local_128;
    if (auVar22._0_4_ <= auVar21._0_4_) {
      pfVar11 = local_138;
    }
    pfVar10 = local_140;
    if (auVar21._0_4_ <= auVar29._0_4_) {
      pfVar10 = pfVar11;
    }
    fVar15 = *pfVar10;
  }
  else {
    fVar15 = 0.0;
  }
  fVar19 = 2.0;
  if (bVar5) {
    fVar31 = 0.1;
    local_140[0] = 0.1;
    local_138[0] = auVar30._0_4_;
    local_128._0_4_ = auVar22._0_4_;
    sVar7 = thunk_FUN_180624430(auVar30._0_8_);
    if (sVar7 < 1) {
      pfVar11 = (float *)&local_128;
      if (auVar22._0_4_ <= auVar30._0_4_) {
        pfVar11 = local_138;
      }
      pfVar10 = local_140;
      if (auVar30._0_4_ <= fVar31) {
        pfVar10 = pfVar11;
      }
      fVar31 = *pfVar10;
    }
    else {
      fVar31 = 0.0;
    }
    fVar20 = 0.05;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3d4ccccd);
    local_138[0] = auVar26._0_4_;
    local_140[0] = fVar19;
    sVar7 = thunk_FUN_180624430(auVar26._0_8_);
    if (sVar7 < 1) {
      pfVar11 = (float *)&local_128;
      if (fVar20 <= auVar26._0_4_) {
        pfVar11 = local_138;
      }
      pfVar10 = local_140;
      if (auVar26._0_4_ <= fVar19) {
        pfVar10 = pfVar11;
      }
      fVar20 = *pfVar10;
    }
    else {
      fVar20 = 0.25;
    }
    fVar15 = (float)FUN_180637760(fVar20 * fVar31 + fVar15,auVar29._0_8_);
    fVar31 = auVar24._0_4_;
  }
  cVar6 = DAT_180b0d260;
  local_128._0_2_ = CONCAT11(DAT_180b0d260,DAT_180b0d1e8);
  auVar21 = ZEXT464(DAT_180b0d2c8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_128;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(DAT_180b0d250),0x10);
  local_150 = auVar16._0_8_;
  local_148 = CONCAT44(local_148._4_4_,DAT_180b0d2c8);
  local_1f8[4] = auVar29._0_4_;
  local_1f8[2] = auVar25._0_4_;
  local_100 = CONCAT44(local_100._4_4_,local_1f8[2]);
  local_110[0] = (local_1f8[4] - local_1f8[2]) * 40.0 + fVar31;
  local_140[0] = local_1f8[2] * fVar14;
  local_138[0] = local_200;
  local_128._4_4_ = auVar16._4_4_;
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,local_1fc);
  local_1f8[0] = auVar22._0_4_;
  DAT_180c71a44 = fVar15;
  local_158[0] = local_1f8[4];
  local_108[0] = fVar15;
  sVar7 = thunk_FUN_180624430(auVar25._0_8_);
  if (sVar7 < 1) {
    pfVar11 = local_1f8;
    if (auVar22._0_4_ <= auVar25._0_4_) {
      pfVar11 = local_1f8 + 2;
    }
    pfVar10 = local_1f8 + 4;
    if (auVar25._0_4_ <= auVar29._0_4_) {
      pfVar10 = pfVar11;
    }
    if (auVar22._0_4_ < *pfVar10) {
      FUN_1802538a0(local_1c8,param_2,&local_150,auVar29._0_8_);
      local_228 = auVar22._0_4_;
      local_1a0 = &local_128;
      local_198 = local_138;
      local_190 = local_140;
      local_188 = local_110;
      local_180 = local_118;
      local_178 = &local_100;
      local_170 = local_108;
      local_168 = local_f8;
      local_160 = local_158;
      local_1a8 = param_2;
      if (cVar6 != '\0') {
        local_1e0[4] = auVar29._0_4_;
        local_1e0[2] = auVar21._0_4_;
        local_1e0[0] = local_228;
        sVar7 = thunk_FUN_180624430(auVar21._0_8_);
        local_228 = auVar22._0_4_;
        fVar14 = auVar29._0_4_;
        if (sVar7 < 1) {
          pfVar11 = local_1e0;
          if (local_228 <= auVar21._0_4_) {
            pfVar11 = local_1e0 + 2;
          }
          pfVar10 = local_1e0 + 4;
          if (auVar21._0_4_ <= fVar14) {
            pfVar10 = pfVar11;
          }
          fVar14 = *pfVar10;
        }
        if (local_228 < fVar14) {
          iVar12 = 4;
          fVar31 = fVar14 * 0.16;
          fVar19 = fVar14 * 6.0 + fVar19;
          fVar14 = 0.8;
          do {
            FUN_1802bbbb0(&local_1a8,(float)iVar12 * 0.25 * fVar19,
                          (auVar29._0_4_ - (float)iVar12 * 0.25 * fVar14) * fVar31);
            local_228 = auVar22._0_4_;
            iVar12 = iVar12 + -1;
          } while (0 < iVar12);
        }
      }
      local_230 = local_158[0];
      local_238 = local_f8;
      local_240 = local_108[0];
      local_248 = (undefined4)local_100;
      local_250 = local_118[0];
      local_258 = local_110[0];
      FUN_1802bb070(param_2,(ulonglong)local_128 & 0xffffffff,local_138[0],local_140[0]);
      *(undefined4 *)(local_1c8._0_8_ + 0x90) = local_1c8._8_4_;
    }
  }
}



