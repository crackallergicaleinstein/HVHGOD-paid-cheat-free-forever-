// FUN_18018a140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018a140 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18018a140(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                  ulonglong *param_5)

{
  size_t _Size;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong ******pppppplVar8;
  char cVar9;
  char cVar10;
  DWORD DVar11;
  int iVar12;
  LPCWSTR lpFileName;
  undefined8 *_Buf1;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  longlong *******_Buf2;
  ulonglong *puVar24;
  uint uVar25;
  longlong ******pppppplVar26;
  longlong lVar27;
  longlong lVar28;
  longlong ******pppppplVar29;
  longlong *plVar30;
  longlong ******pppppplVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  bool bVar36;
  int *piStack_10438;
  ulonglong uStack_10430;
  char *pcStack_10428;
  undefined8 *puStack_10420;
  longlong *******ppppppplStack_10418;
  undefined8 uStack_10410;
  size_t sStack_10408;
  ulonglong uStack_10400;
  uint uStack_103f8;
  ulonglong uStack_103f0;
  byte *pbStack_103e8;
  ulonglong uStack_103e0;
  undefined8 uStack_103d8;
  longlong lStack_103d0;
  undefined8 *puStack_103c8;
  ulonglong uStack_103c0;
  ulonglong *puStack_103b8;
  undefined1 auStack_103b0 [16];
  undefined1 auStack_103a0 [16];
  undefined1 aauStack_10390 [2] [16];
  undefined1 *puStack_10368;
  ulonglong uStack_10360;
  char *pcStack_10358;
  undefined8 uStack_10350;
  undefined1 auStack_10348 [16];
  undefined1 auStack_10338 [16];
  undefined1 auStack_10328 [16];
  undefined1 auStack_10318 [16];
  longlong *plStack_10308;
  undefined1 auStack_10300 [16];
  undefined1 auStack_102f0 [16];
  undefined1 auStack_102e0 [16];
  undefined1 auStack_102d0 [16];
  undefined8 uStack_102c0;
  ulonglong uStack_102b8;
  undefined8 uStack_102b0;
  int iStack_102a8;
  int iStack_1029c;
  longlong alStack_10298 [2];
  byte abStack_10288 [160];
  undefined **appuStack_101e8 [12];
  undefined1 auStack_10188 [16];
  undefined1 auStack_10178 [16];
  undefined1 auStack_10168 [16];
  ulonglong uStack_10158;
  ulonglong uStack_10150;
  undefined1 auStack_10148 [16];
  undefined8 uStack_10138;
  undefined1 auStack_10130 [16];
  undefined8 uStack_10120;
  undefined1 auStack_10118 [16];
  int *piStack_10108;
  ulonglong uStack_10100;
  undefined1 auStack_100f8 [16];
  longlong lStack_100e8;
  ulonglong uStack_100e0;
  undefined1 auStack_100d8 [16];
  longlong lStack_100c8;
  ulonglong uStack_100c0;
  undefined1 auStack_100b8 [16];
  undefined8 uStack_100a8;
  undefined8 uStack_100a0;
  undefined1 auStack_10098 [16];
  undefined8 uStack_10088;
  undefined1 auStack_10080 [8];
  longlong lStack_10078;
  ulonglong auStack_10058 [8195];
  
  puStack_103b8 = param_5;
  bVar5 = false;
  uStack_103d8 = param_3;
  puStack_103c8 = param_2;
  plStack_10308 = param_4;
  cVar9 = FUN_18017f370(param_2);
  if (cVar9 == '\0') {
LAB_18018a29f:
    bVar36 = true;
  }
  else {
    lpFileName = (LPCWSTR)FUN_180186ef0(auStack_10080,param_1);
    if (7 < *(ulonglong *)(lpFileName + 0xc)) {
      lpFileName = *(LPCWSTR *)lpFileName;
    }
    DVar11 = GetFileAttributesW(lpFileName);
    FUN_18015b930(auStack_10080);
    if ((DVar11 == 0xffffffff) || ((DVar11 & 0x410) != 0)) goto LAB_18018a29f;
    puVar17 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar17 = (undefined8 *)*param_1;
    }
    iVar12 = FUN_1805fb620(puVar17,auStack_10080,9,0xffffffff);
    lVar28 = -1;
    if (iVar12 == 0) {
      lVar28 = lStack_10078;
    }
    if ((lVar28 != param_2[8]) || (iVar12 != 0)) goto LAB_18018a29f;
    piStack_10438 = (int *)*param_4;
    if (piStack_10438 != (int *)0x0) {
      LOCK();
      *piStack_10438 = *piStack_10438 + 1;
      UNLOCK();
    }
    _Buf1 = (undefined8 *)FUN_180187770(auStack_103b0,param_1,&piStack_10438);
    bVar5 = true;
    puVar17 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar17 = (undefined8 *)*param_2;
    }
    _Size = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size != param_2[2]) ||
       ((_Size != 0 && (iVar12 = memcmp(_Buf1,puVar17,_Size), iVar12 != 0)))) goto LAB_18018a29f;
    bVar36 = false;
  }
  if (bVar5) {
    FUN_18015c010(auStack_103b0);
  }
  uVar35 = 0;
  if (!bVar36) {
    lVar28 = 0;
    uStack_102c0 = 0;
    uStack_102b8 = 0;
    uStack_102b0 = 0;
    iStack_102a8 = 0;
    auStack_10130 = (undefined1  [16])0x0;
    uStack_10120 = 0;
    uStack_100a8 = 0;
    uStack_100a0 = 0xf;
    auStack_100b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = auStack_100b8._1_15_;
    auStack_100b8 = auVar1 << 8;
    cVar9 = FUN_180185df0(param_1,&uStack_102c0,auStack_10130,auStack_100b8);
    if (cVar9 != '\0') {
      if (((((uint)uStack_102b8 < 0x200001) && ((int)uStack_102b0 == 0)) &&
          (uStack_102b0._4_4_ == 0)) &&
         ((iStack_102a8 == 0 &&
          ((uStack_102b8 >> 0x20) + 0x1c + (uStack_102b8 & 0xffffffff) == param_2[8])))) {
        lVar33 = auStack_10130._0_8_;
        lStack_103d0 = auStack_10130._0_8_;
        uVar32 = auStack_10130._8_8_ - auStack_10130._0_8_;
        uVar34 = 0;
        auStack_10178 = (undefined1  [16])0x0;
        uStack_103c0 = uVar32;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          pcStack_10428 = "tier0.dll:g_pMemAlloc";
          puStack_10420 = (undefined8 *)0x15;
          DAT_180c7df28 = (undefined8 *)FUN_180451750(&pcStack_10428);
        }
        lVar27 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
        *(longlong *)lVar27 = lVar27;
        *(longlong *)(lVar27 + 8) = lVar27;
        *(longlong *)(lVar27 + 0x10) = lVar27;
        *(undefined2 *)(lVar27 + 0x18) = 0x101;
        auStack_10178._0_8_ = lVar27;
        auStack_10188 = ZEXT816(0);
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          pcStack_10428 = "tier0.dll:g_pMemAlloc";
          puStack_10420 = (undefined8 *)0x15;
          DAT_180c7df28 = (undefined8 *)FUN_180451750(&pcStack_10428);
        }
        lVar27 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
        *(longlong *)lVar27 = lVar27;
        *(longlong *)(lVar27 + 8) = lVar27;
        *(longlong *)(lVar27 + 0x10) = lVar27;
        *(undefined2 *)(lVar27 + 0x18) = 0x101;
        auStack_10188._0_8_ = lVar27;
        uStack_10430 = 0;
        FUN_18063ab10(alStack_10298,0,0x110);
        FUN_18015e690(alStack_10298,param_1,0x20);
        FUN_18063ab10(auStack_10058,0,0x10000);
        lVar27 = 0;
        lStack_100c8 = 0;
        uStack_100c0 = 0xf;
        auStack_100d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar2[0xf] = 0;
        auVar2._0_15_ = auStack_100d8._1_15_;
        auStack_100d8 = auVar2 << 8;
        piStack_10438 = (int *)0x0;
        piStack_10108 = (int *)0x0;
        uStack_10100 = 0xf;
        auStack_10118._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar3[0xf] = 0;
        auVar3._0_15_ = auStack_10118._1_15_;
        auStack_10118 = auVar3 << 8;
        lStack_100e8 = 0;
        uStack_100e0 = 0xf;
        auStack_100f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar4[0xf] = 0;
        auVar4._0_15_ = auStack_100f8._1_15_;
        auStack_100f8 = auVar4 << 8;
        bVar5 = false;
        auStack_10148 = (undefined1  [16])0x0;
        uStack_10138 = 0;
LAB_18018a550:
        uVar21 = uVar34;
        if (uVar34 < uVar32) {
          while( true ) {
            uVar13 = uVar21 + 1;
            if (0x10000 < uVar21 - uVar34) goto LAB_18018a59b;
            if (*(char *)(uVar21 + lVar33) == '\0') break;
            uVar21 = uVar13;
            if (uVar32 <= uVar13) goto LAB_18018a59b;
          }
          FUN_180113930(auStack_100d8,uVar34 + lVar33,uVar21 - uVar34);
          uVar21 = uVar21 + 1;
          lVar27 = lStack_100c8;
          if (lStack_100c8 == 0) goto LAB_18018a5a4;
LAB_18018a840:
          uVar34 = uVar21;
          if (uVar21 < uVar32) {
            while( true ) {
              uVar13 = uVar34 + 1;
              if (0x10000 < uVar34 - uVar21) goto LAB_18018a888;
              if (*(char *)(uVar34 + lVar33) == '\0') break;
              uVar34 = uVar13;
              if (uVar32 <= uVar13) goto LAB_18018a888;
            }
            FUN_180113930(auStack_10118,uVar21 + lVar33,uVar34 - uVar21);
            uVar34 = uVar34 + 1;
            piStack_10438 = piStack_10108;
            if (piStack_10108 == (int *)0x0) goto LAB_18018a550;
            uStack_103f0 = uStack_10100;
            pbStack_103e8 = (byte *)auStack_10118._0_8_;
            while (uVar21 = uVar34, uVar34 < uVar32) {
              uVar13 = uVar34;
              while( true ) {
                uVar14 = uVar13 + 1;
                uVar21 = uVar13;
                if (0x10000 < uVar13 - uVar34) goto LAB_18018a9e8;
                if (*(char *)(uVar13 + lVar33) == '\0') break;
                uVar21 = uVar14;
                uVar13 = uVar14;
                if (uVar32 <= uVar14) goto LAB_18018a9e8;
              }
              FUN_180113930(auStack_100f8,uVar34 + lVar33,uVar13 - uVar34);
              lVar28 = lStack_100e8;
              uVar21 = uVar13 + 1;
              if (lStack_100e8 == 0) goto LAB_18018a840;
              if (uVar32 - uVar21 < 0x12) {
LAB_18018b87c:
                FUN_180111b90(auStack_10148);
                FUN_18015c010(auStack_100f8);
                FUN_18015c010(auStack_10118);
                FUN_18015c010(auStack_100d8);
                *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4))
                     = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                     *(int *)(alStack_10298[0] + 4) + -0xb0;
                FUN_1800f63e0(abStack_10288);
                *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4))
                     = std::basic_istream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                     *(int *)(alStack_10298[0] + 4) + -0x18;
                appuStack_101e8[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
                goto LAB_18018b447;
              }
              aauStack_10390[0] = *(undefined1 (*) [16])(uVar21 + lVar33);
              uVar34 = uVar13 + 0x13;
              if (((*(short *)(uVar13 + 0x11 + lVar33) != -1) || (aauStack_10390[0]._4_2_ != 0)) ||
                 ((aauStack_10390[0]._6_2_ != 0x7fff || (aauStack_10390[0]._8_4_ != uStack_10430))))
              goto LAB_18018b87c;
              uVar32 = aauStack_10390[0]._8_8_ >> 0x20;
              if ((aauStack_10390[0]._12_4_ == 0) ||
                 (uStack_103e0 = uVar32, (uStack_102b8 >> 0x20) - uStack_10430 < uVar32))
              goto LAB_18018b87c;
              pbVar15 = auStack_10118;
              if (0xf < uStack_103f0) {
                pbVar15 = pbStack_103e8;
              }
              if (piStack_10438 == (int *)0x1) {
                if (*pbVar15 == 0x20) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = -(uint)(*pbVar15 < 0x20) | 1;
                }
                if (uVar25 != 0) goto LAB_18018abd3;
                auStack_103b0 = (undefined1  [16])0x0;
                auStack_103a0 = (undefined1  [16])0x0;
                FUN_18015ba30(auStack_103b0,&PTR_180700558,0);
                puVar22 = auStack_103b0;
                uVar35 = uVar35 | 2;
              }
              else {
LAB_18018abd3:
                if (piStack_10438 == (int *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_18015bb70();
                }
                FUN_18015a9c0(auStack_10080);
                puVar22 = auStack_10080;
                uVar35 = uVar35 | 0x44;
                uStack_103f0 = uStack_10100;
                piStack_10438 = piStack_10108;
                pbStack_103e8 = (byte *)auStack_10118._0_8_;
              }
              puVar23 = auStack_100f8;
              if (0xf < uStack_100e0) {
                puVar23 = (undefined1 *)auStack_100f8._0_8_;
              }
              pauVar16 = (undefined1 (*) [16])FUN_18015b2a0(puVar22,puVar23,lVar28);
              auStack_10328 = *pauVar16;
              auStack_10318 = pauVar16[1];
              *(undefined8 *)(pauVar16[1] + 8) = 0xf;
              (*pauVar16)[0] = 0;
              *(undefined8 *)pauVar16[1] = 0;
              pauVar16 = (undefined1 (*) [16])FUN_18015b2a0(auStack_10328,&DAT_1807c5af8,1);
              auStack_10348 = *pauVar16;
              auStack_10338 = pauVar16[1];
              (*pauVar16)[0] = 0;
              *(undefined8 *)pauVar16[1] = 0;
              *(undefined8 *)(pauVar16[1] + 8) = 0xf;
              puVar22 = auStack_100d8;
              if (0xf < uStack_100c0) {
                puVar22 = (undefined1 *)auStack_100d8._0_8_;
              }
              pauVar16 = (undefined1 (*) [16])FUN_18015b2a0(auStack_10348,puVar22,lVar27);
              auStack_10168 = *pauVar16;
              uStack_10158 = *(ulonglong *)pauVar16[1];
              uStack_10150 = *(ulonglong *)(pauVar16[1] + 8);
              (*pauVar16)[0] = 0;
              *(undefined8 *)pauVar16[1] = 0;
              *(undefined8 *)(pauVar16[1] + 8) = 0xf;
              FUN_18015c010(auStack_10348);
              FUN_18015c010(auStack_10328);
              if ((uVar35 & 4) != 0) {
                uVar35 = uVar35 & 0xfffffffb;
                FUN_18015c010(auStack_10080);
              }
              if ((uVar35 & 2) != 0) {
                uVar35 = uVar35 & 0xfffffffd;
                FUN_18015c010(auStack_103b0);
              }
              puStack_10368 = auStack_10168;
              if (0xf < uStack_10150) {
                puStack_10368 = (undefined1 *)auStack_10168._0_8_;
              }
              uStack_10360 = uStack_10158;
              cVar9 = FUN_18017eed0(&puStack_10368);
              if (cVar9 == '\0') {
LAB_18018b7ae:
                FUN_18015c010(auStack_10168);
                FUN_180111b90(auStack_10148);
                FUN_18015c010(auStack_100f8);
                FUN_18015c010(auStack_10118);
                FUN_18015c010(auStack_100d8);
                *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4))
                     = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                     *(int *)(alStack_10298[0] + 4) + -0xb0;
                FUN_1800f63e0(abStack_10288);
                *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4))
                     = std::basic_istream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                     *(int *)(alStack_10298[0] + 4) + -0x18;
                appuStack_101e8[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
                goto LAB_18018b447;
              }
              puVar22 = auStack_10168;
              if (0xf < uStack_10150) {
                puVar22 = (undefined1 *)auStack_10168._0_8_;
              }
              uVar13 = 0xcbf29ce484222325;
              uVar21 = 0;
              if (uStack_10158 != 0) {
                do {
                  uVar13 = (uVar13 ^ (byte)puVar22[uVar21]) * 0x100000001b3;
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uStack_10158);
                uVar32 = uStack_103e0;
              }
              lVar28 = FUN_180177b00(uStack_103d8,auStack_102e0,auStack_10168,uVar13);
              if (((*(longlong *)(lVar28 + 8) != 0) ||
                  (lVar28 = FUN_1801a6460(auStack_10178,auStack_102d0,auStack_10168),
                  *(char *)(lVar28 + 8) == '\0')) || (0x400 < (ulonglong)auStack_10178._8_8_))
              goto LAB_18018b7ae;
              if (0x7fffffffffffffff - puStack_103c8[6] < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bb70();
              }
              FUN_18015a9c0(&ppppppplStack_10418);
              uStack_103f8 = uVar35 | 0xb8;
              _Buf2 = (longlong *******)&ppppppplStack_10418;
              if (0xf < uStack_10400) {
                _Buf2 = ppppppplStack_10418;
              }
              puVar22 = auStack_10168;
              if (0xf < uStack_10150) {
                puVar22 = (undefined1 *)auStack_10168._0_8_;
              }
              if (uStack_10158 == sStack_10408) {
                if (uStack_10158 == 0) {
                  bVar36 = true;
                }
                else {
                  iVar12 = memcmp(puVar22,_Buf2,uStack_10158);
                  bVar36 = iVar12 == 0;
                }
              }
              else {
                bVar36 = false;
              }
              bVar5 = (bool)(bVar5 | bVar36);
              FUN_18015c010(&ppppppplStack_10418);
              uVar7 = auStack_10188._0_8_;
              pppppplVar31 = *(longlong *******)(auStack_10188._0_8_ + 8);
              uVar35 = 0;
              pppppplVar29 = (longlong ******)auStack_10188._0_8_;
              if (*(char *)((longlong)pppppplVar31 + 0x19) == '\0') {
                pppppplVar8 = pppppplVar31;
                do {
                  pppppplVar31 = pppppplVar8;
                  cVar9 = FUN_180114040(pppppplVar31 + 4,auStack_10168);
                  if (-1 < cVar9) {
                    pppppplVar26 = pppppplVar31;
                    pppppplVar29 = pppppplVar31;
                  }
                  else {
                    pppppplVar26 = pppppplVar31 + 2;
                  }
                  uVar35 = (uint)(-1 < cVar9);
                  pppppplVar8 = (longlong ******)*pppppplVar26;
                } while (*(char *)((longlong)*pppppplVar26 + 0x19) == '\0');
              }
              uStack_10410 = CONCAT44(auStack_10098._12_4_,uVar35);
              uVar35 = aauStack_10390[0]._0_4_;
              ppppppplStack_10418 = (longlong *******)pppppplVar31;
              if ((*(char *)((longlong)pppppplVar29 + 0x19) != '\0') ||
                 (cVar9 = FUN_180114040(auStack_10168,pppppplVar29 + 4), cVar9 < '\0')) {
                if (auStack_10188._8_8_ == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
                  FUN_1800a7740();
                }
                pcStack_10428 = auStack_10188;
                puStack_10420 = (undefined8 *)0x0;
                if (DAT_180c7df28 == (undefined8 *)0x0) {
                  pcStack_10358 = "tier0.dll:g_pMemAlloc";
                  uStack_10350 = 0x15;
                  DAT_180c7df28 = (undefined8 *)FUN_180451750(&pcStack_10358);
                }
                puVar17 = (undefined8 *)
                          (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                    ((longlong *)*DAT_180c7df28,0x48);
                puStack_10420 = puVar17;
                FUN_18015b360(puVar17 + 4,auStack_10168);
                *(uint *)(puVar17 + 8) = uVar35;
                *puVar17 = uVar7;
                puVar17[1] = uVar7;
                puVar17[2] = uVar7;
                *(undefined2 *)(puVar17 + 3) = 0;
                puStack_10420 = (undefined8 *)0x0;
                FUN_180140480(auStack_10188,&ppppppplStack_10418,puVar17);
              }
              ppppppplStack_10418 =
                   (longlong *******)(uStack_10430 + (uStack_102b8 & 0xffffffff) + 0x1c);
              uStack_10410 = 0;
              sStack_10408 = 0;
              FUN_180176fb0(alStack_10298,&ppppppplStack_10418);
              uVar25 = 0xffffffff;
              bVar36 = true;
              uVar6 = aauStack_10390[0]._12_4_;
              do {
                if ((*param_4 != 0) && ((*(uint *)(*param_4 + 4) & 1) != 0)) {
                  if (uVar32 != 0) goto LAB_18018b612;
                  break;
                }
                uVar21 = uVar32;
                if (0x10000 < uVar32) {
                  uVar21 = 0x10000;
                }
                FUN_1801771e0(alStack_10298,auStack_10058,uVar21);
                if ((abStack_10288[*(int *)(alStack_10298[0] + 4)] & 6) != 0) {
                  FUN_18015c010(auStack_10168);
                  FUN_180111b90(auStack_10148);
                  FUN_18015c010(auStack_100f8);
                  FUN_18015c010(auStack_10118);
                  FUN_18015c010(auStack_100d8);
                  *(undefined ***)
                   ((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                  *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4)
                       = *(int *)(alStack_10298[0] + 4) + -0xb0;
                  FUN_1800f63e0(abStack_10288);
                  *(undefined ***)
                   ((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                       std::basic_istream<char,std::char_traits<char>_>::vftable;
                  *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4)
                       = *(int *)(alStack_10298[0] + 4) + -0x18;
                  appuStack_101e8[0] = std::ios_base::vftable;
                  std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
                  goto LAB_18018b447;
                }
                if (bVar36) {
                  if (uVar21 < 0x10) {
                    FUN_18015c010(auStack_10168);
                    FUN_180111b90(auStack_10148);
                    FUN_18015c010(auStack_100f8);
                    FUN_18015c010(auStack_10118);
                    FUN_18015c010(auStack_100d8);
                    *(undefined ***)
                     ((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                    *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4
                            ) = *(int *)(alStack_10298[0] + 4) + -0xb0;
                    FUN_1800f63e0(abStack_10288);
                    *(undefined ***)
                     ((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                         std::basic_istream<char,std::char_traits<char>_>::vftable;
                    *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4
                            ) = *(int *)(alStack_10298[0] + 4) + -0x18;
                    appuStack_101e8[0] = std::ios_base::vftable;
                    std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
                    goto LAB_18018b447;
                  }
                  if (((((short)(auStack_10058[0] >> 0x20) != 0xc) ||
                       ((uint)auStack_10058[0] < 0x10)) || ((uint)uVar6 < (uint)auStack_10058[0]))
                     || ((iVar12 = (int)(auStack_10058[1] >> 0x20), 0x7f < iVar12 - 1U ||
                         ((auStack_10058[0] & 0xffffffff) <
                          (ulonglong)(uint)(iVar12 * 0xc) + (auStack_10058[1] & 0xffffffff) + 8))))
                  {
                    FUN_18015c010(auStack_10168);
                    FUN_180111b90(auStack_10148);
                    FUN_18015c010(auStack_100f8);
                    FUN_18015c010(auStack_10118);
                    FUN_18015c010(auStack_100d8);
                    *(undefined ***)
                     ((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                    *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4
                            ) = *(int *)(alStack_10298[0] + 4) + -0xb0;
                    FUN_1800f63e0(abStack_10288);
                    *(undefined ***)
                     ((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                         std::basic_istream<char,std::char_traits<char>_>::vftable;
                    *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4
                            ) = *(int *)(alStack_10298[0] + 4) + -0x18;
                    appuStack_101e8[0] = std::ios_base::vftable;
                    std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
                    goto LAB_18018b447;
                  }
                  bVar36 = false;
                }
                puVar24 = auStack_10058;
                if (auStack_10058 != (ulonglong *)((longlong)auStack_10058 + uVar21)) {
                  do {
                    uVar25 = uVar25 >> 8 ^
                             *(uint *)(&DAT_1808d9220 +
                                      (ulonglong)((uVar25 ^ (byte)*puVar24) & 0xff) * 4);
                    puVar24 = (ulonglong *)((longlong)puVar24 + 1);
                  } while (puVar24 != (ulonglong *)((longlong)auStack_10058 + uVar21));
                  uVar35 = aauStack_10390[0]._0_4_;
                }
                uVar32 = uVar32 - uVar21;
              } while (uVar32 != 0);
              if (~uVar25 != uVar35) {
LAB_18018b612:
                FUN_18015c010(auStack_10168);
                FUN_180111b90(auStack_10148);
                FUN_18015c010(auStack_100f8);
                FUN_18015c010(auStack_10118);
                FUN_18015c010(auStack_100d8);
                *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4))
                     = std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                     *(int *)(alStack_10298[0] + 4) + -0xb0;
                FUN_1800f63e0(abStack_10288);
                *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4))
                     = std::basic_istream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                     *(int *)(alStack_10298[0] + 4) + -0x18;
                appuStack_101e8[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
                goto LAB_18018b447;
              }
              FUN_180113f10(auStack_10098);
              uVar21 = uStack_103e0;
              uVar32 = uStack_10430;
              auStack_10098 = (undefined1  [16])0x0;
              uStack_10088 = 0;
              cVar9 = FUN_180189e50(alStack_10298,(uStack_102b8 & 0xffffffff) + 0x1c + uStack_10430,
                                    uStack_103e0,auStack_10098);
              if (cVar9 == '\0') {
LAB_18018b599:
                FUN_180111b90(auStack_10098);
                FUN_18015c010(auStack_10168);
                FUN_180111b90(auStack_10148);
                FUN_18015c010(auStack_100f8);
                FUN_18015c010(auStack_10118);
                FUN_18015c010(auStack_100d8);
                FUN_18015dd20(alStack_10298);
                FUN_18018ba60(auStack_10188);
                FUN_180188420(auStack_10178);
                goto LAB_18018b4a7;
              }
              uVar7 = auStack_10098._8_8_;
              lVar28 = auStack_10098._0_8_;
              if (0x4000 < (ulonglong)
                           (((longlong)(auStack_10148._8_8_ - auStack_10148._0_8_) >> 5) +
                           ((longlong)(auStack_10098._8_8_ - auStack_10098._0_8_) >> 5)))
              goto LAB_18018b599;
              for (; lVar28 != uVar7; lVar28 = lVar28 + 0x20) {
                puVar17 = (undefined8 *)FUN_18015ac20(lVar28,auStack_10300);
                ppppppplStack_10418 = (longlong *******)*puVar17;
                uStack_10410 = puVar17[1];
                uVar18 = FUN_180185660(aauStack_10390,&ppppppplStack_10418);
                FUN_1800f5780(lVar28,uVar18);
                FUN_18015c010(aauStack_10390);
                cVar9 = FUN_1800f5460(lVar28,&DAT_1807c2514);
                if (cVar9 == '\0') {
                  FUN_180151bc0(lVar28,&DAT_1807c2514);
                }
                plVar19 = (longlong *)FUN_18015ac20(lVar28,auStack_102f0);
                ppppppplStack_10418 = (longlong *******)*plVar19;
                uStack_10410 = plVar19[1];
                cVar9 = FUN_18017eed0(&ppppppplStack_10418);
                if (cVar9 == '\0') goto LAB_18018b599;
                FUN_1801acec0(auStack_10148,lVar28);
              }
              uStack_10430 = uVar32 + uVar21;
              FUN_180111b90(auStack_10098);
              FUN_18015c010(auStack_10168);
              lVar27 = lStack_100c8;
              lVar28 = lStack_100e8;
              lVar33 = lStack_103d0;
              uVar35 = uStack_103f8;
              uVar32 = uStack_103c0;
            }
LAB_18018a9e8:
            if (lVar28 != 0) {
              FUN_180111b90(auStack_10148);
              FUN_18015c010(auStack_100f8);
              FUN_18015c010(auStack_10118);
              FUN_18015c010(auStack_100d8);
              *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                   std::basic_ifstream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                   *(int *)(alStack_10298[0] + 4) + -0xb0;
              FUN_1800f63e0(abStack_10288);
              *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                   std::basic_istream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                   *(int *)(alStack_10298[0] + 4) + -0x18;
              appuStack_101e8[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
              goto LAB_18018b447;
            }
            goto LAB_18018a840;
          }
LAB_18018a888:
          if (piStack_10438 == (int *)0x0) goto LAB_18018a550;
          FUN_180111b90(auStack_10148);
          FUN_18015c010(auStack_100f8);
          FUN_18015c010(auStack_10118);
          FUN_18015c010(auStack_100d8);
          *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
               std::basic_ifstream<char,std::char_traits<char>_>::vftable;
          *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
               *(int *)(alStack_10298[0] + 4) + -0xb0;
          FUN_1800f63e0(abStack_10288);
          *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
               std::basic_istream<char,std::char_traits<char>_>::vftable;
          *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
               *(int *)(alStack_10298[0] + 4) + -0x18;
          appuStack_101e8[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
        }
        else {
LAB_18018a59b:
          if (lVar27 != 0) goto LAB_18018b93d;
LAB_18018a5a4:
          if (((uVar21 < uVar32) || (!bVar5)) ||
             ((uStack_10430 != uStack_102b8 >> 0x20 ||
              ((*param_4 != 0 && ((*(uint *)(*param_4 + 4) & 1) != 0)))))) goto LAB_18018b93d;
          uVar7 = auStack_10148._8_8_;
          if (auStack_10148._0_8_ == auStack_10148._8_8_) goto LAB_18018a671;
          uVar18 = auStack_10178._0_8_;
          plVar19 = *(longlong **)(auStack_10178._0_8_ + 8);
          cVar9 = *(char *)((longlong)plVar19 + 0x19);
          lVar28 = auStack_10148._0_8_;
          while( true ) {
            plVar30 = (longlong *)uVar18;
            if (cVar9 == '\0') {
              plVar20 = plVar19;
              do {
                cVar10 = FUN_180114040(plVar20 + 4,lVar28);
                if (cVar10 < '\0') {
                  plVar20 = plVar20 + 2;
                }
                else {
                  plVar30 = plVar20;
                }
                plVar20 = (longlong *)*plVar20;
              } while (*(char *)((longlong)plVar20 + 0x19) == '\0');
            }
            if (((*(char *)((longlong)plVar30 + 0x19) != '\0') ||
                (cVar10 = FUN_180114040(lVar28,plVar30 + 4), cVar10 < '\0')) &&
               (cVar10 = FUN_180176400(uStack_103d8,lVar28), cVar10 == '\0')) break;
            lVar28 = lVar28 + 0x20;
            if (lVar28 == uVar7) {
LAB_18018a671:
              puVar24 = puStack_103b8;
              if ((puStack_103b8 != (ulonglong *)0x0) &&
                 (puStack_103b8 != (ulonglong *)auStack_10188)) {
                uVar34 = *puStack_103b8;
                FUN_1801b6160(puStack_103b8,puStack_103b8,*(undefined8 *)(uVar34 + 8));
                *(ulonglong *)(uVar34 + 8) = uVar34;
                *(ulonglong *)uVar34 = uVar34;
                *(ulonglong *)(uVar34 + 0x10) = uVar34;
                uVar34 = *puVar24;
                *puVar24 = auStack_10188._0_8_;
                puVar24[1] = auStack_10188._8_8_;
                auStack_10188._8_8_ = 0;
                auStack_10188._0_8_ = uVar34;
              }
              FUN_180111b90(auStack_10148);
              FUN_18015c010(auStack_100f8);
              FUN_18015c010(auStack_10118);
              FUN_18015c010(auStack_100d8);
              *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                   std::basic_ifstream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                   *(int *)(alStack_10298[0] + 4) + -0xb0;
              FUN_1800f63e0(abStack_10288);
              *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
                   std::basic_istream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
                   *(int *)(alStack_10298[0] + 4) + -0x18;
              appuStack_101e8[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
              FUN_1801b6160(auStack_10188,auStack_10188,*(undefined8 *)(auStack_10188._0_8_ + 8));
              FUN_1804547d0(auStack_10188._0_8_,0x48);
              FUN_1801b63b0(auStack_10178,auStack_10178,*(undefined8 *)(auStack_10178._0_8_ + 8));
              FUN_1804547d0(auStack_10178._0_8_,0x40);
              FUN_18015c010(auStack_100b8);
              FUN_180113710(auStack_10130);
              FUN_18017cdd0(param_4);
            }
          }
LAB_18018b93d:
          FUN_180111b90(auStack_10148);
          FUN_18015c010(auStack_100f8);
          FUN_18015c010(auStack_10118);
          FUN_18015c010(auStack_100d8);
          *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
               std::basic_ifstream<char,std::char_traits<char>_>::vftable;
          *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
               *(int *)(alStack_10298[0] + 4) + -0xb0;
          FUN_1800f63e0(abStack_10288);
          *(undefined ***)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4)) =
               std::basic_istream<char,std::char_traits<char>_>::vftable;
          *(int *)((longlong)alStack_10298 + (longlong)*(int *)(alStack_10298[0] + 4) + -4) =
               *(int *)(alStack_10298[0] + 4) + -0x18;
          appuStack_101e8[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)appuStack_101e8);
        }
LAB_18018b447:
        FUN_1801b6160(auStack_10188,auStack_10188,*(undefined8 *)(auStack_10188._0_8_ + 8));
        FUN_1804547d0(auStack_10188._0_8_,0x48);
        FUN_1801b63b0(auStack_10178,auStack_10178,*(undefined8 *)(auStack_10178._0_8_ + 8));
        FUN_1804547d0(auStack_10178._0_8_,0x40);
LAB_18018b4a7:
        FUN_18015c010(auStack_100b8);
        FUN_180113710(auStack_10130);
        goto LAB_18018ba1b;
      }
    }
    FUN_18015c010(auStack_100b8);
    FUN_180113710(auStack_10130);
  }
LAB_18018ba1b:
  FUN_18017cdd0(param_4);
}



