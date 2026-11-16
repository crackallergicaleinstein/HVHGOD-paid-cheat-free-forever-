// FUN_18016c6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016c6e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016c6e0(void)

{
  size_t _Size;
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [35];
  char local_b5;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  puVar5 = DAT_180bb8b20;
  uVar4 = DAT_1808da9d0;
  sVar3 = DAT_1808da9c8;
  puVar2 = DAT_1808da9b8;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  puVar7 = DAT_180bb8b18;
  if (DAT_180bb8b18 != DAT_180bb8b20) {
    do {
      _Buf2 = &DAT_1808da9b8;
      if (0xf < uVar4) {
        _Buf2 = puVar2;
      }
      _Size = puVar7[2];
      _Buf1 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        _Buf1 = (undefined8 *)*puVar7;
      }
    } while (((_Size != sVar3) || ((_Size != 0 && (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 != 0))))
            && (puVar7 = puVar7 + 0x2d, puVar7 != puVar5));
    if ((puVar7 != puVar5) && (*(char *)((longlong)puVar7 + 0xe1) == '\0')) {
      FUN_18016c8d0(local_198,puVar7);
      if (local_b5 == '\0') {
        FUN_18016c0e0();
      }
      else {
        local_1a8 = 0;
        uStack_1a0 = 0xf;
        local_1b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar1[0xf] = 0;
        auVar1._0_15_ = local_1b8._1_15_;
        local_1b8 = auVar1 << 8;
        FUN_18016c9f0();
        FUN_18015c010(local_1b8);
      }
      FUN_18015c010(local_50);
      FUN_18015c010(local_70);
      FUN_18015c010(local_90);
      FUN_18015c010(local_b0);
      FUN_18015c010(local_d8);
      FUN_18015c010(local_f8);
      FUN_18015c010(local_118);
      FUN_18015c010(local_138);
      FUN_18015c010(local_158);
      FUN_18015c010(local_178);
      FUN_18015c010(local_198);
    }
  }
  FUN_180113930(&DAT_180bb8f50,"Workshop originals cannot be cloned. Create a private fork instead."
                ,0x43);
}



