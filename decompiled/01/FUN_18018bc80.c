// FUN_18018bc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018bc80 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18018bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  short *psVar8;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  char cVar12;
  int iVar13;
  DWORD DVar14;
  uint nNumberOfBytesToWrite;
  BOOL BVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  short *psVar18;
  ULONGLONG UVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  LPCWSTR pWVar22;
  HANDLE hFile;
  undefined1 (*pauVar23) [16];
  LPCWSTR lpExistingFileName;
  undefined1 *puVar24;
  longlong *_Buf1;
  longlong *plVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  byte *pbVar28;
  uint uVar29;
  ulonglong uVar30;
  short *psVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined8 *******pppppppuVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  int *piVar38;
  char *pcVar39;
  longlong *plVar40;
  char *pcVar41;
  int iVar42;
  int iVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auStackY_10608 [32];
  undefined8 **ppuStack_105c0;
  longlong *plStack_105b8;
  int *piStack_105b0;
  int *apiStack_105a8 [2];
  char *pcStack_10598;
  undefined8 uStack_10590;
  ulonglong uStack_10588;
  char *pcStack_10578;
  ulonglong uStack_10570;
  byte *pbStack_10558;
  ulonglong uStack_10550;
  undefined8 uStack_10548;
  undefined8 uStack_10540;
  undefined8 uStack_10538;
  undefined8 uStack_10530;
  undefined8 uStack_10528;
  undefined1 auStack_10520 [16];
  undefined8 uStack_10510;
  undefined8 uStack_10508;
  undefined8 uStack_10500;
  undefined8 uStack_104f8;
  undefined8 uStack_104f0;
  undefined8 uStack_104e8;
  undefined1 *puStack_104d8;
  ulonglong uStack_104d0;
  undefined1 auStack_104c8 [32];
  undefined1 auStack_104a8 [16];
  undefined1 auStack_10498 [16];
  undefined1 auStack_10488 [16];
  undefined1 auStack_10478 [16];
  undefined1 auStack_10468 [16];
  undefined1 auStack_10458 [16];
  undefined1 auStack_10448 [16];
  undefined1 auStack_10438 [16];
  longlong *plStack_10428;
  undefined1 auStack_10420 [32];
  undefined8 *puStack_10400;
  undefined8 uStack_103f8;
  ulonglong uStack_103f0;
  undefined8 uStack_103e8;
  undefined4 uStack_103e0;
  HANDLE pvStack_103d8;
  undefined1 auStack_103d0 [36];
  int iStack_103ac;
  longlong alStack_103a8 [2];
  byte abStack_10398 [160];
  undefined **appuStack_102f8 [12];
  undefined1 auStack_10298 [16];
  undefined1 auStack_10288 [16];
  undefined8 *puStack_10278;
  ulonglong uStack_10270;
  undefined1 auStack_10268 [16];
  undefined8 uStack_10258;
  undefined1 auStack_10250 [16];
  ulonglong uStack_10240;
  ulonglong uStack_10238;
  undefined1 auStack_10230 [16];
  ulonglong uStack_10220;
  ulonglong uStack_10218;
  undefined1 auStack_10210 [16];
  longlong lStack_10200;
  ulonglong uStack_101f8;
  undefined1 auStack_101f0 [16];
  longlong lStack_101e0;
  ulonglong uStack_101d8;
  undefined1 auStack_101d0 [16];
  undefined8 uStack_101c0;
  undefined8 uStack_101b8;
  undefined1 auStack_101b0 [32];
  undefined8 *******apppppppuStack_10190 [2];
  longlong lStack_10180;
  ulonglong uStack_10178;
  undefined1 auStack_10168 [16];
  undefined1 auStack_10158 [16];
  int iStack_10148;
  uint uStack_10144;
  int iStack_10140;
  undefined8 uStack_10128;
  undefined8 uStack_10120;
  undefined1 auStack_10118 [32];
  byte abStack_100f8 [65536];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [40];
  short local_b0 [4];
  undefined1 local_a8 [40];
  short local_80 [4];
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x18018bca3;
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStackY_10608;
  puStack_10400 = param_5;
  bVar7 = false;
  bVar6 = false;
  ppuStack_105c0 = &puStack_10400;
  auStack_10298 = (undefined1  [16])0x0;
  plStack_105b8 = param_4;
  uStack_10548 = param_1;
  plStack_10428 = param_4;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    pcStack_10598 = "tier0.dll:g_pMemAlloc";
    uStack_10590 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&pcStack_10598);
  }
  lVar32 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)lVar32 = lVar32;
  *(longlong *)(lVar32 + 8) = lVar32;
  *(longlong *)(lVar32 + 0x10) = lVar32;
  *(undefined2 *)(lVar32 + 0x18) = 0x101;
  auStack_10298._0_8_ = lVar32;
  apiStack_105a8[0] = (int *)*param_4;
  if (apiStack_105a8[0] != (int *)0x0) {
    LOCK();
    *apiStack_105a8[0] = *apiStack_105a8[0] + 1;
    UNLOCK();
  }
  cVar12 = FUN_18018a140(param_1,param_2,param_3,apiStack_105a8);
  if (cVar12 == '\0') {
    FUN_18018dcb0(&ppuStack_105c0,"validation");
  }
  else {
    FUN_18018ba90(auStack_101b0,param_2);
    cVar12 = FUN_180187280(auStack_101b0);
    if (cVar12 == '\0') {
      FUN_18018dcb0(&ppuStack_105c0,"cache_directory");
      FUN_18015b930(auStack_101b0);
    }
    else {
      uStack_103f8 = 0;
      uStack_103f0 = 0;
      uStack_103e8 = 0;
      uStack_103e0 = 0;
      auStack_10268 = (undefined1  [16])0x0;
      uStack_10258 = 0;
      uStack_101c0 = 0;
      uStack_101b8 = 0xf;
      auStack_101d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar44[0xf] = 0;
      auVar44._0_15_ = auStack_101d0._1_15_;
      auStack_101d0 = auVar44 << 8;
      cVar12 = FUN_180185df0(param_1,&uStack_103f8,auStack_10268,auStack_101d0);
      if (cVar12 != '\0') {
        auStack_10288 = (undefined1  [16])0x0;
        puStack_10278 = (undefined8 *)0x0;
        apiStack_105a8[0] = (int *)0x0;
        pcStack_10598 = (char *)auStack_10268._0_8_;
        uVar34 = auStack_10268._8_8_ - auStack_10268._0_8_;
        lStack_10200 = 0;
        uStack_101f8 = 0xf;
        auStack_10210._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar2[0xf] = 0;
        auVar2._0_15_ = auStack_10210._1_15_;
        auStack_10210 = auVar2 << 8;
        uStack_10220 = 0;
        uStack_10218 = 0xf;
        auStack_10230._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar3[0xf] = 0;
        auVar3._0_15_ = auStack_10230._1_15_;
        auStack_10230 = auVar3 << 8;
        lStack_101e0 = 0;
        uStack_101d8 = 0xf;
        auStack_101f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar4[0xf] = 0;
        auVar4._0_15_ = auStack_101f0._1_15_;
        auStack_101f0 = auVar4 << 8;
        auVar45 = ZEXT1664(_DAT_18086d430);
        uVar27 = 0;
        pcVar39 = (char *)auStack_10268._0_8_;
        uStack_10550 = uVar34;
LAB_18018bfa0:
        bVar10 = false;
        bVar9 = false;
        if (uVar34 <= uVar27) goto LAB_18018bfe7;
        uVar30 = uVar27;
        while( true ) {
          uVar16 = uVar30 + 1;
          if (0x10000 < uVar30 - uVar27) goto LAB_18018bfe7;
          if (pcVar39[uVar30] == '\0') break;
          uVar30 = uVar16;
          if (uVar34 <= uVar16) goto LAB_18018bfe7;
        }
        FUN_180113930(auStack_10210,pcVar39 + uVar27,uVar30 - uVar27);
        uVar30 = uVar30 + 1;
        if (lStack_10200 == 0) goto LAB_18018bfe7;
LAB_18018c0bd:
        uVar27 = uVar30;
        if (uVar34 <= uVar30) goto LAB_18018bfa0;
        while( true ) {
          uVar16 = uVar27 + 1;
          if (0x10000 < uVar27 - uVar30) goto LAB_18018bfa0;
          if (pcVar39[uVar27] == '\0') break;
          uVar27 = uVar16;
          if (uVar34 <= uVar16) goto LAB_18018bfa0;
        }
        FUN_180113930(auStack_10230,pcVar39 + uVar30,uVar27 - uVar30);
        uVar27 = uVar27 + 1;
        uStack_10270 = uStack_10220;
        if (uStack_10220 == 0) goto LAB_18018bfa0;
        uStack_10588 = uStack_10218;
        pbStack_10558 = (byte *)auStack_10230._0_8_;
LAB_18018c150:
        uVar37 = uStack_10270;
        uVar16 = uStack_10588;
        uVar30 = uVar27;
        if (uVar34 <= uVar27) goto LAB_18018c0bd;
        uVar36 = uVar27;
        while( true ) {
          uVar17 = uVar36 + 1;
          uVar30 = uVar36;
          if (0x10000 < uVar36 - uVar27) goto LAB_18018c0bd;
          if (pcVar39[uVar36] == '\0') break;
          uVar30 = uVar17;
          uVar36 = uVar17;
          if (uVar34 <= uVar17) goto LAB_18018c0bd;
        }
        FUN_180113930(auStack_101f0,pcVar39 + uVar27);
        lVar32 = lStack_101e0;
        uVar30 = uVar36 + 1;
        if (lStack_101e0 == 0) goto LAB_18018c0bd;
        if (uVar34 - uVar30 < 0x12) {
          FUN_18018dcb0(&ppuStack_105c0,"entry");
          FUN_18015c010(auStack_101f0);
          FUN_18015c010(auStack_10230);
          FUN_18015c010(auStack_10210);
          if (auStack_10288._0_8_ != 0) {
            uVar20 = auStack_10288._8_8_;
            lVar32 = auStack_10288._0_8_;
            if (auStack_10288._0_8_ != auStack_10288._8_8_) {
              do {
                FUN_18015b930(lVar32);
                lVar32 = lVar32 + 0x30;
              } while (lVar32 != uVar20);
            }
            lVar32 = auStack_10288._0_8_;
            if ((0xfff < (ulonglong)
                         ((((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30) * 0x30)) &&
               (lVar32 = *(longlong *)(auStack_10288._0_8_ + -8),
               0x1f < (auStack_10288._0_8_ - lVar32) - 8U)) goto LAB_18018dc80;
            FUN_1804547d0(lVar32);
            auStack_10288 = (undefined1  [16])0x0;
            puStack_10278 = (undefined8 *)0x0;
          }
          FUN_18015c010(auStack_101d0);
          FUN_180113710(auStack_10268);
          FUN_18015b930(auStack_101b0);
          FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
          FUN_1804547d0(auStack_10298._0_8_,0x48);
          plVar25 = plStack_105b8;
          goto LAB_18018dc07;
        }
        piVar38 = (int *)(pcVar39 + uVar30);
        iVar42 = *piVar38;
        iVar43 = piVar38[2];
        uVar33 = piVar38[3];
        local_e8 = CONCAT62(local_e8._2_6_,*(undefined2 *)(pcVar39 + uVar36 + 0x11));
        uVar27 = uVar36 + 0x13;
        pbVar28 = auStack_10230;
        if (0xf < uVar16) {
          pbVar28 = pbStack_10558;
        }
        if (uVar37 == 1) {
          if (*pbVar28 == 0x20) {
            uVar29 = 0;
          }
          else {
            uVar29 = -(uint)(*pbVar28 < 0x20) | 1;
          }
          if (uVar29 != 0) goto LAB_18018c257;
          auStack_10468 = (undefined1  [16])0x0;
          auStack_10458 = (undefined1  [16])0x0;
          FUN_18015ba30(auStack_10468,&PTR_180700558,0);
          puVar24 = auStack_10468;
          bVar7 = true;
        }
        else {
LAB_18018c257:
          if (uVar37 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          FUN_18015a9c0(auStack_10168);
          puVar24 = auStack_10168;
          bVar6 = true;
          uStack_10588 = uStack_10218;
          uStack_10270 = uStack_10220;
          pbStack_10558 = (byte *)auStack_10230._0_8_;
        }
        puVar26 = auStack_101f0;
        if (0xf < uStack_101d8) {
          puVar26 = (undefined1 *)auStack_101f0._0_8_;
        }
        pauVar23 = (undefined1 (*) [16])FUN_18015b2a0(puVar24,puVar26,lVar32);
        auStack_10488 = *pauVar23;
        auStack_10478 = pauVar23[1];
        *(undefined8 *)(pauVar23[1] + 8) = 0xf;
        (*pauVar23)[0] = 0;
        *(undefined8 *)pauVar23[1] = 0;
        auVar45 = ZEXT1664(auVar45._0_16_);
        pauVar23 = (undefined1 (*) [16])FUN_18015b2a0(auStack_10488,&DAT_1807c5af8,1);
        auStack_104a8 = *pauVar23;
        auStack_10498 = pauVar23[1];
        (*pauVar23)[0] = 0;
        *(undefined8 *)pauVar23[1] = 0;
        *(undefined8 *)(pauVar23[1] + 8) = 0xf;
        puVar24 = auStack_10210;
        if (0xf < uStack_101f8) {
          puVar24 = (undefined1 *)auStack_10210._0_8_;
        }
        auVar45 = ZEXT1664(auVar45._0_16_);
        pauVar23 = (undefined1 (*) [16])FUN_18015b2a0(auStack_104a8,puVar24);
        auStack_10250 = *pauVar23;
        uStack_10240 = *(ulonglong *)pauVar23[1];
        uStack_10238 = *(ulonglong *)(pauVar23[1] + 8);
        (*pauVar23)[0] = 0;
        *(undefined8 *)pauVar23[1] = 0;
        *(undefined8 *)(pauVar23[1] + 8) = 0xf;
        auVar45 = ZEXT1664(auVar45._0_16_);
        FUN_18015c010(auStack_104a8);
        FUN_18015c010(auStack_10488);
        if (bVar6) {
          bVar6 = false;
          FUN_18015c010(auStack_10168);
        }
        if (bVar7) {
          bVar7 = false;
          FUN_18015c010(auStack_10468);
        }
        puStack_104d8 = auStack_10250;
        if (0xf < uStack_10238) {
          puStack_104d8 = (undefined1 *)auStack_10250._0_8_;
        }
        uStack_104d0 = uStack_10240;
        cVar12 = FUN_18017eed0(&puStack_104d8);
        uVar30 = uStack_10238;
        uVar34 = uStack_10240;
        if (cVar12 == '\0') {
LAB_18018c530:
          FUN_18018dcb0(&ppuStack_105c0,"resource");
          FUN_18015c010(auStack_10250);
          FUN_18015c010(auStack_101f0);
          FUN_18015c010(auStack_10230);
          FUN_18015c010(auStack_10210);
          if (auStack_10288._0_8_ != 0) {
            uVar20 = auStack_10288._8_8_;
            lVar32 = auStack_10288._0_8_;
            if (auStack_10288._0_8_ != auStack_10288._8_8_) {
              do {
                FUN_18015b930(lVar32);
                lVar32 = lVar32 + 0x30;
              } while (lVar32 != uVar20);
            }
            lVar32 = auStack_10288._0_8_;
            if ((0xfff < (ulonglong)
                         ((((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30) * 0x30)) &&
               (lVar32 = *(longlong *)(auStack_10288._0_8_ + -8),
               0x1f < (auStack_10288._0_8_ - lVar32) - 8U)) {
LAB_18018dc80:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            FUN_1804547d0(lVar32);
            auStack_10288 = (undefined1  [16])0x0;
            puStack_10278 = (undefined8 *)0x0;
          }
          FUN_18015c010(auStack_101d0);
          FUN_180113710(auStack_10268);
          FUN_18015b930(auStack_101b0);
          FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
          FUN_1804547d0(auStack_10298._0_8_,0x48);
          piVar38 = (int *)*plStack_105b8;
          if (piVar38 == (int *)0x0) {
          }
          LOCK();
          iVar42 = *piVar38;
          *piVar38 = *piVar38 + -1;
          UNLOCK();
          if (iVar42 != 1) {
          }
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            pcStack_10578 = "tier0.dll:g_pMemAlloc";
            uStack_10570 = 0x15;
            DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_10578);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar38);
        }
        plVar25 = *(longlong **)(auStack_10298._0_8_ + 8);
        cVar12 = *(char *)((longlong)plVar25 + 0x19);
        plVar40 = (longlong *)auStack_10298._0_8_;
        pcVar39 = (char *)auStack_10250._0_8_;
        while (cVar12 == '\0') {
                    /* WARNING: Read-only address (ram,0x00018086d430) is written */
          _Buf1 = plVar25 + 4;
          pcVar41 = auStack_10250;
          if (0xf < uVar30) {
            pcVar41 = pcVar39;
          }
          uVar16 = plVar25[6];
          if (0xf < (ulonglong)plVar25[7]) {
            _Buf1 = (longlong *)*_Buf1;
          }
          uVar37 = uVar16;
          if (uVar34 < uVar16) {
            uVar37 = uVar34;
          }
          iVar13 = memcmp(_Buf1,pcVar41,uVar37);
          if (iVar13 == 0) {
            if (uVar34 <= uVar16) goto LAB_18018c4d2;
LAB_18018c6e5:
            plVar25 = plVar25 + 2;
          }
          else {
            if (iVar13 < 0) goto LAB_18018c6e5;
LAB_18018c4d2:
            plVar40 = plVar25;
          }
          plVar25 = (longlong *)*plVar25;
          cVar12 = *(char *)((longlong)plVar25 + 0x19);
          pcVar39 = (char *)auStack_10250._0_8_;
        }
                    /* WARNING: Read-only address (ram,0x00018086d430) is written */
        if (*(char *)((longlong)plVar40 + 0x19) != '\0') goto LAB_18018c530;
        uVar16 = plVar40[6];
        plVar25 = plVar40 + 4;
        if (0xf < (ulonglong)plVar40[7]) {
          plVar25 = (longlong *)*plVar25;
        }
        pcVar41 = auStack_10250;
        if (0xf < uVar30) {
          pcVar41 = pcVar39;
        }
        uVar37 = uVar34;
        if (uVar16 < uVar34) {
          uVar37 = uVar16;
        }
        iVar13 = memcmp(pcVar41,plVar25,uVar37);
        if (iVar13 == 0) {
          if (uVar34 < uVar16) goto LAB_18018c530;
        }
        else if (iVar13 < 0) goto LAB_18018c530;
        pcStack_10578 = auStack_10250;
        if (0xf < uVar30) {
          pcStack_10578 = pcVar39;
        }
        uStack_10570 = uVar34;
        FUN_1801b44a0(&uStack_10540,&pcStack_10578);
        piStack_105b0 = (int *)FUN_1800a7e60(local_a8,auStack_101b0,&uStack_10540);
        if (*(ulonglong *)(piStack_105b0 + 6) < 8) {
          piVar38 = (int *)((longlong)piStack_105b0 + *(longlong *)(piStack_105b0 + 4) * 2);
          piVar11 = piStack_105b0;
        }
        else {
          piVar38 = (int *)((longlong)*(int **)piStack_105b0 + *(longlong *)(piStack_105b0 + 4) * 2)
          ;
          piVar11 = *(int **)piStack_105b0;
        }
        for (; piVar11 != piVar38; piVar11 = (int *)((longlong)piVar11 + 2)) {
          if ((short)*piVar11 == 0x2f) {
            *(undefined2 *)piVar11 = 0x5c;
          }
        }
        FUN_1800f5370(apppppppuStack_10190,piStack_105b0);
        FUN_18015b930(local_a8);
        FUN_18015b930(&uStack_10540);
        pppppppuVar35 = apppppppuStack_10190;
        if (7 < uStack_10178) {
          pppppppuVar35 = apppppppuStack_10190[0];
        }
        psVar31 = (short *)((longlong)pppppppuVar35 + lStack_10180 * 2);
        psVar18 = (short *)FUN_1800a7b00(pppppppuVar35,psVar31);
        if (psVar18 != psVar31) {
          do {
            if ((*psVar18 != 0x5c) && (*psVar18 != 0x2f)) break;
            psVar18 = psVar18 + 1;
          } while (psVar18 != psVar31);
          do {
            psVar8 = psVar31;
            if (psVar18 == psVar8) goto LAB_18018c82d;
            sVar1 = psVar8[-1];
          } while ((sVar1 != 0x5c) && (psVar31 = psVar8 + -1, sVar1 != 0x2f));
          do {
            if (psVar18 == psVar8) break;
            psVar8 = psVar8 + -1;
          } while ((*psVar8 == 0x5c) || (*psVar8 == 0x2f));
        }
LAB_18018c82d:
        local_f8 = (undefined1  [16])0x0;
        local_e8 = 0;
        local_e0 = 0;
        FUN_180159e60(local_f8,pppppppuVar35);
        cVar12 = FUN_180187280(local_f8);
        FUN_18015b930(local_f8);
        if (cVar12 != '\0') goto code_r0x00018018c891;
        if (puStack_10400 == (undefined8 *)0x0) goto LAB_18018ceee;
        DVar14 = GetLastError();
        pcVar39 = (char *)((longlong)&local_e8 + 5);
        do {
          pcVar39 = pcVar39 + -1;
          *pcVar39 = (char)DVar14 + (char)((ulonglong)DVar14 / 10) * -10 + '0';
          DVar14 = (DWORD)((ulonglong)DVar14 / 10);
        } while (DVar14 != 0);
        FUN_18015bdb0(&pcStack_10578,pcVar39,(longlong)&local_e8 + 5);
        pppppppuVar35 = apppppppuStack_10190;
        if (7 < uStack_10178) {
          pppppppuVar35 = apppppppuStack_10190[0];
        }
        psVar31 = (short *)((longlong)pppppppuVar35 + lStack_10180 * 2);
        psVar18 = (short *)FUN_1800a7b00(pppppppuVar35,psVar31);
        if (psVar18 == psVar31) goto LAB_18018cdad;
        do {
          if ((*psVar18 != 0x5c) && (*psVar18 != 0x2f)) break;
          psVar18 = psVar18 + 1;
        } while (psVar18 != psVar31);
        do {
          if (psVar18 == psVar31) goto LAB_18018cdad;
          sVar1 = psVar31[-1];
          psVar8 = psVar31;
        } while ((sVar1 != 0x5c) && (psVar31 = psVar31 + -1, sVar1 != 0x2f));
        do {
          psVar31 = psVar8;
          if (psVar18 == psVar31) break;
          psVar8 = psVar31 + -1;
        } while ((*psVar8 == 0x5c) || (*psVar8 == 0x2f));
LAB_18018cdad:
        auStack_10520 = (undefined1  [16])0x0;
        uStack_10510 = 0;
        uStack_10508 = 0;
        FUN_180159e60(auStack_10520,pppppppuVar35,(longlong)psVar31 - (longlong)pppppppuVar35 >> 1);
        uVar20 = FUN_180162b60(auStack_10520,local_d8);
        pauVar23 = (undefined1 (*) [16])FUN_180141490(uVar20,0,"resource_directory:",0x13);
        auStack_10448 = *pauVar23;
        auStack_10438 = pauVar23[1];
        *(undefined8 *)(pauVar23[1] + 8) = 0xf;
        (*pauVar23)[0] = 0;
        *(undefined8 *)pauVar23[1] = 0;
        puVar21 = (undefined8 *)FUN_18015b2a0(auStack_10448,&DAT_1807013fc,1);
        uStack_10540 = *puVar21;
        uStack_10538 = puVar21[1];
        uStack_10530 = puVar21[2];
        uStack_10528 = puVar21[3];
        *(undefined1 *)puVar21 = 0;
        puVar21[2] = 0;
        puVar21[3] = 0xf;
        FUN_18015a6e0(&uStack_10500);
        puVar21 = puStack_10400;
        if (puStack_10400 != &uStack_10500) {
          FUN_18015c010(puStack_10400);
          *puVar21 = CONCAT71(uStack_10500._1_7_,(undefined1)uStack_10500);
          puVar21[1] = uStack_104f8;
          puVar21[2] = uStack_104f0;
          puVar21[3] = uStack_104e8;
          uStack_104f0 = 0;
          uStack_104e8 = 0xf;
          uStack_10500._0_1_ = 0;
        }
        FUN_18015c010(&uStack_10500);
        FUN_18015c010(&uStack_10540);
        FUN_18015c010(auStack_10448);
        FUN_18015c010(local_d8);
        FUN_18015b930(auStack_10520);
        FUN_18015c010(&pcStack_10578);
LAB_18018ceee:
        FUN_18015b930(apppppppuStack_10190);
        FUN_18015c010(auStack_10250);
        FUN_18015c010(auStack_101f0);
        FUN_18015c010(auStack_10230);
        FUN_18015c010(auStack_10210);
        if (auStack_10288._0_8_ == 0) {
LAB_18018cfd5:
          FUN_18015c010(auStack_101d0);
          FUN_180113710(auStack_10268);
          FUN_18015b930(auStack_101b0);
          FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
          FUN_1804547d0(auStack_10298._0_8_,0x48);
          FUN_18017cdd0(plStack_105b8);
        }
        uVar20 = auStack_10288._8_8_;
        lVar32 = auStack_10288._0_8_;
        if (auStack_10288._0_8_ != auStack_10288._8_8_) {
          do {
            FUN_18015b930(lVar32);
            lVar32 = lVar32 + 0x30;
          } while (lVar32 != uVar20);
        }
        lVar32 = auStack_10288._0_8_;
        if (((ulonglong)((((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30) * 0x30) < 0x1000)
           || (lVar32 = *(longlong *)(auStack_10288._0_8_ + -8),
              (auStack_10288._0_8_ - lVar32) - 8U < 0x20)) {
          FUN_1804547d0(lVar32);
          auStack_10288 = (undefined1  [16])0x0;
          puStack_10278 = (undefined8 *)0x0;
          goto LAB_18018cfd5;
        }
        goto LAB_18018dc80;
      }
      FUN_18018dcb0(&ppuStack_105c0,"archive");
      FUN_18015c010(auStack_101d0);
      FUN_180113710(auStack_10268);
      FUN_18015b930(auStack_101b0);
    }
  }
  FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
  FUN_1804547d0(auStack_10298._0_8_,0x48);
  FUN_18017cdd0(param_4);
code_r0x00018018c891:
  pWVar22 = (LPCWSTR)FUN_180186ef0(auStack_10168,apppppppuStack_10190);
  if (7 < *(ulonglong *)(pWVar22 + 0xc)) {
    pWVar22 = *(LPCWSTR *)pWVar22;
  }
  DVar14 = GetFileAttributesW(pWVar22);
  FUN_18015b930(auStack_10168);
  uVar34 = uStack_10240;
  if (DVar14 == 0xffffffff) {
    apiStack_105a8[0] = (int *)((longlong)apiStack_105a8[0] + (ulonglong)uVar33);
    FUN_1800f5370(auStack_10168,apppppppuStack_10190);
    auVar44 = auVar45._0_16_;
    iStack_10148 = iVar43;
    uStack_10144 = uVar33;
    iStack_10140 = iVar42;
    if ((undefined8 *)auStack_10288._8_8_ == puStack_10278) {
      FUN_1801b5e20(auStack_10288,auStack_10288._8_8_,auStack_10168);
      auVar44 = auVar45._0_16_;
    }
    else {
      *(undefined8 *)auStack_10288._8_8_ = auStack_10168._0_8_;
      *(undefined8 *)(auStack_10288._8_8_ + 8) = auStack_10168._8_8_;
      *(undefined8 *)(auStack_10288._8_8_ + 0x10) = auStack_10158._0_8_;
      *(undefined8 *)(auStack_10288._8_8_ + 0x18) = auStack_10158._8_8_;
      auVar5._14_2_ = 0;
      auVar5._0_14_ = auStack_10168._2_14_;
      auStack_10168 = auVar5 << 0x10;
      *(int *)(auStack_10288._8_8_ + 0x20) = iVar43;
      *(uint *)(auStack_10288._8_8_ + 0x24) = uVar33;
      *(int *)(auStack_10288._8_8_ + 0x28) = iVar42;
      auStack_10288._8_8_ = (undefined8 *)(auStack_10288._8_8_ + 0x30);
      auStack_10158 = auVar44;
    }
    auVar45 = ZEXT1664(auVar44);
    FUN_18015b930(auStack_10168);
  }
  else {
    auStack_10168 = (undefined1  [16])0x0;
    auStack_10158 = (undefined1  [16])0x0;
    pauVar23 = &auStack_10250;
    if (0xf < uStack_10238) {
      pauVar23 = (undefined1 (*) [16])auStack_10250._0_8_;
    }
    if (0x7fffffffffffffff < uStack_10240) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uStack_10240 < 0x10) {
      auStack_10158._8_8_ = 0xf;
      auStack_10158._0_8_ = uStack_10240;
      auStack_10168 = *pauVar23;
    }
    else {
      uVar30 = uStack_10240 | 0xf;
      if (uVar30 < 0x8000000000000000) {
        if (uVar30 < 0x16) {
          uVar30 = 0x16;
        }
      }
      else {
        uVar30 = 0x7fffffffffffffff;
      }
      uVar20 = FUN_18015bca0(uVar30 + 1);
      auStack_10168._0_8_ = uVar20;
      auStack_10158._8_8_ = uVar30;
      auStack_10158._0_8_ = uVar34;
      FUN_18063aed0(uVar20,pauVar23);
    }
    FUN_1800f5370(&iStack_10148,apppppppuStack_10190);
    plVar25 = plStack_105b8;
    uStack_10128 = 0;
    uStack_10120 = 0;
    piStack_105b0 = (int *)*plStack_105b8;
    if (piStack_105b0 != (int *)0x0) {
      LOCK();
      *piStack_105b0 = *piStack_105b0 + 1;
      UNLOCK();
    }
    cVar12 = FUN_180187c80(auStack_10168,&piStack_105b0);
    if (((cVar12 == '\0') || ((uint)uStack_10128 != uVar33)) || (uStack_10128._4_4_ != iVar42)) {
      FUN_18018dcb0(&ppuStack_105c0,"existing_resource");
      FUN_18015b930(&iStack_10148);
      FUN_18015c010(auStack_10168);
      FUN_18015b930(apppppppuStack_10190);
      FUN_18015c010(auStack_10250);
      FUN_18015c010(auStack_101f0);
      FUN_18015c010(auStack_10230);
      FUN_18015c010(auStack_10210);
      if (auStack_10288._0_8_ != 0) {
        uVar20 = auStack_10288._8_8_;
        lVar32 = auStack_10288._0_8_;
        if (auStack_10288._0_8_ != auStack_10288._8_8_) {
          do {
            FUN_18015b930(lVar32);
            lVar32 = lVar32 + 0x30;
          } while (lVar32 != uVar20);
        }
        lVar32 = auStack_10288._0_8_;
        if ((0xfff < (ulonglong)((((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30) * 0x30))
           && (lVar32 = *(longlong *)(auStack_10288._0_8_ + -8),
              0x1f < (auStack_10288._0_8_ - lVar32) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar32);
        auStack_10288 = (undefined1  [16])0x0;
        puStack_10278 = (undefined8 *)0x0;
      }
      FUN_18015c010(auStack_101d0);
      FUN_180113710(auStack_10268);
      FUN_18015b930(auStack_101b0);
      FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
      FUN_1804547d0(auStack_10298._0_8_,0x48);
      piVar38 = (int *)*plVar25;
      if (piVar38 == (int *)0x0) {
      }
      LOCK();
      iVar42 = *piVar38;
      *piVar38 = *piVar38 + -1;
      UNLOCK();
      if (iVar42 != 1) {
      }
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        pcStack_10578 = "tier0.dll:g_pMemAlloc";
        uStack_10570 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_10578);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar38);
    }
    FUN_18015b930(&iStack_10148);
    FUN_18015c010(auStack_10168);
  }
  FUN_18015b930(apppppppuStack_10190);
  FUN_18015c010(auStack_10250);
  uVar34 = uStack_10550;
  pcVar39 = pcStack_10598;
  goto LAB_18018c150;
code_r0x00018018d680:
  FUN_18018de50(&pvStack_103d8);
  FUN_18015b930(auStack_10118);
  pcVar41 = pcVar41 + 0x30;
  if (pcVar41 == pcVar39) goto LAB_18018d6a6;
  goto LAB_18018d1d3;
LAB_18018bfe7:
  if ((apiStack_105a8[0] == (int *)0x0) || (cVar12 = FUN_180187510(), cVar12 != '\0')) {
    FUN_18015dda0(alStack_103a8);
    FUN_18015e690(alStack_103a8,uStack_10548,0x20);
    FUN_18063ab10(abStack_100f8,0,0x10000);
    pcStack_10598 = (char *)auStack_10288._8_8_;
    pcVar39 = (char *)auStack_10288._8_8_;
    pcVar41 = (char *)auStack_10288._0_8_;
    if (auStack_10288._0_8_ != auStack_10288._8_8_) {
LAB_18018d1d3:
      plVar25 = plStack_105b8;
      if ((*plStack_105b8 != 0) && ((*(uint *)(*plStack_105b8 + 4) & 1) != 0)) {
        FUN_18018dcb0(&ppuStack_105c0,"cancelled");
        *(undefined ***)((longlong)alStack_103a8 + (longlong)*(int *)(alStack_103a8[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)(auStack_103d0 + (longlong)*(int *)(alStack_103a8[0] + 4) + 0x24) =
             *(int *)(alStack_103a8[0] + 4) + -0xb0;
        FUN_1800f63e0(abStack_10398);
        *(undefined ***)((longlong)alStack_103a8 + (longlong)*(int *)(alStack_103a8[0] + 4)) =
             std::basic_istream<char,std::char_traits<char>_>::vftable;
        *(int *)(auStack_103d0 + (longlong)*(int *)(alStack_103a8[0] + 4) + 0x24) =
             *(int *)(alStack_103a8[0] + 4) + -0x18;
        appuStack_102f8[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)appuStack_102f8);
        FUN_18015c010(auStack_101f0);
        FUN_18015c010(auStack_10230);
        FUN_18015c010(auStack_10210);
        if (auStack_10288._0_8_ != 0) {
          uVar20 = auStack_10288._8_8_;
          lVar32 = auStack_10288._0_8_;
          if (auStack_10288._0_8_ != auStack_10288._8_8_) {
            do {
              FUN_18015b930(lVar32);
              lVar32 = lVar32 + 0x30;
            } while (lVar32 != uVar20);
          }
          lVar32 = auStack_10288._0_8_;
          if ((0xfff < (ulonglong)((((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30) * 0x30))
             && (lVar32 = *(longlong *)(auStack_10288._0_8_ + -8),
                0x1f < (auStack_10288._0_8_ - lVar32) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0(lVar32);
          auStack_10288 = (undefined1  [16])0x0;
          puStack_10278 = (undefined8 *)0x0;
        }
        FUN_18015c010(auStack_101d0);
        FUN_180113710(auStack_10268);
        FUN_18015b930(auStack_101b0);
        FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
        FUN_1804547d0(auStack_10298._0_8_,0x48);
        goto LAB_18018dc07;
      }
      FUN_1800f5370(auStack_10118,pcVar41);
      UVar19 = GetTickCount64();
      psVar31 = local_b0 + 1;
      do {
        psVar31 = psVar31 + -1;
        uVar27 = UVar19 / 10;
        *psVar31 = (short)UVar19 + (short)uVar27 * -10 + 0x30;
        UVar19 = uVar27;
      } while (uVar27 != 0);
      FUN_1801bd710(&pcStack_10578,psVar31,local_b0 + 1);
      DVar14 = GetCurrentProcessId();
      psVar31 = local_80 + 1;
      uVar27 = (ulonglong)DVar14;
      do {
        psVar31 = psVar31 + -1;
        uVar34 = uVar27 / 10;
        *psVar31 = (short)uVar27 + (short)uVar34 * -10 + 0x30;
        uVar27 = uVar34;
      } while ((int)uVar34 != 0);
      FUN_1801bd710(auStack_10420,psVar31,local_80 + 1);
      uVar20 = FUN_1801a6320(auStack_104c8,L".sync-part-",auStack_10420);
      puVar21 = (undefined8 *)FUN_1800f52e0(uVar20,&DAT_1807c2414,1);
      uStack_10540 = *puVar21;
      uStack_10538 = puVar21[1];
      uStack_10530 = puVar21[2];
      uStack_10528 = puVar21[3];
      *(undefined2 *)puVar21 = 0;
      puVar21[2] = 0;
      puVar21[3] = 7;
      FUN_180178880(local_f8);
      puVar24 = local_f8;
      if (7 < local_e0) {
        puVar24 = (undefined1 *)local_f8._0_8_;
      }
      FUN_1800f52e0(auStack_10118,puVar24);
      FUN_18015b930(local_f8);
      FUN_18015b930(&uStack_10540);
      FUN_18015b930(auStack_104c8);
      FUN_18015b930(auStack_10420);
      FUN_18015b930(&pcStack_10578);
      pWVar22 = (LPCWSTR)FUN_180186ef0(auStack_104c8,auStack_10118);
      if (7 < *(ulonglong *)(pWVar22 + 0xc)) {
        pWVar22 = *(LPCWSTR *)pWVar22;
      }
      hFile = CreateFileW(pWVar22,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x200080,(HANDLE)0x0);
      FUN_18015b930(auStack_104c8);
      if (hFile == (HANDLE)0xffffffffffffffff) {
        FUN_18018dcb0(&ppuStack_105c0,"create_resource");
        FUN_18015b930(auStack_10118);
        FUN_18015dd20(alStack_103a8);
        FUN_18015c010(auStack_101f0);
        FUN_18015c010(auStack_10230);
        FUN_18015c010(auStack_10210);
        if (auStack_10288._0_8_ != 0) {
          uVar20 = auStack_10288._8_8_;
          lVar32 = auStack_10288._0_8_;
          if (auStack_10288._0_8_ != auStack_10288._8_8_) {
            do {
              FUN_18015b930(lVar32);
              lVar32 = lVar32 + 0x30;
            } while (lVar32 != uVar20);
          }
          FUN_1801b8660((longlong)puStack_10278 - auStack_10288._0_8_,auStack_10288._0_8_,
                        ((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30);
          auStack_10288 = (undefined1  [16])0x0;
          puStack_10278 = (undefined8 *)0x0;
        }
        FUN_18015c010(auStack_101d0);
        FUN_180113710(auStack_10268);
        FUN_18015b930(auStack_101b0);
        FUN_18018ba60(auStack_10298);
        plVar25 = plStack_105b8;
        goto LAB_18018dc07;
      }
      pvStack_103d8 = hFile;
      FUN_1800f5370(auStack_103d0,auStack_10118);
      FUN_1800f65f0((longlong)alStack_103a8 + (longlong)*(int *)(alStack_103a8[0] + 4),0,0);
      pauVar23 = (undefined1 (*) [16])
                 FUN_180159cf0(&pcStack_10578,
                               (uStack_103f0 & 0xffffffff) + 0x1c +
                               (ulonglong)*(uint *)(pcVar41 + 0x20));
      local_f8 = *pauVar23;
      local_e8 = *(undefined8 *)pauVar23[1];
      FUN_180176fb0(alStack_103a8,local_f8);
      uVar33 = *(uint *)(pcVar41 + 0x24);
      uVar29 = 0xffffffff;
      if (uVar33 != 0) {
        do {
          if ((*plStack_105b8 != 0) && ((*(uint *)(*plStack_105b8 + 4) & 1) != 0)) {
            if (uVar33 != 0) goto LAB_18018d914;
            break;
          }
          nNumberOfBytesToWrite = uVar33;
          if (0x10000 < uVar33) {
            nNumberOfBytesToWrite = 0x10000;
          }
          FUN_1801771e0(alStack_103a8,abStack_100f8,nNumberOfBytesToWrite);
          uStack_10270 = uStack_10270 & 0xffffffff00000000;
          if ((((abStack_10398[*(int *)(alStack_103a8[0] + 4)] & 6) != 0) ||
              (BVar15 = WriteFile(hFile,abStack_100f8,nNumberOfBytesToWrite,(LPDWORD)&uStack_10270,
                                  (LPOVERLAPPED)0x0), BVar15 == 0)) ||
             ((uint)uStack_10270 != nNumberOfBytesToWrite)) {
            FUN_18018dcb0(&ppuStack_105c0,"write_resource");
            FUN_18018de50(&pvStack_103d8);
            FUN_18015b930(auStack_10118);
            FUN_18015dd20(alStack_103a8);
            goto LAB_18018c016;
          }
          for (pbVar28 = abStack_100f8; pbVar28 != abStack_100f8 + nNumberOfBytesToWrite;
              pbVar28 = pbVar28 + 1) {
            uVar29 = uVar29 >> 8 ^
                     *(uint *)(&DAT_1808d9220 + (ulonglong)((*pbVar28 ^ uVar29) & 0xff) * 4);
          }
          uVar33 = uVar33 - nNumberOfBytesToWrite;
        } while (uVar33 != 0);
        pcVar39 = pcStack_10598;
      }
      if ((~uVar29 == *(uint *)(pcVar41 + 0x28)) && (BVar15 = FlushFileBuffers(hFile), BVar15 != 0))
      {
        CloseHandle(hFile);
        pvStack_103d8 = (HANDLE)0xffffffffffffffff;
        uVar20 = FUN_18015c130(pcVar41,local_a8);
        cVar12 = FUN_180187280(uVar20);
        if (cVar12 == '\0') {
LAB_18018d635:
          bVar6 = true;
        }
        else {
          uVar20 = FUN_180186ef0(local_d8,pcVar41);
          pWVar22 = (LPCWSTR)FUN_1800a7dd0(uVar20);
          uVar20 = FUN_180186ef0(auStack_104c8,auStack_10118);
          bVar10 = true;
          bVar9 = true;
          lpExistingFileName = (LPCWSTR)FUN_1800a7dd0(uVar20);
          BVar15 = MoveFileExW(lpExistingFileName,pWVar22,8);
          if (BVar15 == 0) goto LAB_18018d635;
          bVar6 = false;
        }
        if (bVar9) {
          bVar9 = false;
          FUN_18015b930(auStack_104c8);
        }
        if (bVar10) {
          bVar10 = false;
          FUN_18015b930(local_d8);
        }
        FUN_18015b930(local_a8);
        if (!bVar6) goto code_r0x00018018d680;
        FUN_18018dcb0(&ppuStack_105c0,"commit_resource");
        FUN_18018de50(&pvStack_103d8);
        FUN_18015b930(auStack_10118);
        FUN_18015dd20(alStack_103a8);
      }
      else {
LAB_18018d914:
        FUN_18018dcb0(&ppuStack_105c0,"flush_resource");
        FUN_18018de50(&pvStack_103d8);
        FUN_18015b930(auStack_10118);
        FUN_18015dd20(alStack_103a8);
      }
      goto LAB_18018c016;
    }
LAB_18018d6a6:
    plVar25 = plStack_105b8;
    *(undefined ***)((longlong)alStack_103a8 + (longlong)*(int *)(alStack_103a8[0] + 4)) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_103d0 + (longlong)*(int *)(alStack_103a8[0] + 4) + 0x24) =
         *(int *)(alStack_103a8[0] + 4) + -0xb0;
    FUN_1800f63e0(abStack_10398);
    *(undefined ***)((longlong)alStack_103a8 + (longlong)*(int *)(alStack_103a8[0] + 4)) =
         std::basic_istream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_103d0 + (longlong)*(int *)(alStack_103a8[0] + 4) + 0x24) =
         *(int *)(alStack_103a8[0] + 4) + -0x18;
    appuStack_102f8[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)appuStack_102f8);
    FUN_18015c010(auStack_101f0);
    FUN_18015c010(auStack_10230);
    FUN_18015c010(auStack_10210);
    if (auStack_10288._0_8_ != 0) {
      uVar20 = auStack_10288._8_8_;
      lVar32 = auStack_10288._0_8_;
      if (auStack_10288._0_8_ != auStack_10288._8_8_) {
        do {
          FUN_18015b930(lVar32);
          lVar32 = lVar32 + 0x30;
        } while (lVar32 != uVar20);
      }
      lVar32 = auStack_10288._0_8_;
      if ((0xfff < (ulonglong)((((longlong)puStack_10278 - auStack_10288._0_8_) / 0x30) * 0x30)) &&
         (lVar32 = *(longlong *)(auStack_10288._0_8_ + -8),
         0x1f < (auStack_10288._0_8_ - lVar32) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar32);
      auStack_10288 = (undefined1  [16])0x0;
      puStack_10278 = (undefined8 *)0x0;
    }
    FUN_18015c010(auStack_101d0);
    FUN_180113710(auStack_10268);
    FUN_18015b930(auStack_101b0);
    FUN_1801b6160(auStack_10298,auStack_10298,*(undefined8 *)(auStack_10298._0_8_ + 8));
    FUN_1804547d0(auStack_10298._0_8_,0x48);
LAB_18018dc07:
    FUN_18017cdd0(plVar25);
  }
  else {
    FUN_18018dcb0(&ppuStack_105c0,"budget");
LAB_18018c016:
    FUN_18015c010(auStack_101f0);
    FUN_18015c010(auStack_10230);
    FUN_18015c010(auStack_10210);
    FUN_1801ab6a0(auStack_10288);
    FUN_18015c010(auStack_101d0);
    FUN_180113710(auStack_10268);
    FUN_18015b930(auStack_101b0);
    FUN_18018ba60(auStack_10298);
    FUN_18017cdd0(plStack_105b8);
  }
                    /* WARNING: Read-only address (ram,0x00018086d430) is written */
}



