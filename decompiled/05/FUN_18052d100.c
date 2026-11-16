// FUN_18052d100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052d100 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18052d100(uint param_1,uint param_2,float *param_3,float *param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  size_t _Size;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined8 uVar21;
  undefined1 (*pauVar22) [16];
  undefined8 *puVar23;
  ULONGLONG UVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  float *pfVar27;
  undefined8 *puVar28;
  char cVar29;
  ushort *_Buf2;
  ushort *puVar30;
  ulonglong uVar31;
  undefined *puVar32;
  longlong lVar33;
  char *pcVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined4 uVar48;
  undefined1 auVar49 [64];
  undefined1 auStack_898 [32];
  undefined4 local_878;
  undefined4 local_870;
  undefined1 local_868;
  undefined1 local_860;
  undefined1 local_858;
  byte local_848;
  undefined1 local_847;
  undefined1 local_846;
  uint local_844;
  undefined8 local_838;
  int iStack_830;
  int iStack_82c;
  int local_818;
  longlong local_810;
  undefined *local_808;
  undefined *local_800;
  longlong local_7f8;
  float *local_7f0;
  float *local_7e8;
  int local_7d8;
  int local_7d4;
  int local_7d0;
  undefined1 local_7c8 [16];
  ulonglong uStack_7b8;
  ulonglong uStack_7b0;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 local_7a0;
  undefined1 local_79c;
  ulonglong local_798;
  ulonglong uStack_790;
  longlong lStack_788;
  undefined8 uStack_780;
  undefined4 local_778;
  undefined4 local_774;
  uint local_770;
  undefined1 local_768 [32];
  int local_748;
  int local_744;
  int local_740;
  int local_73c;
  int local_738;
  int local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined1 local_708;
  undefined1 local_700 [16];
  longlong lStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  longlong local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  byte local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined1 local_6a8 [16];
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 local_688;
  byte local_680;
  undefined1 local_67f;
  undefined2 local_67e;
  undefined4 local_67c;
  undefined4 local_678;
  uint local_674;
  undefined4 local_670;
  uint local_66c;
  int local_668 [4];
  undefined8 local_658;
  undefined4 local_650;
  undefined1 local_648 [16];
  undefined8 local_638;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  undefined8 local_618;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  undefined1 local_5e0 [16];
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined1 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined1 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined1 local_588 [16];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 local_528 [16];
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined8 uStack_50c;
  undefined8 uStack_504;
  undefined8 uStack_4fc;
  undefined8 uStack_4f4;
  undefined1 auStack_4ec [16];
  undefined8 local_4dc;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 local_4b0 [16];
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_494;
  undefined8 uStack_48c;
  undefined8 uStack_484;
  undefined8 uStack_47c;
  undefined1 local_474 [16];
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined4 uStack_420;
  undefined2 uStack_41c;
  undefined1 uStack_41a;
  undefined8 uStack_418;
  uint uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 local_3f8 [8];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [56];
  undefined1 local_3a0;
  undefined2 local_39f;
  undefined1 local_39d;
  undefined8 local_39c;
  undefined4 local_394;
  undefined8 auStack_390 [3];
  undefined4 auStack_378 [29];
  undefined8 local_304;
  undefined8 uStack_2fc;
  undefined8 local_2f4;
  undefined4 local_2e8;
  float local_2e4 [5];
  undefined1 local_2d0 [248];
  undefined8 local_1d8 [42];
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_898;
  uVar31 = (ulonglong)(int)param_2;
  lVar35 = (longlong)(int)param_1;
  if (DAT_180b909b0 == 0) {
  }
  if (1 < param_1) {
  }
  if (0x14 < param_2) {
  }
  local_7f0 = param_3;
  local_7e8 = param_4;
  local_800 = (undefined *)FUN_180529500(param_1,param_2);
  lVar33 = DAT_180bb8ae8;
  sVar1 = *(short *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4970 +
                    (lVar35 * 0x15 + uVar31) * 4);
  if (DAT_180b909b0 == 0) {
  }
  if (sVar1 < 0) {
  }
  if ((int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68) <=
      (int)sVar1) {
  }
  puVar30 = (ushort *)((longlong)sVar1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58));
  if (puVar30 == (ushort *)0x0) {
  }
  uVar2 = *puVar30;
  uVar25 = ((ulonglong)(uVar2 >> 8) ^ ((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3
           ) * 0x100000001b3 & DAT_180cc9cb8;
  lVar39 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar25 * 0x10);
  if (lVar39 == DAT_180cc9c90) {
LAB_18052d271:
    lVar39 = 0;
  }
  else {
    uVar3 = *(ushort *)(lVar39 + 0x10);
    while (uVar2 != uVar3) {
      if (lVar39 == *(longlong *)(DAT_180cc9ca0 + uVar25 * 0x10)) goto LAB_18052d271;
      lVar39 = *(longlong *)(lVar39 + 8);
      uVar3 = *(ushort *)(lVar39 + 0x10);
    }
  }
  lVar37 = DAT_180cc9c90;
  if (lVar39 != 0) {
    lVar37 = lVar39;
  }
  if (lVar37 == DAT_180cc9c90) {
  }
  if (*(longlong *)(lVar37 + 0x18) * 0xb8 + DAT_180cc9bf8 == 0) {
  }
  local_818 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
  local_846 = 0 < local_818;
  lVar39 = lVar35;
  local_838 = uVar31;
  local_810 = lVar35;
  if (((local_818 < 1) && (lVar37 = *(longlong *)(DAT_180bb8ae8 + 0x14d8), lVar37 != 0)) &&
     (lVar37 == *(longlong *)(DAT_180bb8ae8 + 0x14d0))) {
    cVar29 = '\0';
    cVar15 = FUN_1804b7ab0(lVar37);
    if ((cVar15 == '\0') ||
       (((*(int *)(lVar33 + 0x1550) != 0 && (*(char *)(lVar33 + 0x155f) == cVar29)) &&
        (*(int *)(lVar33 + 0x1550) != *(int *)(lVar37 + 0x8c))))) goto LAB_18052d30e;
    local_847 = 1;
    cVar15 = FUN_1804c3600(param_3,param_4);
    if (cVar15 == '\0') goto LAB_18052d30e;
  }
  else {
LAB_18052d30e:
    local_847 = 0;
  }
  if (((DAT_1808e6670 == '\0') || (DAT_1808e6674 != param_1)) || (DAT_1808e6678 != param_2)) {
    local_848 = 0;
  }
  else {
    local_848 = 1;
    if (DAT_180c63119 == '\0') {
      FUN_18052ab70();
      lVar39 = lVar35;
    }
  }
  lVar35 = 2;
  lVar39 = lVar39 * 0x440;
  if (param_2 == 0xf) {
    local_844 = 3;
    local_808 = &DAT_180cce780 + lVar39;
  }
  else {
    if (param_2 == 0x13) {
      local_844 = 2;
    }
    else {
      local_844 = (uint)(param_2 == 0x12);
    }
    local_808 = &DAT_180cce340;
  }
  lVar37 = (longlong)(int)(1 - param_1) * 0x440;
  puVar32 = &DAT_180cce7b0 + lVar37;
  iVar17 = FUN_1805f68d0(puVar32);
  if (iVar17 != 0) goto LAB_18052e9db;
  if (*(int *)(&DAT_180cce7fc + lVar37) == 0x7fffffff) {
LAB_18052e9e6:
    *(undefined4 *)(puVar32 + 0x4c) = 0x7ffffffe;
LAB_18052e9ed:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(undefined8 *)(&DAT_180cce860 + lVar37) = 0;
  FUN_1805f68fc(puVar32);
  uVar36 = local_844;
  if (local_844 == 3) {
    puVar32 = &DAT_180cce370;
    iVar17 = FUN_1805f68d0(&DAT_180cce370);
    if (iVar17 != 0) {
LAB_18052e9db:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180cce3bc == 0x7fffffff) {
      DAT_180cce3bc = 0x7ffffffe;
      goto LAB_18052e9ed;
    }
    DAT_180cce420 = 0;
  }
  else {
    puVar32 = &DAT_180cce7b0 + lVar39;
    iVar17 = FUN_1805f68d0(puVar32);
    if (iVar17 != 0) goto LAB_18052e9db;
    if (*(int *)(&DAT_180cce7fc + lVar39) == 0x7fffffff) goto LAB_18052e9e6;
    *(undefined8 *)(&DAT_180cce860 + lVar39) = 0;
  }
  FUN_1805f68fc(puVar32);
  bVar12 = local_848;
  if (local_848 == 0) {
    uVar16 = FUN_1804c3510(0,0,0);
    local_858 = local_846;
    local_860 = local_847;
    local_868 = *(undefined1 *)(lVar33 + 0x118);
    local_870 = CONCAT31(local_870._1_3_,uVar16);
    local_878 = *(undefined4 *)(lVar33 + 0x114);
    FUN_1801d6a50(local_800 + 0x224,*(undefined4 *)puVar30,*(undefined4 *)(puVar30 + 2),
                  *(undefined4 *)(lVar33 + 0x110));
  }
  _local_3f8 = (undefined1  [16])0x0;
  uStack_3e8 = 0;
  local_668[0] = 1;
  auVar44 = ZEXT864(0);
  if (((DAT_180bbab78 != 0) &&
      ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_668,local_3f8),
      local_668[0] == 0)) || ((float)uStack_3f0 <= auVar44._0_4_)) {
    iVar17 = 0;
    iVar38 = 0;
  }
  else {
    iVar17 = (int)(float)uStack_3f0;
    iVar38 = (int)uStack_3f0._4_4_;
  }
  local_778 = *(undefined4 *)puVar30;
  local_774 = *(undefined4 *)(puVar30 + 2);
  local_770 = uVar36;
  FUN_18015b360(local_768);
  local_748 = (int)*local_7f0;
  local_744 = (int)local_7f0[1] + -4;
  local_740 = (int)(*local_7e8 - *local_7f0);
  local_73c = (int)(local_7e8[1] - local_7f0[1]) + 4;
  local_730 = *(undefined4 *)(local_800 + 0x22c);
  local_72c = *(undefined4 *)(local_800 + 0x230);
  auVar49 = ZEXT464(0x3f800000);
  local_728 = 0x3f800000;
  local_720 = 0;
  local_718 = 0;
  local_710 = 0;
  local_708 = 0;
  local_7f8 = 0;
  lStack_6f0 = 0;
  uStack_6e8 = 0xf;
  local_700._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar43[0xf] = 0;
  auVar43._0_15_ = local_700._1_15_;
  local_700 = auVar43 << 8;
  local_6e0 = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6c8 = auVar44._0_4_;
  local_6b4 = 0;
  local_6b0 = 0xffffffff;
  local_6ac = 0;
  uStack_698 = 0;
  uStack_690 = 0xf;
  local_6a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar46[0xf] = 0;
  auVar46._0_15_ = local_6a8._1_15_;
  local_6a8 = auVar46 << 8;
  local_688 = 0;
  local_67e = 1;
  auVar47 = ZEXT464(0x3f000000);
  local_67c = 0x3f000000;
  local_678 = 0x3f000000;
  puVar32 = &DAT_1808e6690;
  if (bVar12 == 0) {
    puVar32 = local_800;
  }
  local_6c4 = bVar12;
  local_680 = bVar12 ^ 1;
  local_67f = 0;
  local_670 = 0x10ef25;
  local_674 = DAT_1808da494 >> 0x10 & 0xff | (DAT_1808da494 & 0xff) * 0x10000 |
              DAT_1808da494 & 0xff00;
  if ((uVar36 == 3) && (*(longlong *)(puVar30 + 0xc) == 0)) {
    iVar18 = 3 - (uint)(param_1 != 0);
    local_688 = CONCAT44(iVar18,iVar18);
  }
  local_738 = iVar17;
  local_734 = iVar38;
  local_6c0 = local_6c8;
  local_6bc = local_6c8;
  local_6b8 = local_6c8;
  local_66c = param_1;
  local_668[0] = local_73c;
  if ((DAT_180cd72c0 & 1) == 0) {
    DAT_180cd72c0 = DAT_180cd72c0 | 1;
    atexit(FUN_180663eb0);
  }
  lVar33 = (local_810 * 0x15 + local_838) * 0x40;
  iVar17 = *(int *)puVar30;
  local_810 = CONCAT44(local_810._4_4_,iVar17);
  if (*(int *)(&DAT_180b0a840 + lVar33) == iVar17) {
    _Buf2 = puVar30 + 0x14;
    puVar26 = (undefined8 *)(&DAT_180b0a850 + lVar33);
    if (0xf < *(ulonglong *)(puVar30 + 0x20)) {
      _Buf2 = *(ushort **)_Buf2;
    }
    _Size = *(size_t *)(&DAT_180b0a860 + lVar33);
    if (0xf < *(ulonglong *)(&DAT_180b0a868 + lVar33)) {
      puVar26 = (undefined8 *)*puVar26;
    }
    if (((_Size != *(size_t *)(puVar30 + 0x1c)) ||
        ((_Size != 0 && (iVar38 = memcmp(puVar26,_Buf2,_Size), iVar38 != 0)))) ||
       ((*(int *)(&DAT_180b0a844 + lVar33) != local_740 ||
        (*(int *)(&DAT_180b0a848 + lVar33) != local_668[0])))) goto LAB_18052d806;
  }
  else {
LAB_18052d806:
    pauVar22 = (undefined1 (*) [16])(puVar30 + 0x14);
    local_7c8 = (undefined1  [16])0x0;
    uVar31 = *(ulonglong *)(puVar30 + 0x1c);
    if (0xf < *(ulonglong *)(puVar30 + 0x20)) {
      pauVar22 = *(undefined1 (**) [16])*pauVar22;
    }
    local_7d8 = iVar17;
    local_7d4 = local_740;
    local_7d0 = local_668[0];
    if (0x7fffffffffffffff < uVar31) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    uStack_7b8 = uVar31;
    if (uVar31 < 0x10) {
      uStack_7b0 = 0xf;
      local_7c8 = *pauVar22;
    }
    else {
      uVar19 = uVar31 | 0xf;
      uVar25 = 0x7fffffffffffffff;
      if ((uVar19 < 0x8000000000000000) && (uVar25 = uVar19, uVar19 < 0x16)) {
        uVar25 = 0x16;
      }
      uVar21 = FUN_18015bca0(uVar25 + 1);
      local_7c8._0_8_ = uVar21;
      uStack_7b0 = uVar25;
      FUN_18063aed0(uVar21,pauVar22,uVar31 + 1);
    }
    auVar40 = auVar49._0_16_;
    auVar46 = auVar47._0_16_;
    auVar43 = auVar44._0_16_;
    local_7a8 = auVar49._0_4_;
    uStack_7a4 = auVar47._0_4_;
    local_79c = 0;
    *(undefined4 *)(&DAT_180b0a840 + lVar33) = (undefined4)local_810;
    *(int *)(&DAT_180b0a844 + lVar33) = local_740;
    *(int *)(&DAT_180b0a848 + lVar33) = local_668[0];
    puVar26 = (undefined8 *)(&DAT_180b0a850 + lVar33);
    local_7a0 = uStack_7a4;
    if (puVar26 != (undefined8 *)local_7c8) {
      FUN_18015c010(puVar26);
      auVar40 = auVar49._0_16_;
      auVar46 = auVar47._0_16_;
      auVar43 = auVar44._0_16_;
      *puVar26 = local_7c8._0_8_;
      *(undefined8 *)(lVar33 + 0x180b0a858) = local_7c8._8_8_;
      *(ulonglong *)(&DAT_180b0a860 + lVar33) = uStack_7b8;
      *(ulonglong *)(&DAT_180b0a868 + lVar33) = uStack_7b0;
      uStack_7b8 = 0;
      uStack_7b0 = 0xf;
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_7c8._1_15_;
      local_7c8 = auVar6 << 8;
    }
    *(ulonglong *)(&DAT_180b0a870 + lVar33) = CONCAT44(uStack_7a4,local_7a8);
    *(undefined4 *)(&DAT_180b0a878 + lVar33) = local_7a0;
    (&DAT_180b0a87c)[lVar33] = 0;
    auVar44 = ZEXT1664(auVar43);
    auVar47 = ZEXT1664(auVar46);
    auVar49 = ZEXT1664(auVar40);
    FUN_18015c010();
    uVar36 = local_844;
  }
  if (((&DAT_180b0a87c)[lVar33] == '\0') && (local_848 == 0)) {
    if (((local_800[0x38] == '\0') && (*(int *)(local_800 + 0x40) < 0)) || (1 < uVar36)) {
      puVar20 = (ulonglong *)FUN_1803f51f0(local_808,local_3f8,&local_778);
    }
    else {
      FUN_1803f51f0(&DAT_180cd10f0,&local_838,&local_778);
      puVar20 = &local_838;
    }
    local_798 = *puVar20;
    uStack_790 = puVar20[1];
    lStack_788 = CONCAT44(lStack_788._4_4_,(int)puVar20[2]);
    if ((char)puVar20[2] != '\0') {
      auVar41._0_4_ = (float)(local_73c + -4);
      auVar41._4_12_ = SUB1612(ZEXT816(0),4);
      auVar40._0_4_ = (float)local_740;
      auVar40._4_12_ = SUB1612(ZEXT816(0),4);
      local_878 = CONCAT31(local_878._1_3_,uVar36 == 3);
      puVar26 = (undefined8 *)FUN_1803e79e0(&local_838,auVar40._0_8_,auVar41._0_8_,&local_798);
      uVar42 = *(undefined4 *)(puVar26 + 1);
      *(undefined8 *)(&DAT_180b0a870 + lVar33) = *puVar26;
      *(undefined4 *)(&DAT_180b0a878 + lVar33) = uVar42;
      (&DAT_180b0a87c)[lVar33] = 1;
    }
    lVar39 = lStack_6f0;
  }
  else {
    lVar39 = local_7f8;
  }
  bVar12 = local_848;
  uVar45 = auVar47._0_4_;
  uVar48 = auVar49._0_4_;
  uVar42 = auVar44._0_4_;
  local_728 = *(undefined4 *)(&DAT_180b0a870 + lVar33);
  local_67c = *(undefined4 *)(&DAT_180b0a874 + lVar33);
  local_678 = *(undefined4 *)(&DAT_180b0a878 + lVar33);
  if (local_848 == 0) {
LAB_18052da96:
    bVar11 = false;
  }
  else {
    if (DAT_1808e667c == 1) {
      iVar17 = *(int *)(puVar32 + (longlong)DAT_1808e6680 * 0x1c + 0x48);
    }
    else {
      iVar17 = *(int *)(puVar32 + 0xd4);
    }
    if (iVar17 == 0) goto LAB_18052da96;
    bVar11 = true;
  }
  if (uVar36 == 3) goto LAB_18052de0b;
  FUN_18019f170(local_3d8,puVar32);
  if (bVar11) {
    if (DAT_1808e667c == 1) {
      lVar33 = (longlong)DAT_1808e6680 * 0x1c;
      *(undefined8 *)((longlong)auStack_390 + lVar33) = 0;
      *(undefined8 *)((longlong)auStack_390 + lVar33 + 8) = 0x3f800000;
      *(undefined8 *)((longlong)auStack_390 + lVar33 + 0x10) = 0;
      auStack_378[(longlong)DAT_1808e6680 * 7] = 0xffffffff;
    }
    else {
      local_304 = _DAT_1808e6870;
      uStack_2fc = uRam00000001808e6878;
      local_2f4 = DAT_1808e6880;
    }
  }
  FUN_1801576b0(&local_2e8);
  local_2e8 = *(undefined4 *)(puVar30 + 2);
  lVar33 = FUN_180208890(&DAT_180cc9bb0);
  if (lVar33 != 0) {
    pfVar27 = local_2e4;
    if (local_2e4[0] < *(float *)(lVar33 + 0x88)) {
      pfVar27 = (float *)(lVar33 + 0x88);
    }
    if (*(float *)(lVar33 + 0x8c) < local_2e4[0]) {
      pfVar27 = (float *)(lVar33 + 0x8c);
    }
    local_2e4[0] = *pfVar27;
  }
  local_3a0 = 0;
  local_39f = local_838._1_2_;
  local_39d = local_838._3_1_;
  local_39c = 0xffffffffffffffff;
  local_394 = 0xffffffff;
  if (bVar12 == 0) {
    cVar15 = FUN_1801d8910(local_3d8,&local_2e8);
    auVar40 = auVar49._0_16_;
    auVar46 = auVar47._0_16_;
    auVar43 = auVar44._0_16_;
    if (cVar15 == '\0') goto LAB_18052dbcd;
LAB_18052dcaa:
    local_67e = local_67e & 0xff;
  }
  else {
LAB_18052dbcd:
    uVar21 = FUN_18019f170(&local_658,local_3d8);
    uVar31 = FUN_18021a830(extraout_XMM0_Qa,*puVar30,uVar21);
    auVar40 = auVar49._0_16_;
    auVar46 = auVar47._0_16_;
    auVar43 = auVar44._0_16_;
    if (uVar31 != 0) {
      pcVar34 = (char *)((longlong)&uStack_3e8 + 5);
      do {
        pcVar34 = pcVar34 + -1;
        uVar25 = uVar31 / 10;
        *pcVar34 = (char)uVar31 + (char)uVar25 * -10 + '0';
        uVar31 = uVar25;
      } while (uVar25 != 0);
      FUN_18015bdb0(&local_798,pcVar34,(longlong)&uStack_3e8 + 5);
      FUN_18015c010(local_700);
      uStack_3f0 = uStack_790;
      local_3f8 = (undefined1  [8])local_798;
      uStack_3e8 = lStack_788;
      uStack_3e0 = uStack_780;
      local_700._8_8_ = uStack_790;
      local_700._0_8_ = local_798;
      lStack_6f0 = lStack_788;
      uStack_6e8 = uStack_780;
      lStack_788 = 0;
      uStack_780 = 0xf;
      local_798 = local_798 & 0xffffffffffffff00;
      auVar44 = ZEXT1664(auVar44._0_16_);
      auVar47 = ZEXT1664(auVar47._0_16_);
      auVar49 = ZEXT1664(auVar49._0_16_);
      FUN_18015c010(&local_798);
      auVar40 = auVar49._0_16_;
      auVar46 = auVar47._0_16_;
      auVar43 = auVar44._0_16_;
      lVar39 = uStack_3e8;
    }
    local_67e = CONCAT11(1,(undefined1)local_67e);
    if (lVar39 != 0) goto LAB_18052dcaa;
  }
  if (bVar12 == 0) {
    auVar44 = ZEXT1664(auVar43);
    auVar47 = ZEXT1664(auVar46);
    auVar49 = ZEXT1664(auVar40);
    uVar21 = FUN_1800cae50(puVar32 + 0xd4,&local_838);
    local_870 = 0;
    pauVar22 = (undefined1 (*) [16])FUN_1800f4710(uVar21,local_3f8,0xffffffff);
    auVar40 = auVar49._0_16_;
    auVar46 = auVar47._0_16_;
    auVar43 = auVar44._0_16_;
    if (&local_6a8 != pauVar22) {
      FUN_18015c010(local_6a8);
      auVar40 = auVar49._0_16_;
      auVar46 = auVar47._0_16_;
      auVar43 = auVar44._0_16_;
      local_6a8 = *pauVar22;
      uStack_698 = *(undefined8 *)pauVar22[1];
      uStack_690 = *(undefined8 *)(pauVar22[1] + 8);
      *(undefined8 *)pauVar22[1] = 0;
      *(undefined8 *)(pauVar22[1] + 8) = 0xf;
      (*pauVar22)[0] = 0;
    }
    auVar44 = ZEXT1664(auVar43);
    auVar47 = ZEXT1664(auVar46);
    auVar49 = ZEXT1664(auVar40);
    FUN_18015c010(local_3f8);
    FUN_1801409d0(&iStack_830,local_838 & 0xff);
    auVar40 = auVar49._0_16_;
    auVar46 = auVar47._0_16_;
    auVar43 = auVar44._0_16_;
  }
  if (bVar11) {
    lVar33 = (longlong)DAT_1808e6680 * 0x1c;
    local_6d8 = DAT_1808e6688;
    local_6e0 = CONCAT44(DAT_1808e6684,(undefined4)local_6e0);
    local_6b4 = DAT_1808e6671;
    if (DAT_1808e667c == 1) {
      local_6e0 = CONCAT44(DAT_1808e6684,*(undefined4 *)(puVar32 + lVar33 + 0x48));
      local_6c8 = *(undefined4 *)(puVar32 + lVar33 + 0x4c);
      local_6c0 = *(undefined4 *)(puVar32 + lVar33 + 0x58);
      local_6bc = *(undefined4 *)(puVar32 + lVar33 + 0x5c);
      local_6b8 = *(undefined4 *)(puVar32 + lVar33 + 0x54);
      local_6b0 = *(undefined4 *)(puVar32 + lVar33 + 0x60);
    }
    else {
      local_6ac = *(undefined4 *)(puVar32 + 0xd4);
    }
  }
  auVar44 = ZEXT1664(auVar43);
  auVar47 = ZEXT1664(auVar46);
  auVar49 = ZEXT1664(auVar40);
  FUN_18015c010(local_2d0);
  FUN_18015c010();
  uVar45 = auVar47._0_4_;
  uVar48 = auVar49._0_4_;
  uVar42 = auVar44._0_4_;
LAB_18052de0b:
  puVar13 = local_808;
  cVar15 = local_67e._1_1_;
  if (((local_848 == 0) && (uVar36 < 2)) &&
     ((puVar32[0x38] != '\0' || (-1 < *(int *)(puVar32 + 0x40))))) {
    iVar17 = FUN_1805f68d0(local_808 + 0x30);
    if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(puVar13 + 0x7c) == 0x7fffffff) {
      *(undefined4 *)(puVar13 + 0x7c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    *(undefined8 *)(puVar13 + 0xe0) = 0;
    FUN_1805f68fc(puVar13 + 0x30);
    FUN_1801d8cb0(&local_658,&local_778);
    local_548 = 0x200;
    uStack_540 = 0xffffffff00000000;
    uStack_538 = 0x20000000000;
    uStack_530 = 0;
    local_528._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_528._8_2_ = 0x200;
    local_528._0_8_ = 0xffffffff;
    local_528._12_4_ = 0;
    uStack_518 = 0xffffffff00000000;
    uStack_510 = 0;
    uStack_50c = 0x200;
    uStack_504 = 0xffffffff00000000;
    uStack_4fc = 0x20000000000;
    uStack_4f4 = 0;
    auStack_4ec._10_6_ = SUB166((undefined1  [16])0x0,10);
    auStack_4ec._8_2_ = 0x200;
    auStack_4ec._0_8_ = 0xffffffff;
    auStack_4ec._12_4_ = 0;
    local_4dc = 0xffffffff00000000;
    uStack_4d4 = 0;
    uStack_4d0 = 0x200;
    uStack_4c8 = 0xffffffff00000000;
    uStack_4c0 = 0x20000000000;
    uStack_4b8 = 0;
    local_4b0._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_4b0._8_2_ = 0x200;
    local_4b0._0_8_ = 0xffffffff;
    local_4b0._12_4_ = 0;
    local_4a0 = 0xffffffff00000000;
    local_498 = 0;
    local_494 = 0x200;
    uStack_48c = 0xffffffff00000000;
    uStack_484 = 0x20000000000;
    uStack_47c = 0;
    local_474._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_474._8_2_ = 0x200;
    local_474._0_8_ = 0xffffffff;
    local_474._12_4_ = 0;
    local_464 = 0xffffffff00000000;
    local_45c = 0;
    local_458 = 0x200;
    uStack_450 = 0xffffffff00000000;
    uStack_448 = 0x20000000000;
    uStack_440 = 0;
    local_438._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_438._8_2_ = 0x200;
    local_438._0_8_ = 0xffffffff;
    local_438._12_4_ = 0;
    local_428 = 0xffffffff00000000;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_41a = 0;
    uStack_418 = 0;
    uStack_410 = (uint)*(undefined8 *)(puVar32 + 0x38);
    uStack_40c = (undefined4)((ulonglong)*(undefined8 *)(puVar32 + 0x38) >> 0x20);
    uStack_408 = (undefined4)*(undefined8 *)(puVar32 + 0x40);
    uStack_404 = (undefined4)((ulonglong)*(undefined8 *)(puVar32 + 0x40) >> 0x20);
    FUN_1801d8a70(&local_2e8,&local_658);
    puVar26 = &local_548;
    puVar14 = local_1d8;
    do {
      puVar28 = puVar14;
      puVar23 = puVar26;
      uVar21 = puVar23[1];
      uVar4 = puVar23[2];
      uVar5 = puVar23[3];
      *puVar28 = *puVar23;
      puVar28[1] = uVar21;
      puVar28[2] = uVar4;
      puVar28[3] = uVar5;
      uVar21 = puVar23[5];
      uVar4 = puVar23[6];
      uVar5 = puVar23[7];
      puVar28[4] = puVar23[4];
      puVar28[5] = uVar21;
      puVar28[6] = uVar4;
      puVar28[7] = uVar5;
      uVar21 = puVar23[9];
      uVar4 = puVar23[10];
      uVar5 = puVar23[0xb];
      puVar28[8] = puVar23[8];
      puVar28[9] = uVar21;
      puVar28[10] = uVar4;
      puVar28[0xb] = uVar5;
      uVar21 = puVar23[0xd];
      puVar28[0xc] = puVar23[0xc];
      puVar28[0xd] = uVar21;
      uVar21 = puVar23[0xf];
      puVar28[0xe] = puVar23[0xe];
      puVar28[0xf] = uVar21;
      lVar35 = lVar35 + -1;
      puVar26 = puVar23 + 0x10;
      puVar14 = puVar28 + 0x10;
    } while (lVar35 != 0);
    uVar21 = puVar23[0x11];
    uVar4 = puVar23[0x12];
    uVar5 = puVar23[0x13];
    puVar28[0x10] = puVar23[0x10];
    puVar28[0x11] = uVar21;
    puVar28[0x12] = uVar4;
    puVar28[0x13] = uVar5;
    uVar21 = puVar23[0x15];
    uVar4 = puVar23[0x16];
    uVar5 = puVar23[0x17];
    puVar28[0x14] = puVar23[0x14];
    puVar28[0x15] = uVar21;
    puVar28[0x16] = uVar4;
    puVar28[0x17] = uVar5;
    puVar28[0x18] = puVar23[0x18];
    FUN_1803c10e0(&DAT_180cd0770,&local_2e8);
    FUN_18015c010(local_588);
    FUN_18015c010(local_5e0);
    FUN_18015c010(local_648);
    FUN_1803c3340(&DAT_180cd0770);
  }
  else {
    local_658 = 0;
    local_650 = 0;
    local_638 = 0;
    uStack_630 = 0xf;
    local_648._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar7[0xf] = 0;
    auVar7._0_15_ = local_648._1_15_;
    local_648 = auVar7 << 8;
    local_628 = (undefined1  [16])0x0;
    local_618 = 0;
    local_600 = 0;
    local_5f8 = 0;
    local_5f0 = 0;
    local_5e8 = 0;
    local_5d0 = 0;
    local_5c8 = 0xf;
    local_5e0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar8[0xf] = 0;
    auVar8._0_15_ = local_5e0._1_15_;
    local_5e0 = auVar8 << 8;
    local_5c0 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    local_5a4 = 0;
    local_594 = 0;
    local_590 = 0xffffffff;
    local_58c = 0;
    local_578 = 0;
    uStack_570 = 0xf;
    local_588._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar9[0xf] = 0;
    auVar9._0_15_ = local_588._1_15_;
    local_588 = auVar9 << 8;
    local_568 = 0;
    local_560 = 0;
    local_554 = 0x101010;
    local_550 = 0x808080;
    local_54c = 0xffffffff;
    local_548 = 0x200;
    uStack_540 = 0xffffffff00000000;
    uStack_538 = 0x20000000000;
    uStack_530 = 0;
    local_528._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_528._8_2_ = 0x200;
    local_528._0_8_ = 0xffffffff;
    local_528._12_4_ = 0;
    uStack_518 = 0xffffffff00000000;
    uStack_510 = 0;
    uStack_50c = 0x200;
    uStack_504 = 0xffffffff00000000;
    uStack_4fc = 0x20000000000;
    uStack_4f4 = 0;
    auStack_4ec._10_6_ = SUB166((undefined1  [16])0x0,10);
    auStack_4ec._8_2_ = 0x200;
    auStack_4ec._0_8_ = 0xffffffff;
    auStack_4ec._12_4_ = 0;
    local_4dc = 0xffffffff00000000;
    uStack_4d4 = 0;
    uStack_4d0 = 0x200;
    uStack_4c8 = 0xffffffff00000000;
    uStack_4c0 = 0x20000000000;
    uStack_4b8 = 0;
    local_4b0._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_4b0._8_2_ = 0x200;
    local_4b0._0_8_ = 0xffffffff;
    local_4b0._12_4_ = 0;
    local_4a0 = 0xffffffff00000000;
    local_498 = 0;
    local_494 = 0x200;
    uStack_48c = 0xffffffff00000000;
    uStack_484 = 0x20000000000;
    uStack_47c = 0;
    local_474._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_474._8_2_ = 0x200;
    local_474._0_8_ = 0xffffffff;
    local_474._12_4_ = 0;
    local_464 = 0xffffffff00000000;
    local_45c = 0;
    local_458 = 0x200;
    uStack_450 = 0xffffffff00000000;
    uStack_448 = 0x20000000000;
    uStack_440 = 0;
    local_438._10_6_ = SUB166((undefined1  [16])0x0,10);
    local_438._8_2_ = 0x200;
    local_438._0_8_ = 0xffffffff;
    local_438._12_4_ = 0;
    local_428 = 0xffffffff00000000;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_41a = 0;
    uStack_418 = 0;
    uStack_410 = uStack_410 & 0xffffff00;
    uStack_40c = 0xffffffff;
    uStack_408 = 0xffffffff;
    uStack_404 = 0xffffffff;
    local_610 = uVar42;
    local_60c = uVar42;
    local_608 = uVar48;
    local_5a8 = uVar42;
    local_5a0 = uVar42;
    local_59c = uVar42;
    local_598 = uVar42;
    local_55c = uVar45;
    local_558 = uVar45;
    FUN_1801d8a70(&local_2e8,&local_658);
    puVar26 = &local_548;
    puVar14 = local_1d8;
    do {
      puVar28 = puVar14;
      puVar23 = puVar26;
      uVar21 = puVar23[1];
      uVar4 = puVar23[2];
      uVar5 = puVar23[3];
      *puVar28 = *puVar23;
      puVar28[1] = uVar21;
      puVar28[2] = uVar4;
      puVar28[3] = uVar5;
      uVar21 = puVar23[5];
      uVar4 = puVar23[6];
      uVar5 = puVar23[7];
      puVar28[4] = puVar23[4];
      puVar28[5] = uVar21;
      puVar28[6] = uVar4;
      puVar28[7] = uVar5;
      uVar21 = puVar23[9];
      uVar4 = puVar23[10];
      uVar5 = puVar23[0xb];
      puVar28[8] = puVar23[8];
      puVar28[9] = uVar21;
      puVar28[10] = uVar4;
      puVar28[0xb] = uVar5;
      uVar21 = puVar23[0xd];
      puVar28[0xc] = puVar23[0xc];
      puVar28[0xd] = uVar21;
      uVar21 = puVar23[0xf];
      puVar28[0xe] = puVar23[0xe];
      puVar28[0xf] = uVar21;
      lVar35 = lVar35 + -1;
      puVar26 = puVar23 + 0x10;
      puVar14 = puVar28 + 0x10;
    } while (lVar35 != 0);
    uVar21 = puVar23[0x11];
    uVar4 = puVar23[0x12];
    uVar5 = puVar23[0x13];
    puVar28[0x10] = puVar23[0x10];
    puVar28[0x11] = uVar21;
    puVar28[0x12] = uVar4;
    puVar28[0x13] = uVar5;
    uVar21 = puVar23[0x15];
    uVar4 = puVar23[0x16];
    uVar5 = puVar23[0x17];
    puVar28[0x14] = puVar23[0x14];
    puVar28[0x15] = uVar21;
    puVar28[0x16] = uVar4;
    puVar28[0x17] = uVar5;
    puVar28[0x18] = puVar23[0x18];
    FUN_1803c10e0(&DAT_180cd0770,&local_2e8);
    FUN_18015c010(local_588);
    FUN_18015c010(local_5e0);
    FUN_18015c010(local_648);
    uVar21 = FUN_1801d8a70(&local_658,&local_778);
    puVar32 = local_808;
    FUN_1803edc60(local_808,uVar21);
    if (local_848 != 0) {
      LOCK();
      DAT_180c63119 = '\x01';
      UNLOCK();
      UVar24 = GetTickCount64();
      DAT_180c63120 = UVar24 + 0xfa;
      if ((cVar15 == '\0') && (cVar15 = FUN_1803f5170(), cVar15 != '\0')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (((((bVar11) && (DAT_1808e6688 != 0)) && (DAT_180c630e8 == DAT_1808e6688)) &&
          ((bVar10 || ((DAT_180c63100 & 1) != 0)))) && ((local_818 < 1 && (DAT_1808e6673 == '\0'))))
      {
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      local_838 = CONCAT44((int)local_7f0[1],(int)*local_7f0);
      iStack_830 = (int)*local_7e8;
      iStack_82c = (int)local_7e8[1];
      FUN_1801d8360(&local_838,uVar21);
      lVar35 = DAT_1808e6688;
      if ((bVar11) && (bVar10)) {
        iVar17 = FUN_1805f68d0(&DAT_1808e6bb0);
        if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808e6bfc == 0x7fffffff) {
          DAT_1808e6bfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((lVar35 == 0) || (DAT_1808e6b90 != lVar35)) {
          FUN_1805f68fc(&DAT_1808e6bb0);
        }
        else {
          auVar44 = ZEXT1664(_DAT_1808e6b98);
          uStack_3e8 = DAT_1808e6ba8;
          FUN_1805f68fc(&DAT_1808e6bb0);
          if (auVar44._0_4_ == DAT_1808e6684) {
            DAT_1808e6672 = 1;
            auVar43 = auVar44._0_16_;
            if ((DAT_1808e667c == 2) &&
               ((DAT_1808e6778 == '\0' || ((DAT_1808e6688 != 0 && (DAT_180c630e0 == DAT_1808e6688)))
                ))) {
              DAT_1808e676c = vextractps_avx(auVar43,1);
              DAT_1808e6770 = vextractps_avx(auVar43,2);
              DAT_1808e6774 = uStack_3e8._4_4_;
              DAT_1808e6778 = '\x01';
              DAT_1808e6671 = 0;
            }
            else if ((DAT_1808e667c == 1) &&
                    ((DAT_1808e6688 != 0 && (DAT_180c630e0 == DAT_1808e6688)))) {
              lVar35 = (longlong)DAT_1808e6680;
              uVar42 = vextractps_avx(auVar43,1);
              (&DAT_1808e66e8)[lVar35 * 7] = uVar42;
              uVar42 = vextractps_avx(auVar43,2);
              (&DAT_1808e66ec)[lVar35 * 7] = uVar42;
              uVar42 = vextractps_avx(auVar43,3);
              (&DAT_1808e66e4)[lVar35 * 7] = uVar42;
              (&DAT_1808e66f0)[lVar35 * 7] = (undefined4)uStack_3e8;
              (&DAT_1808e66e0)[lVar35 * 7] = 0x3f800000;
              (&DAT_1808e6888)[DAT_1808e6680] = 0;
              DAT_1808e6671 = 0;
            }
          }
        }
      }
    }
    FUN_1803f5070(puVar32,*(undefined4 *)puVar30,*(undefined4 *)(puVar30 + 2));
  }
  FUN_18015c010(local_6a8);
  FUN_18015c010(local_700);
  FUN_18015c010(local_768);
}



