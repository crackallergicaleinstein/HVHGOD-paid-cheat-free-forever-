// FUN_18028f060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028f060 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028f060(longlong param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  ULONGLONG UVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  ULONGLONG UVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  longlong *plVar22;
  undefined *puVar23;
  float *pfVar24;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  int iVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined1 extraout_var [56];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar41 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar42 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auStack_43e8 [32];
  undefined **local_43c8;
  float *local_43c0;
  undefined4 local_43b8;
  int local_43b0;
  int local_43a8;
  int local_43a0;
  int local_4398;
  int local_4388;
  char local_4384;
  char local_4383;
  longlong *local_4380;
  longlong *local_4378;
  undefined1 (*local_4370) [16];
  int local_4368;
  int local_4364;
  int local_4360;
  float local_435c;
  longlong *local_4358;
  int local_4350;
  int local_434c;
  int local_4348;
  int local_4344;
  int local_4340;
  int local_433c;
  int local_4338;
  int local_4334;
  int local_4330;
  undefined8 local_4328;
  undefined4 local_4320;
  undefined4 uStack_431c;
  undefined4 local_4318;
  undefined1 local_4308 [16];
  undefined8 local_42f8;
  float local_42f0;
  undefined1 (*local_42e8) [16];
  ULONGLONG local_42e0;
  undefined1 local_42d8 [8];
  longlong local_42d0;
  undefined *local_42c8;
  undefined4 local_42c0;
  undefined4 local_42b8;
  undefined4 local_42b4;
  undefined8 local_42b0;
  undefined8 uStack_42a8;
  undefined4 local_42a0;
  undefined8 local_4298;
  undefined4 uStack_4290;
  uint uStack_428c;
  undefined1 local_4288 [16];
  undefined1 local_4278 [16];
  undefined1 local_4268 [12];
  uint uStack_425c;
  longlong local_4258;
  longlong *plStack_4250;
  undefined8 uStack_4248;
  undefined8 uStack_4240;
  undefined1 local_4238;
  undefined1 uStack_4237;
  undefined1 uStack_4236;
  undefined1 uStack_4235;
  undefined4 uStack_4234;
  char cStack_4230;
  char cStack_422f;
  undefined1 uStack_422e;
  undefined1 uStack_422d;
  undefined1 uStack_422c;
  undefined1 uStack_422b;
  undefined1 uStack_422a;
  undefined1 uStack_4229;
  undefined1 local_4228 [8];
  undefined1 local_4220 [8];
  undefined1 local_4218 [16];
  undefined1 local_4208 [32];
  undefined1 local_41e8 [4128];
  undefined1 local_31c8 [4112];
  char local_21b8;
  undefined1 local_21a8 [4120];
  undefined1 local_1190 [16];
  undefined8 local_1180;
  undefined8 local_1178;
  longlong lStack_1170;
  undefined8 uStack_1168;
  longlong lStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  ulonglong uStack_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  longlong lStack_1130;
  undefined8 uStack_1128;
  longlong lStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  ulonglong uStack_1108;
  undefined8 uStack_1100;
  float local_10f8;
  float local_10f4;
  float local_10f0;
  undefined1 local_10ec [4096];
  undefined4 local_ec;
  char local_e8;
  ulonglong local_d8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  local_78 = in_ZMM10._0_16_;
  local_88 = in_ZMM11._0_16_;
  local_98 = in_ZMM12._0_16_;
  local_a8 = in_ZMM13._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_43e8;
  local_4278 = ZEXT816(0x180b8e3d0);
  local_42d0 = param_1;
  iVar8 = FUN_1805f68d0(&DAT_180b8e3d0);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e41c == 0x7fffffff) {
    DAT_180b8e41c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_4278[8] = 1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_4258 = _DAT_180bb8890;
  plStack_4250 = plRam0000000180bb8898;
  uStack_4248 = uRam0000000180bb88a0;
  uStack_4240 = uRam0000000180bb88a8;
  local_4238 = DAT_180bb88b0;
  uStack_4237 = uRam0000000180bb88b1;
  uStack_4236 = uRam0000000180bb88b2;
  uStack_4235 = uRam0000000180bb88b3;
  uStack_4234 = CONCAT13(uRam0000000180bb88b7,
                         CONCAT12(uRam0000000180bb88b6,
                                  CONCAT11(uRam0000000180bb88b5,uRam0000000180bb88b4)));
  cStack_4230 = cRam0000000180bb88b8;
  cStack_422f = cRam0000000180bb88b9;
  uStack_422e = uRam0000000180bb88ba;
  uStack_422d = uRam0000000180bb88bb;
  uStack_422c = uRam0000000180bb88bc;
  uStack_422b = uRam0000000180bb88bd;
  uStack_422a = uRam0000000180bb88be;
  uStack_4229 = uRam0000000180bb88bf;
  cVar6 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_42b8 = DAT_180cb1978;
  local_42b4 = DAT_180cb197c;
  local_42b0 = _DAT_180cb1980;
  uStack_42a8 = _DAT_180cb1988;
  local_42a0 = DAT_180cb1990;
  pauVar11 = (undefined1 (*) [16])FUN_1800ba9f0(local_4308,&local_42b8);
  local_4288 = *pauVar11;
  auVar33 = ZEXT1664(local_4288);
  uVar38 = *(undefined8 *)pauVar11[1];
  local_435c = *(float *)(pauVar11[1] + 8);
  local_4328 = uVar38;
  if ((cVar6 != '\0') && (DAT_180cb15f8 != '\0')) {
    auVar32 = vshufps_avx(local_4288,local_4288,0xaa);
    auVar34 = ZEXT864(0);
    if (0.0 < auVar32._0_4_) {
      local_1190 = (undefined1  [16])0x0;
      local_1180 = 0;
      FUN_1803d44c0(0,local_1190,1);
      iVar8 = DAT_180c65600;
      local_4360 = DAT_180c65600;
      if (DAT_180c65600 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c65608) {
          local_4360 = iVar8;
        }
        else {
          local_4358 = (longlong *)&DAT_1808f35b0;
          iVar8 = FUN_1805f68d0(&DAT_1808f35b0);
          if (iVar8 != 0) goto LAB_180290613;
          if (DAT_1808f35fc == 0x7fffffff) {
            DAT_1808f35fc = 0x7ffffffe;
            goto LAB_180290648;
          }
          local_4360 = DAT_180c65600;
          if ((DAT_180c65600 == 0) && (DAT_180c65608 <= UVar12)) {
            local_4360 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
            if (local_4360 == 0) {
              DAT_180c65608 = UVar12 + 1000;
            }
            else {
              DAT_180c65608 = 0xffffffffffffffff;
            }
          }
          iVar8 = local_4360;
          DAT_180c65600 = local_4360;
          FUN_1805f68fc(&DAT_1808f35b0);
        }
      }
      iVar19 = DAT_180c655f8;
      local_4364 = DAT_180c655f8;
      if (DAT_180c655f8 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c655f0) {
          local_4364 = iVar19;
        }
        else {
          local_4358 = (longlong *)&DAT_1808f3560;
          iVar19 = FUN_1805f68d0(&DAT_1808f3560);
          if (iVar19 != 0) goto LAB_180290613;
          if (DAT_1808f35ac == 0x7fffffff) {
            DAT_1808f35ac = 0x7ffffffe;
            goto LAB_180290648;
          }
          local_4364 = DAT_180c655f8;
          if ((DAT_180c655f8 == 0) && (DAT_180c655f0 <= UVar12)) {
            local_4364 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
            if (local_4364 == 0) {
              DAT_180c655f0 = UVar12 + 1000;
            }
            else {
              DAT_180c655f0 = 0xffffffffffffffff;
            }
          }
          DAT_180c655f8 = local_4364;
          FUN_1805f68fc(&DAT_1808f3560);
        }
      }
      iVar19 = DAT_180c655fc;
      local_4350 = DAT_180c655fc;
      if (DAT_180c655fc == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c655d8) {
          local_4350 = iVar19;
        }
        else {
          local_4358 = (longlong *)&DAT_1808f3510;
          iVar19 = FUN_1805f68d0(&DAT_1808f3510);
          if (iVar19 != 0) goto LAB_180290613;
          if (DAT_1808f355c == 0x7fffffff) {
            DAT_1808f355c = 0x7ffffffe;
            goto LAB_180290648;
          }
          local_4350 = DAT_180c655fc;
          if ((DAT_180c655fc == 0) && (DAT_180c655d8 <= UVar12)) {
            local_4350 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
            if (local_4350 == 0) {
              DAT_180c655d8 = UVar12 + 1000;
            }
            else {
              DAT_180c655d8 = 0xffffffffffffffff;
            }
          }
          iVar19 = local_4350;
          DAT_180c655fc = local_4350;
          FUN_1805f68fc(&DAT_1808f3510);
        }
      }
      iVar27 = DAT_180c655e8;
      local_434c = DAT_180c655e8;
      if (DAT_180c655e8 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c655e0) {
          local_434c = iVar27;
        }
        else {
          local_4358 = (longlong *)&DAT_1808f3470;
          iVar27 = FUN_1805f68d0(&DAT_1808f3470);
          if (iVar27 != 0) goto LAB_180290613;
          if (DAT_1808f34bc == 0x7fffffff) {
            DAT_1808f34bc = 0x7ffffffe;
            goto LAB_180290648;
          }
          local_434c = DAT_180c655e8;
          if ((DAT_180c655e8 == 0) && (DAT_180c655e0 <= UVar12)) {
            local_434c = FUN_1804174b0("C_BaseEntity",0x84cdad2);
            if (local_434c == 0) {
              DAT_180c655e0 = UVar12 + 1000;
            }
            else {
              DAT_180c655e0 = 0xffffffffffffffff;
            }
          }
          iVar27 = local_434c;
          DAT_180c655e8 = local_434c;
          FUN_1805f68fc(&DAT_1808f3470);
        }
      }
      iVar9 = DAT_180c655c8;
      local_4348 = DAT_180c655c8;
      if (DAT_180c655c8 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c655d0) {
          local_4348 = iVar9;
        }
        else {
          local_4358 = (longlong *)&DAT_1808f34c0;
          iVar9 = FUN_1805f68d0(&DAT_1808f34c0);
          if (iVar9 != 0) goto LAB_180290613;
          if (DAT_1808f350c == 0x7fffffff) {
            DAT_1808f350c = 0x7ffffffe;
            goto LAB_180290648;
          }
          local_4348 = DAT_180c655c8;
          if ((DAT_180c655c8 == 0) && (DAT_180c655d0 <= UVar12)) {
            local_4348 = FUN_1804174b0("C_BaseEntity",0x9d930423);
            if (local_4348 == 0) {
              DAT_180c655d0 = UVar12 + 1000;
            }
            else {
              DAT_180c655d0 = 0xffffffffffffffff;
            }
          }
          iVar9 = local_4348;
          DAT_180c655c8 = local_4348;
          FUN_1805f68fc(&DAT_1808f34c0);
        }
      }
      iVar10 = DAT_180c655b8;
      auVar35 = auVar33._0_16_;
      auVar32 = auVar34._0_16_;
      local_4344 = DAT_180c655b8;
      if (DAT_180c655b8 == 0) {
        UVar12 = GetTickCount64();
        auVar35 = auVar33._0_16_;
        auVar32 = auVar34._0_16_;
        if (UVar12 < DAT_180c655b0) {
          local_4344 = iVar10;
        }
        else {
          local_4358 = (longlong *)&DAT_1808f3420;
          iVar10 = FUN_1805f68d0(&DAT_1808f3420);
          if (iVar10 != 0) {
LAB_180290613:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808f346c == 0x7fffffff) {
            DAT_1808f346c = 0x7ffffffe;
LAB_180290648:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          local_4344 = DAT_180c655b8;
          if ((DAT_180c655b8 == 0) && (DAT_180c655b0 <= UVar12)) {
            local_4344 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
            if (local_4344 == 0) {
              DAT_180c655b0 = UVar12 + 1000;
            }
            else {
              DAT_180c655b0 = 0xffffffffffffffff;
            }
          }
          iVar10 = local_4344;
          DAT_180c655b8 = local_4344;
          FUN_1805f68fc(&DAT_1808f3420);
          auVar35 = auVar33._0_16_;
          auVar32 = auVar34._0_16_;
        }
      }
      if (((((iVar8 == 0) || (local_4364 == 0)) || (iVar19 == 0)) || ((iVar27 == 0 || (iVar9 == 0)))
          ) || (iVar10 == 0)) {
        FUN_180290660(param_1);
      }
      else {
        local_1138 = 0;
        lStack_1130 = 0;
        uStack_1128 = 0;
        lStack_1120 = 0;
        local_1118 = 0;
        uStack_1110 = 0;
        uStack_1108 = 0;
        uStack_1100 = 0;
        auVar33 = ZEXT1664(auVar32);
        auVar34 = ZEXT1664(auVar35);
        FUN_1801abd10(&local_1138);
        plVar16 = plStack_4250;
        uVar31 = local_1190._8_8_;
        if (local_1190._0_8_ != local_1190._8_8_) {
          lVar28 = (longlong)local_4360;
          plVar22 = (longlong *)local_1190._0_8_;
          iVar8 = local_4340;
          do {
            lVar14 = *plVar22;
            if ((lVar14 != 0) && (lVar14 != local_4258)) {
              lVar13 = FUN_18017ea70();
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
              bVar3 = false;
              if (lVar14 + lVar28 != 0) {
                local_4368 = 0;
                cVar6 = FUN_1804514f0(&local_4368,lVar14 + lVar28,4);
                if (cVar6 == '\0') {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                  iVar8 = local_4368;
                }
              }
              lVar14 = FUN_18017ea70();
              iVar19 = *(int *)(lVar14 + 4);
              if (iVar19 != 0) {
                iVar19 = iVar19 + -1;
                *(int *)(lVar14 + 4) = iVar19;
              }
              iVar27 = 0;
              if (bVar3) {
                iVar27 = iVar8;
              }
              local_4358 = (longlong *)FUN_1803d4150(iVar19,iVar27);
              if ((local_4358 != (longlong *)0x0) && (local_4358 != plVar16)) {
                FUN_1801b1240(&local_1138,local_4268,&local_4358);
              }
            }
            plVar22 = plVar22 + 3;
          } while (plVar22 != (longlong *)uVar31);
          param_1 = local_42d0;
        }
        auVar35 = auVar34._0_16_;
        auVar32 = auVar33._0_16_;
        pauVar11 = *(undefined1 (**) [16])**(undefined1 (**) [16])(param_1 + 8);
        if (pauVar11 != *(undefined1 (**) [16])(param_1 + 8)) {
          do {
            uVar20 = (((((((((ulonglong)(byte)pauVar11[1][0] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           (ulonglong)(byte)pauVar11[1][1]) * 0x100000001b3 ^
                          (ulonglong)(byte)pauVar11[1][2]) * 0x100000001b3 ^
                         (ulonglong)(byte)pauVar11[1][3]) * 0x100000001b3 ^
                        (ulonglong)(byte)pauVar11[1][4]) * 0x100000001b3 ^
                       (ulonglong)(byte)pauVar11[1][5]) * 0x100000001b3 ^
                      (ulonglong)(byte)pauVar11[1][6]) * 0x100000001b3 ^
                     (ulonglong)(byte)pauVar11[1][7]) * 0x100000001b3 & uStack_1108;
            lVar28 = *(longlong *)(lStack_1120 + 8 + uVar20 * 0x10);
            if (lVar28 == lStack_1130) {
LAB_18028f879:
              pauVar26 = pauVar11;
              while (pauVar26 = pauVar26 + 2, pauVar26 != pauVar11 + 10) {
                FUN_180291a50(pauVar26);
              }
              pauVar11[10] = (undefined1  [16])0x0;
              puVar15 = (undefined8 *)FUN_180297150(param_1,&local_4358,pauVar11);
              pauVar11 = (undefined1 (*) [16])*puVar15;
            }
            else {
              lVar14 = *(longlong *)(lVar28 + 0x10);
              while (*(longlong *)pauVar11[1] != lVar14) {
                if (lVar28 == *(longlong *)(lStack_1120 + uVar20 * 0x10)) goto LAB_18028f879;
                lVar28 = *(longlong *)(lVar28 + 8);
                lVar14 = *(longlong *)(lVar28 + 0x10);
              }
              pauVar11 = *(undefined1 (**) [16])*pauVar11;
            }
            auVar35 = auVar34._0_16_;
            auVar32 = auVar33._0_16_;
          } while (pauVar11 != *(undefined1 (**) [16])(param_1 + 8));
        }
        local_1178 = 0;
        lStack_1170 = 0;
        uStack_1168 = 0;
        lStack_1160 = 0;
        local_1158 = 0;
        uStack_1150 = 0;
        uStack_1148 = 0;
        uStack_1140 = 0;
        auVar33 = ZEXT1664(auVar32);
        auVar34 = ZEXT1664(auVar35);
        FUN_1801abd10(&local_1178);
        local_4368 = 0;
        iVar19 = 0;
        local_4388 = 0;
        local_433c = 0;
        local_4338 = 0;
        puVar15 = (undefined8 *)FUN_180270b60(&local_4320);
        local_42c8 = (undefined *)*puVar15;
        local_42c0 = *(undefined4 *)(puVar15 + 1);
        local_42e0 = GetTickCount64();
        iVar8 = 0;
        for (plVar16 = (longlong *)**(longlong **)(param_1 + 8);
            plVar16 != *(longlong **)(param_1 + 8); plVar16 = (longlong *)*plVar16) {
          plVar22 = plVar16;
          while (plVar22 = plVar22 + 4, plVar22 != plVar16 + 0x14) {
            iVar8 = iVar8 + (uint)(*plVar22 != 0);
          }
        }
        local_4358 = (longlong *)local_1190._0_8_;
        local_4378 = (longlong *)local_1190._8_8_;
        iVar27 = 0;
        iVar9 = 0;
        if (local_1190._0_8_ != local_1190._8_8_) {
          auVar36 = ZEXT464(0x3f800000);
          plVar16 = (longlong *)local_1190._8_8_;
          plVar22 = (longlong *)local_1190._0_8_;
          do {
            lVar28 = *plVar22;
            if ((lVar28 != 0) && (lVar28 != local_4258)) {
              lVar13 = (longlong)local_4364;
              local_4358 = plVar22;
              lVar14 = FUN_18017ea70();
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              if (lVar13 + lVar28 == 0) {
                bVar3 = false;
              }
              else {
                local_4384 = '\0';
                cVar6 = FUN_1804514f0(&local_4384,lVar13 + lVar28,1);
                if (cVar6 == '\0') {
                  bVar3 = false;
                }
                else {
                  local_4383 = local_4384;
                  bVar3 = true;
                }
              }
              cVar6 = local_4383;
              lVar28 = FUN_18017ea70();
              if (*(int *)(lVar28 + 4) != 0) {
                *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + -1;
              }
              if ((!bVar3) || (cVar6 == '\0')) {
                local_4370 = (undefined1 (*) [16])0x0;
                FUN_1801aad00(param_1,&local_4370,plVar22);
                pauVar11 = local_4370;
                if (local_4370 != *(undefined1 (**) [16])(param_1 + 8)) {
                  pauVar26 = local_4370 + 10;
                  pauVar4 = local_4370;
                  while (pauVar4 = pauVar4 + 2, pauVar4 != pauVar26) {
                    FUN_180291a50(pauVar4);
                  }
                  puVar17 = local_42d8;
                  goto LAB_1802902f9;
                }
              }
              else {
                lVar13 = (longlong)local_4360;
                lVar28 = *plVar22;
                lVar14 = FUN_18017ea70();
                *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                if (lVar13 + lVar28 == 0) {
                  bVar3 = false;
                }
                else {
                  local_4370 = (undefined1 (*) [16])((ulonglong)local_4370 & 0xffffffff00000000);
                  cVar6 = FUN_1804514f0(&local_4370,lVar13 + lVar28,4);
                  if (cVar6 == '\0') {
                    bVar3 = false;
                  }
                  else {
                    local_4334 = (int)local_4370;
                    bVar3 = true;
                  }
                }
                iVar27 = local_4334;
                lVar28 = FUN_18017ea70();
                iVar19 = *(int *)(lVar28 + 4);
                if (iVar19 != 0) {
                  iVar19 = iVar19 + -1;
                  *(int *)(lVar28 + 4) = iVar19;
                }
                iVar9 = 0;
                if (bVar3) {
                  iVar9 = iVar27;
                }
                local_4380 = (longlong *)FUN_1803d4150(iVar19,iVar9);
                if ((local_4380 != (longlong *)0x0) && (local_4380 != plStack_4250)) {
                  puVar23 = (undefined *)((longlong)local_4350 + (longlong)local_4380);
                  lVar28 = FUN_18017ea70();
                  *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + 1;
                  if (puVar23 == (undefined *)0x0) {
                    bVar3 = false;
                  }
                  else {
                    local_4370 = (undefined1 (*) [16])((ulonglong)local_4370 & 0xffffffff00000000);
                    cVar6 = FUN_1804514f0(&local_4370,puVar23,4);
                    if (cVar6 == '\0') {
                      bVar3 = false;
                    }
                    else {
                      local_4330 = (int)local_4370;
                      bVar3 = true;
                    }
                  }
                  iVar19 = local_4330;
                  lVar28 = FUN_18017ea70();
                  if (*(int *)(lVar28 + 4) != 0) {
                    *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + -1;
                  }
                  iVar27 = 0;
                  if (bVar3) {
                    iVar27 = iVar19;
                  }
                  if ((cStack_422f == '\0') || (uStack_4234 != iVar27)) {
                    puVar23 = (undefined *)((longlong)local_434c + (longlong)local_4380);
                    lVar28 = FUN_18017ea70();
                    *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + 1;
                    if (puVar23 == (undefined *)0x0) {
                      bVar3 = false;
                    }
                    else {
                      local_4370 = (undefined1 (*) [16])((ulonglong)local_4370 & 0xffffffff00000000)
                      ;
                      cVar6 = FUN_1804514f0(&local_4370,puVar23,4);
                      if (cVar6 == '\0') {
                        bVar3 = false;
                      }
                      else {
                        local_4340 = (int)local_4370;
                        bVar3 = true;
                      }
                    }
                    iVar19 = local_4340;
                    lVar28 = FUN_18017ea70();
                    if (*(int *)(lVar28 + 4) != 0) {
                      *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + -1;
                    }
                    if ((!bVar3) || (iVar19 < 1)) {
                      uVar20 = (((((((((ulonglong)local_4380 & 0xff ^ 0xcbf29ce484222325) *
                                      0x100000001b3 ^ (ulonglong)local_4380 >> 8 & 0xff) *
                                     0x100000001b3 ^ (ulonglong)local_4380 >> 0x10 & 0xff) *
                                    0x100000001b3 ^ (ulonglong)local_4380 >> 0x18 & 0xff) *
                                   0x100000001b3 ^ (ulonglong)local_4380 >> 0x20 & 0xff) *
                                  0x100000001b3 ^ (ulonglong)local_4380 >> 0x28 & 0xff) *
                                 0x100000001b3 ^ (ulonglong)local_4380 >> 0x30 & 0xff) *
                                0x100000001b3 ^ (ulonglong)local_4380 >> 0x38) * 0x100000001b3 &
                               *(ulonglong *)(param_1 + 0x30);
                      pauVar11 = *(undefined1 (**) [16])
                                  (*(longlong *)(param_1 + 0x18) + 8 + uVar20 * 0x10);
                      if (pauVar11 == *(undefined1 (**) [16])(param_1 + 8)) {
LAB_180290271:
                        pauVar11 = (undefined1 (*) [16])0x0;
                      }
                      else {
                        plVar16 = *(longlong **)pauVar11[1];
                        while (local_4380 != plVar16) {
                          if (pauVar11 ==
                              *(undefined1 (**) [16])(*(longlong *)(param_1 + 0x18) + uVar20 * 0x10)
                             ) goto LAB_180290271;
                          pauVar11 = *(undefined1 (**) [16])(*pauVar11 + 8);
                          plVar16 = *(longlong **)pauVar11[1];
                        }
                      }
                      if ((pauVar11 != (undefined1 (*) [16])0x0) &&
                         (pauVar11 != *(undefined1 (**) [16])(param_1 + 8))) {
                        pauVar26 = pauVar11 + 10;
                        pauVar4 = pauVar11;
                        while (pauVar4 = pauVar4 + 2, pauVar4 != pauVar26) {
                          FUN_180291a50(pauVar4);
                        }
                        puVar17 = local_4220;
LAB_1802902f9:
                        *pauVar26 = (undefined1  [16])0x0;
                        FUN_180297150(param_1,puVar17,pauVar11);
                      }
                    }
                    else {
                      local_43c8 = &local_42c8;
                      FUN_180272620(&DAT_180cc9398,local_31c8,local_4380,auVar36._0_8_);
                      if (local_21b8 == '\0') {
                        local_4368 = local_4368 + 1;
                        uVar20 = (((((((((ulonglong)local_4380 & 0xff ^ 0xcbf29ce484222325) *
                                        0x100000001b3 ^ (ulonglong)local_4380 >> 8 & 0xff) *
                                       0x100000001b3 ^ (ulonglong)local_4380 >> 0x10 & 0xff) *
                                      0x100000001b3 ^ (ulonglong)local_4380 >> 0x18 & 0xff) *
                                     0x100000001b3 ^ (ulonglong)local_4380 >> 0x20 & 0xff) *
                                    0x100000001b3 ^ (ulonglong)local_4380 >> 0x28 & 0xff) *
                                   0x100000001b3 ^ (ulonglong)local_4380 >> 0x30 & 0xff) *
                                  0x100000001b3 ^ (ulonglong)local_4380 >> 0x38) * 0x100000001b3 &
                                 *(ulonglong *)(param_1 + 0x30);
                        pauVar11 = *(undefined1 (**) [16])
                                    (*(longlong *)(param_1 + 0x18) + 8 + uVar20 * 0x10);
                        if (pauVar11 == *(undefined1 (**) [16])(param_1 + 8)) {
LAB_18028fc71:
                          pauVar11 = (undefined1 (*) [16])0x0;
                        }
                        else {
                          plVar16 = *(longlong **)pauVar11[1];
                          while (local_4380 != plVar16) {
                            if (pauVar11 ==
                                *(undefined1 (**) [16])
                                 (*(longlong *)(param_1 + 0x18) + uVar20 * 0x10))
                            goto LAB_18028fc71;
                            pauVar11 = *(undefined1 (**) [16])(*pauVar11 + 8);
                            plVar16 = *(longlong **)pauVar11[1];
                          }
                        }
                        if ((pauVar11 != (undefined1 (*) [16])0x0) &&
                           (pauVar11 != *(undefined1 (**) [16])(param_1 + 8))) {
                          pauVar26 = pauVar11 + 10;
                          pauVar4 = pauVar11;
                          while (pauVar4 = pauVar4 + 2, pauVar4 != pauVar26) {
                            FUN_180291a50(pauVar4);
                          }
                          puVar17 = local_4228;
                          goto LAB_1802902f9;
                        }
                      }
                      else {
                        puVar23 = (undefined *)((longlong)local_4348 + (longlong)local_4380);
                        lVar28 = FUN_18017ea70();
                        *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + 1;
                        if (puVar23 == (undefined *)0x0) {
                          bVar3 = false;
                        }
                        else {
                          local_4370 = (undefined1 (*) [16])0x0;
                          cVar6 = FUN_1804514f0(&local_4370,puVar23,8);
                          if (cVar6 == '\0') {
                            bVar3 = false;
                          }
                          else {
                            local_42e8 = local_4370;
                            bVar3 = true;
                          }
                        }
                        pauVar11 = local_42e8;
                        lVar28 = FUN_18017ea70();
                        if (*(int *)(lVar28 + 4) != 0) {
                          *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + -1;
                        }
                        if ((!bVar3) || (pauVar11 == (undefined1 (*) [16])0x0)) {
                          uStack_425c = uStack_425c & 0xffffff00;
                          auVar32._12_4_ = uStack_425c;
                          auVar32._0_12_ = local_4268;
                        }
                        else {
                          lVar14 = (longlong)local_4344;
                          lVar28 = FUN_18017ea70();
                          *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + 1;
                          puVar17 = *pauVar11 + lVar14;
                          if (puVar17 == (undefined1 *)0x0) {
LAB_18028fd64:
                            uStack_428c = uStack_428c & 0xffffff00;
                          }
                          else {
                            local_4320 = auVar33._0_4_;
                            uStack_431c = local_4320;
                            local_4318 = local_4320;
                            cVar6 = FUN_1804514f0(&local_4320,puVar17,0xc);
                            if (cVar6 == '\0') goto LAB_18028fd64;
                            local_4298 = CONCAT44(uStack_431c,local_4320);
                            uStack_4290 = local_4318;
                            uStack_428c = CONCAT31(uStack_428c._1_3_,1);
                          }
                          lVar28 = FUN_18017ea70();
                          if (*(int *)(lVar28 + 4) != 0) {
                            *(int *)(lVar28 + 4) = *(int *)(lVar28 + 4) + -1;
                          }
                          auVar32._8_4_ = uStack_4290;
                          auVar32._0_8_ = local_4298;
                          auVar32._12_4_ = uStack_428c;
                        }
                        auVar43 = ZEXT1664(auVar32);
                        if ((auVar32[0xc] != '\0') &&
                           (sVar7 = thunk_FUN_180624430(auVar32._0_8_), sVar7 < 1)) {
                          auVar35 = vshufps_avx(auVar43._0_16_,auVar43._0_16_,0x55);
                          auVar44 = ZEXT1664(auVar35);
                          sVar7 = thunk_FUN_180624430(auVar35._0_8_);
                          if (sVar7 < 1) {
                            fVar21 = auVar32._8_4_;
                            sVar7 = thunk_FUN_180624430(fVar21);
                            if (sVar7 < 1) {
                              plVar16 = (longlong *)FUN_180298d80(param_1,local_4218,&local_4380);
                              plVar16 = (longlong *)*plVar16;
                              pfVar25 = (float *)(plVar16 + 0x14);
                              if ((int)plVar16[3] != iVar9) {
                                for (pfVar24 = (float *)(plVar16 + 4); pfVar24 != pfVar25;
                                    pfVar24 = pfVar24 + 8) {
                                  iVar19 = iVar8 + -1;
                                  if (*(longlong *)pfVar24 == 0) {
                                    iVar19 = iVar8;
                                  }
                                  FUN_180291a50(pfVar24);
                                  iVar8 = iVar19;
                                }
                                *(int *)(plVar16 + 3) = iVar9;
                              }
                              FUN_1801b1240(&local_1178,&local_42b8,&local_4380);
                              bVar3 = false;
                              auVar32 = auVar33._0_16_;
                              auVar36 = ZEXT1664(auVar32);
                              auVar41 = ZEXT1664(auVar32);
                              auVar42 = ZEXT1664(auVar32);
                              iVar27 = 0;
                              fVar30 = local_435c;
                              do {
                                plVar22 = plVar16 + 4;
                                *pfVar25 = 0.0;
                                local_4308 = auVar34._0_16_;
                                local_42f8 = uVar38;
                                local_42f0 = fVar30;
                                pauVar11 = (undefined1 (*) [16])FUN_1800ba9f0(local_4208,local_4308)
                                ;
                                local_42f8 = *(undefined8 *)pauVar11[1];
                                local_42f0 = *(float *)(pauVar11[1] + 8);
                                if (SUB164(*pauVar11,0) == 2) {
                                  iVar19 = SUB164(*pauVar11,4);
                                }
                                else {
                                  iVar19 = 1;
                                }
                                if (iVar27 < iVar19) {
                                  if (iVar27 == 0) {
                                    FUN_18063aed0(local_21a8,local_31c8,0x1014);
                                    puVar17 = local_21a8;
                                  }
                                  else {
                                    local_4308 = auVar34._0_16_;
                                    local_42f8 = uVar38;
                                    local_42f0 = fVar30;
                                    uVar31 = FUN_18028afa0(local_4308,iVar27);
                                    local_43c8 = &local_42c8;
                                    puVar17 = (undefined1 *)
                                              FUN_180272620(&DAT_180cc9398,local_41e8,local_4380,
                                                            uVar31);
                                  }
                                  FUN_18063aed0(&local_10f8,puVar17,0x1014);
                                  if (local_e8 == '\0') {
                                    if (*plVar22 != 0) {
                                      iVar8 = iVar8 + -1;
                                    }
                                    FUN_180291a50(plVar22);
                                    iVar19 = local_4388;
                                  }
                                  else {
                                    auVar34 = ZEXT464((uint)local_10f8);
                                    fVar1 = local_10f8 - auVar43._0_4_;
                                    auVar37 = ZEXT464((uint)local_10f4);
                                    fVar29 = local_10f4 - auVar44._0_4_;
                                    auVar40 = ZEXT464((uint)local_10f0);
                                    fVar1 = fVar29 * fVar29 + fVar1 * fVar1 +
                                            (local_10f0 - fVar21) * (local_10f0 - fVar21);
                                    if (fVar1 != auVar33._0_4_) {
                                      if (fVar1 < 0.0) {
                                        auVar33._0_8_ = FUN_18061e150(fVar1);
                                        auVar33._8_56_ = extraout_var;
                                        auVar33 = ZEXT1664(auVar33._0_16_);
                                      }
                                      else {
                                        auVar33 = ZEXT464((uint)SQRT(fVar1));
                                      }
                                    }
                                    sVar7 = thunk_FUN_180624430(auVar33._0_8_);
                                    auVar39 = auVar40._0_16_;
                                    auVar32 = auVar34._0_16_;
                                    auVar35 = auVar37._0_16_;
                                    if ((0 < sVar7) || (auVar33._0_4_ <= 1.0)) {
LAB_180290171:
                                      iVar19 = local_4388 + 1;
                                      if (*plVar22 != 0) {
                                        iVar8 = iVar8 + -1;
                                      }
                                      local_4388 = iVar19;
                                      FUN_180291a50(plVar22);
                                    }
                                    else {
                                      if (bVar3) {
                                        fVar1 = auVar40._0_4_ - auVar42._0_4_;
                                        fVar29 = auVar37._0_4_ - auVar41._0_4_;
                                        fVar2 = auVar34._0_4_ - auVar36._0_4_;
                                        fVar1 = fVar2 * fVar2 + fVar29 * fVar29 + fVar1 * fVar1;
                                        fVar29 = 0.0;
                                        if (fVar1 != 0.0) {
                                          if (fVar1 < 0.0) {
                                            fVar29 = (float)FUN_18061e150(fVar1);
                                            auVar39 = auVar40._0_16_;
                                            auVar32 = auVar34._0_16_;
                                            auVar35 = auVar37._0_16_;
                                          }
                                          else {
                                            fVar29 = SQRT(fVar1);
                                          }
                                        }
                                        if (fVar29 < fVar30) goto LAB_180290171;
                                      }
                                      auVar36 = ZEXT1664(auVar32);
                                      auVar41 = ZEXT1664(auVar35);
                                      auVar42 = ZEXT1664(auVar39);
                                      bVar3 = true;
                                      if (*plVar22 == 0) {
                                        if ((0x7f < iVar8) ||
                                           (FUN_180290c60(plVar22,local_4380), *plVar22 == 0)) {
                                          local_433c = local_433c + 1;
                                          iVar19 = local_4388;
                                          goto LAB_18029018e;
                                        }
                                        iVar8 = iVar8 + 1;
                                        plVar16[7] = local_42e0;
                                      }
                                      UVar12 = local_42e0;
                                      cVar6 = FUN_180291c60(plVar22,local_10ec,local_ec);
                                      if (cVar6 != '\0') {
                                        auVar34 = ZEXT1664(local_4288);
                                        local_4308 = local_4288;
                                        local_42f8 = local_4328;
                                        local_42f0 = local_435c;
                                        UVar18 = UVar12;
                                        if ((ulonglong)plVar16[7] < UVar12) {
                                          UVar18 = plVar16[7];
                                        }
                                        uVar38 = local_4328;
                                        fVar30 = (float)FUN_18028b0b0(local_4308,iVar27,
                                                                      auVar33._0_8_,
                                                                      (float)(UVar12 - UVar18) *
                                                                      0.001);
                                        *pfVar25 = fVar30;
                                        auVar33 = ZEXT864(0);
                                        *(bool *)(plVar16 + 6) = 0.0 < fVar30;
                                        fVar30 = local_435c;
                                        iVar19 = local_4388;
                                        goto LAB_18029019c;
                                      }
                                      local_4338 = local_4338 + 1;
                                      lVar28 = *plVar22;
                                      FUN_180291a50(plVar22);
                                      iVar19 = iVar8 + -1;
                                      if (lVar28 == 0) {
                                        iVar19 = iVar8;
                                      }
                                      iVar8 = iVar19;
                                      fVar30 = local_435c;
                                      iVar19 = local_4388;
                                    }
LAB_18029018e:
                                    auVar33 = ZEXT864(0);
                                    auVar34 = ZEXT1664(local_4288);
                                    uVar38 = local_4328;
                                  }
                                }
                                else {
                                  if (*plVar22 != 0) {
                                    iVar8 = iVar8 + -1;
                                  }
                                  FUN_180291a50(plVar22);
                                  iVar19 = local_4388;
                                }
LAB_18029019c:
                                iVar27 = iVar27 + 1;
                                pfVar25 = pfVar25 + 1;
                                plVar16 = plVar22;
                              } while (iVar27 < 4);
                              auVar36 = ZEXT464(0x3f800000);
                              plVar22 = local_4358;
                              param_1 = local_42d0;
                              goto LAB_180290312;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar19 = local_4388;
              }
LAB_180290312:
              plVar16 = local_4378;
            }
            plVar22 = plVar22 + 3;
          } while (plVar22 != plVar16);
          iVar27 = local_433c;
          iVar9 = local_4338;
          local_4358 = plVar22;
        }
        UVar12 = GetTickCount64();
        uVar5 = DAT_180cc93e0;
        if (DAT_180c655c0 <= UVar12) {
          DAT_180c655c0 = UVar12 + 2000;
          FUN_18063ab10(&local_10f8,0,0x600);
          local_43b0 = local_4368;
          local_43b8 = (undefined4)uStack_1168;
          local_43c0 = (float *)CONCAT44(local_43c0._4_4_,uVar5);
          local_43c8 = (undefined **)CONCAT44(local_43c8._4_4_,DAT_180cad428);
          local_43a8 = iVar19;
          local_43a0 = iVar27;
          local_4398 = iVar9;
          FUN_18015ad60(&local_10f8,0x600,0xffffffffffffffff,
                        "requested_ms=%d network_limit_ms=%d active=%u no_record=%u stationary=%u create_failed=%u pose_failed=%u hit_acceptance=unverified"
                       );
          local_43c8 = &PTR_180700558;
          if (local_10f8._0_1_ != '\0') {
            local_43c8 = (undefined **)&DAT_1806bcfc0;
          }
          local_43c0 = &local_10f8;
          FUN_1800f6900(0);
        }
        plVar16 = (longlong *)**(longlong **)(param_1 + 8);
        if (plVar16 != *(longlong **)(param_1 + 8)) {
          do {
            uVar20 = (((((((((ulonglong)*(byte *)(plVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar16 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar16 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar16 + 0x13)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar16 + 0x14)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar16 + 0x15)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar16 + 0x16)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar16 + 0x17)) * 0x100000001b3 & uStack_1148;
            lVar28 = *(longlong *)(lStack_1160 + 8 + uVar20 * 0x10);
            if (lVar28 == lStack_1170) {
LAB_1802904c4:
              puVar15 = plVar16;
              while (puVar15 = puVar15 + 4, puVar15 != plVar16 + 0x14) {
                FUN_180291a50(puVar15);
              }
              *(undefined1 (*) [16])(plVar16 + 0x14) = (undefined1  [16])0x0;
              puVar15 = (undefined8 *)FUN_180297150(param_1,local_42d8,plVar16);
              plVar16 = (longlong *)*puVar15;
            }
            else {
              lVar14 = *(longlong *)(lVar28 + 0x10);
              while (plVar16[2] != lVar14) {
                if (lVar28 == *(longlong *)(lStack_1160 + uVar20 * 0x10)) goto LAB_1802904c4;
                lVar28 = *(longlong *)(lVar28 + 8);
                lVar14 = *(longlong *)(lVar28 + 0x10);
              }
              plVar16 = (longlong *)*plVar16;
            }
          } while (plVar16 != *(undefined8 **)(param_1 + 8));
        }
        FUN_18017e9a0(&local_1178);
        FUN_18017e9a0(&local_1138);
      }
      FUN_1801abba0(local_1190);
      goto LAB_180290595;
    }
  }
  plVar16 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar16 != *(longlong **)(param_1 + 8)) {
    do {
      lVar28 = (longlong)plVar16;
      while (lVar28 = lVar28 + 0x20, lVar28 != (longlong)plVar16 + 0xa0) {
        FUN_180291a50(lVar28);
      }
      *(undefined1 (*) [16])((longlong)plVar16 + 0xa0) = (undefined1  [16])0x0;
      plVar16 = (longlong *)FUN_180297150(param_1,local_42d8,plVar16);
      plVar16 = (longlong *)*plVar16;
    } while (plVar16 != (longlong *)*(longlong *)(param_1 + 8));
  }
LAB_180290595:
  FUN_1805f68fc(&DAT_180b8e3d0);
}



