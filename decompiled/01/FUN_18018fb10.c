// FUN_18018fb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018fb10 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18018fb10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  short sVar4;
  ulonglong *puVar5;
  size_t sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  short *psVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  BOOL BVar19;
  int iVar20;
  DWORD DVar21;
  undefined4 uVar22;
  uint uVar23;
  HANDLE pvVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  ULONGLONG UVar29;
  longlong lVar30;
  longlong *plVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  LPCWSTR lpFileName;
  undefined8 *puVar34;
  undefined1 (*pauVar35) [16];
  short *psVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  char *pcVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  ulonglong uVar42;
  undefined8 *******pppppppuVar43;
  longlong *plVar44;
  longlong lVar45;
  undefined8 *puVar46;
  uint uVar47;
  char *pcVar48;
  undefined8 *puVar49;
  int iVar50;
  longlong lVar51;
  longlong lVar52;
  bool bVar53;
  undefined1 auStackY_11498 [32];
  longlong lStack_11440;
  longlong *plStack_11438;
  undefined1 auStack_11428 [16];
  undefined1 uStack_11418;
  undefined1 auStack_11417 [7];
  undefined1 auStack_11410 [32];
  undefined1 auStack_113f0 [40];
  char *pcStack_113c8;
  ulonglong uStack_113c0;
  ulonglong uStack_113b8;
  undefined8 uStack_113b0;
  undefined1 auStack_113a8 [16];
  int aiStack_11398 [4];
  undefined1 auStack_11388 [8];
  undefined1 auStack_11380 [8];
  undefined1 auStack_11378 [8];
  undefined1 auStack_11370 [8];
  undefined1 *puStack_11368;
  size_t sStack_11360;
  longlong lStack_11358;
  undefined8 uStack_11350;
  undefined8 *puStack_11348;
  undefined8 uStack_11340;
  undefined1 *puStack_11338;
  undefined8 uStack_11330;
  longlong *plStack_11328;
  undefined1 *puStack_11320;
  longlong *plStack_11318;
  ulonglong *puStack_11310;
  undefined8 *puStack_11308;
  undefined1 *puStack_11300;
  ulonglong *puStack_112f8;
  undefined8 uStack_112f0;
  undefined8 uStack_112e8;
  undefined8 uStack_112e0;
  undefined8 uStack_112d8;
  undefined1 auStack_112d0 [32];
  undefined1 auStack_112b0 [32];
  undefined1 auStack_11290 [16];
  undefined1 auStack_11280 [16];
  undefined1 auStack_11270 [8];
  undefined1 auStack_11268 [8];
  longlong *plStack_11260;
  undefined1 auStack_11258 [8];
  undefined1 auStack_11250 [8];
  undefined1 auStack_11248 [32];
  undefined1 auStack_11228 [8];
  undefined1 auStack_11220 [8];
  undefined1 auStack_11218 [8];
  undefined1 auStack_11210 [72];
  undefined1 auStack_111c8 [32];
  undefined1 auStack_111a8 [16];
  undefined1 auStack_11198 [16];
  undefined1 auStack_11188 [32];
  undefined8 auStack_11168 [4];
  undefined8 auStack_11148 [4];
  undefined8 uStack_11128;
  undefined8 *******apppppppuStack_11120 [2];
  longlong lStack_11110;
  ulonglong uStack_11108;
  ulonglong uStack_110f8;
  ulonglong uStack_110f0;
  ulonglong uStack_110e8;
  longlong alStack_110e0 [35];
  undefined1 auStack_10fc8 [16];
  undefined8 uStack_10fb8;
  ulonglong uStack_10fa8;
  undefined1 auStack_10fa0 [8];
  longlong *plStack_10f98;
  undefined8 uStack_10f90;
  undefined1 auStack_10f88 [16];
  undefined1 auStack_10f78 [16];
  longlong lStack_10f68;
  ulonglong uStack_10f60;
  undefined1 auStack_10f58 [16];
  size_t sStack_10f48;
  ulonglong uStack_10f40;
  undefined1 auStack_10f38 [32];
  longlong alStack_10f18 [2];
  undefined1 auStack_10f08 [8];
  undefined8 *puStack_10f00;
  ulonglong uStack_10ef8;
  longlong lStack_10ef0;
  undefined8 uStack_10ee8;
  ulonglong uStack_10ed8;
  ulonglong uStack_10ed0;
  undefined1 auStack_10ec8 [8];
  undefined8 *puStack_10ec0;
  ulonglong uStack_10eb8;
  longlong lStack_10eb0;
  undefined8 uStack_10ea8;
  ulonglong uStack_10e98;
  ulonglong uStack_10e90;
  undefined1 auStack_10e88 [16];
  undefined1 auStack_10e78 [16];
  int aiStack_10e68 [2];
  undefined **ppuStack_10e60;
  undefined8 uStack_10e58;
  ulonglong uStack_10e50;
  ulonglong uStack_10e48;
  uint uStack_10e40;
  undefined4 uStack_10e3c;
  undefined4 uStack_10e38;
  undefined4 uStack_10e34;
  undefined4 uStack_10e30;
  undefined4 uStack_10e2c;
  undefined4 uStack_10e28;
  undefined4 uStack_10e24;
  undefined4 uStack_10e20;
  undefined4 uStack_10e1c;
  undefined4 uStack_10e18;
  undefined4 uStack_10e14;
  undefined4 uStack_10e10;
  undefined4 uStack_10e0c;
  undefined4 uStack_10e08;
  undefined4 uStack_10e04;
  undefined4 uStack_10e00;
  char acStack_10dfc [4];
  longlong alStack_10df8 [2];
  undefined1 auStack_10de8 [8];
  undefined8 *puStack_10de0;
  ulonglong uStack_10dd8;
  longlong lStack_10dd0;
  ulonglong uStack_10db8;
  undefined4 uStack_10da8;
  undefined4 uStack_10da4;
  undefined8 uStack_10da0;
  undefined8 uStack_10d98;
  undefined4 uStack_10d90;
  undefined8 uStack_10d8c;
  undefined8 uStack_10d84;
  undefined8 uStack_10d7c;
  undefined8 uStack_10d74;
  undefined8 uStack_10d6c;
  undefined8 uStack_10d64;
  undefined8 uStack_10d5c;
  undefined8 uStack_10d54;
  undefined1 auStack_10d48 [8];
  undefined8 *puStack_10d40;
  ulonglong uStack_10d38;
  undefined8 uStack_10d30;
  undefined8 uStack_10d28;
  ulonglong uStack_10d10;
  undefined4 auStack_10d08 [2];
  undefined **ppuStack_10d00;
  undefined1 auStack_10cf8 [8];
  longlong lStack_10cf0;
  undefined1 auStack_10ce0 [40];
  undefined1 auStack_10cb8 [64];
  longlong alStack_10c78 [3];
  undefined8 uStack_10c60;
  undefined1 auStack_10c30 [112];
  undefined1 auStack_10bc0 [24];
  undefined1 auStack_10ba8 [32];
  undefined1 auStack_10b88 [72];
  char cStack_10b40;
  undefined1 auStack_10ab0 [72];
  undefined1 auStack_10a68 [216];
  undefined8 *******apppppppuStack_10990 [2];
  undefined8 uStack_10980;
  ulonglong uStack_10978;
  undefined8 *******apppppppuStack_10970 [2];
  undefined8 uStack_10960;
  ulonglong uStack_10958;
  undefined8 uStack_10950;
  char cStack_10948;
  char acStack_10938 [8];
  undefined1 auStack_10930 [216];
  char acStack_10858 [8];
  undefined1 auStack_10850 [216];
  char cStack_10778;
  longlong lStack_10770;
  undefined1 auStack_10768 [16];
  longlong *plStack_10758;
  undefined1 auStack_10748 [8];
  undefined1 auStack_10740 [16];
  undefined1 auStack_10730 [40];
  undefined1 auStack_10708 [64];
  undefined1 auStack_106c8 [64];
  undefined1 auStack_10688 [64];
  char acStack_10648 [32];
  undefined1 auStack_10628 [32];
  undefined8 uStack_10608;
  undefined8 *******apppppppuStack_10600 [3];
  ulonglong uStack_105e8;
  ulonglong uStack_105e0;
  ulonglong uStack_105d8;
  longlong alStack_105c0 [2];
  uint auStack_105b0 [2];
  undefined1 auStack_105a8 [48];
  longlong lStack_10578;
  undefined1 auStack_10570 [72];
  undefined1 auStack_10528 [24];
  longlong lStack_10510;
  char local_648 [288];
  char local_528;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18018fb32;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_11498;
  bVar17 = false;
  bVar15 = false;
  bVar13 = false;
  bVar11 = false;
  plStack_11438 = param_2;
  plStack_11260 = param_2;
  pvVar24 = GetCurrentThread();
  BVar19 = SetThreadPriority(pvVar24,0x10000);
  uStack_11418 = BVar19 != 0;
  FUN_18018e640(alStack_10c78);
  uStack_113b8 = 0;
  FUN_180180c60(auStack_10cf8);
  FUN_1801ab040(auStack_10cf8);
  FUN_180180c60(auStack_10f08);
  FUN_1801aae50(auStack_10f08);
  FUN_180180c60(auStack_10ec8);
  FUN_1801aae50(auStack_10ec8);
  FUN_1800a8050(&plStack_10f98);
  FUN_1801ab680(&plStack_10f98);
  FUN_180180c60(auStack_10d48);
  FUN_1801aca70(auStack_10d48);
  FUN_1800a8050(&lStack_10f68);
  FUN_1801ab680(&lStack_10f68);
  FUN_180180c60(auStack_10708);
  FUN_1801abb20(auStack_10708);
  FUN_180180c60(auStack_106c8);
  FUN_1801abb20(auStack_106c8);
  FUN_180180c60(auStack_10748);
  FUN_1801ab100(auStack_10748);
  FUN_180180c60(auStack_10cb8);
  FUN_1801aba30(auStack_10cb8);
  FUN_1800a8030(auStack_10ba8);
  auStack_10fa0[0] = 0;
  uVar25 = FUN_180193710(auStack_10b88,auStack_10fa0,auStack_10f08,auStack_10ec8);
  FUN_1801a7240(auStack_10688,uVar25);
  plVar31 = param_2;
  bVar12 = false;
  bVar14 = false;
  bVar16 = false;
  bVar53 = false;
  do {
    while( true ) {
      while( true ) {
        iVar50 = 0;
        if ((*plVar31 != 0) && ((*(uint *)(*plVar31 + 4) & 1) != 0)) {
          FUN_1801933d0(auStack_10688);
          FUN_18015b930(auStack_10ba8);
          FUN_1801868f0(auStack_10cb8);
          FUN_1800f0160(auStack_10730);
          FUN_1801aac60(auStack_10740);
          FUN_180186810(auStack_106c8);
          FUN_180186810(auStack_10708);
          FUN_18018f670(&lStack_10f68);
          FUN_180180c90(auStack_10d48);
          FUN_18018f670(&plStack_10f98);
          uVar25 = FUN_1800f0160(&lStack_10eb0);
          FUN_1801b66f0(uVar25,puStack_10ec0);
          FUN_1804547d0(puStack_10ec0,0x1b8);
          uVar25 = FUN_1800f0160(&lStack_10ef0);
          FUN_1801b66f0(uVar25,puStack_10f00);
          FUN_1804547d0(puStack_10f00,0x1b8);
          uVar25 = FUN_1800f0160(auStack_10ce0);
          FUN_1801b6770(uVar25,lStack_10cf0);
          FUN_1804547d0(lStack_10cf0,0x170);
          FUN_18018f670(auStack_10bc0);
          FUN_180180c90(auStack_10c30);
          if (BVar19 != 0) {
            pvVar24 = GetCurrentThread();
            SetThreadPriority(pvVar24,0x20000);
          }
          piVar1 = (int *)*plVar31;
          if (piVar1 != (int *)0x0) {
            LOCK();
            iVar50 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar50 == 1) {
              if (DAT_180c7df30 == (undefined8 *)0x0) {
                pcStack_113c8 = "tier0.dll:g_pMemAlloc";
                uStack_113c0 = 0x15;
                DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_113c8);
              }
              (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar1);
            }
          }
        }
        acStack_10938[0] = '\0';
        _eh_vector_constructor_iterator_(auStack_10930,0xe0,2,FUN_1801abaf0,thunk_FUN_1801ab310);
        lStack_10770 = 0;
        auStack_10768 = (undefined1  [16])0x0;
        plStack_10758 = (longlong *)0x0;
        auStack_11428._0_8_ = param_1;
        iVar20 = FUN_1805f68d0(param_1);
        if (iVar20 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
          *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        acStack_10938[0] = *(char *)(param_1 + 0x50);
        if (*(char *)(param_1 + 0x130) == '\0') {
          FUN_1801b8590(auStack_10930);
        }
        else if (acStack_10858[0] == '\0') {
          FUN_180195650();
          acStack_10858[0] = '\x01';
        }
        else {
          FUN_1801aea60();
        }
        if (*(char *)(param_1 + 0x210) == '\0') {
          FUN_1801b8590(auStack_10850);
        }
        else if (cStack_10778 == '\0') {
          FUN_180195650();
          cStack_10778 = '\x01';
        }
        else {
          FUN_1801aea60();
        }
        if (*(longlong *)(param_1 + 0x220) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_1 + 0x220) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lStack_10770 = *(longlong *)(param_1 + 0x218);
        uVar26 = auStack_10768._0_8_;
        uVar25 = *(undefined8 *)(param_1 + 0x220);
        auStack_10768._0_8_ = uVar25;
        if ((longlong *)uVar26 != (longlong *)0x0) {
          LOCK();
          plVar44 = (longlong *)(uVar26 + 8);
          lVar52 = *plVar44;
          *(int *)plVar44 = (int)*plVar44 + -1;
          UNLOCK();
          if ((int)lVar52 == 1) {
            (*(code *)**(undefined8 **)uVar26)(uVar26);
            LOCK();
            piVar1 = (int *)(uVar26 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar25 = auStack_10768._0_8_;
            if (iVar20 == 1) {
              (**(code **)(*(longlong *)uVar26 + 8))(uVar26);
              uVar25 = auStack_10768._0_8_;
            }
          }
        }
        auStack_10768._0_8_ = uVar25;
        plVar44 = plStack_10758;
        if (*(longlong *)(param_1 + 0x230) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_1 + 0x230) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        auStack_10768._8_8_ = *(undefined8 *)(param_1 + 0x228);
        plVar40 = *(longlong **)(param_1 + 0x230);
        if (plStack_10758 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_10758 + 1;
          lVar52 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar52 == 1) {
            puVar37 = (undefined8 *)*plStack_10758;
            plStack_10758 = plVar40;
            (*(code *)*puVar37)(plVar44);
            LOCK();
            piVar1 = (int *)((longlong)plVar44 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar40 = plStack_10758;
            if (iVar20 == 1) {
              (**(code **)(*plVar44 + 8))(plVar44);
              plVar40 = plStack_10758;
            }
          }
        }
        plStack_10758 = plVar40;
        FUN_1805f68fc(param_1);
        uStack_10fa8 = GetTickCount64();
        if (((acStack_10938[0] == '\0') || (auStack_10768._8_8_ == 0)) ||
           (bVar9 = true, *(ulonglong *)(auStack_10768._8_8_ + 0x90) <= uStack_10fa8)) {
          bVar9 = false;
        }
        if (acStack_10938[0] != '\0') break;
        if (alStack_10c78[0] != 0) {
          plVar31 = (longlong *)*plStack_10f98;
          cVar18 = *(char *)((longlong)plVar31 + 0x19);
          while (cVar18 == '\0') {
            FUN_18018f480(alStack_10c78,plVar31[4]);
            plVar44 = (longlong *)plVar31[2];
            if (*(char *)((longlong)plVar44 + 0x19) == '\0') {
              cVar18 = *(char *)(*plVar44 + 0x19);
              plVar31 = plVar44;
              plVar44 = (longlong *)*plVar44;
              while (cVar18 == '\0') {
                cVar18 = *(char *)(*plVar44 + 0x19);
                plVar31 = plVar44;
                plVar44 = (longlong *)*plVar44;
              }
            }
            else {
              cVar18 = *(char *)(plVar31[1] + 0x19);
              plVar40 = (longlong *)plVar31[1];
              plVar44 = plVar31;
              while ((plVar31 = plVar40, cVar18 == '\0' && (plVar44 == (longlong *)plVar31[2]))) {
                cVar18 = *(char *)(plVar31[1] + 0x19);
                plVar40 = (longlong *)plVar31[1];
                plVar44 = plVar31;
              }
            }
            cVar18 = *(char *)((longlong)plVar31 + 0x19);
          }
        }
        plVar44 = plStack_10f98;
        cVar18 = *(char *)(plStack_10f98[1] + 0x19);
        plVar31 = (longlong *)plStack_10f98[1];
        while (cVar18 == '\0') {
          FUN_1801b05f0(&plStack_10f98,&plStack_10f98,plVar31[2]);
          plVar40 = (longlong *)*plVar31;
          FUN_1804547d0(plVar31,0x28);
          plVar31 = plVar40;
          cVar18 = *(char *)((longlong)plVar40 + 0x19);
        }
        plVar44[1] = (longlong)plVar44;
        *plVar44 = (longlong)plVar44;
        plVar44[2] = (longlong)plVar44;
        uStack_10f90 = 0;
        if (uStack_10d38 != 0) {
          if (uStack_10d38 < uStack_10d10 >> 3) {
            FUN_1801b3770(auStack_10d48,*puStack_10d40,puStack_10d40);
          }
          else {
            *(undefined8 *)puStack_10d40[1] = 0;
            puVar37 = (undefined8 *)*puStack_10d40;
            while (puVar37 != (undefined8 *)0x0) {
              puVar38 = (undefined8 *)*puVar37;
              FUN_1804547d0(puVar37,0x20);
              puVar37 = puVar38;
            }
            *puStack_10d40 = puStack_10d40;
            puStack_10d40[1] = puStack_10d40;
            uStack_10d38 = 0;
            auStack_10fc8._0_8_ = puStack_10d40;
            FUN_1800f9880(uStack_10d30,uStack_10d28,auStack_10fc8);
          }
        }
        lVar52 = lStack_10f68;
        cVar18 = *(char *)((longlong)*(longlong **)(lStack_10f68 + 8) + 0x19);
        plVar31 = *(longlong **)(lStack_10f68 + 8);
        puVar37 = puStack_10f00;
        while (puStack_10f00 = puVar37, cVar18 == '\0') {
          FUN_1801b05f0(&lStack_10f68,&lStack_10f68,plVar31[2]);
          plVar44 = (longlong *)*plVar31;
          FUN_1804547d0(plVar31,0x28);
          plVar31 = plVar44;
          puVar37 = puStack_10f00;
          cVar18 = *(char *)((longlong)plVar44 + 0x19);
        }
        *(longlong *)(lVar52 + 8) = lVar52;
        *(longlong *)lVar52 = lVar52;
        *(longlong *)(lVar52 + 0x10) = lVar52;
        uStack_10f60 = 0;
        for (puVar38 = (undefined8 *)*puVar37; puVar38 != puVar37; puVar38 = (undefined8 *)*puVar38)
        {
          FUN_1801ad260(puVar38 + 0x14);
          plVar31 = puVar38 + 0xc;
          if (7 < (ulonglong)puVar38[0xf]) {
            plVar31 = (longlong *)*plVar31;
          }
          FUN_1805fb9a8(plVar31);
        }
        if (uStack_10ef8 != 0) {
          if (uStack_10ef8 < uStack_10ed0 >> 3) {
            FUN_1801b2bb0(auStack_10f08,*puStack_10f00,puStack_10f00);
          }
          else {
            FUN_1801b66f0(uStack_10ef8,puStack_10f00);
            *puStack_10f00 = puStack_10f00;
            puStack_10f00[1] = puStack_10f00;
            uStack_10ef8 = 0;
            auStack_10fc8._0_8_ = puStack_10f00;
            FUN_1800f9880(lStack_10ef0,uStack_10ee8,auStack_10fc8);
          }
        }
        puVar38 = puStack_10ec0;
        for (puVar37 = (undefined8 *)*puStack_10ec0; puVar37 != puVar38;
            puVar37 = (undefined8 *)*puVar37) {
          FUN_1801ad260(puVar37 + 0x14);
        }
        if (uStack_10eb8 != 0) {
          if (uStack_10eb8 < uStack_10e90 >> 3) {
            FUN_1801b2bb0(auStack_10ec8,*puStack_10ec0,puStack_10ec0);
          }
          else {
            FUN_1801b66f0(uStack_10eb8,puStack_10ec0);
            *puStack_10ec0 = puStack_10ec0;
            puStack_10ec0[1] = puStack_10ec0;
            uStack_10eb8 = 0;
            auStack_10fc8._0_8_ = puStack_10ec0;
            FUN_1800f9880(lStack_10eb0,uStack_10ea8,auStack_10fc8);
          }
        }
        cStack_10948 = 0;
        FUN_18018f710(param_1,0,auStack_10a68);
        cStack_10948 = '\0';
        FUN_18018f710(param_1,1,auStack_10a68);
        auStack_10fc8._0_8_ = 100;
        FUN_1801a7270(auStack_10fc8);
        FUN_1800efed0(auStack_10768 + 8);
        FUN_1800efed0(&lStack_10770);
        _eh_vector_destructor_iterator_(auStack_10930,0xe0,2,thunk_FUN_1801ab310);
        plVar31 = plStack_11438;
      }
      if (alStack_10c78[0] == 0) {
        uVar25 = FUN_18018dec0(auStack_10b88);
        FUN_180195470(alStack_10c78,uVar25);
        FUN_18018f6d0(auStack_10b88);
      }
      if ((lStack_10770 != 0) && (*(longlong *)(lStack_10770 + 0x10) != 0)) break;
      auStack_11428._0_8_ = 100;
      FUN_1801a7270(auStack_11428);
LAB_1801904d3:
      FUN_180195420(acStack_10938);
    }
    cVar18 = FUN_180162e50(auStack_10ba8);
    if (cVar18 == '\0') {
      FUN_180180c60(auStack_10b88);
      FUN_1801aba30(auStack_10b88);
      FUN_18015b0f0(auStack_10f38);
      FUN_1801a62e0(auStack_113f0);
      uVar25 = FUN_1800a7e60(auStack_11410,lStack_10770,auStack_113f0);
      cVar18 = FUN_180185fa0(uVar25,auStack_10b88,auStack_10f38);
      FUN_18015b930(auStack_11410);
      FUN_18015b930(auStack_113f0);
      if (cVar18 == '\0') {
        auStack_10fc8._0_8_ = 500;
        FUN_1801a7270(auStack_10fc8);
      }
      else {
        FUN_1800e6f90(auStack_113f0,L"core/pak01_dir.vpk");
        uVar25 = FUN_18015c130(lStack_10770,auStack_11410);
        FUN_1800a7e60(auStack_10f88,uVar25);
        FUN_18015b930(auStack_11410);
        FUN_18015b930(auStack_113f0);
        FUN_1800a8050(auStack_10d08);
        auStack_10d08[0] = 0;
        ppuStack_10d00 = &PTR_vftable_1808d7db8;
        cVar18 = FUN_1800a8060(auStack_10f88,auStack_10d08);
        if ((cVar18 == '\0') ||
           (cVar18 = FUN_180185fa0(auStack_10f88,auStack_10b88), cVar18 != '\0')) {
          FUN_1801ab990(auStack_10cb8,auStack_10b88);
          FUN_1800a7ff0(auStack_10ba8,lStack_10770);
          FUN_18015b930(auStack_10f88);
          FUN_18015c010(auStack_10f38);
          FUN_1801868f0(auStack_10b88);
          goto LAB_180190531;
        }
        auStack_10fc8._0_8_ = 500;
        FUN_1801a7270(auStack_10fc8);
        FUN_18015b930(auStack_10f88);
      }
      FUN_18015c010(auStack_10f38);
      FUN_1801868f0(auStack_10b88);
      goto LAB_1801904d3;
    }
LAB_180190531:
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auStack_10fc8._4_12_;
    auStack_10fc8 = auVar7 << 0x20;
    pcVar48 = acStack_10858;
    do {
      cVar18 = FUN_18017cdb0(plVar31);
      if (cVar18 != '\0') break;
      if (*pcVar48 == '\0') {
        cStack_10948 = cVar18;
        FUN_18018f710(param_1,iVar50);
      }
      else {
        uVar25 = FUN_18015b9b0(auStack_113f0,*(undefined8 *)(pcVar48 + -8));
        uVar26 = FUN_18015b9b0(auStack_112b0,*(undefined8 *)(pcVar48 + -0x10));
        uVar27 = FUN_18015aa90(&uStack_112f0,pcVar48 + -0xd8,&DAT_1807013fc);
        uVar26 = FUN_18015a870(auStack_112d0,uVar27,uVar26);
        uVar26 = FUN_1800e5e50(auStack_11410,uVar26,&DAT_1807013fc);
        FUN_18015a870(auStack_10f38,uVar26,uVar25);
        FUN_18015c010(auStack_11410);
        FUN_18015c010(auStack_112d0);
        FUN_18015c010(&uStack_112f0);
        FUN_18015c010(auStack_112b0);
        FUN_18015c010(auStack_113f0);
        FUN_180195640(alStack_10f18);
        FUN_1801aaf40(auStack_10cf8,alStack_10f18,auStack_10f38);
        lVar52 = alStack_10f18[0];
        if (alStack_10f18[0] == lStack_10cf0) {
LAB_180190784:
          bVar11 = bVar12;
          puVar32 = (ulonglong *)FUN_1801abb00(auStack_106c8,auStack_10f38);
          if (*puVar32 <= uStack_10fa8) {
            lVar30 = uStack_10fa8 + 30000;
            plVar31 = (longlong *)FUN_1801abb00(auStack_106c8,auStack_10f38);
            *plVar31 = lVar30;
            FUN_180113f10(auStack_10fc8);
            auStack_10fc8 = (undefined1  [16])0x0;
            uStack_10fb8 = 0;
            FUN_18015bae0(auStack_10e88,"bundle_integrity_failed");
            plVar31 = plStack_11438;
            FUN_18017cd90(auStack_11388,plStack_11438);
            FUN_180188450(auStack_10b88,pcVar48 + -0xd8,lStack_10770);
            if (cStack_10b40 != '\0') {
              auStack_11428._0_8_ = auStack_11380;
              FUN_18017cd90(auStack_11380,plVar31);
              uVar25 = FUN_180186d00(auStack_11410,auStack_10b88);
              cVar18 = FUN_18018a140(uVar25,auStack_10b88,auStack_10cb8);
              FUN_18015b930(auStack_11410);
              if (cVar18 != '\0') {
                FUN_180195650(acStack_10648,pcVar48 + -0xd8);
                FUN_180195700(auStack_10570,auStack_10b88);
                FUN_1801ab880(auStack_10528,auStack_10fc8);
                lStack_10510 = uStack_10fa8 + 5000;
                plVar31 = (longlong *)FUN_1801a73f0(auStack_10cf8,auStack_111a8,auStack_10f38);
                lVar52 = *plVar31;
                alStack_10f18[0] = lVar52;
                FUN_180195770(acStack_10648);
              }
            }
            FUN_180189e20(auStack_10b88);
            if (lVar52 == lStack_10cf0) {
              FUN_18015b6c0(auStack_10e88);
              FUN_18015b6c0(pcVar48 + -0x98);
              FUN_1800e9f30(2,&DAT_1807c4d18,"SYNC_MODEL_PACKAGE_PENDING");
            }
            FUN_18015c010(auStack_10e88);
            FUN_1801ab7b0(auStack_10fc8);
          }
          if (lVar52 != lStack_10cf0) goto LAB_1801909ce;
          cStack_10948 = '\0';
          puVar28 = auStack_10a68;
          bVar13 = bVar14;
          bVar15 = true;
        }
        else {
          if (*(ulonglong *)(alStack_10f18[0] + 0x168) <= uStack_10fa8) {
            *(ulonglong *)(alStack_10f18[0] + 0x168) = uStack_10fa8 + 5000;
            lVar30 = *(longlong *)(alStack_10f18[0] + 0x150);
            lVar51 = *(longlong *)(alStack_10f18[0] + 0x158);
            if (lVar30 != lVar51) {
              lVar45 = lVar30 + 0x20;
              do {
                FUN_1800a8050(aiStack_10e68);
                aiStack_10e68[0] = 0;
                ppuStack_10e60 = &PTR_vftable_1808d7db8;
                cVar18 = FUN_180187210(lVar45,0);
                if ((((cVar18 == '\0') ||
                     (uVar33 = FUN_18015c220(lVar45,aiStack_10e68),
                     uVar33 != *(uint *)(lVar45 + 0x20))) || (aiStack_10e68[0] != 0)) ||
                   ((plVar31 = (longlong *)FUN_18017dff0(auStack_11258,lVar45,aiStack_10e68),
                    *plVar31 != *(longlong *)(lVar45 + 0x28) || (aiStack_10e68[0] != 0)))) {
                  FUN_1801a7300(auStack_10cf8,auStack_11270,lVar52);
                  lVar52 = lStack_10cf0;
                  alStack_10f18[0] = lStack_10cf0;
                  puVar37 = (undefined8 *)FUN_1801abb00(auStack_106c8,auStack_10f38);
                  *puVar37 = 0;
                  break;
                }
                lVar30 = lVar30 + 0x50;
                lVar45 = lVar45 + 0x50;
              } while (lVar30 != lVar51);
            }
            iVar50 = auStack_10fc8._0_4_;
            bVar12 = bVar11;
            bVar14 = bVar13;
            bVar16 = bVar15;
            bVar17 = bVar53;
          }
          if (lVar52 == lStack_10cf0) goto LAB_180190784;
LAB_1801909ce:
          FUN_180195650(auStack_10b88,lVar52 + 0x30);
          FUN_180195820(auStack_10ab0,lVar52 + 0x108);
          puVar28 = (undefined1 *)FUN_1801a7840(local_648,auStack_10b88);
          bVar13 = true;
          bVar11 = true;
          bVar15 = bVar16;
        }
        FUN_1801957f0(acStack_10648,puVar28);
        FUN_18018f710(param_1,iVar50);
        if ((bVar11) && (bVar11 = false, local_528 != '\0')) {
          FUN_180195860(local_648);
        }
        if (bVar13) {
          bVar13 = false;
          FUN_180195860(auStack_10b88);
        }
        if ((bVar15) && (bVar15 = false, cStack_10948 != '\0')) {
          FUN_180195860(auStack_10a68);
        }
        FUN_18015c010(auStack_10f38);
        plVar31 = plStack_11438;
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar53 = bVar17;
      }
      iVar50 = iVar50 + 1;
      auStack_10fc8._0_4_ = iVar50;
      pcVar48 = pcVar48 + 0xe0;
    } while (iVar50 < 2);
    if (bVar9) {
      FUN_180162870(&uStack_113b0);
      if (((*(char *)(param_1 + 0x50) == '\0') ||
          (*(longlong *)(param_1 + 0x228) != auStack_10768._8_8_)) ||
         (uVar33 = *(ulonglong *)(auStack_10768._8_8_ + 0x90), UVar29 = GetTickCount64(),
         uVar33 <= UVar29)) {
        FUN_1805f68fc(uStack_113b0);
        FUN_180195420(acStack_10938);
      }
      else {
        FUN_1805f68fc(uStack_113b0);
        FUN_180180c60(auStack_10de8);
        FUN_1801aab20(auStack_10de8);
        puVar37 = *(undefined8 **)(auStack_10768._8_8_ + 8);
        plVar31 = plStack_10f98;
        for (puVar38 = (undefined8 *)*puVar37; plStack_10f98 = plVar31, puVar38 != puVar37;
            puVar38 = (undefined8 *)*puVar38) {
          lStack_11440 = puVar38[2];
          cVar18 = FUN_18017e090();
          if (cVar18 != '\0') {
            lVar30 = FUN_1801aab00(auStack_10de8,&lStack_11440);
            FUN_180195640(alStack_10df8);
            lVar52 = auStack_10768._8_8_;
            FUN_1801aad00(auStack_10768._8_8_ + 0x48,alStack_10df8,&lStack_11440);
            if (alStack_10df8[0] != *(longlong *)(lVar52 + 0x50)) {
              lVar52 = *(longlong *)(alStack_10df8[0] + 0x18);
              for (lVar51 = lVar52 + 200; lVar51 != lVar52 + 0x158; lVar51 = lVar51 + 0x48) {
                cVar18 = FUN_18017f370(lVar51);
                if ((cVar18 != '\0') &&
                   (plVar31 = (longlong *)FUN_1801a7860(auStack_11248),
                   *plVar31 == *(longlong *)(lVar30 + 8))) {
                  FUN_1801aabe0(lVar30);
                }
              }
            }
            if (alStack_10c78[0] != 0) {
              FUN_18018e720(alStack_10c78,auStack_10b88,lStack_11440);
              FUN_1801a78d0(auStack_11417,uStack_10c60,alStack_10c78[0],auStack_10b88);
              FUN_1801a7100(&plStack_10f98,auStack_11198);
              puVar32 = (ulonglong *)FUN_1801aca50(auStack_10d48);
              if (*puVar32 <= uStack_10fa8) {
                uVar33 = uStack_10fa8;
                cVar18 = FUN_1801ab4a0(&lStack_10f68,&lStack_11440);
                lVar52 = 500;
                if (cVar18 != '\0') {
                  lVar52 = 5000;
                }
                plVar31 = (longlong *)FUN_1801aca50(auStack_10d48,&lStack_11440);
                *plVar31 = lVar52 + uVar33;
                iVar50 = FUN_18018eb30(alStack_10c78,lStack_11440);
                if (iVar50 != 3) {
                  FUN_1801ab550(&lStack_10f68,&lStack_11440);
                }
                cVar18 = FUN_1801ab4a0(&lStack_10f68);
                if ((cVar18 == '\0') && (cVar18 = FUN_18018f8c0(param_1), cVar18 != '\0')) {
                  FUN_180193740(&uStack_10da8);
                  uStack_10da4 = CONCAT22(3,(undefined2)uStack_10da4);
                  FUN_18018eec0(alStack_10c78);
                }
              }
            }
          }
          plVar31 = plStack_10f98;
        }
        plVar44 = (longlong *)*plVar31;
        auStack_10fc8._0_8_ = plVar44;
        if (plVar44 != plVar31) {
          do {
            plVar40 = (longlong *)
                      (((((((((((ulonglong)*(byte *)(plVar44 + 4) ^ 0xcbf29ce484222325) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x21)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x22)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x23)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x24)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x25)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x26)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar44 + 0x27)) *
                        0x100000001b3 & uStack_10db8) * 0x10 + lStack_10dd0);
            puVar37 = (undefined8 *)plVar40[1];
            if (puVar37 == puStack_10de0) {
LAB_180190f58:
              FUN_18018f480(alStack_10c78,plVar44[4]);
              FUN_1801ac930(auStack_10d48,plVar44 + 4);
              FUN_1801ab550(&lStack_10f68,plVar44 + 4);
              puVar37 = (undefined8 *)FUN_1801ab5f0(&plStack_10f98);
              plVar44 = (longlong *)*puVar37;
              auStack_10fc8._0_8_ = plVar44;
              plVar31 = plStack_10f98;
            }
            else {
              lVar52 = puVar37[2];
              while (plVar44[4] != lVar52) {
                if (puVar37 == (undefined8 *)*plVar40) goto LAB_180190f58;
                puVar37 = (undefined8 *)puVar37[1];
                lVar52 = puVar37[2];
              }
              FUN_1801ab430(auStack_10fc8);
              plVar44 = (longlong *)auStack_10fc8._0_8_;
            }
          } while (plVar44 != plVar31);
        }
        puVar37 = (undefined8 *)*puStack_10f00;
        if (puVar37 != puStack_10f00) {
          do {
            plVar31 = (longlong *)
                      (((((((((((ulonglong)*(byte *)(puVar37 + 2) ^ 0xcbf29ce484222325) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x11)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x12)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x13)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x14)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x15)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x16)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x17)) *
                        0x100000001b3 & uStack_10db8) * 0x10 + lStack_10dd0);
            puVar38 = (undefined8 *)plVar31[1];
            if (puVar38 == puStack_10de0) {
LAB_180191129:
              plVar31 = (longlong *)
                        (((((((((((ulonglong)*(byte *)(puVar37 + 2) ^ 0xcbf29ce484222325) *
                                 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x11)) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x12)) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x13)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x14)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x15)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x16)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x17)) *
                          0x100000001b3 & uStack_10db8) * 0x10 + lStack_10dd0);
              puVar38 = (undefined8 *)plVar31[1];
              if (puVar38 != puStack_10de0) {
                lVar52 = puVar38[2];
                while (puVar37[2] != lVar52) {
                  if (puVar38 == (undefined8 *)*plVar31) goto LAB_180191291;
                  puVar38 = (undefined8 *)puVar38[1];
                  lVar52 = puVar38[2];
                }
                uVar33 = 45000;
                if (puVar37[0x10] != 0) {
                  uVar33 = 15000;
                }
                if (uVar33 < uStack_10fa8 - puVar37[0x11]) {
                  FUN_18018eb30(alStack_10c78,puVar37[2]);
                  FUN_18063ab10(acStack_10648,0,0x600);
                  FUN_18015ad60(acStack_10648,0x600,0xffffffffffffffff,
                                "peer=%llu received=%llu total=%llu session=%d");
                  FUN_1800f6900(2);
                }
              }
LAB_180191291:
              FUN_1801ad260(puVar37 + 0x14);
              plVar31 = puVar37 + 0xc;
              if (7 < (ulonglong)puVar37[0xf]) {
                plVar31 = (longlong *)*plVar31;
              }
              FUN_1805fb9a8(plVar31);
              puVar37 = (undefined8 *)FUN_1801a7950(auStack_10f08);
              puVar37 = (undefined8 *)*puVar37;
            }
            else {
              lVar52 = puVar38[2];
              while (puVar37[2] != lVar52) {
                if (puVar38 == (undefined8 *)*plVar31) goto LAB_180191129;
                puVar38 = (undefined8 *)puVar38[1];
                lVar52 = puVar38[2];
              }
              plVar31 = (longlong *)FUN_1801afff0(auStack_10de8,auStack_11188,puVar37 + 2);
              lVar52 = *(longlong *)(*plVar31 + 0x18);
              lVar30 = *(longlong *)(*plVar31 + 0x20);
              while ((lVar52 != lVar30 &&
                     (cVar18 = FUN_180195d90(lVar52,puVar37 + 3), cVar18 == '\0'))) {
                lVar52 = lVar52 + 0x48;
              }
              plVar31 = (longlong *)FUN_1801afff0(auStack_10de8);
              if (lVar52 == *(longlong *)(*plVar31 + 0x20)) goto LAB_180191129;
              uVar33 = 45000;
              if (puVar37[0x10] != 0) {
                uVar33 = 15000;
              }
              if (uVar33 < uStack_10fa8 - puVar37[0x11]) goto LAB_180191129;
              puVar37 = (undefined8 *)*puVar37;
            }
          } while (puVar37 != puStack_10f00);
        }
        puVar37 = (undefined8 *)*puStack_10ec0;
        if (puVar37 != puStack_10ec0) {
          do {
            plVar31 = (longlong *)
                      (((((((((((ulonglong)*(byte *)(puVar37 + 2) ^ 0xcbf29ce484222325) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x11)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x12)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x13)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x14)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x15)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x16)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x17)) *
                        0x100000001b3 & uStack_10db8) * 0x10 + lStack_10dd0);
            puVar38 = (undefined8 *)plVar31[1];
            if (puVar38 == puStack_10de0) {
LAB_1801913d6:
              puVar37 = (undefined8 *)FUN_1801a7950(auStack_10ec8);
              puVar37 = (undefined8 *)*puVar37;
            }
            else {
              lVar52 = puVar38[2];
              while (puVar37[2] != lVar52) {
                if (puVar38 == (undefined8 *)*plVar31) goto LAB_1801913d6;
                puVar38 = (undefined8 *)puVar38[1];
                lVar52 = puVar38[2];
              }
              puStack_11348 = puVar37 + 3;
              if (0xf < (ulonglong)puVar37[6]) {
                puStack_11348 = (undefined8 *)puVar37[3];
              }
              uStack_11340 = puVar37[5];
              cVar18 = FUN_18018f9a0(param_1);
              if ((cVar18 == '\0') || (15000 < uStack_10fa8 - puVar37[0x11])) goto LAB_1801913d6;
              puVar37 = (undefined8 *)*puVar37;
            }
          } while (puVar37 != puStack_10ec0);
        }
        puVar38 = puStack_10de0;
        for (puVar37 = (undefined8 *)*puStack_10de0; puVar37 != puVar38;
            puVar37 = (undefined8 *)*puVar37) {
          puVar46 = (undefined8 *)puVar37[3];
          auStack_11428._0_8_ = (undefined8 *)puVar37[4];
          if (puVar46 != (undefined8 *)puVar37[4]) {
            puVar49 = puVar46 + 4;
            do {
              puVar32 = puVar37 + 2;
              if ((*plStack_11438 != 0) && ((*(uint *)(*plStack_11438 + 4) & 1) != 0)) break;
              iVar50 = FUN_1805f68d0(param_1);
              if (iVar50 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
                *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              uVar33 = 0;
              if (puVar49[-2] != 0) {
                do {
                  uVar33 = uVar33 + 1;
                } while (uVar33 < (ulonglong)puVar49[-2]);
              }
              lVar52 = FUN_180177b00(param_1 + 0x490);
              lVar52 = *(longlong *)(lVar52 + 8);
              FUN_1805f68fc(param_1);
              if ((lVar52 == 0) &&
                 (plVar31 = (longlong *)FUN_1801b0c90(auStack_10708),
                 *(ulonglong *)(*plVar31 + 0x30) <= uStack_10fa8)) {
                FUN_180186d00(auStack_10f38,puVar46);
                lpFileName = (LPCWSTR)FUN_180186ef0(auStack_11410);
                if (7 < *(ulonglong *)(lpFileName + 0xc)) {
                  lpFileName = *(LPCWSTR *)lpFileName;
                }
                DVar21 = GetFileAttributesW(lpFileName);
                FUN_18015b930(auStack_11410);
                if ((DVar21 == 0xffffffff) || ((DVar21 & 0x410) != 0)) {
                  if ((alStack_10c78[0] != 0) &&
                     ((cVar18 = FUN_18018f8c0(param_1), cVar18 != '\0' && (uStack_10ef8 < 4)))) {
                    puVar41 = (undefined8 *)
                              (((((((((((ulonglong)(byte)*puVar32 ^ 0xcbf29ce484222325) *
                                       0x100000001b3 ^
                                      (ulonglong)*(byte *)((longlong)puVar37 + 0x11)) *
                                      0x100000001b3 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x12)
                                     ) * 0x100000001b3 ^
                                    (ulonglong)*(byte *)((longlong)puVar37 + 0x13)) * 0x100000001b3
                                   ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x14)) * 0x100000001b3
                                  ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x15)) * 0x100000001b3
                                 ^ (ulonglong)*(byte *)((longlong)puVar37 + 0x16)) * 0x100000001b3 ^
                                (ulonglong)*(byte *)((longlong)puVar37 + 0x17)) * 0x100000001b3 &
                               uStack_10ed8) * 0x10 + lStack_10ef0);
                    puVar34 = (undefined8 *)puVar41[1];
                    if (puVar34 == puStack_10f00) {
LAB_1801916da:
                      cVar18 = FUN_180187510(puVar49[4]);
                      if (cVar18 != '\0') {
                        FUN_180193770(auStack_11168);
                        if (auStack_11168 != puVar46) {
                          puVar34 = puVar46;
                          if (0xf < (ulonglong)puVar49[-1]) {
                            puVar34 = (undefined8 *)*puVar46;
                          }
                          FUN_180113930(auStack_11168,puVar34,puVar49[-2]);
                        }
                        if (auStack_11148 != puVar49) {
                          puVar34 = puVar49;
                          if (0xf < (ulonglong)puVar49[3]) {
                            puVar34 = (undefined8 *)*puVar49;
                          }
                          FUN_180113930(auStack_11148,puVar34,puVar49[2]);
                        }
                        uStack_11128 = puVar49[4];
                        pcVar48 = (char *)((longlong)&uStack_10fb8 + 5);
                        uVar33 = *puVar32;
                        do {
                          pcVar48 = pcVar48 + -1;
                          uVar42 = uVar33 / 10;
                          *pcVar48 = (char)uVar33 + (char)uVar42 * -10 + '0';
                          uVar33 = uVar42;
                        } while (uVar42 != 0);
                        FUN_18015bdb0(auStack_11410,pcVar48,(longlong)&uStack_10fb8 + 5);
                        DVar21 = GetCurrentProcessId();
                        pcVar48 = (char *)((longlong)&uStack_10fb8 + 5);
                        uVar33 = (ulonglong)DVar21;
                        do {
                          pcVar48 = pcVar48 + -1;
                          uVar42 = uVar33 / 10;
                          *pcVar48 = (char)uVar33 + (char)uVar42 * -10 + '0';
                          uVar33 = uVar42;
                        } while ((int)uVar42 != 0);
                        FUN_18015bdb0(auStack_112d0,pcVar48,(longlong)&uStack_10fb8 + 5);
                        puVar34 = (undefined8 *)FUN_18015b2a0(auStack_112d0,&DAT_180701178,1);
                        uStack_112f0 = *puVar34;
                        uStack_112e8 = puVar34[1];
                        uStack_112e0 = puVar34[2];
                        uStack_112d8 = puVar34[3];
                        puVar34[3] = 0xf;
                        *(undefined1 *)puVar34 = 0;
                        puVar34[2] = 0;
                        FUN_18015a6e0(auStack_112b0);
                        pauVar35 = (undefined1 (*) [16])
                                   FUN_18015b2a0(auStack_112b0,&DAT_180701178,1);
                        auStack_10e88 = *pauVar35;
                        auStack_10e78 = pauVar35[1];
                        (*pauVar35)[0] = 0;
                        *(undefined8 *)pauVar35[1] = 0;
                        *(undefined8 *)(pauVar35[1] + 8) = 0xf;
                        puVar34 = puVar46;
                        if (0xf < (ulonglong)puVar49[-1]) {
                          puVar34 = (undefined8 *)*puVar46;
                        }
                        pauVar35 = (undefined1 (*) [16])
                                   FUN_18015b2a0(auStack_10e88,puVar34,puVar49[-2]);
                        auStack_11290 = *pauVar35;
                        auStack_11280 = pauVar35[1];
                        *(undefined8 *)(pauVar35[1] + 8) = 0xf;
                        (*pauVar35)[0] = 0;
                        *(undefined8 *)pauVar35[1] = 0;
                        pauVar35 = (undefined1 (*) [16])FUN_18015b2a0(auStack_11290,".part",5);
                        auStack_10f88 = *pauVar35;
                        auStack_10f78 = pauVar35[1];
                        (*pauVar35)[0] = 0;
                        *(undefined8 *)pauVar35[1] = 0;
                        *(undefined8 *)(pauVar35[1] + 8) = 0xf;
                        uVar25 = auStack_10f78._0_8_;
                        puVar28 = auStack_10f88;
                        if (0xf < (ulonglong)auStack_10f78._8_8_) {
                          puVar28 = (undefined1 *)auStack_10f88._0_8_;
                        }
                        uVar22 = __std_fs_code_page();
                        uStack_11330 = uVar25;
                        puStack_11338 = puVar28;
                        FUN_1801628d0(auStack_113f0,uVar22,&puStack_11338);
                        uVar25 = FUN_180186af0(auStack_10b88);
                        uVar25 = FUN_1800a7e60(auStack_111c8,uVar25,auStack_113f0);
                        FUN_180176c30(apppppppuStack_11120,uVar25);
                        FUN_18015b930(auStack_111c8);
                        FUN_18015b930(auStack_10b88);
                        FUN_18015b930(auStack_113f0);
                        FUN_18015c010(auStack_10f88);
                        FUN_18015c010(auStack_11290);
                        FUN_18015c010(auStack_10e88);
                        FUN_18015c010(auStack_112b0);
                        FUN_18015c010(&uStack_112f0);
                        FUN_18015c010(auStack_112d0);
                        FUN_18015c010(auStack_11410);
                        pppppppuVar43 = apppppppuStack_11120;
                        if (7 < uStack_11108) {
                          pppppppuVar43 = apppppppuStack_11120[0];
                        }
                        psVar3 = (short *)((longlong)pppppppuVar43 + lStack_11110 * 2);
                        psVar36 = (short *)FUN_1800a7b00(pppppppuVar43,psVar3);
                        if (psVar36 != psVar3) {
                          do {
                            if ((*psVar36 != 0x5c) && (*psVar36 != 0x2f)) break;
                            psVar36 = psVar36 + 1;
                          } while (psVar36 != psVar3);
                          do {
                            psVar10 = psVar3;
                            if (psVar36 == psVar10) goto LAB_180191afd;
                            sVar4 = psVar10[-1];
                          } while ((sVar4 != 0x5c) && (psVar3 = psVar10 + -1, sVar4 != 0x2f));
                          do {
                            if (psVar36 == psVar10) break;
                            psVar10 = psVar10 + -1;
                          } while ((*psVar10 == 0x5c) || (*psVar10 == 0x2f));
                        }
LAB_180191afd:
                        auStack_10f88 = (undefined1  [16])0x0;
                        auStack_10f78 = ZEXT816(0);
                        FUN_180159e60(auStack_10f88);
                        cVar18 = FUN_180187280(auStack_10f88);
                        FUN_18015b930(auStack_10f88);
                        if (cVar18 != '\0') {
                          FUN_1801a7a70(alStack_110e0);
                          cVar18 = FUN_18017ce50((longlong)alStack_110e0 +
                                                 (longlong)*(int *)(alStack_110e0[0] + 4));
                          if (cVar18 == '\0') {
                            uStack_110f0 = uStack_10fa8;
                            uStack_110f8 = uStack_10fa8;
                            uStack_110e8 = uStack_10fa8;
                            FUN_180193740(&uStack_10da8);
                            uStack_10da4 = CONCAT22(1,(undefined2)uStack_10da4);
                            uStack_10da0 = puVar49[4];
                            puVar34 = (undefined8 *)FUN_1800f56d0(puVar46,auStack_11228);
                            puVar34 = (undefined8 *)FUN_1800f56f0(puVar46,auStack_11220,*puVar34);
                            FUN_1801a7b60(auStack_11250,*puVar34);
                            auStack_10fc8 = (undefined1  [16])0x0;
                            cVar18 = FUN_18018e7b0(alStack_10c78,puVar37[2]);
                            if (cVar18 == '\0') {
                              FUN_1801ad260(alStack_110e0);
                              FUN_18015c2a0(apppppppuStack_11120);
                            }
                            else {
                              FUN_18018eb30(alStack_10c78,puVar37[2]);
                              FUN_1801a7ba0();
                              FUN_1801a7c60(auStack_10f08);
                            }
                            FUN_180195a70(auStack_11168);
                            goto LAB_180191cdd;
                          }
                        }
                        FUN_180195a70(auStack_11168);
                        FUN_18015b930(auStack_10f38);
                        goto LAB_180191ce9;
                      }
                    }
                    else {
                      uVar33 = puVar34[2];
                      while (*puVar32 != uVar33) {
                        if (puVar34 == (undefined8 *)*puVar41) goto LAB_1801916da;
                        puVar34 = (undefined8 *)puVar34[1];
                        uVar33 = puVar34[2];
                      }
                    }
                  }
                }
                else {
                  piVar1 = (int *)*plStack_11438;
                  auStack_10fc8._0_8_ = piVar1;
                  if (piVar1 != (int *)0x0) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  cVar18 = FUN_180193b70(param_1);
                  if (cVar18 == '\0') {
                    lVar52 = uStack_10fa8 + 30000;
                    plVar31 = (longlong *)FUN_1801b0c90(auStack_10708);
                    *(longlong *)(*plVar31 + 0x30) = lVar52;
                  }
                }
LAB_180191cdd:
                FUN_18015b930(auStack_10f38);
              }
LAB_180191ce9:
              puVar46 = puVar46 + 9;
              puVar49 = puVar49 + 9;
            } while (puVar46 != (undefined8 *)auStack_11428._0_8_);
          }
        }
        bVar12 = bVar11;
        bVar14 = bVar13;
        bVar16 = bVar15;
        bVar17 = bVar53;
        if (alStack_10c78[0] == 0) {
          if (uStack_113b8 <= uStack_10fa8) {
            uStack_113b8 = uStack_10fa8 + 5000;
            FUN_18063ab10(acStack_10648,0,0x600);
            FUN_18015ad60(acStack_10648,0x600,0xffffffffffffffff,
                          "cached_models=available download=deferred");
            FUN_1800f6900(2);
          }
          auStack_11428._0_8_ = 100;
          FUN_1801a7270(auStack_11428);
          FUN_1801958e0(auStack_10de8);
          FUN_1800efed0(auStack_10768 + 8);
          FUN_1800efed0(&lStack_10770);
          _eh_vector_destructor_iterator_(auStack_10930,0xe0,2,thunk_FUN_1801ab310);
          plVar31 = plStack_11438;
        }
        else {
          puVar37 = (undefined8 *)FUN_18018ef70(alStack_10c78,auStack_10f88);
          puVar5 = (ulonglong *)puVar37[1];
          for (puVar32 = (ulonglong *)*puVar37; puVar32 != puVar5; puVar32 = puVar32 + 5) {
            uVar33 = *puVar32;
            auStack_10fc8._0_8_ = uVar33;
            puVar37 = (undefined8 *)puVar32[2];
            uStack_10e58 = *puVar37;
            uStack_10e50 = puVar37[1];
            uStack_10e48 = puVar37[2];
            uStack_10e40 = (uint)puVar37[3];
            uStack_10e3c = (undefined4)((ulonglong)puVar37[3] >> 0x20);
            uStack_10e38 = (undefined4)puVar37[4];
            uStack_10e34 = (undefined4)((ulonglong)puVar37[4] >> 0x20);
            uStack_10e30 = (undefined4)puVar37[5];
            uStack_10e2c = (undefined4)((ulonglong)puVar37[5] >> 0x20);
            uStack_10e28 = (undefined4)puVar37[6];
            uStack_10e24 = (undefined4)((ulonglong)puVar37[6] >> 0x20);
            uStack_10e20 = (undefined4)puVar37[7];
            uStack_10e1c = (undefined4)((ulonglong)puVar37[7] >> 0x20);
            uStack_10e18 = (undefined4)puVar37[8];
            uStack_10e14 = (undefined4)((ulonglong)puVar37[8] >> 0x20);
            uStack_10e10 = (undefined4)puVar37[9];
            uStack_10e0c = (undefined4)((ulonglong)puVar37[9] >> 0x20);
            uStack_10e08 = (undefined4)puVar37[10];
            uStack_10e04 = (undefined4)((ulonglong)puVar37[10] >> 0x20);
            uStack_10e00 = *(undefined4 *)(puVar37 + 0xb);
            puVar38 = (undefined8 *)
                      ((((uVar33 >> 0x30 & 0xff ^
                         ((((((uVar33 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             uVar33 >> 8 & 0xff) * 0x100000001b3 ^ uVar33 >> 0x10 & 0xff) *
                            0x100000001b3 ^ uVar33 >> 0x18 & 0xff) * 0x100000001b3 ^
                          uVar33 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar33 >> 0x28 & 0xff) *
                         0x100000001b3) * 0x100000001b3 ^ uVar33 >> 0x38) * 0x100000001b3 &
                       uStack_10db8) * 0x10 + lStack_10dd0);
            puVar37 = (undefined8 *)puVar38[1];
            if (puVar37 != puStack_10de0) {
              uVar42 = puVar37[2];
              while (uVar33 != uVar42) {
                if (puVar37 == (undefined8 *)*puVar38) goto LAB_180192174;
                puVar37 = (undefined8 *)puVar37[1];
                uVar42 = puVar37[2];
              }
              cVar18 = FUN_18018f8c0(param_1,uVar33);
              if ((((cVar18 != '\0') && (uVar33 = puVar32[3] - puVar32[2], 0x5b < uVar33)) &&
                  ((int)uStack_10e58 == 0x4d534748)) && (uStack_10e58._4_2_ == 1)) {
                sVar4 = uStack_10e58._6_2_;
                if (uStack_10e58._6_2_ == 3) {
                  if (((uVar33 == 0x5c) && (uStack_10e50 == 0)) &&
                     ((uStack_10e48 == 0 && (uStack_10e40 == 0)))) {
                    pcVar48 = (char *)&uStack_10e3c;
                    do {
                      if (*pcVar48 != '\0') goto LAB_180192174;
                      pcVar48 = pcVar48 + 1;
                    } while (pcVar48 != acStack_10dfc);
LAB_180192102:
                    plStack_11328 = &lStack_10f68;
                    puStack_11320 = auStack_10fc8;
                    plStack_11318 = alStack_10c78;
                    puStack_11308 = &uStack_10e58;
                    puStack_11300 = auStack_10f08;
                    puStack_112f8 = &uStack_10fa8;
                    puStack_11310 = puVar32;
                    if (sVar4 == 3) {
                      FUN_1801938f0(&plStack_11328);
                    }
                    else {
                      auStack_10f58 = (undefined1  [16])0x0;
                      sStack_10f48 = 0;
                      uStack_10f40 = 0;
                      FUN_18015ba30(auStack_10f58,&uStack_10e3c);
                      sVar4 = uStack_10e58._6_2_;
                      if (uStack_10e58._6_2_ == 1) {
                        cStack_10948 = '\0';
                        auStack_11428._0_8_ = param_1;
                        iVar50 = FUN_1805f68d0(param_1);
                        if (iVar50 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
                          *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((char *)(param_1 + 0x238) != (char *)(param_1 + 0x488)) {
                          pcVar48 = (char *)(param_1 + 0x358);
                          do {
                            if (*pcVar48 != '\0') {
                              puVar28 = auStack_10f58;
                              if (0xf < uStack_10f40) {
                                puVar28 = (undefined1 *)auStack_10f58._0_8_;
                              }
                              sVar6 = *(size_t *)(pcVar48 + -0x38);
                              pcVar39 = pcVar48 + -0x48;
                              if (0xf < *(ulonglong *)(pcVar48 + -0x30)) {
                                pcVar39 = *(char **)pcVar39;
                              }
                              if (((sVar6 == sStack_10f48) &&
                                  ((sVar6 == 0 ||
                                   (iVar50 = memcmp(pcVar39,puVar28,sVar6), iVar50 == 0)))) &&
                                 (*(ulonglong *)(pcVar48 + -8) == uStack_10e50)) {
                                if (cStack_10948 == '\0') {
                                  FUN_1801bc900(auStack_10a68,pcVar48 + -0x120);
                                  cStack_10948 = '\x01';
                                }
                                else {
                                  FUN_1801aea60();
                                  FUN_180195ab0(apppppppuStack_10990,pcVar48 + -0x48);
                                }
                              }
                            }
                            pcVar39 = pcVar48 + 8;
                            pcVar48 = pcVar48 + 0x128;
                          } while (pcVar39 != (char *)(param_1 + 0x488));
                        }
                        FUN_1805f68fc(param_1);
                        if (cStack_10948 != '\0') {
                          puStack_11368 = auStack_10f58;
                          if (0xf < uStack_10f40) {
                            puStack_11368 = (undefined1 *)auStack_10f58._0_8_;
                          }
                          sStack_11360 = sStack_10f48;
                          cVar18 = FUN_18018f9a0(param_1,&puStack_11368);
                          if (cVar18 != '\0') {
                            uVar25 = auStack_10fc8._0_8_;
                            puVar38 = (undefined8 *)
                                      (((((((((((ulonglong)(byte)auStack_10fc8[0] ^
                                               0xcbf29ce484222325) * 0x100000001b3 ^
                                              (ulonglong)auStack_10fc8[1]) * 0x100000001b3 ^
                                             (ulonglong)auStack_10fc8[2]) * 0x100000001b3 ^
                                            (ulonglong)auStack_10fc8[3]) * 0x100000001b3 ^
                                           (ulonglong)auStack_10fc8[4]) * 0x100000001b3 ^
                                          (ulonglong)auStack_10fc8[5]) * 0x100000001b3 ^
                                         (ulonglong)auStack_10fc8[6]) * 0x100000001b3 ^
                                        (ulonglong)auStack_10fc8[7]) * 0x100000001b3 & uStack_10e98)
                                       * 0x10 + lStack_10eb0);
                            puVar37 = (undefined8 *)puVar38[1];
                            if (puVar37 == puStack_10ec0) {
LAB_180192526:
                              if (3 < uStack_10eb8) goto LAB_1801928e8;
                            }
                            else {
                              uVar33 = puVar37[2];
                              while (uVar25 != uVar33) {
                                if (puVar37 == (undefined8 *)*puVar38) goto LAB_180192526;
                                puVar37 = (undefined8 *)puVar37[1];
                                uVar33 = puVar37[2];
                              }
                            }
                            FUN_1801938f0(&plStack_11328);
                            uVar25 = auStack_10fc8._0_8_;
                            puVar38 = (undefined8 *)
                                      (((((((((((ulonglong)(byte)auStack_10fc8[0] ^
                                               0xcbf29ce484222325) * 0x100000001b3 ^
                                              (ulonglong)auStack_10fc8[1]) * 0x100000001b3 ^
                                             (ulonglong)auStack_10fc8[2]) * 0x100000001b3 ^
                                            (ulonglong)auStack_10fc8[3]) * 0x100000001b3 ^
                                           (ulonglong)auStack_10fc8[4]) * 0x100000001b3 ^
                                          (ulonglong)auStack_10fc8[5]) * 0x100000001b3 ^
                                         (ulonglong)auStack_10fc8[6]) * 0x100000001b3 ^
                                        (ulonglong)auStack_10fc8[7]) * 0x100000001b3 & uStack_10e98)
                                       * 0x10 + lStack_10eb0);
                            puVar37 = (undefined8 *)puVar38[1];
                            if (puVar37 == puStack_10ec0) {
LAB_1801925f1:
                              puVar37 = (undefined8 *)0x0;
                            }
                            else {
                              uVar33 = puVar37[2];
                              while (uVar25 != uVar33) {
                                if (puVar37 == (undefined8 *)*puVar38) goto LAB_1801925f1;
                                puVar37 = (undefined8 *)puVar37[1];
                                uVar33 = puVar37[2];
                              }
                            }
                            puVar38 = puStack_10ec0;
                            if (puVar37 != (undefined8 *)0x0) {
                              puVar38 = puVar37;
                            }
                            if (puVar38 != puStack_10ec0) {
                              puVar37 = puVar38 + 3;
                              puVar28 = auStack_10f58;
                              if (0xf < uStack_10f40) {
                                puVar28 = (undefined1 *)auStack_10f58._0_8_;
                              }
                              sVar6 = puVar38[5];
                              if (0xf < (ulonglong)puVar38[6]) {
                                puVar37 = (undefined8 *)*puVar37;
                              }
                              if (((sVar6 == sStack_10f48) &&
                                  ((sVar6 == 0 ||
                                   (iVar50 = memcmp(puVar37,puVar28,sVar6), iVar50 == 0)))) &&
                                 ((uStack_10e48 <= (ulonglong)puVar38[0x10] &&
                                  (uStack_10fa8 - puVar38[0x11] < 5000)))) {
                                if (cStack_10948 != '\0') {
                                  FUN_180195860(auStack_10a68);
                                }
                                FUN_18015c010(auStack_10f58);
                                goto LAB_180192174;
                              }
                            }
                            FUN_180193770(acStack_10648);
                            pppppppuVar43 = apppppppuStack_10990;
                            if (0xf < uStack_10978) {
                              pppppppuVar43 = apppppppuStack_10990[0];
                            }
                            FUN_180113930(acStack_10648,pppppppuVar43,uStack_10980);
                            pppppppuVar43 = apppppppuStack_10970;
                            if (0xf < uStack_10958) {
                              pppppppuVar43 = apppppppuStack_10970[0];
                            }
                            FUN_180113930(auStack_10628,pppppppuVar43,uStack_10960);
                            uStack_10608 = uStack_10950;
                            uVar25 = FUN_180186d00(auStack_10b88,apppppppuStack_10990);
                            FUN_180176c30(apppppppuStack_10600,uVar25);
                            FUN_18015b930(auStack_10b88);
                            uStack_105e0 = uStack_10e48;
                            uStack_105d8 = uStack_10fa8;
                            pppppppuVar43 = apppppppuStack_10600;
                            if (7 < uStack_105e8) {
                              pppppppuVar43 = apppppppuStack_10600[0];
                            }
                            lVar52 = FUN_180141590(auStack_105a8,pppppppuVar43);
                            lVar30 = (longlong)*(int *)(alStack_105c0[0] + 4);
                            if (lVar52 == 0) {
                              uVar47 = 4;
                              if (*(longlong *)(auStack_105a8 + lVar30 + 0x30) != 0) {
                                uVar47 = 0;
                              }
                              uVar47 = uVar47 | *(uint *)((longlong)auStack_105b0 + lVar30) & 0x15 |
                                       2;
                              *(uint *)((longlong)auStack_105b0 + lVar30) = uVar47;
                              uVar47 = uVar47 & *(uint *)((longlong)auStack_105b0 + lVar30 + 4);
                              if (uVar47 != 0) {
                                if ((uVar47 & 4) == 0) {
                                  pcVar48 = "ios_base::failbit set";
                                  if ((uVar47 & 2) == 0) {
                                    pcVar48 = "ios_base::eofbit set";
                                  }
                                }
                                else {
                                  pcVar48 = "ios_base::badbit set";
                                }
                                uVar25 = FUN_1801597e0(auStack_113a8,1);
                                FUN_1801596c0(auStack_10b88,pcVar48,uVar25);
                    /* WARNING: Subroutine does not return */
                                FUN_180606630(auStack_10b88,&DAT_1808d0f18);
                              }
                            }
                            else {
                              uVar47 = 4;
                              if (*(longlong *)(auStack_105a8 + lVar30 + 0x30) != 0) {
                                uVar47 = 0;
                              }
                              *(uint *)((longlong)auStack_105b0 + lVar30) = uVar47;
                              if ((*(uint *)((longlong)auStack_105b0 + lVar30 + 4) & uVar47) != 0) {
                                uVar25 = FUN_1801597e0(auStack_113a8,1);
                                FUN_1801596c0(auStack_10b88,"ios_base::badbit set",uVar25);
                    /* WARNING: Subroutine does not return */
                                FUN_180606630(auStack_10b88,&DAT_1808d0f18);
                              }
                            }
                            if ((*(byte *)((longlong)auStack_105b0 +
                                          (longlong)*(int *)(alStack_105c0[0] + 4)) & 6) == 0) {
                              FUN_18063ab10(local_648,0,0x600);
                              FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                                            "peer=%llu bytes=%llu offset=%llu");
                              FUN_1800f6900(0);
                              FUN_1801ae120(auStack_10ec8,auStack_113a8);
                            }
                            FUN_1801959b0(alStack_105c0);
                            FUN_18015b930(apppppppuStack_10600);
                            FUN_18015c010(auStack_10628);
                            FUN_18015c010(acStack_10648);
                          }
                        }
LAB_1801928e8:
                        if (cStack_10948 != '\0') {
                          FUN_180195860(auStack_10a68);
                        }
                      }
                      else {
                        uVar25 = auStack_10fc8._0_8_;
                        puVar38 = (undefined8 *)
                                  (((((((((((ulonglong)(byte)auStack_10fc8[0] ^ 0xcbf29ce484222325)
                                           * 0x100000001b3 ^ (ulonglong)auStack_10fc8[1]) *
                                          0x100000001b3 ^ (ulonglong)auStack_10fc8[2]) *
                                         0x100000001b3 ^ (ulonglong)auStack_10fc8[3]) *
                                        0x100000001b3 ^ (ulonglong)auStack_10fc8[4]) * 0x100000001b3
                                      ^ (ulonglong)auStack_10fc8[5]) * 0x100000001b3 ^
                                     (ulonglong)auStack_10fc8[6]) * 0x100000001b3 ^
                                    (ulonglong)auStack_10fc8[7]) * 0x100000001b3 & uStack_10ed8) *
                                   0x10 + lStack_10ef0);
                        puVar37 = (undefined8 *)puVar38[1];
                        if (puVar37 == puStack_10f00) {
LAB_1801929c9:
                          puVar37 = (undefined8 *)0x0;
                        }
                        else {
                          uVar33 = puVar37[2];
                          while (uVar25 != uVar33) {
                            if (puVar37 == (undefined8 *)*puVar38) goto LAB_1801929c9;
                            puVar37 = (undefined8 *)puVar37[1];
                            uVar33 = puVar37[2];
                          }
                        }
                        puVar38 = puStack_10f00;
                        if (puVar37 != (undefined8 *)0x0) {
                          puVar38 = puVar37;
                        }
                        if (puVar38 != puStack_10f00) {
                          puVar37 = puVar38 + 3;
                          puVar28 = auStack_10f58;
                          if (0xf < uStack_10f40) {
                            puVar28 = (undefined1 *)auStack_10f58._0_8_;
                          }
                          sVar6 = puVar38[5];
                          if (0xf < (ulonglong)puVar38[6]) {
                            puVar37 = (undefined8 *)*puVar37;
                          }
                          if (((sVar6 == sStack_10f48) &&
                              (((sVar6 == 0 || (iVar50 = memcmp(puVar37,puVar28,sVar6), iVar50 == 0)
                                ) && (puVar38[0xb] == uStack_10e50)))) &&
                             (puVar38[0x10] == uStack_10e48)) {
                            FUN_18063ab10(acStack_10648,0);
                            puVar37 = puVar38 + 3;
                            if (sVar4 == 2) {
                              FUN_1801938f0(&plStack_11328);
                              FUN_18063aed0(acStack_10648,puVar32[2] + 0x5c,uStack_10e40);
                              FUN_1801ad380(puVar38 + 0x16,acStack_10648);
                              cVar18 = FUN_18017ce40((longlong)*(int *)(puVar38[0x14] + 4) + 0x88 +
                                                     (longlong)puVar37);
                              if (cVar18 != '\0') {
                                if (puVar38[0x10] == 0) {
                                  FUN_1801a8050(0,&DAT_1807c4d18);
                                }
                                puVar38[0x10] = puVar38[0x10] + (ulonglong)uStack_10e40;
                                puVar38[0x11] = uStack_10fa8;
                              }
                              if (puVar38[0x10] == puVar38[0xb]) {
                                GetTickCount64();
                                FUN_1801a7f60();
                                FUN_1801ad260(puVar38 + 0x14);
                                FUN_180186d00(auStack_10e88,puVar37);
                                aiStack_11398[0] = 0;
                                FUN_18017cd90(auStack_11378,plStack_11438);
                                cVar18 = FUN_18018a140(puVar38 + 0xc,puVar37,auStack_10cb8);
                                if (cVar18 == '\0') {
LAB_180192be4:
                                  bVar53 = false;
                                }
                                else {
                                  uVar25 = FUN_18015c130(auStack_10e88,auStack_10b88);
                                  bVar17 = true;
                                  cVar18 = FUN_180187280(uVar25);
                                  if (cVar18 == '\0') goto LAB_180192be4;
                                  bVar53 = true;
                                }
                                if (bVar17) {
                                  bVar17 = false;
                                  FUN_18015b930(auStack_10b88);
                                }
                                if ((bVar53) &&
                                   (FUN_18017dfa0(puVar38 + 0xc,auStack_10e88,aiStack_11398),
                                   aiStack_11398[0] == 0)) {
                                  FUN_18017cd90(auStack_11370,plStack_11438);
                                  cVar18 = FUN_180193b70(param_1,puVar37,auStack_10e88);
                                  if (cVar18 == '\0') {
                                    lVar52 = uStack_10fa8 + 30000;
                                    plVar31 = (longlong *)FUN_1801abb00(auStack_10708,puVar38 + 3);
                                    *plVar31 = lVar52;
                                  }
                                }
                                FUN_18015c2a0(puVar38 + 0xc,aiStack_11398);
                                FUN_1801a7950(auStack_10f08,auStack_11218);
                                FUN_18015b930(auStack_10e88);
                              }
                            }
                          }
                        }
                      }
                      FUN_18015c010(auStack_10f58);
                    }
                  }
                }
                else if ((((ushort)(uStack_10e58._6_2_ - 1U) < 2) &&
                         (lVar52 = FUN_1801b16b0(&uStack_10e3c,0x40), lVar52 == -1)) &&
                        ((uStack_10e50 - 0x20 < 0xfffffe1 &&
                         ((((uStack_10e48 <= uStack_10e50 && (uStack_10e40 < 0x10001)) &&
                           ((ulonglong)uStack_10e40 <= uStack_10e50 - uStack_10e48)) &&
                          (uVar33 == (ulonglong)uStack_10e40 + 0x5c)))))) {
                  if (sVar4 == 1) {
                    bVar53 = uStack_10e40 == 0;
                  }
                  else {
                    bVar53 = uStack_10e40 != 0;
                  }
                  if (bVar53) goto LAB_180192102;
                }
              }
            }
LAB_180192174:
          }
          if (auStack_10f88._0_8_ != 0) {
            uVar25 = auStack_10f88._8_8_;
            lVar52 = auStack_10f88._0_8_;
            if (auStack_10f88._0_8_ != auStack_10f88._8_8_) {
              do {
                FUN_180113710(lVar52 + 0x10);
                lVar52 = lVar52 + 0x28;
              } while (lVar52 != uVar25);
            }
            lVar52 = auStack_10f88._0_8_;
            if ((0xfff < (ulonglong)
                         (((longlong)(auStack_10f78._0_8_ - auStack_10f88._0_8_) / 0x28) * 0x28)) &&
               (lVar52 = *(longlong *)(auStack_10f88._0_8_ + -8),
               0x1f < (auStack_10f88._0_8_ - lVar52) - 8U)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            FUN_1804547d0(lVar52);
          }
          puVar46 = puStack_10f00;
          puVar38 = puStack_10ec0;
          for (puVar37 = (undefined8 *)*puStack_10f00; puStack_10ec0 = puVar38, puVar37 != puVar46;
              puVar37 = (undefined8 *)*puVar37) {
            plVar31 = puVar37 + 3;
            if (((4999 < uStack_10fa8 - puVar37[0x12]) && (4999 < uStack_10fa8 - puVar37[0x11])) &&
               (cVar18 = FUN_18018f8c0(param_1,puVar37[2]), cVar18 != '\0')) {
              uStack_10da8 = 0x4d534748;
              uStack_10da4 = 0x10001;
              uStack_10d90 = 0;
              uStack_10d8c = 0;
              uStack_10d84 = 0;
              uStack_10d7c = 0;
              uStack_10d74 = 0;
              uStack_10d6c = 0;
              uStack_10d64 = 0;
              uStack_10d5c = 0;
              uStack_10d54 = 0;
              uStack_10da0 = puVar37[0xb];
              uStack_10d98 = puVar37[0x10];
              if (0xf < (ulonglong)puVar37[6]) {
                plVar31 = (longlong *)*plVar31;
              }
              FUN_18063aed0(&uStack_10d8c,plVar31,puVar37[5]);
              auStack_11428 = (undefined1  [16])0x0;
              FUN_18018e7b0(alStack_10c78,puVar37[2],&uStack_10da8,auStack_11428);
              puVar37[0x12] = uStack_10fa8;
            }
            puVar38 = puStack_10ec0;
          }
          lVar52 = 0x80000;
          uVar47 = 0;
          do {
            if (lVar52 == 0) break;
            puVar37 = (undefined8 *)*puVar38;
            if (puVar37 != puVar38) {
              do {
                if (lVar52 == 0) break;
                plVar31 = puVar37 + 3;
                uVar33 = 0x10000;
                if ((ulonglong)(puVar37[0xb] - puVar37[0x10]) < 0x10000) {
                  uVar33 = puVar37[0xb] - puVar37[0x10];
                }
                if (uVar33 == 0) {
                  puVar37 = (undefined8 *)FUN_1801a7950(auStack_10ec8,auStack_11268,puVar37);
                  puVar37 = (undefined8 *)*puVar37;
                }
                else {
                  cVar18 = FUN_18018ec50(alStack_10c78,puVar37[2]);
                  if (cVar18 != '\0') {
                    FUN_18063ab10(acStack_10648,0,0x10000);
                    lVar30 = (longlong)*(int *)(puVar37[0x14] + 4);
                    uVar23 = 4;
                    if (*(longlong *)(lVar30 + 0xd0 + (longlong)plVar31) != 0) {
                      uVar23 = 0;
                    }
                    *(uint *)(lVar30 + 0x98 + (longlong)plVar31) = uVar23;
                    if ((*(uint *)(lVar30 + 0x9c + (longlong)plVar31) & uVar23) != 0) {
                      uVar25 = FUN_1801597e0(auStack_113a8,1);
                      FUN_1801596c0(auStack_10b88,"ios_base::badbit set",uVar25);
                    /* WARNING: Subroutine does not return */
                      FUN_180606630(auStack_10b88,&DAT_1808d0f18);
                    }
                    auStack_10f88._8_8_ = 0;
                    auStack_10f88._0_8_ = puVar37[0x10];
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = auStack_10f78._8_8_;
                    auStack_10f78 = auVar8 << 0x40;
                    FUN_180176fb0(puVar37 + 0x14,auStack_10f88);
                    FUN_1801771e0(puVar37 + 0x14,acStack_10648,uVar33);
                    if ((*(byte *)((longlong)*(int *)(puVar37[0x14] + 4) + 0xb0 + (longlong)puVar37)
                        & 6) != 0) {
                      puVar37 = (undefined8 *)FUN_1801a7950(auStack_10ec8,auStack_11210,puVar37);
                      puVar37 = (undefined8 *)*puVar37;
                      goto LAB_180192fa4;
                    }
                    uStack_10da8 = 0x4d534748;
                    uStack_10da4 = 0x20001;
                    uStack_10d8c = 0;
                    uStack_10d84 = 0;
                    uStack_10d7c = 0;
                    uStack_10d74 = 0;
                    uStack_10d6c = 0;
                    uStack_10d64 = 0;
                    uStack_10d5c = 0;
                    uStack_10d54 = 0;
                    uStack_10da0 = puVar37[0xb];
                    uStack_10d98 = puVar37[0x10];
                    uStack_10d90 = (undefined4)uVar33;
                    if ((ulonglong)puVar37[6] < 0x10) {
                      lVar30 = puVar37[5] + (longlong)plVar31;
                      plVar44 = plVar31;
                    }
                    else {
                      lVar30 = *plVar31 + puVar37[5];
                      plVar44 = (longlong *)*plVar31;
                    }
                    FUN_18063aed0(&uStack_10d8c,plVar44,lVar30 - (longlong)plVar44);
                    cVar18 = FUN_18018f8c0(param_1,puVar37[2]);
                    if (cVar18 != '\0') {
                      if (0xf < (ulonglong)puVar37[6]) {
                        plVar31 = (longlong *)*plVar31;
                      }
                      uStack_11350 = puVar37[5];
                      lStack_11358 = (longlong)plVar31;
                      cVar18 = FUN_18018f9a0(param_1,&lStack_11358);
                      if (cVar18 != '\0') {
                        pcStack_113c8 = acStack_10648;
                        uStack_113c0 = uVar33;
                        cVar18 = FUN_18018e7b0(alStack_10c78,puVar37[2],&uStack_10da8,&pcStack_113c8
                                              );
                        if (cVar18 != '\0') {
                          puVar37[0x10] = puVar37[0x10] + uVar33;
                          puVar37[0x11] = uStack_10fa8;
                          lVar52 = lVar52 - uVar33;
                        }
                      }
                    }
                  }
                  puVar37 = (undefined8 *)*puVar37;
                }
LAB_180192fa4:
                puVar38 = puStack_10ec0;
              } while (puVar37 != puStack_10ec0);
            }
            uVar47 = uVar47 + 1;
          } while (uVar47 < 4);
          if (((uStack_10ef8 == 0) && (uStack_10eb8 == 0)) && (uStack_10dd8 <= uStack_10f60)) {
            bVar53 = false;
          }
          else {
            bVar53 = true;
          }
          uVar25 = 100;
          if (bVar53) {
            uVar25 = 0x19;
          }
          auStack_11428._0_8_ = uVar25;
          FUN_1801a7270(auStack_11428);
          FUN_1801958e0(auStack_10de8);
          FUN_1800efed0(auStack_10768 + 8);
          FUN_1800efed0(&lStack_10770);
          _eh_vector_destructor_iterator_(auStack_10930,0xe0,2,thunk_FUN_1801ab310);
          plVar31 = plStack_11438;
          bVar53 = bVar17;
        }
      }
    }
    else {
      if (alStack_10c78[0] != 0) {
        lVar52 = *plStack_10f98;
        auStack_10fc8._0_8_ = lVar52;
        cVar18 = *(char *)(lVar52 + 0x19);
        while (cVar18 == '\0') {
          FUN_18018f480(alStack_10c78,*(undefined8 *)(lVar52 + 0x20));
          FUN_1801ab430(auStack_10fc8);
          lVar52 = auStack_10fc8._0_8_;
          cVar18 = *(char *)(auStack_10fc8._0_8_ + 0x19);
        }
      }
      FUN_1801ab4e0(&plStack_10f98);
      FUN_1801ac870(auStack_10d48);
      FUN_1801ab4e0(&lStack_10f68);
      puVar38 = puStack_10f00;
      for (puVar37 = (undefined8 *)*puStack_10f00; puVar37 != puVar38;
          puVar37 = (undefined8 *)*puVar37) {
        FUN_1801ad260(puVar37 + 0x14);
        FUN_18015c2a0(puVar37 + 0xc,auStack_11428);
      }
      uVar25 = FUN_1801aadd0(auStack_10f08);
      FUN_180193630(uVar25,auStack_10ec8,0);
      auStack_10fc8._0_8_ = 100;
      FUN_1801a7270(auStack_10fc8);
      FUN_180195420(acStack_10938);
      plVar31 = plStack_11438;
    }
  } while( true );
}



