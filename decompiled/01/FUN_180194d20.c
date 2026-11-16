// FUN_180194d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180194d20 */

undefined8 FUN_180194d20(undefined8 param_1,undefined8 param_2,void *param_3)

{
  undefined1 uVar1;
  size_t _Size;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *_Buf1;
  void *_Buf2;
  undefined1 *puVar6;
  ulonglong *puVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 local_198 [16];
  undefined1 local_188 [24];
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 **local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [8];
  
  uVar10 = 0;
  iVar3 = FUN_1805f68d0(&DAT_180b90310);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b9035c == 0x7fffffff) {
    DAT_180b9035c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_198 = (undefined1  [16])0x0;
  FUN_1800f4e90(param_2,local_198,0,1,uVar10);
  iVar3 = 0;
  puVar8 = &DAT_180b90640;
  puVar7 = (ulonglong *)((longlong)param_3 + 0x18);
  do {
    if (puVar8[0x28] != '\0') {
      _Buf2 = param_3;
      if (0xf < *puVar7) {
        _Buf2 = (void *)puVar7[-3];
      }
      _Size = *(size_t *)(puVar8 + -0xe8);
      _Buf1 = (undefined8 *)(puVar8 + -0xf8);
      if (0xf < *(ulonglong *)(puVar8 + -0xe0)) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if (_Size == puVar7[-1]) {
        if (_Size != 0) {
          iVar4 = memcmp(_Buf1,_Buf2,_Size);
          if (iVar4 != 0) goto LAB_180195037;
        }
        FUN_1800e60e0(local_c0,"sha256");
        FUN_1800e64d0(local_a8,puVar8 + -0x20);
        local_98 = 0;
        local_158 = local_c0;
        local_150 = local_90;
        FUN_1800f4e90(local_88,&local_158,1,2);
        local_78 = 0;
        FUN_1800e60e0(local_f0,"model");
        FUN_1800e64d0(local_d8,puVar8);
        local_c8 = 0;
        local_148 = local_f0;
        local_140 = local_c0;
        FUN_1800f4e90(local_70,&local_148,1,2);
        local_60 = 0;
        FUN_1800e60e0(local_188,"bytes");
        local_170 = ZEXT816(0);
        uVar2 = *(undefined8 *)(puVar8 + 0x20);
        FUN_1801409d0(local_170 + 8,0);
        local_170[0] = 6;
        local_170._8_8_ = uVar2;
        local_160 = 0;
        local_138 = local_188;
        local_130 = &local_158;
        FUN_1800f4e90(local_58,&local_138,1,2);
        local_48 = 0;
        local_198._8_8_ = local_40;
        local_198._0_8_ = local_88;
        puVar5 = (undefined1 *)FUN_1800f4e90(local_100,local_198,1,2);
        puVar6 = &DAT_1806bdfcc;
        if (iVar3 != 0) {
          puVar6 = &DAT_1806be004;
        }
        local_128 = (undefined1  [16])0x0;
        local_118 = 0;
        local_110 = 0;
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (puVar6[lVar9] != '\0');
        FUN_18015ba30(local_128);
        puVar6 = (undefined1 *)FUN_1800f43d0(param_2,local_128);
        uVar1 = *puVar6;
        *puVar6 = *puVar5;
        *puVar5 = uVar1;
        uVar2 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar5 + 8);
        *(undefined8 *)(puVar5 + 8) = uVar2;
        FUN_1801409d0(puVar5 + 8,*puVar5);
        _eh_vector_destructor_iterator_(local_88,0x18,3,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_188,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_f0,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_c0,0x18,2,FUN_1800aab30);
      }
    }
LAB_180195037:
    iVar3 = iVar3 + 1;
    param_3 = (void *)((longlong)param_3 + 0x20);
    puVar7 = puVar7 + 4;
    puVar8 = puVar8 + 0x128;
    if (1 < iVar3) {
      FUN_1805f68fc(&DAT_180b90310);
      return param_2;
    }
  } while( true );
}



