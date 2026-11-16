// FUN_1801c13b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c13b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c13b0(undefined1 (*param_1) [16])

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  short *psVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  HMODULE hModule;
  undefined8 uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  short *psVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_11248 [16];
  undefined1 auStack_11238 [16];
  undefined1 auStack_11228 [16];
  undefined1 auStack_11218 [16];
  undefined1 auStack_11200 [16];
  undefined8 uStack_111f0;
  undefined8 uStack_111e8;
  undefined1 auStack_111e0 [16];
  undefined8 uStack_111d0;
  undefined8 uStack_111c8;
  undefined1 *puStack_111b8;
  ulonglong uStack_111b0;
  undefined8 *puStack_111a8;
  undefined8 uStack_111a0;
  undefined1 auStack_11198 [16];
  undefined1 auStack_11188 [32];
  undefined1 auStack_11168 [32];
  undefined1 auStack_11148 [32];
  undefined1 auStack_11128 [32];
  undefined1 auStack_11108 [32];
  undefined1 auStack_110e8 [2048];
  char cStack_108e8;
  longlong alStack_108d8 [256];
  undefined1 uStack_100d8;
  undefined1 auStack_100c8 [16];
  ulonglong uStack_100b8;
  ulonglong uStack_100b0;
  undefined4 uStack_100a8;
  undefined4 uStack_100a4;
  longlong lStack_100a0;
  longlong lStack_10098;
  undefined8 uStack_10090;
  undefined1 auStack_10088 [16];
  undefined8 uStack_10078;
  undefined8 uStack_10070;
  undefined1 auStack_10068 [32];
  WCHAR aWStack_10048 [32784];
  
  auStack_11248._0_8_ = param_1;
  uStack_100a4 = 0;
  uStack_10090 = 0;
  auStack_10088 = ZEXT816(0);
  uStack_10078 = 0;
  uStack_10070 = 0;
  uStack_100a8 = 0;
  lStack_100a0 = 0;
  lStack_10098 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    auStack_11238._8_8_ = 0x15;
    auStack_11238._0_8_ = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(auStack_11238);
  }
  lStack_100a0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  *(longlong *)lStack_100a0 = lStack_100a0;
  *(longlong *)(lStack_100a0 + 8) = lStack_100a0;
  uStack_10090 = 0;
  auStack_10088 = (undefined1  [16])0x0;
  uStack_10078 = 7;
  uStack_10070 = 8;
  uStack_100a8 = 0x3f800000;
  FUN_1801406e0(&uStack_10090,0x10,lStack_100a0);
  FUN_18063ab10(aWStack_10048,0,0x10000);
  hModule = GetModuleHandleW(L"client.dll");
  if ((hModule == (HMODULE)0x0) ||
     (DVar9 = GetModuleFileNameW(hModule,aWStack_10048,0x8000), DVar9 == 0)) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    auStack_111e0 = (undefined1  [16])0x0;
    uStack_111d0 = 0;
    uStack_111c8 = 0;
    FUN_180159e60(auStack_111e0,L"maps",4);
    lVar20 = -1;
    do {
      lVar20 = lVar20 + 1;
    } while (aWStack_10048[lVar20] != L'\0');
    auStack_11200 = (undefined1  [16])0x0;
    uStack_111f0 = 0;
    uStack_111e8 = 0;
    FUN_180159e60(auStack_11200,aWStack_10048);
    uVar11 = FUN_18015c130(auStack_11200,auStack_11108);
    uVar11 = FUN_18015c130(uVar11,auStack_11128);
    uVar11 = FUN_18015c130(uVar11,auStack_11148);
    FUN_1800a7e60(auStack_10068,uVar11,auStack_111e0);
    FUN_18015b930(auStack_11148);
    FUN_18015b930(auStack_11128);
    FUN_18015b930(auStack_11108);
    FUN_18015b930(auStack_11200);
    FUN_18015b930(auStack_111e0);
    auStack_11238 = (undefined1  [16])0x0;
    FUN_1801c5780(auStack_11238,auStack_10068,0);
    uVar11 = auStack_11238._8_8_;
    if (auStack_11238._8_8_ != 0) {
      LOCK();
      *(int *)(auStack_11238._8_8_ + 8) = *(int *)(auStack_11238._8_8_ + 8) + 1;
      UNLOCK();
    }
    auStack_11218 = auStack_11238;
    auStack_11248 = (undefined1  [16])0x0;
    uVar12 = auStack_11238._0_8_;
    lVar20 = auStack_11238._8_8_;
    FUN_1800efed0(auStack_11248);
    if (uVar11 != 0) {
      LOCK();
      piVar1 = (int *)(uVar11 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    auStack_11248._8_8_ = lVar20;
    auStack_11248._0_8_ = uVar12;
    auStack_11228 = (undefined1  [16])0x0;
    FUN_1800efed0(auStack_11248);
    while (uVar11 = auStack_11218._0_8_, auStack_11218._0_8_ != 0) {
      auStack_100c8 = (undefined1  [16])0x0;
      uStack_100b8 = 0;
      uStack_100b0 = 0;
      FUN_180159e60(auStack_100c8,L".vpk",4);
      puVar14 = (undefined8 *)(uVar11 + 0x20);
      uVar12 = FUN_1801bdad0(puVar14,auStack_11188);
      puStack_111b8 = auStack_100c8;
      if (7 < uStack_100b0) {
        puStack_111b8 = (undefined1 *)auStack_100c8._0_8_;
      }
      uStack_111b0 = uStack_100b8;
      iVar10 = FUN_180162c60(uVar12);
      FUN_18015b930(auStack_11188);
      FUN_18015b930(auStack_100c8);
      if (iVar10 == 0) {
        if (7 < *(ulonglong *)(uVar11 + 0x38)) {
          puVar14 = (undefined8 *)*puVar14;
        }
        psVar2 = (short *)((longlong)puVar14 + *(longlong *)(uVar11 + 0x30) * 2);
        psVar13 = (short *)FUN_1800a7b00(puVar14,psVar2);
        psVar18 = psVar2;
        if (psVar13 != psVar2) {
          do {
            psVar7 = psVar2;
            if ((*psVar13 != 0x5c) && (*psVar13 != 0x2f)) break;
            psVar13 = psVar13 + 1;
          } while (psVar13 != psVar2);
          do {
            psVar18 = psVar7;
            if (psVar13 == psVar18) break;
            sVar3 = psVar18[-1];
            if ((sVar3 == 0x5c) || (psVar7 = psVar18 + -1, sVar3 == 0x2f)) break;
          } while( true );
        }
        auStack_100c8 = (undefined1  [16])0x0;
        uStack_100b8 = 0;
        uStack_100b0 = 0;
        FUN_180159e60(auStack_100c8,psVar18,(longlong)psVar2 - (longlong)psVar18 >> 1);
        puVar14 = (undefined8 *)FUN_180162b60(auStack_100c8,auStack_11168);
        puStack_111a8 = puVar14;
        if (0xf < (ulonglong)puVar14[3]) {
          puStack_111a8 = (undefined8 *)*puVar14;
        }
        uStack_111a0 = puVar14[2];
        uVar11 = FUN_1801bd830(auStack_11188,&puStack_111a8);
        FUN_1801b0a30(&uStack_100a8,auStack_11198,uVar11);
        FUN_18015c010(auStack_11188);
        FUN_18015c010(auStack_11168);
        FUN_18015b930(auStack_100c8);
      }
      iVar10 = FUN_1801bde70(auStack_11218);
      if (iVar10 != 0) {
        FUN_1801bdd80(extraout_XMM0_Qa,iVar10);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FUN_1800efed0(auStack_11228);
    FUN_1800efed0(auStack_11218);
    FUN_1800efed0(auStack_11238);
    lVar20 = DAT_180bb8958;
    if (((lStack_10098 != 0) && (DAT_1808d9bda == '\0')) && (DAT_1808d9bd8 == '\x03')) {
      lVar15 = FUN_18017ea70();
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
      if (lVar20 == 0) {
        bVar6 = false;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auStack_11248._8_8_;
        auStack_11248 = auVar5 << 0x40;
        cVar8 = FUN_1804514f0(auStack_11248,lVar20,8);
        if (cVar8 == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      }
      uVar11 = auStack_11248._0_8_;
      lVar20 = FUN_18017ea70();
      if (*(int *)(lVar20 + 4) != 0) {
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
      }
      if ((bVar6) && (uVar11 != 0)) {
        lVar20 = FUN_18017ea70();
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
        FUN_18063ab10(auStack_110e8,0,0x800);
        cVar8 = FUN_1804514f0(auStack_110e8,uVar11,0x800);
        uStack_100d8 = cVar8 != '\0';
        if ((bool)uStack_100d8) {
          FUN_18063aed0(alStack_108d8,auStack_110e8,0x800);
        }
        lVar20 = FUN_18017ea70();
        if (*(int *)(lVar20 + 4) != 0) {
          *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
        }
      }
      else {
        uStack_100d8 = 0;
      }
      FUN_18063aed0(auStack_110e8,alStack_108d8,0x801);
      FUN_18063aed0(alStack_108d8,auStack_110e8,0x801);
      if (cStack_108e8 != '\0') {
        uVar19 = 0;
        do {
          if (*(longlong *)((longlong)alStack_108d8 + uVar19) - 0x10000U < 0x7fffffff0000) {
            puVar14 = (undefined8 *)
                      FUN_180454030(auStack_11168,*(longlong *)((longlong)alStack_108d8 + uVar19),
                                    0x80);
            auStack_11228._0_8_ = puVar14;
            if (0xf < (ulonglong)puVar14[3]) {
              auStack_11228._0_8_ = *puVar14;
            }
            auStack_11228._8_8_ = puVar14[2];
            FUN_1801bd830(auStack_100c8,auStack_11228);
            FUN_18015c010(auStack_11168);
            puVar17 = auStack_100c8;
            if (0xf < uStack_100b0) {
              puVar17 = (undefined1 *)auStack_100c8._0_8_;
            }
            uVar21 = 0xcbf29ce484222325;
            uVar16 = 0;
            if (uStack_100b8 != 0) {
              do {
                uVar21 = (uVar21 ^ (byte)puVar17[uVar16]) * 0x100000001b3;
                uVar16 = uVar16 + 1;
              } while (uVar16 < uStack_100b8);
            }
            lVar20 = FUN_180177b00(&uStack_100a8,auStack_11198,auStack_100c8,uVar21);
            if (*(longlong *)(lVar20 + 8) != 0) {
              FUN_18015b360(param_1,auStack_100c8);
              FUN_18015c010(auStack_100c8);
              FUN_18015b930(auStack_10068);
              goto LAB_1801c1af5;
            }
            FUN_18015c010(auStack_100c8);
          }
          uVar19 = uVar19 + 8;
        } while (uVar19 < 0x800);
      }
    }
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
    FUN_18015b930(auStack_10068);
  }
LAB_1801c1af5:
  FUN_1801868f0(&uStack_100a8);
}



