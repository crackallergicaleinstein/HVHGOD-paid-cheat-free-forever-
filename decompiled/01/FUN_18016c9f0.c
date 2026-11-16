// FUN_18016c9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016c9f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016c9f0(void)

{
  undefined1 uVar1;
  size_t _Size;
  undefined8 *puVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar11;
  longlong in_R9;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined1 *local_210;
  longlong local_208;
  undefined1 local_1f8 [16];
  undefined8 local_1e8 [2];
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  size_t local_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [24];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [24];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [24];
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  puVar5 = DAT_180bb8b20;
  uVar4 = DAT_1808da9d0;
  sVar3 = DAT_1808da9c8;
  puVar2 = DAT_1808da9b8;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_238;
  puVar11 = DAT_180bb8b18;
  if (DAT_180bb8b18 != DAT_180bb8b20) {
    do {
      _Buf2 = &DAT_1808da9b8;
      if (0xf < uVar4) {
        _Buf2 = puVar2;
      }
      _Size = puVar11[2];
      _Buf1 = puVar11;
      if (0xf < (ulonglong)puVar11[3]) {
        _Buf1 = (undefined8 *)*puVar11;
      }
    } while (((_Size != sVar3) || ((_Size != 0 && (iVar8 = memcmp(_Buf1,_Buf2,_Size), iVar8 != 0))))
            && (puVar11 = puVar11 + 0x2d, puVar11 != puVar5));
    if ((puVar11 != puVar5) &&
       ((*(char *)((longlong)puVar11 + 0xe1) != '\0' ||
        (*(char *)((longlong)puVar11 + 0xe3) != '\0')))) {
      local_1f8 = (undefined1  [16])0x0;
      local_1c8 = &DAT_1808da9b8;
      if (0xf < uVar4) {
        local_1c8 = puVar2;
      }
      local_1c0 = sVar3;
      FUN_180172610(&DAT_180bb8af0,local_1f8,&local_1c8);
      if (local_1f8._8_8_ != 0) {
        local_58 = (undefined1  [16])0x0;
        local_48 = (undefined1  [16])0x0;
        FUN_18015ba30(local_58,local_1f8._0_8_);
        FUN_18016df60(&DAT_180bb8af0,local_58,0);
        FUN_18015c010(local_58);
      }
      FUN_1801666f0(local_58);
      uVar9 = local_48._0_8_;
      if (local_48._0_8_ != 0) {
        FUN_1800e60e0(local_a8,"action");
        FUN_1800e60e0(local_90,"create");
        local_1f8._0_8_ = local_a8;
        local_1f8._8_8_ = local_78;
        FUN_1800f4e90(local_108,local_1f8,1,2);
        local_f8 = 0;
        FUN_1800e60e0(local_138,&DAT_1806bc068);
        if (0x7fffffffffffffff - uVar9 < 0xd) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        local_210 = local_58;
        if (0xf < (ulonglong)local_48._8_8_) {
          local_210 = (undefined1 *)local_58._0_8_;
        }
        local_208 = uVar9;
        local_218 = 0xd;
        FUN_18015a9c0(local_1b8);
        FUN_1800e6ec0(local_120,local_1b8);
        local_110 = 0;
        local_1f8._8_8_ = local_108;
        local_1f8._0_8_ = local_138;
        FUN_1800f4e90(local_f0,local_1f8,1,2);
        local_e0 = 0;
        FUN_1800e60e0(local_168,"source");
        FUN_1800e64d0(local_150,&DAT_1808da9b8);
        local_140 = 0;
        local_1f8._0_8_ = local_168;
        local_1f8._8_8_ = local_138;
        FUN_1800f4e90(local_d8,local_1f8,1,2);
        local_c8 = 0;
        FUN_1800e60e0(local_198,&DAT_1806bd758);
        uVar9 = FUN_180166570(local_78);
        FUN_1800e6ec0(local_180,uVar9);
        local_170 = 0;
        local_1f8._0_8_ = local_198;
        local_1f8._8_8_ = local_168;
        FUN_1800f4e90(local_c0,local_1f8,1,2);
        local_b0 = 0;
        local_1f8._8_8_ = local_a8;
        local_1f8._0_8_ = local_108;
        FUN_1800f4e90(&local_1d8,local_1f8,1,2);
        _eh_vector_destructor_iterator_(local_108,0x18,4,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_198,0x18,2,FUN_1800aab30);
        FUN_18015c010(local_78);
        _eh_vector_destructor_iterator_(local_168,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_138,0x18,2,FUN_1800aab30);
        FUN_18015c010(local_1b8);
        _eh_vector_destructor_iterator_(local_a8,0x18,2,FUN_1800aab30);
        if (*(longlong *)(in_R9 + 0x10) != 0) {
          local_1c8 = (undefined8 *)local_1f8;
          local_1f8 = ZEXT816(0);
          FUN_1801409d0(local_1f8 + 8,0);
          local_1f8[0] = 3;
          FUN_180111c50(local_1e8,in_R9);
          local_1f8._8_8_ = local_1e8[0];
          local_1b8 = (undefined1  [16])0x0;
          local_1a8 = 0;
          local_1a0 = 0;
          FUN_18015ba30(local_1b8,"payload",7);
          puVar10 = (undefined1 *)FUN_1800f43d0(&local_1d8,local_1b8);
          auVar6 = local_1f8;
          uVar1 = *puVar10;
          *puVar10 = local_1f8[0];
          local_1f8[0] = uVar1;
          auVar7 = local_1f8;
          uVar9 = *(undefined8 *)(puVar10 + 8);
          local_1f8._8_8_ = auVar6._8_8_;
          *(undefined8 *)(puVar10 + 8) = local_1f8._8_8_;
          local_1f8._0_8_ = auVar7._0_8_;
          local_1f8._8_8_ = uVar9;
          FUN_1801409d0(local_1f8 + 8,uVar1);
        }
        local_1f8._1_7_ = uStack_1d7;
        local_1f8[0] = local_1d8;
        local_1f8._8_8_ = uStack_1d0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        FUN_180172820(&DAT_180bb8af0,local_1f8);
        FUN_1801409d0(&uStack_1d0,local_1d8);
      }
      FUN_18015c010(local_58);
    }
  }
  FUN_180113930(&DAT_180bb8f50,"Choose a workshop config to fork.",0x21);
}



