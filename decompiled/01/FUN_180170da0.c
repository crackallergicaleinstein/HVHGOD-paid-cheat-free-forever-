// FUN_180170da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180170da0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180170da0(undefined1 **param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  size_t _Size;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  char cVar8;
  int iVar9;
  BOOL BVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  char *pcVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 **ppuVar19;
  undefined8 *puVar20;
  undefined8 *_Buf1;
  HANDLE *ppvVar21;
  HANDLE pvVar22;
  undefined8 *_Buf2;
  longlong lVar23;
  HANDLE **pppvVar24;
  undefined1 auStack_1f8 [48];
  undefined1 **local_1c8 [2];
  undefined1 *local_1b8;
  undefined8 *puStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 *local_188;
  undefined1 **local_180 [2];
  undefined1 local_170 [24];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *local_108;
  HANDLE local_100;
  HANDLE local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char local_c8;
  undefined7 uStack_c7;
  longlong *plStack_c0;
  char local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 local_70 [32];
  HANDLE *local_50;
  HANDLE *local_48;
  HANDLE *local_40;
  
  local_40 = (HANDLE *)(DAT_1808d5f00 ^ (ulonglong)auStack_1f8);
  local_190 = 0;
  local_1c8[0] = param_1;
  local_188 = param_3;
  local_108 = param_3;
  FUN_1800f5370(local_70,param_2 + 0x50);
  local_e8 = (undefined1  [16])0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_180159e60(local_e8,L".json",5);
  FUN_1801629c0(local_70,local_e8);
  FUN_18015b930(local_e8);
  local_f8 = (HANDLE)0xffffffffffffffff;
  local_100 = (HANDLE)0xffffffffffffffff;
  FUN_180170910(&local_f8,param_2 + 0x50);
  FUN_180170910(&local_100,local_70);
  if ((((longlong)local_f8 + 1U & 0xfffffffffffffffe) == 0) &&
     (0xfffffffffffffffd < (longlong)local_100 - 1U)) {
    FUN_1800e60e0(local_170,"noLegacy");
    local_158 = ZEXT816(0);
    FUN_1801409d0(local_158 + 8,0);
    local_158[0] = 4;
    local_1c8[0] = (undefined1 **)CONCAT71(local_1c8[0]._1_7_,1);
    local_158._8_8_ = local_1c8[0];
    local_148 = 0;
    local_1b8 = local_170;
    puStack_1b0 = &local_140;
    FUN_1800f4e90(local_e8,&local_1b8,1,2);
    uStack_d8 = 0;
    local_1b8 = local_e8;
    puStack_1b0 = &uStack_d0;
    FUN_1800f4e90(param_1,&local_1b8,1,2);
    _eh_vector_destructor_iterator_(local_e8,0x18,1,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_170,0x18,2,FUN_1800aab30);
    if ((longlong)local_100 - 1U < 0xfffffffffffffffe) {
      CloseHandle(local_100);
    }
  }
  else {
    pvVar22 = local_100;
    if ((longlong)local_f8 - 1U < 0xfffffffffffffffe) {
      pvVar22 = local_f8;
    }
    FUN_180170a80(local_b8,pvVar22,(longlong)local_f8 - 1U < 0xfffffffffffffffe);
    local_1c8[0] = &local_1b8;
    local_e8 = (undefined1  [16])0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    FUN_18015ba30(local_e8,"forks",5);
    puVar11 = (undefined8 *)FUN_1800f43d0(local_b8,local_e8);
    local_1b8 = (undefined1 *)*puVar11;
    puStack_1b0 = (undefined8 *)puVar11[1];
    *(undefined1 *)puVar11 = 0;
    puVar11[1] = 0;
    lVar1 = param_2 + 0x40;
    local_e8 = (undefined1  [16])0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    FUN_18015ba30(local_e8,"forks",5);
    puVar12 = (undefined1 *)FUN_1800f43d0(lVar1,local_e8);
    uVar2 = *puVar12;
    *puVar12 = local_1b8._0_1_;
    local_1b8 = (undefined1 *)CONCAT71(local_1b8._1_7_,uVar2);
    puVar11 = *(undefined8 **)(puVar12 + 8);
    *(undefined8 **)(puVar12 + 8) = puStack_1b0;
    puStack_1b0 = puVar11;
    FUN_1801409d0(&puStack_1b0,uVar2);
    local_180[0] = &local_1b8;
    uStack_d8 = 0;
    uStack_d0 = 0xf;
    local_e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_e8._1_15_;
    local_e8 = auVar5 << 8;
    if (local_b8[0] != '\x01') {
      local_188 = (undefined8 *)FUN_180112a50(local_b8);
      uVar13 = FUN_1800f6bd0(local_170,"cannot use value() with ",&local_188);
      FUN_1800f6ca0(local_a8,0x132,uVar13);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_a8,&DAT_1808d1050);
    }
    local_a8 = ZEXT816(0);
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_1800e6b50(local_b8,local_a8,"active");
    uVar13 = FUN_1800f3e20(local_b8,local_170);
    cVar8 = FUN_1800e6ca0(local_a8,uVar13);
    if (cVar8 == '\0') {
      uVar13 = FUN_1800f34a0(local_a8);
      FUN_1800e69c0(uVar13,&local_140);
    }
    else {
      local_140 = local_e8._0_8_;
      uStack_138 = local_e8._8_8_;
      uStack_130 = uStack_d8;
      uStack_128 = uStack_d0;
      uStack_d8 = 0;
      uStack_d0 = 0xf;
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_e8._1_15_;
      local_e8 = auVar6 << 8;
    }
    puVar12 = (undefined1 *)FUN_1800e6ec0(&local_1b8,&local_140);
    local_a8 = (undefined1  [16])0x0;
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_18015ba30(local_a8,"active",6);
    puVar14 = (undefined1 *)FUN_1800f43d0(lVar1,local_a8);
    uVar2 = *puVar14;
    *puVar14 = *puVar12;
    *puVar12 = uVar2;
    puVar11 = (undefined8 *)(puVar12 + 8);
    uVar13 = *(undefined8 *)(puVar14 + 8);
    *(undefined8 *)(puVar14 + 8) = *puVar11;
    *puVar11 = uVar13;
    FUN_1801409d0(puVar11,*puVar12);
    FUN_18015c010(&local_140);
    FUN_18015c010(local_e8);
    local_1c8[0] = (undefined1 **)*param_3;
    if (local_1c8[0] != (undefined1 **)0x0) {
      LOCK();
      *(int *)local_1c8[0] = *(int *)local_1c8[0] + 1;
      UNLOCK();
    }
    FUN_18016f430(&local_c8,param_2,local_1c8,0);
    plVar7 = plStack_c0;
    if ((local_c8 == '\x01') &&
       (plVar15 = (longlong *)FUN_1800f6de0(plStack_c0,local_180,"error"), *plVar15 != *plVar7)) {
      *param_1 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
      param_1[1] = (undefined1 *)plStack_c0;
      local_c8 = '\0';
      plStack_c0 = (longlong *)0x0;
      FUN_1801409d0(&plStack_c0,0);
      FUN_1801409d0(local_b0,local_b8[0]);
    }
    else {
      local_1a8 = (undefined1  [16])0x0;
      local_198 = 0;
      pcVar16 = (char *)FUN_1801757b0(&local_c8,"migrated");
      local_1a8 = (undefined1  [16])0x0;
      local_198 = 0;
      local_190 = 0x2e;
      if (*pcVar16 != '\x02') {
        local_1c8[0] = (undefined1 **)FUN_180112a50(pcVar16);
        uVar13 = FUN_18017b160(local_170);
        FUN_1800f6ca0(&local_140,0x12e,uVar13);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(&local_140,&DAT_1808d1050);
      }
      local_e8 = (undefined1  [16])0x0;
      uStack_d8 = 0;
      uVar13 = FUN_1800f3d40(pcVar16);
      FUN_18017b7f0(local_e8,uVar13);
      puVar11 = (undefined8 *)local_e8._8_8_;
      uVar13 = FUN_1800f3e20(pcVar16,local_170);
      uVar17 = FUN_1800f3f60(pcVar16,&local_140);
      local_1b8 = local_e8;
      puStack_1b0 = puVar11;
      FUN_18017b470(local_180,uVar17,uVar13,&local_1b8);
      FUN_180111b90(local_1a8);
      local_1a8 = local_e8;
      local_198 = uStack_d8;
      local_e8 = (undefined1  [16])0x0;
      uStack_d8 = 0;
      FUN_180111b90(local_e8);
      lVar23 = local_1a8._8_8_ - local_1a8._0_8_;
      local_a8 = (undefined1  [16])0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_18015ba30(local_a8,"forks",5);
      uVar13 = FUN_1800f43d0(lVar1,local_a8);
      lVar18 = FUN_1800f3d40(uVar13);
      if (lVar23 >> 5 != lVar18) {
LAB_180171558:
        FUN_18015c090(local_e8,"The server did not confirm every local fork.");
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_e8,&DAT_1808d12a8);
      }
      local_a8 = (undefined1  [16])0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_18015ba30(local_a8,"forks",5);
      uVar13 = FUN_1800f43d0(lVar1,local_a8);
      ppuVar19 = (undefined1 **)FUN_1800ef8b0(local_170,uVar13);
      local_1c8[0] = ppuVar19;
      uVar13 = FUN_1800ef7b0(local_e8);
      cVar8 = FUN_1800e6ca0(uVar13,ppuVar19);
      if (cVar8 == '\0') {
        do {
          uVar17 = FUN_1800f3560(uVar13);
          uVar17 = FUN_180175a00(uVar17);
          puVar20 = (undefined8 *)FUN_1800e69c0(uVar17,&local_140);
          uVar17 = local_1a8._8_8_;
          puVar11 = (undefined8 *)local_1a8._0_8_;
          if (local_1a8._0_8_ != local_1a8._8_8_) {
            uVar3 = puVar20[3];
            sVar4 = puVar20[2];
            do {
              _Buf2 = puVar20;
              if (0xf < uVar3) {
                _Buf2 = (undefined8 *)*puVar20;
              }
              _Size = puVar11[2];
              _Buf1 = puVar11;
              if (0xf < (ulonglong)puVar11[3]) {
                _Buf1 = (undefined8 *)*puVar11;
              }
            } while (((_Size != sVar4) ||
                     ((_Size != 0 && (iVar9 = memcmp(_Buf1,_Buf2,_Size), iVar9 != 0)))) &&
                    (puVar11 = puVar11 + 4, puVar11 != (undefined8 *)uVar17));
            ppuVar19 = local_1c8[0];
          }
          FUN_18015c010(&local_140);
          if (puVar11 == (undefined8 *)uVar17) goto LAB_180171558;
          FUN_1800f33e0(uVar13);
          cVar8 = FUN_1800e6ca0(uVar13,ppuVar19);
        } while (cVar8 == '\0');
        param_3 = local_188;
      }
      local_f0[0] = 1;
      local_50 = &local_100;
      local_48 = &local_f8;
      pppvVar24 = &local_50;
      ppvVar21 = &local_100;
      while( true ) {
        pvVar22 = *ppvVar21;
        if (((pvVar22 != (HANDLE)0x0) && (pvVar22 != (HANDLE)0xffffffffffffffff)) &&
           (BVar10 = SetFileInformationByHandle(pvVar22,FileDispositionInfo,local_f0,1), BVar10 == 0
           )) {
          FUN_18015c090(local_e8,"Forks are saved on the server. Local cleanup will retry.");
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_e8,&DAT_1808d12a8);
        }
        pppvVar24 = pppvVar24 + 1;
        if (pppvVar24 == &local_40) break;
        ppvVar21 = *pppvVar24;
      }
      *param_1 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
      param_1[1] = (undefined1 *)plStack_c0;
      local_c8 = '\0';
      plStack_c0 = (longlong *)0x0;
      FUN_180111b90(local_1a8);
      FUN_1801409d0(&plStack_c0,local_c8);
      FUN_1801409d0(local_b0,local_b8[0]);
    }
    if ((longlong)local_100 - 1U < 0xfffffffffffffffe) {
      CloseHandle(local_100);
    }
  }
  if ((longlong)local_f8 - 1U < 0xfffffffffffffffe) {
    CloseHandle(local_f8);
  }
  FUN_18015b930(local_70);
  FUN_18017cdd0(param_3);
}



