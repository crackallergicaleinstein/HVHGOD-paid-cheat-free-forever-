// FUN_18053ca40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053ca40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18053ca40(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint _C;
  byte *pbVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auStackY_238 [32];
  undefined1 local_1f8 [16];
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  undefined1 auStack_1c0 [16];
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong local_188 [40];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_238;
  FUN_1800e9bc0(local_188,10);
  puVar8 = local_188;
  uVar11 = 0;
  auVar14 = ZEXT1664(_DAT_18086d450);
  do {
    local_1f8 = (undefined1  [16])0x0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(*(longlong *)((longlong)&PTR_s_shop_click_180800440 + uVar11) + lVar10) !=
             '\0');
    FUN_18015ba30(local_1f8);
    auVar13 = auVar14._0_16_;
    bVar12 = true;
    pbVar7 = local_1f8;
    if (0xf < uStack_1e0) {
      pbVar7 = (byte *)local_1f8._0_8_;
    }
    pbVar9 = pbVar7 + uStack_1e8;
    uVar5 = uStack_1e8;
    uVar6 = uStack_1e0;
    uVar3 = uStack_1a0;
    uVar4 = uStack_198;
    for (; uStack_198 = uVar6, uStack_1a0 = uVar5, pbVar7 != pbVar9; pbVar7 = pbVar7 + 1) {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
      bVar1 = *pbVar7;
      _C = (uint)bVar1;
      uStack_1e8 = uStack_1a0;
      uStack_1e0 = uStack_198;
      if ((bVar1 == 0x5f) || (bVar1 == 0x2d)) {
        uStack_1a0 = uVar3;
        uStack_198 = uVar4;
        *pbVar7 = 0x20;
        _C = 0x20;
        uVar3 = uStack_1a0;
        uVar4 = uStack_198;
      }
      uStack_198 = uVar4;
      uStack_1a0 = uVar3;
      if (bVar12) {
        _C = toupper(_C);
        *pbVar7 = (byte)_C;
      }
      auVar13 = auVar14._0_16_;
      bVar12 = (char)_C == ' ';
      uVar5 = uStack_1e8;
      uVar6 = uStack_1e0;
      uVar3 = uStack_1a0;
      uVar4 = uStack_198;
    }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
    local_1b0 = local_1f8._0_8_;
    uStack_1a8 = local_1f8._8_8_;
    local_1d0 = local_1f8._0_8_;
    uStack_1c8 = local_1f8._8_8_;
    auStack_1c0._8_8_ = uStack_198;
    auStack_1c0._0_8_ = uStack_1a0;
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_1f8._1_15_;
    local_1f8 = auVar2 << 8;
    uStack_1e8 = 0;
    uStack_1e0 = 0xf;
    auVar14 = ZEXT1664(auVar13);
    FUN_18015c010(local_1f8);
    auVar13 = auVar14._0_16_;
    if (puVar8 != &local_1d0) {
      FUN_18015c010(puVar8);
      *puVar8 = local_1b0;
      puVar8[1] = uStack_1a8;
      puVar8[2] = uStack_1a0;
      puVar8[3] = uStack_198;
      auVar13 = auVar14._0_16_;
      local_1d0 = local_1d0 & 0xffffffffffffff00;
      auStack_1c0 = auVar13;
    }
    auVar14 = ZEXT1664(auVar13);
    FUN_18015c010(&local_1d0);
    uVar11 = uVar11 + 0x10;
    puVar8 = puVar8 + 4;
  } while (uVar11 < 0xa0);
  _eh_vector_copy_constructor_iterator_
            (&DAT_180cd7370,local_188,0x20,10,FUN_18015b330,thunk_FUN_18015c010);
  _eh_vector_destructor_iterator_(local_188,0x20,10,thunk_FUN_18015c010);
}



