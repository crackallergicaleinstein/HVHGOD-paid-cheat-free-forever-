// FUN_180550d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180550d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180550d40(undefined8 param_1,uint *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auStack_748 [32];
  undefined *local_728;
  undefined1 *local_720;
  undefined8 *local_718;
  float fStack_710;
  float fStack_70c;
  undefined1 local_708 [16];
  undefined1 auStack_6f8 [16];
  ulonglong local_6e8;
  undefined8 *puStack_6e0;
  undefined8 local_6d8;
  uint *local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 uStack_6a8;
  uint local_6a0;
  undefined4 uStack_69c;
  undefined8 *puStack_698;
  undefined8 uStack_690;
  uint local_688 [4];
  undefined8 local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined4 local_660;
  undefined4 local_65c;
  undefined8 local_658;
  undefined4 local_650;
  undefined4 local_64c;
  undefined8 local_648;
  undefined4 local_640;
  undefined4 local_63c;
  undefined8 local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 local_61c;
  undefined8 local_618;
  undefined4 local_610;
  undefined4 local_60c;
  undefined8 local_608;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined8 local_598;
  undefined4 local_590;
  undefined4 local_58c;
  undefined8 local_588;
  undefined4 local_580;
  undefined4 local_57c;
  undefined8 local_578;
  undefined4 local_570;
  undefined4 local_56c;
  undefined8 local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined8 local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined8 local_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined8 local_528;
  undefined4 local_520;
  undefined4 local_51c;
  undefined8 local_518;
  undefined4 local_510;
  undefined4 local_50c;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined8 local_4b8 [28];
  ulonglong local_3d8 [118];
  
  local_3d8[0x70] = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  local_6c8 = param_2;
  FUN_18063ab10(local_4b8,0,0xe0);
  FUN_1800e9bc0(local_3d8,0x1c);
  local_678 = 0;
  auVar19 = ZEXT864(0);
  uStack_670 = 0;
  uStack_66c = 0;
  local_668 = 0;
  local_660 = 0;
  local_65c = 0;
  local_658 = 0;
  local_650 = 0;
  local_64c = 0;
  local_648 = 0;
  local_640 = 0;
  local_63c = 0;
  local_638 = 0;
  local_630 = 0;
  local_62c = 0;
  local_628 = 0;
  local_620 = 0;
  local_61c = 0;
  local_618 = 0;
  local_610 = 0;
  local_60c = 0;
  local_608 = 0;
  local_600 = 0;
  local_5fc = 0;
  local_5f8 = 0;
  local_5f0 = 0;
  local_5ec = 0;
  local_5e8 = 0;
  local_5e0 = 0;
  local_5dc = 0;
  local_5d8 = 0;
  local_5d0 = 0;
  local_5cc = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5bc = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_59c = 0;
  local_598 = 0;
  local_590 = 0;
  local_58c = 0;
  local_588 = 0;
  local_580 = 0;
  local_57c = 0;
  local_578 = 0;
  local_570 = 0;
  local_56c = 0;
  local_568 = 0;
  local_560 = 0;
  local_55c = 0;
  local_558 = 0;
  local_550 = 0;
  local_54c = 0;
  local_548 = 0;
  local_540 = 0;
  local_53c = 0;
  local_538 = 0;
  local_530 = 0;
  local_52c = 0;
  local_528 = 0;
  local_520 = 0;
  local_51c = 0;
  local_518 = 0;
  local_510 = 0;
  local_50c = 0;
  local_508 = 0;
  local_500 = 0;
  local_4fc = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4ec = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4cc = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4bc = 0;
  FUN_1804c2800("Primary Weapon");
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar12 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  pcVar7 = "##value";
  cVar6 = '#';
  uVar13 = uVar12;
  do {
    pcVar7 = pcVar7 + 1;
    if (((cVar6 == '#') && (*pcVar7 == '#')) && (pcVar7[1] == '#')) {
      pcVar7 = pcVar7 + 2;
      uVar13 = uVar12;
    }
    else {
      uVar13 = crc32(uVar13,cVar6);
    }
    cVar6 = *pcVar7;
  } while (cVar6 != '\0');
  uVar13 = ~uVar13;
  if (*(uint *)(*plVar2 + 0x1534) == uVar13) {
    FUN_1804cf810(uVar13,0xb,"##value");
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar13)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_6c0 = _DAT_180bb8890;
  uStack_6b8 = uRam0000000180bb8898;
  puStack_6b0 = (undefined8 *)uRam0000000180bb88a0;
  uStack_6a8 = uRam0000000180bb88a8;
  local_6a0 = (uint)DAT_180bb88b0;
  uStack_69c = DAT_180bb88b0._4_4_;
  puStack_698 = DAT_180bb88b0._8_8_;
  auVar19 = ZEXT1664(auVar19._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_688[0] = *param_2;
  if (0x1b < local_688[0]) {
    local_688[0] = 0;
  }
  lVar16 = 0;
  puVar11 = &local_678;
  uVar14 = 0;
  auVar21 = ZEXT464(0x3f800000);
  do {
    puVar8 = (undefined8 *)FUN_18050a310(local_708,(longlong)&PTR_DAT_180800fb0 + uVar14,local_6a0);
    auVar20 = auVar21._0_16_;
    auVar18 = auVar19._0_16_;
    puVar10 = (undefined8 *)((longlong)local_3d8 + uVar14);
    if (puVar10 != puVar8) {
      FUN_18015c010(puVar10);
      auVar20 = auVar21._0_16_;
      auVar18 = auVar19._0_16_;
      uVar17 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar10 = *puVar8;
      *(undefined8 *)((longlong)local_3d8 + uVar14 + 8) = uVar17;
      *(undefined8 *)((longlong)local_3d8 + uVar14 + 0x10) = uVar3;
      *(undefined8 *)((longlong)local_3d8 + uVar14 + 0x18) = uVar4;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
    }
    auVar19 = ZEXT1664(auVar18);
    auVar21 = ZEXT1664(auVar20);
    FUN_18015c010(local_708);
    if (0xf < *(ulonglong *)((longlong)local_3d8 + uVar14 + 0x18)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    local_4b8[lVar16] = puVar10;
    if (((bVar5) || (lVar16 == (int)local_688[0])) &&
       (**(char **)((longlong)&PTR_PTR_180800fb8 + uVar14) != '\0')) {
      lVar9 = FUN_18050a280((longlong)&PTR_DAT_180800fb0 + uVar14,local_6a0);
      local_708 = (undefined1  [16])0x0;
      auStack_6f8 = (undefined1  [16])0x0;
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (*(char *)(lVar9 + lVar15) != '\0');
      uVar17 = FUN_18015ba30(local_708,lVar9);
      puVar10 = (undefined8 *)FUN_1803db750(uVar17,local_708,auVar21._0_8_);
      FUN_18015c010(local_708);
      if (puVar10 == (undefined8 *)0x0) {
        local_718 = (undefined8 *)0x0;
        fStack_710 = auVar19._0_4_;
        fStack_70c = fStack_710;
      }
      else {
        local_718 = (undefined8 *)*puVar10;
        fStack_710 = (float)*(int *)(puVar10 + 4);
        fStack_70c = (float)*(int *)((longlong)puVar10 + 0x24);
      }
      *puVar11 = local_718;
      puVar11[1] = CONCAT44(fStack_70c,fStack_710);
    }
    lVar16 = lVar16 + 1;
    uVar14 = uVar14 + 0x20;
    puVar11 = puVar11 + 2;
  } while (uVar14 < 0x380);
  if (local_688[0] == 0) {
    local_708 = (undefined1  [16])0x0;
    auStack_6f8 = (undefined1  [16])0x0;
    uVar17 = FUN_18015ba30(local_708,&DAT_1806bc17c,4);
    puVar11 = (undefined8 *)FUN_1803db750(uVar17,local_708,auVar21._0_8_);
    FUN_18015c010();
    if (puVar11 == (undefined8 *)0x0) {
      local_718 = (undefined8 *)0x0;
      fStack_710 = auVar19._0_4_;
      fStack_70c = fStack_710;
    }
    else {
      local_718 = (undefined8 *)*puVar11;
      fStack_710 = (float)*(int *)(puVar11 + 4);
      fStack_70c = (float)*(int *)((longlong)puVar11 + 0x24);
    }
  }
  else {
    local_718 = *(undefined8 **)(local_688 + (longlong)(int)local_688[0] * 4 + 4);
    fStack_710 = (float)*(undefined8 *)(&uStack_670 + (longlong)(int)local_688[0] * 4);
    fStack_70c = (float)((ulonglong)*(undefined8 *)(&uStack_670 + (longlong)(int)local_688[0] * 4)
                        >> 0x20);
  }
  uVar13 = local_6a0;
  local_6c0 = 0;
  uStack_6b8 = 0;
  puStack_6b0 = &local_678;
  uStack_6a8 = 0x1c;
  local_6a0 = local_6a0 & 0xffffff00;
  auVar18._8_4_ = fStack_710;
  auVar18._0_8_ = local_718;
  auVar18._12_4_ = fStack_70c;
  puStack_698 = local_718;
  uStack_690 = auVar18._8_8_;
  local_708 = ZEXT816(0);
  auStack_6f8._8_8_ = 0x1c;
  auStack_6f8._0_8_ = puStack_6b0;
  local_6e8 = CONCAT44(uStack_69c,uVar13) & 0xffffffffffffff00;
  puStack_6e0 = local_718;
  local_6d8 = vmovhpd_avx(auVar18);
  local_718 = local_4b8;
  fStack_710 = 3.92364e-44;
  fStack_70c = 0.0;
  local_720 = local_708;
  local_728 = &DAT_18082a244;
  cVar6 = FUN_18048d220("Primary Weapon",local_688,&local_718,1);
  if (cVar6 != '\0') {
    *local_6c8 = local_688[0];
  }
  _eh_vector_destructor_iterator_(local_3d8,0x20,0x1c,thunk_FUN_18015c010);
}



