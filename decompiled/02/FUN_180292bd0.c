// FUN_180292bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180292bd0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180292bd0(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 (*pauVar3) [32];
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  byte bVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  ULONGLONG UVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  undefined1 (*pauVar28) [16];
  uint *puVar29;
  longlong *plVar30;
  ulonglong uVar31;
  byte bVar32;
  longlong lVar33;
  float *pfVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  int iVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  float fVar40;
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 in_ZMM12 [64];
  float fVar49;
  undefined1 auStackY_32d8 [32];
  undefined1 (*local_32a8) [16];
  int local_32a0;
  int local_329c;
  undefined1 (*local_3298) [16];
  int local_3290;
  undefined1 local_3288 [8];
  undefined8 uStack_3280;
  longlong local_3278;
  longlong local_3270;
  int local_3268;
  int local_3264;
  undefined1 (*local_3260) [16];
  uint local_3258;
  uint local_3254;
  undefined1 (*local_3250) [16];
  undefined1 (*local_3248) [16];
  undefined1 (*local_3238) [16];
  undefined8 local_3230;
  undefined1 (*local_3228) [16];
  undefined1 (*local_3220) [16];
  undefined1 (*local_3218) [16];
  uint local_3210;
  char *local_3208;
  ULONGLONG *local_3200;
  undefined1 (*local_31f8) [16];
  undefined1 (*local_31e8 [2]) [16];
  undefined *local_31d8;
  undefined1 local_31d0 [16];
  undefined1 local_31c0 [24];
  undefined1 local_31a8 [4096];
  undefined4 local_21a8;
  undefined1 local_2188 [4128];
  ULONGLONG local_1168 [2];
  undefined8 local_1158;
  longlong lStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined1 local_1138 [16];
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined1 local_1118 [32];
  undefined1 local_10f8 [16];
  float local_10e8 [1024];
  int local_e8;
  undefined8 local_e4;
  float local_dc;
  ULONGLONG local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined1 local_98 [16];
  
  local_98 = in_ZMM12._0_16_;
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStackY_32d8;
  local_31d8 = &DAT_1808e3940;
  local_3270 = param_1;
  iVar15 = FUN_1805f68d0(&DAT_1808e3940);
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e398c == 0x7fffffff) {
    DAT_1808e398c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_180294580(param_1);
  if (DAT_180cb1998 == '\0') {
    FUN_1802946a0(param_1);
    goto LAB_180294239;
  }
  local_32a8 = (undefined1 (*) [16])0x908060504030200;
  bVar32 = DAT_180cb1a78;
  if (DAT_180cb1a78 < 0xb) {
LAB_180292d06:
    bVar12 = bVar32;
  }
  else {
    if (0x12 < DAT_180cb1a78) {
      bVar32 = 2;
      goto LAB_180292d06;
    }
    bVar12 = local_3288[(ulonglong)(DAT_180cb1a78 - 0xb) - 0x20];
    local_32a8 = (undefined1 (*) [16])0x908060504030200;
    bVar32 = bVar12;
    if (bVar12 < 0xb) goto LAB_180292d06;
    if (bVar12 < 0x13) {
      bVar32 = local_3288[(ulonglong)(bVar12 - 0xb) - 0x20];
    }
    else {
      bVar32 = 2;
    }
  }
  uVar19 = 0;
  do {
    if ((&DAT_1807d1130)[uVar19] == bVar32) {
      iVar15 = (int)uVar19 + 1;
      goto LAB_180292d2a;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 3);
  iVar15 = 0;
LAB_180292d2a:
  if (iVar15 != 0) {
    bVar12 = 2;
  }
  if (bVar12 == 0) {
    bVar12 = 2;
  }
  if (*(uint *)(param_1 + 0x28) != (uint)bVar12) {
    *(uint *)(param_1 + 0x28) = (uint)bVar12;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  local_32a8 = (undefined1 (*) [16])0x908060504030200;
  uVar16 = (uint)bVar12;
  if (uVar16 < 0xb) {
    bVar32 = bVar12;
LAB_180292d7d:
    if (((byte)(bVar32 - 1) < 4) || (bVar32 == 10)) goto LAB_180292d89;
  }
  else {
    if (uVar16 < 0x13) {
      bVar32 = local_3288[(ulonglong)(uVar16 - 0xb) - 0x20];
      goto LAB_180292d7d;
    }
LAB_180292d89:
    iVar15 = 0;
    do {
      if ((0xfe < *(uint *)(param_1 + 0x2c)) || (lVar20 = FUN_1803e6cb0(bVar12,0), lVar20 == 0))
      break;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 4);
  }
  bVar7 = false;
  local_1168[0] = GetTickCount64();
  auVar41 = ZEXT464(DAT_180cb1d18);
  sVar14 = thunk_FUN_180624430(DAT_180cb1d18);
  if (sVar14 < 1) {
    local_3254 = 0x40000000;
    local_3258 = 0x3e4ccccd;
    puVar29 = &local_3258;
    if (0.2 <= auVar41._0_4_) {
      puVar29 = &DAT_180cb1d18;
    }
    puVar21 = &local_3254;
    if (auVar41._0_4_ <= 2.0) {
      puVar21 = puVar29;
    }
    auVar41 = ZEXT464(*puVar21);
  }
  else {
    auVar41 = ZEXT464(0x3f4ccccd);
  }
  plVar27 = (longlong *)**(longlong **)(param_1 + 0x78);
  if (plVar27 != *(longlong **)(param_1 + 0x78)) {
    auVar42 = ZEXT464((uint)(auVar41._0_4_ * 1000.0));
    do {
      auVar48 = auVar42._0_16_;
      uVar19 = local_1168[0] - plVar27[0xb];
      if ((longlong)uVar19 < 0) {
        uVar38 = (ulonglong)((uint)uVar19 & 1);
      }
      else {
        uVar38 = uVar19;
      }
      if (auVar42._0_4_ < (float)uVar19) {
LAB_180292ebd:
        local_1118 = *(undefined1 (*) [32])(plVar27 + 3);
        local_10f8 = (undefined1  [16])0x0;
        lVar20 = plVar27[0xe];
        uVar23 = 0;
        lVar22 = 0;
        if (lVar20 != 0) {
          uVar23 = plVar27[0xd];
          local_10f8._8_8_ = lVar20;
          local_10f8._0_8_ = uVar23;
          LOCK();
          *(int *)(lVar20 + 0xc) = *(int *)(lVar20 + 0xc) + 1;
          UNLOCK();
          lVar22 = lVar20;
        }
        pauVar3 = *(undefined1 (**) [32])(param_1 + 0x18);
        if (pauVar3 == *(undefined1 (**) [32])(param_1 + 0x20)) {
          auVar41 = ZEXT1664(auVar48);
          FUN_180299fb0(param_1 + 0x10);
          auVar48 = auVar41._0_16_;
          plVar30 = (longlong *)local_10f8._8_8_;
        }
        else {
          *pauVar3 = local_1118;
          *(undefined8 *)pauVar3[1] = uVar23;
          *(longlong *)(pauVar3[1] + 8) = lVar22;
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x30;
          plVar30 = (longlong *)0x0;
        }
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar30 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            auVar41 = ZEXT1664(auVar48);
            (**(code **)(*plVar30 + 8))();
            auVar48 = auVar41._0_16_;
          }
        }
        uVar19 = (((((((((ulonglong)*(byte *)(plVar27 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar27 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar27 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar27 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar27 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar27 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar27 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar27 + 0x17)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0xa0);
        lVar20 = *(longlong *)(param_1 + 0x88);
        puVar26 = *(undefined8 **)(lVar20 + uVar19 * 0x10);
        if (*(undefined8 **)(lVar20 + 8 + uVar19 * 0x10) == plVar27) {
          if (puVar26 == plVar27) {
            uVar23 = *(undefined8 *)(param_1 + 0x78);
            *(undefined8 *)(lVar20 + uVar19 * 0x10) = uVar23;
            *(undefined8 *)(lVar20 + 8 + uVar19 * 0x10) = uVar23;
          }
          else {
            *(longlong *)(lVar20 + 8 + uVar19 * 0x10) = plVar27[1];
          }
        }
        else if (puVar26 == plVar27) {
          *(longlong *)(lVar20 + uVar19 * 0x10) = *plVar27;
        }
        puVar26 = (undefined8 *)*plVar27;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
        *(undefined8 **)plVar27[1] = puVar26;
        puVar26[1] = plVar27[1];
        auVar42 = ZEXT1664(auVar48);
        FUN_1800efed0(plVar27 + 0xd);
        FUN_1801bd3e0(plVar27 + 8);
        if (0x1f < (ulonglong)((longlong)plVar27 + (-8 - plVar27[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        auVar41._0_8_ = FUN_1804547d0(plVar27[-1],0x10c7);
        auVar41._8_56_ = extraout_var_00;
        bVar7 = true;
      }
      else {
        lVar20 = plVar27[2];
        lVar22 = FUN_1803d4150(uVar38,*(undefined4 *)(plVar27 + 7));
        auVar48 = auVar42._0_16_;
        if (lVar22 != lVar20) goto LAB_180292ebd;
        lVar20 = *(longlong *)(plVar27[9] + -8);
        lVar22 = FUN_1802921f0(plVar27[2]);
        auVar48 = auVar42._0_16_;
        auVar41._8_56_ = extraout_var;
        auVar41._0_8_ = extraout_XMM0_Qa;
        if (lVar22 != lVar20) goto LAB_180292ebd;
        puVar26 = (undefined8 *)*plVar27;
      }
      plVar27 = puVar26;
    } while (puVar26 != *(undefined8 **)(param_1 + 0x78));
  }
  puVar26 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar4 = (undefined8 *)*puVar26; puVar4 != puVar26; puVar4 = (undefined8 *)*puVar4) {
    if ((puVar4[8] != puVar4[9]) && (local_1168[0] - puVar4[0xb] < 0xfb)) {
      lVar20 = FUN_1803d4150(auVar41._0_8_,*(undefined4 *)(puVar4 + 7));
      auVar41._8_56_ = extraout_var_01;
      auVar41._0_8_ = extraout_XMM0_Qa_00;
      if (lVar20 == puVar4[2]) {
        lVar22 = FUN_1802921f0();
        lVar20 = local_3270;
        auVar41._8_56_ = extraout_var_02;
        auVar41._0_8_ = extraout_XMM0_Qa_01;
        if (lVar22 == *(longlong *)(puVar4[9] + -8)) {
          uVar19 = (((((((((ulonglong)*(byte *)(puVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)puVar4 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)puVar4 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)puVar4 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)puVar4 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)puVar4 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)puVar4 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar4 + 0x17)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0xa0);
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + uVar19 * 0x10);
          if (lVar22 == *(longlong *)(local_3270 + 0x78)) {
LAB_180293181:
            lVar22 = 0;
          }
          else {
            lVar33 = *(longlong *)(lVar22 + 0x10);
            while (puVar4[2] != lVar33) {
              if (lVar22 == *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar19 * 0x10))
              goto LAB_180293181;
              lVar22 = *(longlong *)(lVar22 + 8);
              lVar33 = *(longlong *)(lVar22 + 0x10);
            }
          }
          if ((lVar22 == 0) || (lVar22 == *(longlong *)(local_3270 + 0x78))) {
            param_1 = local_3270;
            if ((ulonglong)
                ((*(longlong *)(local_3270 + 0x18) - *(longlong *)(local_3270 + 0x10)) / 0x30 +
                *(longlong *)(local_3270 + 0x80)) < 8) {
              _local_3288 = ZEXT816(0x180b8e3d0);
              iVar15 = FUN_1805f68d0(&DAT_180b8e3d0);
              if (iVar15 != 0) goto LAB_1802942b5;
              if (DAT_180b8e41c == 0x7fffffff) {
                DAT_180b8e41c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              uStack_3280._0_1_ = 1;
              FUN_180290c60(puVar4 + 3,puVar4[2]);
              lVar22 = puVar4[3];
              if (lVar22 != 0) {
                plVar27 = &DAT_180c66040;
                do {
                  lVar24 = 0;
                  LOCK();
                  lVar33 = *plVar27;
                  if (lVar33 == 0) {
                    *plVar27 = lVar22;
                  }
                  else {
                    lVar24 = lVar33;
                  }
                  UNLOCK();
                } while (((lVar33 != 0) && (lVar24 != lVar22)) &&
                        (plVar27 = plVar27 + 1, plVar27 != (longlong *)&DAT_180c660c0));
                uVar23 = FUN_180294ae0(local_2188,puVar4 + 3,local_1168[0]);
                FUN_18063aed0(local_31a8,uVar23,0x1020);
                cVar13 = FUN_180291c60(puVar4 + 3,local_31a8,local_21a8);
                if (cVar13 == '\0') {
                  FUN_180291a50(puVar4 + 3);
                }
                else {
                  if (DAT_180c7df28 == (undefined8 *)0x0) {
                    local_3238 = (undefined1 (*) [16])0x180827288;
                    local_3230 = 0x15;
                    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_3238);
                  }
                  local_3260 = (undefined1 (*) [16])
                               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                         ((longlong *)*DAT_180c7df28,0x18);
                  if (local_3260 == (undefined1 (*) [16])0x0) {
                    local_3220 = (undefined1 (*) [16])0x0;
                  }
                  else {
                    *local_3260 = (undefined1  [16])0x0;
                    *(undefined4 *)(*local_3260 + 8) = 1;
                    *(undefined4 *)(*local_3260 + 0xc) = 1;
                    *(undefined ***)*local_3260 = std::_Ref_count_obj2<int>::vftable;
                    *(undefined4 *)local_3260[1] = 0;
                    local_3220 = local_3260;
                  }
                  local_3228 = local_3220 + 1;
                  FUN_1801787e0(puVar4 + 0xd,&local_3228);
                  pauVar11 = local_3220;
                  if (local_3220 != (undefined1 (*) [16])0x0) {
                    LOCK();
                    piVar2 = (int *)(*local_3220 + 8);
                    iVar15 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (*(code *)**(undefined8 **)*local_3220)(local_3220);
                      LOCK();
                      piVar2 = (int *)(*pauVar11 + 0xc);
                      iVar15 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar15 == 1) {
                        (**(code **)(*(longlong *)*pauVar11 + 8))(pauVar11);
                      }
                    }
                  }
                  lVar20 = local_3270;
                  *(undefined1 *)(puVar4 + 5) = 1;
                  FUN_1802976d0(local_3270 + 0x70,local_31e8,puVar4 + 2);
                  bVar7 = true;
                }
              }
              auVar41._0_8_ = FUN_1805f68fc(&DAT_180b8e3d0);
              auVar41._8_56_ = extraout_var_04;
              param_1 = lVar20;
            }
          }
          else {
            puVar1 = (undefined8 *)(lVar22 + 0x18);
            uVar23 = FUN_180294ae0(local_2188,puVar1,local_1168[0]);
            FUN_18063aed0(local_31a8,uVar23,0x1020);
            FUN_18063aed0(puVar4 + 0xf,local_31a8,0x1020);
            *(undefined1 *)(puVar4 + 0x213) = 1;
            uVar39 = FUN_180294960(puVar1,local_1168[0]);
            *(undefined4 *)((longlong)puVar4 + 0x109c) = uVar39;
            uVar23 = *(undefined8 *)(lVar22 + 0x20);
            uVar8 = *(undefined8 *)(lVar22 + 0x28);
            uVar9 = *(undefined8 *)(lVar22 + 0x30);
            puVar4[3] = *puVar1;
            puVar4[4] = uVar23;
            puVar4[5] = uVar8;
            puVar4[6] = uVar9;
            if (*(longlong *)(lVar22 + 0x70) != 0) {
              LOCK();
              piVar2 = (int *)(*(longlong *)(lVar22 + 0x70) + 8);
              *piVar2 = *piVar2 + 1;
              UNLOCK();
            }
            uVar23 = *(undefined8 *)(lVar22 + 0x70);
            puVar4[0xd] = *(undefined8 *)(lVar22 + 0x68);
            plVar27 = (longlong *)puVar4[0xe];
            puVar4[0xe] = uVar23;
            if (plVar27 != (longlong *)0x0) {
              LOCK();
              plVar30 = plVar27 + 1;
              lVar20 = *plVar30;
              *(int *)plVar30 = (int)*plVar30 + -1;
              UNLOCK();
              if ((int)lVar20 == 1) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                iVar15 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar27 + 8))(plVar27);
                }
              }
            }
            auVar41._0_8_ = FUN_1802966d0(puVar1,puVar4 + 3);
            auVar41._8_56_ = extraout_var_03;
            bVar7 = true;
            param_1 = local_3270;
          }
        }
      }
    }
  }
  if (*(ulonglong *)(param_1 + 0xc0) != 0) {
    if (*(ulonglong *)(param_1 + 0xc0) < *(ulonglong *)(param_1 + 0xe8) >> 3) {
      FUN_1802995d0(param_1 + 0xb0,**(undefined8 **)(param_1 + 0xb8),
                    *(undefined8 **)(param_1 + 0xb8));
    }
    else {
      FUN_1801b6980();
      *(undefined8 *)*(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
      *(longlong *)(*(longlong *)(param_1 + 0xb8) + 8) = *(longlong *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      local_3238 = *(undefined1 (**) [16])(param_1 + 0xb8);
      FUN_1800f9880(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),&local_3238);
    }
  }
  if (bVar7) {
    FUN_180294360(param_1);
    FUN_180294580(param_1);
  }
  local_329c = DAT_180c654f0;
  iVar15 = DAT_180c654f0;
  if (DAT_180c654f0 == 0) {
    UVar25 = GetTickCount64();
    if (UVar25 < DAT_180c654d0) {
      iVar15 = 0;
      local_329c = 0;
    }
    else {
      local_3260 = (undefined1 (*) [16])&DAT_1808f3050;
      iVar15 = FUN_1805f68d0(&DAT_1808f3050);
      if (iVar15 != 0) goto LAB_1802942b5;
      if (DAT_1808f309c == 0x7fffffff) {
        DAT_1808f309c = 0x7ffffffe;
        goto LAB_180294314;
      }
      local_329c = DAT_180c654f0;
      if ((DAT_180c654f0 == 0) && (DAT_180c654d0 <= UVar25)) {
        local_329c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (local_329c == 0) {
          DAT_180c654d0 = UVar25 + 1000;
        }
        else {
          DAT_180c654d0 = 0xffffffffffffffff;
        }
      }
      iVar15 = local_329c;
      DAT_180c654f0 = local_329c;
      FUN_1805f68fc(&DAT_1808f3050);
    }
  }
  iVar17 = DAT_180c654e0;
  local_32a0 = DAT_180c654e0;
  if (DAT_180c654e0 == 0) {
    UVar25 = GetTickCount64();
    if (UVar25 < DAT_180c654d8) {
      local_32a0 = iVar17;
    }
    else {
      local_3260 = (undefined1 (*) [16])&DAT_1808f2fb0;
      iVar17 = FUN_1805f68d0(&DAT_1808f2fb0);
      if (iVar17 != 0) goto LAB_1802942b5;
      if (DAT_1808f2ffc == 0x7fffffff) {
        DAT_1808f2ffc = 0x7ffffffe;
        goto LAB_180294314;
      }
      local_32a0 = DAT_180c654e0;
      if ((DAT_180c654e0 == 0) && (DAT_180c654d8 <= UVar25)) {
        local_32a0 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (local_32a0 == 0) {
          DAT_180c654d8 = UVar25 + 1000;
        }
        else {
          DAT_180c654d8 = 0xffffffffffffffff;
        }
      }
      iVar17 = local_32a0;
      DAT_180c654e0 = local_32a0;
      FUN_1805f68fc(&DAT_1808f2fb0);
    }
  }
  local_3290 = DAT_180c654c0;
  iVar18 = DAT_180c654c0;
  if (DAT_180c654c0 == 0) {
    UVar25 = GetTickCount64();
    if (UVar25 < DAT_180c654c8) {
      local_3290 = 0;
      iVar18 = 0;
    }
    else {
      local_3260 = (undefined1 (*) [16])&DAT_1808f3000;
      iVar18 = FUN_1805f68d0(&DAT_1808f3000);
      if (iVar18 != 0) {
LAB_1802942b5:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f304c == 0x7fffffff) {
        DAT_1808f304c = 0x7ffffffe;
LAB_180294314:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_3290 = DAT_180c654c0;
      if ((DAT_180c654c0 == 0) && (DAT_180c654c8 <= UVar25)) {
        local_3290 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (local_3290 == 0) {
          DAT_180c654c8 = UVar25 + 1000;
        }
        else {
          DAT_180c654c8 = 0xffffffffffffffff;
        }
      }
      iVar18 = local_3290;
      DAT_180c654c0 = local_3290;
      FUN_1805f68fc(&DAT_1808f3000);
    }
  }
  if (((iVar15 != 0) && (iVar17 != 0)) && (iVar18 != 0)) {
    uStack_1140 = 0;
    local_1138 = ZEXT816(0);
    uStack_1128 = 0;
    uStack_1120 = 0;
    auVar48._12_4_ = 0;
    auVar48._0_12_ = ZEXT812(0);
    auVar48 = auVar48 << 0x20;
    local_1158 = 0;
    lStack_1150 = 0;
    uStack_1148 = 0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      uStack_3280 = 0x15;
      local_3288 = (undefined1  [8])"tier0.dll:g_pMemAlloc";
      auVar41 = ZEXT1264(ZEXT812(0)) << 0x20;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_3288);
      auVar48 = auVar41._0_16_;
    }
    auVar41 = ZEXT1664(auVar48);
    lStack_1150 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
    *(longlong *)lStack_1150 = lStack_1150;
    *(longlong *)(lStack_1150 + 8) = lStack_1150;
    uStack_1140 = 0;
    local_1138 = (undefined1  [16])0x0;
    uStack_1128 = 7;
    uStack_1120 = 8;
    local_1158 = CONCAT44(local_1158._4_4_,0x3f800000);
    uVar23 = FUN_1801406e0(&uStack_1140,0x10,lStack_1150);
    puVar26 = (undefined8 *)FUN_1803d44c0(uVar23,local_1118,1);
    local_3248 = (undefined1 (*) [16])*puVar26;
    local_3260 = (undefined1 (*) [16])puVar26[1];
    if (local_3248 != local_3260) {
      fVar46 = 0.75;
      fVar47 = 1.25;
      fVar49 = 16384.0;
      auVar48 = vunpcklps_avx(ZEXT416((uint)local_3288._0_4_),ZEXT416((uint)local_3288._4_4_));
      auVar42 = ZEXT1664(auVar48);
      fVar43 = (float)uStack_3280;
      fVar44 = (float)local_3288._4_4_;
      fVar45 = (float)local_3288._0_4_;
      do {
        pauVar11 = local_3248;
        iVar18 = DAT_180c654b8;
        if ((DAT_180c654b8 == 0) && (UVar25 = GetTickCount64(), DAT_180c654b0 <= UVar25)) {
          local_3228 = (undefined1 (*) [16])&DAT_1808f2f60;
          iVar18 = FUN_1805f68d0(&DAT_1808f2f60);
          if (iVar18 != 0) goto LAB_1802942aa;
          if (DAT_1808f2fac == 0x7fffffff) {
            DAT_1808f2fac = 0x7ffffffe;
            goto LAB_18029434a;
          }
          if ((DAT_180c654b8 == 0) && (DAT_180c654b0 <= UVar25)) {
            DAT_180c654b8 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
            if (DAT_180c654b8 == 0) {
              DAT_180c654b0 = UVar25 + 1000;
            }
            else {
              DAT_180c654b0 = 0xffffffffffffffff;
            }
          }
          iVar18 = DAT_180c654b8;
          FUN_1805f68fc(&DAT_1808f2f60);
        }
        lVar22 = (longlong)iVar18 + *(longlong *)*pauVar11;
        lVar20 = FUN_18017ea70();
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
        if (lVar22 == 0) {
          bVar7 = false;
        }
        else {
          local_3298 = (undefined1 (*) [16])((ulonglong)local_3298 & 0xffffffff00000000);
          cVar13 = FUN_1804514f0(&local_3298,lVar22,4);
          if (cVar13 == '\0') {
            bVar7 = false;
          }
          else {
            local_3268 = (uint)local_3298;
            bVar7 = true;
          }
        }
        iVar10 = local_3268;
        lVar20 = FUN_18017ea70();
        iVar18 = *(int *)(lVar20 + 4);
        if (iVar18 != 0) {
          iVar18 = iVar18 + -1;
          *(int *)(lVar20 + 4) = iVar18;
        }
        iVar37 = 0;
        if (bVar7) {
          iVar37 = iVar10;
        }
        local_32a8 = (undefined1 (*) [16])CONCAT44(local_32a8._4_4_,iVar37);
        local_3278 = FUN_1803d4150(iVar18,iVar37);
        if (local_3278 != 0) {
          cVar13 = FUN_180292050(local_3278);
          if (cVar13 != '\0') {
            iVar18 = DAT_180c654bc;
            if (DAT_180c654bc == 0) {
              UVar25 = GetTickCount64();
              if (UVar25 < DAT_180c654a0) {
                iVar18 = 0;
              }
              else {
                local_3228 = (undefined1 (*) [16])&DAT_1808f2f10;
                iVar18 = FUN_1805f68d0(&DAT_1808f2f10);
                if (iVar18 != 0) {
LAB_1802942aa:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808f2f5c == 0x7fffffff) {
                  DAT_1808f2f5c = 0x7ffffffe;
LAB_18029434a:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c654bc == 0) && (DAT_180c654a0 <= UVar25)) {
                  DAT_180c654bc = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                  if (DAT_180c654bc == 0) {
                    DAT_180c654a0 = UVar25 + 1000;
                  }
                  else {
                    DAT_180c654a0 = 0xffffffffffffffff;
                  }
                }
                iVar18 = DAT_180c654bc;
                FUN_1805f68fc(&DAT_1808f2f10);
              }
            }
            lVar22 = iVar18 + local_3278;
            lVar20 = FUN_18017ea70();
            *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
            if (lVar22 == 0) {
              bVar7 = false;
            }
            else {
              local_3298 = (undefined1 (*) [16])((ulonglong)local_3298 & 0xffffffff00000000);
              cVar13 = FUN_1804514f0(&local_3298,lVar22,4);
              if (cVar13 == '\0') {
                bVar7 = false;
              }
              else {
                local_3264 = (uint)local_3298;
                bVar7 = true;
              }
            }
            iVar18 = local_3264;
            lVar20 = FUN_18017ea70();
            if (*(int *)(lVar20 + 4) != 0) {
              *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
            }
            if ((bVar7) && (0 < iVar18)) {
              FUN_1801b1240(&local_1158,local_31d0,&local_3278);
              plVar27 = (longlong *)FUN_180298a70(local_3270 + 0x30,local_31c0,&local_3278);
              lVar20 = *plVar27;
              if (*(int *)(lVar20 + 0x18) != iVar37) {
                FUN_1801bd470(lVar20 + 0x20);
                *(int *)(lVar20 + 0x18) = iVar37;
              }
              if ((*(longlong *)(lVar20 + 0x40) == 0) ||
                 (0xf < local_1168[0] -
                        *(longlong *)
                         (*(longlong *)
                           (*(longlong *)(lVar20 + 0x28) +
                           (*(longlong *)(lVar20 + 0x40) + *(longlong *)(lVar20 + 0x38) + -1 &
                           *(longlong *)(lVar20 + 0x30) - 1U) * 8) + 0x1010))) {
                lVar33 = iVar15 + local_3278;
                lVar22 = FUN_18017ea70();
                *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                if (lVar33 == 0) {
                  bVar7 = false;
                }
                else {
                  local_3298 = (undefined1 (*) [16])0x0;
                  cVar13 = FUN_1804514f0(&local_3298,lVar33,8);
                  if (cVar13 == '\0') {
                    bVar7 = false;
                  }
                  else {
                    local_3250 = local_3298;
                    bVar7 = true;
                  }
                }
                pauVar11 = local_3250;
                lVar22 = FUN_18017ea70();
                if (*(int *)(lVar22 + 4) != 0) {
                  *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                }
                if ((bVar7) && (pauVar11 != (undefined1 (*) [16])0x0)) {
                  lVar22 = FUN_18017ea70();
                  *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                  if (pauVar11[8] + iVar17 == (undefined *)0x0) {
                    bVar7 = false;
                  }
                  else {
                    local_3298 = (undefined1 (*) [16])0x0;
                    cVar13 = FUN_1804514f0(&local_3298,pauVar11[8] + iVar17,8);
                    if (cVar13 == '\0') {
                      bVar7 = false;
                    }
                    else {
                      local_3218 = local_3298;
                      bVar7 = true;
                    }
                  }
                  pauVar28 = local_3218;
                  lVar22 = FUN_18017ea70();
                  if (*(int *)(lVar22 + 4) != 0) {
                    *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                  }
                  pauVar35 = (undefined1 (*) [16])0x0;
                  if (bVar7) {
                    pauVar35 = pauVar28;
                  }
                  local_3228 = pauVar35;
                  if (pauVar35 != (undefined1 (*) [16])0x0) {
                    if (pauVar11 + 0x1e == (undefined1 (*) [16])0x0) {
                      bVar7 = false;
                      pauVar28 = local_31f8;
                    }
                    else {
                      local_3298 = (undefined1 (*) [16])0x0;
                      lVar22 = FUN_18017ea70();
                      *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                      cVar13 = FUN_1804514c0(&local_3298,pauVar11 + 0x1e,8);
                      pauVar28 = local_3298;
                      if (cVar13 == '\0') {
                        bVar7 = false;
                        lVar22 = FUN_18017ea70();
                        if (*(int *)(lVar22 + 4) != 0) {
                          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                        }
                        pauVar28 = local_31f8;
                      }
                      else {
                        local_31f8 = local_3298;
                        bVar7 = true;
                        lVar22 = FUN_18017ea70();
                        if (*(int *)(lVar22 + 4) != 0) {
                          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                        }
                      }
                    }
                    pauVar36 = (undefined1 (*) [16])0x0;
                    if (!bVar7) {
                      pauVar28 = pauVar36;
                    }
                    if (pauVar28 != (undefined1 (*) [16])0x0) {
                      local_3298 = (undefined1 (*) [16])0x0;
                      lVar22 = FUN_18017ea70();
                      *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                      cVar13 = FUN_1804514c0(&local_3298,pauVar28,8);
                      pauVar28 = local_3298;
                      if (cVar13 == '\0') {
                        bVar7 = false;
                        lVar22 = FUN_18017ea70();
                        if (*(int *)(lVar22 + 4) != 0) {
                          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                        }
                        pauVar28 = local_31e8[0];
                      }
                      else {
                        local_31e8[0] = local_3298;
                        bVar7 = true;
                        lVar22 = FUN_18017ea70();
                        if (*(int *)(lVar22 + 4) != 0) {
                          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                        }
                      }
                      if (!bVar7) {
                        pauVar28 = pauVar36;
                      }
                      if (pauVar28 != (undefined1 (*) [16])0x0) {
                        if (pauVar28[0x17] + 8 == (undefined *)0x0) {
                          bVar7 = false;
                          uVar16 = local_3210;
                        }
                        else {
                          local_3298 = (undefined1 (*) [16])
                                       ((ulonglong)local_3298 & 0xffffffff00000000);
                          lVar22 = FUN_18017ea70();
                          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                          cVar13 = FUN_1804514c0(&local_3298,pauVar28[0x17] + 8,4);
                          if (cVar13 == '\0') {
                            bVar7 = false;
                            lVar22 = FUN_18017ea70();
                            if (*(int *)(lVar22 + 4) != 0) {
                              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                            }
                            uVar16 = local_3210;
                          }
                          else {
                            uVar16 = (uint)local_3298;
                            local_3210 = (uint)local_3298;
                            bVar7 = true;
                            lVar22 = FUN_18017ea70();
                            if (*(int *)(lVar22 + 4) != 0) {
                              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                            }
                          }
                        }
                        pauVar36 = (undefined1 (*) [16])(ulonglong)uVar16;
                        if (!bVar7) {
                          pauVar36 = (undefined1 (*) [16])0x0;
                        }
                        if (0x7f < (int)pauVar36 - 1U) {
                          pauVar36 = (undefined1 (*) [16])0x0;
                        }
                      }
                    }
                    iVar15 = (int)pauVar36;
                    if (iVar15 - 1U < 0x80) {
                      lVar33 = (longlong)local_3290;
                      lVar22 = FUN_18017ea70();
                      auVar48 = _local_3288;
                      *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                      bVar7 = false;
                      fVar40 = fVar43;
                      if (*pauVar11 + lVar33 != (undefined *)0x0) {
                        local_3288._4_4_ = auVar41._0_4_;
                        local_3288._0_4_ = local_3288._4_4_;
                        uStack_3280._4_4_ = auVar48._12_4_;
                        uStack_3280._0_4_ = (float)local_3288._4_4_;
                        cVar13 = FUN_1804514f0(local_3288,*pauVar11 + lVar33,0xc);
                        if (cVar13 == '\0') {
                          bVar7 = false;
                          fVar40 = fVar43;
                        }
                        else {
                          bVar7 = true;
                          auVar48 = vunpcklps_avx(ZEXT416((uint)local_3288._0_4_),
                                                  ZEXT416((uint)local_3288._4_4_));
                          auVar42 = ZEXT1664(auVar48);
                          fVar40 = (float)uStack_3280;
                          fVar44 = (float)local_3288._4_4_;
                          fVar45 = (float)local_3288._0_4_;
                        }
                      }
                      fVar43 = fVar40;
                      lVar22 = FUN_18017ea70();
                      if (*(int *)(lVar22 + 4) != 0) {
                        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                      }
                      if ((bVar7) &&
                         (sVar14 = thunk_FUN_180624430(fVar45 + fVar44 + fVar43), sVar14 < 1)) {
                        FUN_1802929a0(local_10e8);
                        local_e4 = auVar42._0_8_;
                        local_d8 = local_1168[0];
                        local_e8 = iVar15;
                        local_dc = fVar40;
                        local_d0 = FUN_1802921f0(local_3278);
                        if (local_d0 != 0) {
                          lVar22 = FUN_18017ea70();
                          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                          lVar33 = (longlong)iVar15;
                          cVar13 = FUN_1804514f0(local_10e8,pauVar35);
                          lVar22 = FUN_18017ea70();
                          pauVar11 = local_3250;
                          if (*(int *)(lVar22 + 4) != 0) {
                            *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                          }
                          if (cVar13 != '\0') {
                            bVar7 = true;
                            uVar23 = extraout_XMM0_Qa_02;
                            if (0 < iVar15) {
                              pfVar34 = local_10e8 + 6;
                              do {
                                fVar40 = pfVar34[-1] * pfVar34[-1] + pfVar34[-2] * pfVar34[-2] +
                                         *pfVar34 * *pfVar34 + pfVar34[1] * pfVar34[1];
                                sVar14 = thunk_FUN_180624430(pfVar34[-6] + pfVar34[-5] + pfVar34[-4]
                                                             + fVar40);
                                if (((0 < sVar14) || (fVar40 <= fVar46)) || (fVar47 <= fVar40)) {
                                  bVar32 = 0;
                                }
                                else {
                                  bVar32 = 1;
                                }
                                bVar7 = (bool)(bVar7 & bVar32);
                                pfVar34 = pfVar34 + 8;
                                lVar33 = lVar33 + -1;
                              } while (lVar33 != 0);
                              uVar23 = extraout_XMM0_Qa_03;
                              if (!bVar7) goto LAB_1802941d2;
                            }
                            lVar22 = FUN_1803d4150(uVar23,(ulonglong)local_32a8 & 0xffffffff);
                            if (lVar22 == local_3278) {
                              lVar33 = (longlong)local_32a0;
                              lVar22 = FUN_18017ea70();
                              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                              if (pauVar11[8] + lVar33 == (undefined *)0x0) {
                                bVar7 = false;
                              }
                              else {
                                local_32a8 = (undefined1 (*) [16])0x0;
                                cVar13 = FUN_1804514f0(&local_32a8,pauVar11[8] + lVar33);
                                if (cVar13 == '\0') {
                                  bVar7 = false;
                                }
                                else {
                                  local_3238 = local_32a8;
                                  bVar7 = true;
                                }
                              }
                              pauVar11 = local_3238;
                              lVar22 = FUN_18017ea70();
                              if (*(int *)(lVar22 + 4) != 0) {
                                *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                              }
                              if ((bVar7) && (pauVar11 == local_3228)) {
                                if ((*(longlong *)(lVar20 + 0x40) != 0) &&
                                   (((lVar22 = *(longlong *)
                                                (*(longlong *)(lVar20 + 0x28) +
                                                (*(longlong *)(lVar20 + 0x40) +
                                                 *(longlong *)(lVar20 + 0x38) + -1 &
                                                *(longlong *)(lVar20 + 0x30) - 1U) * 8),
                                     *(longlong *)(lVar22 + 0x1018) != local_d0 ||
                                     (*(int *)(lVar22 + 0x1000) != iVar15)) ||
                                    (fVar40 = *(float *)(lVar22 + 0x100c) - fVar43,
                                    fVar5 = *(float *)(lVar22 + 0x1008) - fVar44,
                                    fVar6 = *(float *)(lVar22 + 0x1004) - fVar45,
                                    fVar49 < fVar6 * fVar6 + fVar5 * fVar5 + fVar40 * fVar40)))) {
                                  FUN_1801bd470(lVar20 + 0x20);
                                }
                                if (*(ulonglong *)(lVar20 + 0x30) <=
                                    *(longlong *)(lVar20 + 0x40) + 1U) {
                                  FUN_18029a670(lVar20 + 0x20);
                                }
                                uVar19 = *(longlong *)(lVar20 + 0x30) - 1;
                                *(ulonglong *)(lVar20 + 0x38) =
                                     *(ulonglong *)(lVar20 + 0x38) & uVar19;
                                uVar38 = *(longlong *)(lVar20 + 0x40) + *(longlong *)(lVar20 + 0x38)
                                ;
                                uVar19 = uVar38 & uVar19;
                                if (*(longlong *)(*(longlong *)(lVar20 + 0x28) + uVar19 * 8) == 0) {
                                  if (DAT_180c7df28 == (undefined8 *)0x0) {
                                    local_3208 = "tier0.dll:g_pMemAlloc";
                                    local_3200 = (ULONGLONG *)0x15;
                                    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_3208);
                                  }
                                  lVar22 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))();
                                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0)
                                    ;
                                  }
                                  uVar31 = lVar22 + 0x27U & 0xffffffffffffffe0;
                                  *(longlong *)(uVar31 - 8) = lVar22;
                                  *(ulonglong *)(*(longlong *)(lVar20 + 0x28) + uVar19 * 8) = uVar31
                                  ;
                                }
                                FUN_18063aed0(*(undefined8 *)
                                               (*(longlong *)(lVar20 + 0x28) +
                                               (*(longlong *)(lVar20 + 0x30) - 1U & uVar38) * 8),
                                              local_10e8,0x1020);
                                *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 1;
                                while ((uVar19 = *(ulonglong *)(lVar20 + 0x40), 6 < uVar19 ||
                                       ((1 < uVar19 &&
                                        (0xa0 < local_1168[0] -
                                                *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)(lVar20 + 0x28) +
                                                   (*(longlong *)(lVar20 + 0x30) - 1U &
                                                   *(ulonglong *)(lVar20 + 0x38)) * 8) + 0x1010)))))
                                      ) {
                                  *(ulonglong *)(lVar20 + 0x40) = uVar19 - 1;
                                  if (uVar19 - 1 == 0) {
                                    *(undefined8 *)(lVar20 + 0x38) = 0;
                                  }
                                  else {
                                    *(longlong *)(lVar20 + 0x38) = *(longlong *)(lVar20 + 0x38) + 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
LAB_1802941d2:
                    iVar15 = local_329c;
                  }
                  iVar17 = local_32a0;
                }
              }
            }
          }
        }
        local_3248 = (undefined1 (*) [16])(local_3248[1] + 8);
      } while (local_3248 != local_3260);
      param_1 = local_3270;
    }
    FUN_1801abba0(local_1118);
    local_3208 = (char *)&local_1158;
    local_3200 = local_1168;
    FUN_1802984f0(param_1 + 0x30,&local_3208);
    FUN_18017e9a0(&local_1158);
  }
LAB_180294239:
  FUN_1805f68fc(&DAT_1808e3940);
}



