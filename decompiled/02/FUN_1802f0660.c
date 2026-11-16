// FUN_1802f0660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f0660 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f0660(undefined8 param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_248 [32];
  byte *local_228;
  undefined *local_218;
  longlong *local_210;
  longlong *local_208;
  int local_200;
  int local_1fc;
  longlong ***local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  float local_1e0;
  undefined1 local_1d8 [16];
  longlong **local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  undefined1 local_174;
  byte local_170 [8];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined1 local_124;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  local_208 = param_2;
  if ((DAT_180cd3ec0 & 1) == 0) {
    DAT_180cd3ec0 = DAT_180cd3ec0 | 1;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,0x58e37709);
    local_1b0 = (undefined8 *)0x0;
    local_1c8 = &local_1b8;
    local_1c0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_1c8);
    DAT_180cd3ec8 = (longlong)local_1b0;
  }
  DAT_180b8f95c = *(undefined4 *)(DAT_180cd3ec8 + 0x58);
  if ((DAT_180cd3ed0 & 1) == 0) {
    DAT_180cd3ed0 = DAT_180cd3ed0 | 1;
    local_1c8 = (longlong **)CONCAT44(local_1c8._4_4_,0x1aef2a38);
    local_1c0 = 0;
    local_1f8 = &local_1c8;
    local_1f0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_1f8);
    DAT_180cd3ed8 = local_1c0;
  }
  DAT_180b8f960 = FUN_180637540((*(float *)(DAT_180cd3ed8 + 0x58) * 3.1415927) / 180.0);
  iVar5 = DAT_180c6edc0;
  if ((DAT_180c6edc0 == 0) && (UVar6 = GetTickCount64(), DAT_180c6edc8 <= UVar6)) {
    local_210 = (longlong *)&DAT_1808fe160;
    iVar5 = FUN_1805f68d0(&DAT_1808fe160);
    if (iVar5 != 0) goto LAB_1802f179b;
    if (DAT_1808fe1ac == 0x7fffffff) {
      DAT_1808fe1ac = 0x7ffffffe;
      goto LAB_1802f17b0;
    }
    if ((DAT_180c6edc0 == 0) && (DAT_180c6edc8 <= UVar6)) {
      DAT_180c6edc0 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
      if (DAT_180c6edc0 == 0) {
        DAT_180c6edc8 = UVar6 + 1000;
      }
      else {
        DAT_180c6edc8 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c6edc0;
    FUN_1805f68fc(&DAT_1808fe160);
  }
  iVar10 = DAT_180c6edd0;
  local_200 = *(int *)((longlong)iVar5 + *param_2);
  if ((DAT_180c6edd0 == 0) && (UVar6 = GetTickCount64(), DAT_180c6eda8 <= UVar6)) {
    local_210 = (longlong *)&DAT_1808fe110;
    iVar5 = FUN_1805f68d0(&DAT_1808fe110);
    if (iVar5 != 0) {
LAB_1802f179b:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fe15c == 0x7fffffff) {
      DAT_1808fe15c = 0x7ffffffe;
LAB_1802f17b0:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6edd0 == 0) && (DAT_180c6eda8 <= UVar6)) {
      DAT_180c6edd0 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
      if (DAT_180c6edd0 == 0) {
        DAT_180c6eda8 = UVar6 + 1000;
      }
      else {
        DAT_180c6eda8 = 0xffffffffffffffff;
      }
    }
    iVar10 = DAT_180c6edd0;
    FUN_1805f68fc(&DAT_1808fe110);
  }
  local_1fc = *(int *)((longlong)iVar10 + param_2[1]);
  FUN_18017bf40(&local_1a8);
  local_1a0 = (undefined1  [16])0x0;
  local_190 = 0;
  FUN_1803d44c0(0,local_1a0,3);
  local_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  FUN_1801abd10(&local_f8);
  local_210 = (longlong *)local_1a0._8_8_;
  fVar22 = 0.1;
  pbVar12 = DAT_180b8f968;
  pbVar1 = DAT_180b8f970;
  fVar23 = 0.1;
  if (local_1a0._0_8_ != local_1a0._8_8_) {
    fVar27 = 1.0;
    uVar24 = 0x3fc00000;
    uVar21 = 0x40000000;
    fVar25 = 0.2;
    fVar26 = 0.0;
    plVar8 = (longlong *)local_1a0._8_8_;
    plVar15 = (longlong *)local_1a0._0_8_;
    do {
      iVar5 = DAT_180c6edb0;
      if (*plVar15 != 0) {
        iVar10 = (int)plVar15[1];
        if (iVar10 == 0x3e9aa8ce) {
          lVar14 = 0xc243cce2;
        }
        else if (iVar10 == 0x40987e9a) {
          lVar14 = 0x488e8052;
        }
        else if (iVar10 == 0x4e65f325) {
          lVar14 = 0x937fcfa3;
        }
        else if (iVar10 == 0x74db88a5) {
          lVar14 = 0xbbe43941;
        }
        else {
          if (iVar10 != -0x9359614) goto LAB_1802f15dc;
          lVar14 = 0x1d8fded0;
        }
        if ((DAT_180c6edb0 == 0) && (UVar6 = GetTickCount64(), DAT_180c6edb8 <= UVar6)) {
          local_218 = &DAT_1808fe070;
          iVar5 = FUN_1805f68d0(&DAT_1808fe070);
          if (iVar5 != 0) goto LAB_1802f1790;
          if (DAT_1808fe0bc == 0x7fffffff) {
            DAT_1808fe0bc = 0x7ffffffe;
            goto LAB_1802f184c;
          }
          if ((DAT_180c6edb0 == 0) && (DAT_180c6edb8 <= UVar6)) {
            DAT_180c6edb0 = FUN_1804174b0("C_BaseGrenade",0xc9cf8702);
            DAT_180c6edb8 = 0xffffffffffffffff;
            if (DAT_180c6edb0 == 0) {
              DAT_180c6edb8 = UVar6 + 1000;
            }
          }
          iVar5 = DAT_180c6edb0;
          FUN_1805f68fc(&DAT_1808fe070);
        }
        iVar10 = *(int *)((longlong)iVar5 + *plVar15);
        bVar16 = true;
        if (iVar10 == local_200) {
          bVar16 = false;
        }
        else if (iVar10 - 1U < 0xfffffffe) {
          lVar7 = FUN_1803d4150((longlong)iVar5,iVar10);
          iVar5 = DAT_180c6ed9c;
          if (lVar7 != 0) {
            if ((DAT_180c6ed9c == 0) && (UVar6 = GetTickCount64(), DAT_180c6eda0 <= UVar6)) {
              local_218 = &DAT_1808fe0c0;
              iVar5 = FUN_1805f68d0(&DAT_1808fe0c0);
              if (iVar5 != 0) goto LAB_1802f1790;
              if (DAT_1808fe10c == 0x7fffffff) {
                DAT_1808fe10c = 0x7ffffffe;
                goto LAB_1802f184c;
              }
              if ((DAT_180c6ed9c == 0) && (DAT_180c6eda0 <= UVar6)) {
                DAT_180c6ed9c = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                DAT_180c6eda0 = 0xffffffffffffffff;
                if (DAT_180c6ed9c == 0) {
                  DAT_180c6eda0 = UVar6 + 1000;
                }
              }
              iVar5 = DAT_180c6ed9c;
              FUN_1805f68fc(&DAT_1808fe0c0);
            }
            bVar16 = *(int *)(iVar5 + lVar7) != local_1fc;
          }
        }
        FUN_1801b1240(&local_f8,local_1d8,plVar15);
        iVar4 = DAT_180c6ed60;
        iVar11 = DAT_180c6ed40;
        iVar5 = DAT_180c6ed2c;
        if (DAT_180b8f968 != DAT_180b8f970) {
          pbVar12 = DAT_180b8f968;
          do {
            if (*(longlong *)pbVar12 == *plVar15) {
              *(longlong *)(pbVar12 + 0x70) = local_1a8;
              iVar5 = DAT_180c6ed88;
              if (pbVar12[0x80] == 0) {
                if ((DAT_180c6ed88 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed90 <= UVar6)) {
                  local_218 = &DAT_1808fe020;
                  iVar5 = FUN_1805f68d0(&DAT_1808fe020);
                  if (iVar5 != 0) goto LAB_1802f1790;
                  if (DAT_1808fe06c == 0x7fffffff) {
                    DAT_1808fe06c = 0x7ffffffe;
                    goto LAB_1802f184c;
                  }
                  if ((DAT_180c6ed88 == 0) && (DAT_180c6ed90 <= UVar6)) {
                    DAT_180c6ed88 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x7e9ca9c4);
                    DAT_180c6ed90 = 0xffffffffffffffff;
                    if (DAT_180c6ed88 == 0) {
                      DAT_180c6ed90 = UVar6 + 1000;
                    }
                  }
                  iVar5 = DAT_180c6ed88;
                  FUN_1805f68fc(&DAT_1808fe020);
                }
                iVar10 = DAT_180c6ed98;
                local_1c8 = *(longlong ***)((longlong)iVar5 + *plVar15);
                local_1c0 = CONCAT44(local_1c0._4_4_,
                                     (int)((longlong *)((longlong)iVar5 + *plVar15))[1]);
                if ((DAT_180c6ed98 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed70 <= UVar6)) {
                  local_218 = &DAT_1808fdfd0;
                  iVar5 = FUN_1805f68d0(&DAT_1808fdfd0);
                  if (iVar5 != 0) goto LAB_1802f1790;
                  if (DAT_1808fe01c == 0x7fffffff) {
                    DAT_1808fe01c = 0x7ffffffe;
                    goto LAB_1802f184c;
                  }
                  if ((DAT_180c6ed98 == 0) && (DAT_180c6ed70 <= UVar6)) {
                    DAT_180c6ed98 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x7c20bd90);
                    DAT_180c6ed70 = 0xffffffffffffffff;
                    if (DAT_180c6ed98 == 0) {
                      DAT_180c6ed70 = UVar6 + 1000;
                    }
                  }
                  iVar10 = DAT_180c6ed98;
                  FUN_1805f68fc(&DAT_1808fdfd0);
                }
                uVar20 = DAT_180b8f958;
                uVar19 = DAT_180b8f954;
                uVar2 = DAT_180b8f948;
                local_1e8 = *(ulonglong *)((longlong)iVar10 + *plVar15);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = local_1e8;
                local_1e0 = *(float *)((ulonglong *)((longlong)iVar10 + *plVar15) + 1);
                auVar17 = vshufps_avx(auVar17,auVar17,0x55);
                if (fVar27 <= auVar17._0_4_ * auVar17._0_4_ + (float)local_1e8 * (float)local_1e8 +
                              local_1e0 * local_1e0) {
                  DAT_180b8f948 = *(longlong *)(pbVar12 + 8);
                  lVar7 = *(longlong *)(pbVar12 + 8);
                  if (lVar7 == 0x1d8fded0) {
LAB_1802f0ea6:
                    DAT_180b8f958 = fVar26;
LAB_1802f0eae:
                    DAT_180b8f954 = uVar21;
                  }
                  else {
                    if (lVar7 == 0x488e8052) {
                      DAT_180b8f958 = fVar25;
                      goto LAB_1802f0eae;
                    }
                    if (lVar7 == 0xf7b68f78) goto LAB_1802f0ea6;
                    DAT_180b8f954 = uVar24;
                    DAT_180b8f958 = fVar22;
                  }
                  if (*(int *)(pbVar12 + 0x10) == 0) {
                    lVar7 = local_208[1];
                  }
                  else {
                    lVar7 = FUN_1803d4150();
                  }
                  local_228 = pbVar12 + 0x18;
                  if (lVar7 == 0) {
                    lVar7 = local_208[1];
                  }
                  FUN_1802ef840(local_228,&local_1c8,&local_1e8,lVar7);
                  DAT_180b8f948 = uVar2;
                  DAT_180b8f954 = uVar19;
                  DAT_180b8f958 = (float)uVar20;
                  pbVar12[0x80] = 1;
                }
              }
              iVar11 = DAT_180c6ed78;
              iVar10 = DAT_180c6ed64;
              iVar5 = DAT_180c6ed50;
              plVar8 = local_210;
              if (pbVar12[0x81] != 0) goto LAB_1802f15dc;
              if (lVar14 == 0x488e8052) {
                if ((DAT_180c6ed50 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed58 <= UVar6)) {
                  puVar13 = &DAT_1808fdee0;
                  local_218 = &DAT_1808fdee0;
                  iVar5 = FUN_1805f68d0(&DAT_1808fdee0);
                  if (iVar5 != 0) goto LAB_1802f1790;
                  if (DAT_1808fdf2c != 0x7fffffff) {
                    iVar5 = DAT_180c6ed50;
                    if ((DAT_180c6ed50 == 0) && (DAT_180c6ed58 <= UVar6)) {
                      iVar5 = FUN_1804174b0("C_DecoyProjectile",0xc4efed0a);
                      DAT_180c6ed58 = 0xffffffffffffffff;
                      if (iVar5 == 0) {
                        DAT_180c6ed58 = UVar6 + 1000;
                      }
                      DAT_180c6ed50 = iVar5;
                    }
                    goto LAB_1802f112c;
                  }
                  DAT_1808fdf2c = 0x7ffffffe;
                  goto LAB_1802f184c;
                }
              }
              else if (lVar14 == 0x937fcfa3) {
                iVar5 = iVar10;
                if ((DAT_180c6ed64 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed68 <= UVar6)) {
                  puVar13 = &DAT_1808fdf80;
                  local_218 = &DAT_1808fdf80;
                  iVar5 = FUN_1805f68d0(&DAT_1808fdf80);
                  if (iVar5 != 0) goto LAB_1802f1790;
                  if (DAT_1808fdfcc != 0x7fffffff) {
                    if ((DAT_180c6ed64 == 0) && (DAT_180c6ed68 <= UVar6)) {
                      DAT_180c6ed64 = FUN_1804174b0("C_SmokeGrenadeProjectile",0xf5a25253);
                      DAT_180c6ed68 = 0xffffffffffffffff;
                      if (DAT_180c6ed64 == 0) {
                        DAT_180c6ed68 = UVar6 + 1000;
                      }
                    }
                    iVar5 = DAT_180c6ed64;
                    goto LAB_1802f112c;
                  }
                  DAT_1808fdfcc = 0x7ffffffe;
                  goto LAB_1802f184c;
                }
              }
              else {
                if ((lVar14 != 0xbbe43941) && (lVar14 != 0xc243cce2)) goto LAB_1802f15dc;
                iVar5 = iVar11;
                if ((DAT_180c6ed78 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed80 <= UVar6)) {
                  puVar13 = &DAT_1808fdf30;
                  local_218 = &DAT_1808fdf30;
                  iVar5 = FUN_1805f68d0(&DAT_1808fdf30);
                  if (iVar5 != 0) goto LAB_1802f1790;
                  if (DAT_1808fdf7c == 0x7fffffff) {
                    DAT_1808fdf7c = 0x7ffffffe;
                    goto LAB_1802f184c;
                  }
                  if ((DAT_180c6ed78 == 0) && (DAT_180c6ed80 <= UVar6)) {
                    DAT_180c6ed78 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x2f04f603);
                    DAT_180c6ed80 = 0xffffffffffffffff;
                    if (DAT_180c6ed78 == 0) {
                      DAT_180c6ed80 = UVar6 + 1000;
                    }
                  }
                  iVar5 = DAT_180c6ed78;
LAB_1802f112c:
                  FUN_1805f68fc(puVar13);
                }
              }
              plVar8 = local_210;
              if (0 < *(int *)((longlong)iVar5 + *plVar15)) {
                pbVar12[0x81] = 1;
                *(longlong *)(pbVar12 + 0x78) = local_1a8;
              }
              goto LAB_1802f15dc;
            }
            pbVar12 = pbVar12 + 0x88;
          } while (pbVar12 != DAT_180b8f970);
        }
        if (lVar14 == 0x488e8052) {
          if ((DAT_180c6ed2c == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed30 <= UVar6)) {
            puVar13 = &DAT_1808fde40;
            local_218 = &DAT_1808fde40;
            iVar5 = FUN_1805f68d0(&DAT_1808fde40);
            if (iVar5 != 0) goto LAB_1802f1790;
            if (DAT_1808fde8c == 0x7fffffff) {
              DAT_1808fde8c = 0x7ffffffe;
              goto LAB_1802f184c;
            }
            iVar5 = DAT_180c6ed2c;
            if ((DAT_180c6ed2c == 0) && (DAT_180c6ed30 <= UVar6)) {
              iVar5 = FUN_1804174b0("C_DecoyProjectile",0xc4efed0a);
              DAT_180c6ed30 = 0xffffffffffffffff;
              if (iVar5 == 0) {
                DAT_180c6ed30 = UVar6 + 1000;
              }
              DAT_180c6ed2c = iVar5;
            }
LAB_1802f12ab:
            FUN_1805f68fc(puVar13);
          }
LAB_1802f12b3:
          plVar8 = local_210;
          if (0 < *(int *)((longlong)iVar5 + *plVar15)) goto LAB_1802f15dc;
        }
        else {
          if (lVar14 == 0x937fcfa3) {
            iVar5 = iVar11;
            if ((DAT_180c6ed40 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed48 <= UVar6)) {
              puVar13 = &DAT_1808fddf0;
              local_218 = &DAT_1808fddf0;
              iVar5 = FUN_1805f68d0(&DAT_1808fddf0);
              if (iVar5 != 0) goto LAB_1802f1790;
              if (DAT_1808fde3c == 0x7fffffff) {
                DAT_1808fde3c = 0x7ffffffe;
                goto LAB_1802f184c;
              }
              if ((DAT_180c6ed40 == 0) && (DAT_180c6ed48 <= UVar6)) {
                DAT_180c6ed40 = FUN_1804174b0("C_SmokeGrenadeProjectile",0xf5a25253);
                DAT_180c6ed48 = 0xffffffffffffffff;
                if (DAT_180c6ed40 == 0) {
                  DAT_180c6ed48 = UVar6 + 1000;
                }
              }
              iVar5 = DAT_180c6ed40;
              goto LAB_1802f12ab;
            }
            goto LAB_1802f12b3;
          }
          if ((lVar14 == 0xbbe43941) || (lVar14 == 0xc243cce2)) {
            iVar5 = iVar4;
            if ((DAT_180c6ed60 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed38 <= UVar6)) {
              puVar13 = &DAT_1808fde90;
              local_218 = &DAT_1808fde90;
              iVar5 = FUN_1805f68d0(&DAT_1808fde90);
              if (iVar5 != 0) goto LAB_1802f1790;
              if (DAT_1808fdedc == 0x7fffffff) {
                DAT_1808fdedc = 0x7ffffffe;
                goto LAB_1802f184c;
              }
              if ((DAT_180c6ed60 == 0) && (DAT_180c6ed38 <= UVar6)) {
                DAT_180c6ed60 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x2f04f603);
                DAT_180c6ed38 = 0xffffffffffffffff;
                if (DAT_180c6ed60 == 0) {
                  DAT_180c6ed38 = UVar6 + 1000;
                }
              }
              iVar5 = DAT_180c6ed60;
              goto LAB_1802f12ab;
            }
            goto LAB_1802f12b3;
          }
        }
        iVar5 = DAT_180c6ed18;
        if ((DAT_180c6ed18 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed20 <= UVar6)) {
          local_218 = &DAT_1808fdda0;
          iVar5 = FUN_1805f68d0(&DAT_1808fdda0);
          if (iVar5 != 0) goto LAB_1802f1790;
          if (DAT_1808fddec == 0x7fffffff) {
            DAT_1808fddec = 0x7ffffffe;
            goto LAB_1802f184c;
          }
          if ((DAT_180c6ed18 == 0) && (DAT_180c6ed20 <= UVar6)) {
            DAT_180c6ed18 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x7e9ca9c4);
            DAT_180c6ed20 = 0xffffffffffffffff;
            if (DAT_180c6ed18 == 0) {
              DAT_180c6ed20 = UVar6 + 1000;
            }
          }
          iVar5 = DAT_180c6ed18;
          FUN_1805f68fc(&DAT_1808fdda0);
        }
        iVar11 = DAT_180c6ed28;
        local_1b8 = *(longlong **)((longlong)iVar5 + *plVar15);
        local_1b0 = (undefined8 *)
                    CONCAT44(local_1b0._4_4_,
                             *(undefined4 *)((undefined8 *)((longlong)iVar5 + *plVar15) + 1));
        if ((DAT_180c6ed28 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ed00 <= UVar6)) {
          local_218 = &DAT_1808fdd50;
          iVar5 = FUN_1805f68d0(&DAT_1808fdd50);
          if (iVar5 != 0) {
LAB_1802f1790:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808fdd9c == 0x7fffffff) {
            DAT_1808fdd9c = 0x7ffffffe;
LAB_1802f184c:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6ed28 == 0) && (DAT_180c6ed00 <= UVar6)) {
            DAT_180c6ed28 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x7c20bd90);
            DAT_180c6ed00 = 0xffffffffffffffff;
            if (DAT_180c6ed28 == 0) {
              DAT_180c6ed00 = UVar6 + 1000;
            }
          }
          iVar11 = DAT_180c6ed28;
          FUN_1805f68fc(&DAT_1808fdd50);
        }
        uVar20 = DAT_180b8f958;
        uVar19 = DAT_180b8f954;
        uVar2 = DAT_180b8f948;
        local_1f8 = *(longlong ****)((longlong)iVar11 + *plVar15);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_1f8;
        fVar23 = *(float *)((ulonglong *)((longlong)iVar11 + *plVar15) + 1);
        local_1f0 = CONCAT44(local_1f0._4_4_,fVar23);
        auVar17 = vshufps_avx(auVar18,auVar18,0x55);
        plVar8 = local_210;
        if (fVar27 <= auVar17._0_4_ * auVar17._0_4_ + local_1f8._0_4_ * local_1f8._0_4_ +
                      fVar23 * fVar23) {
          if (lVar14 == 0x1d8fded0) {
            DAT_180b8f958 = fVar26;
LAB_1802f14b6:
            DAT_180b8f954 = uVar21;
          }
          else {
            if (lVar14 == 0x488e8052) {
              DAT_180b8f958 = fVar25;
              goto LAB_1802f14b6;
            }
            DAT_180b8f954 = uVar24;
            DAT_180b8f958 = fVar22;
          }
          local_170[0] = 0;
          local_170[1] = 0;
          local_170[2] = 0;
          local_170[3] = 0;
          local_170[4] = 0;
          local_170[5] = 0;
          local_170[6] = 0;
          local_170[7] = 0;
          local_168 = (undefined1  [16])0x0;
          local_158 = (undefined1  [16])0x0;
          local_148 = (undefined1  [16])0x0;
          local_138 = (undefined1  [16])0x0;
          local_128 = 0xffffffff;
          local_124 = 0;
          local_110 = 0;
          local_108 = 1;
          local_188 = *plVar15;
          local_120 = local_1a8;
          local_118 = local_1a8;
          DAT_180b8f948 = lVar14;
          local_180 = lVar14;
          local_178 = iVar10;
          local_174 = bVar16;
          if (iVar10 == 0) {
            lVar14 = local_208[1];
          }
          else {
            lVar14 = FUN_1803d4150(fVar23,iVar10);
          }
          if (lVar14 == 0) {
            lVar14 = local_208[1];
          }
          local_228 = local_170;
          FUN_1802ef840(local_228,&local_1b8,&local_1f8,lVar14);
          DAT_180b8f948 = uVar2;
          DAT_180b8f954 = uVar19;
          DAT_180b8f958 = (float)uVar20;
          if (DAT_180b8f970 == DAT_180b8f978) {
            FUN_1802f42c0(&DAT_180b8f968,DAT_180b8f970,&local_188);
          }
          else {
            FUN_1802f4900(DAT_180b8f970,&local_188);
            DAT_180b8f970 = DAT_180b8f970 + 0x88;
          }
          FUN_1801b36e0(local_158 + 8);
          FUN_1801b36e0(local_168);
          plVar8 = local_210;
        }
      }
LAB_1802f15dc:
      plVar15 = plVar15 + 3;
      pbVar12 = DAT_180b8f968;
      pbVar1 = DAT_180b8f970;
      fVar23 = fVar22;
    } while (plVar15 != plVar8);
  }
  do {
    pbVar3 = DAT_180b8f970;
    if (pbVar12 == DAT_180b8f970) {
      local_1b8 = &local_1a8;
      local_1b0 = &local_f8;
      DAT_180b8f970 = pbVar1;
      FUN_1802f4040(&DAT_180b8f968,&local_1b8);
      FUN_18017e9a0(&local_f8);
      FUN_1801abba0(local_1a0);
    }
    DAT_180b8f970 = pbVar1;
    if (pbVar12[0x81] == 0) {
      uVar9 = (((((((((ulonglong)*pbVar12 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)pbVar12[1]) * 0x100000001b3 ^ (ulonglong)pbVar12[2]) * 0x100000001b3
                  ^ (ulonglong)pbVar12[3]) * 0x100000001b3 ^ (ulonglong)pbVar12[4]) * 0x100000001b3
                ^ (ulonglong)pbVar12[5]) * 0x100000001b3 ^ (ulonglong)pbVar12[6]) * 0x100000001b3 ^
              (ulonglong)pbVar12[7]) * 0x100000001b3 & uStack_c8;
      lVar14 = *(longlong *)(lStack_e0 + 8 + uVar9 * 0x10);
      if (lVar14 == lStack_f0) {
LAB_1802f16c1:
        if (fVar23 <= (float)(local_1a8 - *(longlong *)(pbVar12 + 0x70)) / 1e+09) {
          pbVar12[0x81] = 1;
          *(longlong *)(pbVar12 + 0x78) = local_1a8;
        }
      }
      else {
        lVar7 = *(longlong *)(lVar14 + 0x10);
        while (*(longlong *)pbVar12 != lVar7) {
          if (lVar14 == *(longlong *)(lStack_e0 + uVar9 * 0x10)) goto LAB_1802f16c1;
          lVar14 = *(longlong *)(lVar14 + 8);
          lVar7 = *(longlong *)(lVar14 + 0x10);
        }
      }
    }
    pbVar12 = pbVar12 + 0x88;
    pbVar1 = DAT_180b8f970;
    DAT_180b8f970 = pbVar3;
  } while( true );
}



