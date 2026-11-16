// FUN_1801f36c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f36c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801f36c0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  size_t _Size;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *******_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  undefined8 *puVar5;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  undefined8 *******local_108 [2];
  size_t local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  lVar4 = param_2 - param_1;
  while (0x1bd7 < lVar4) {
    if (param_3 < 1) {
      lVar4 = (param_2 - param_1) / 0x36 + (param_2 - param_1 >> 0x3f);
      lVar7 = (lVar4 >> 2) - (lVar4 >> 0x3f);
      lVar4 = lVar7 >> 1;
      if (0 < lVar4) {
        lVar8 = lVar4 * 0xd8 + param_1;
        do {
          lVar8 = lVar8 + -0xd8;
          lVar4 = lVar4 + -1;
          FUN_1801b90e0(local_128,lVar8);
          local_148 = param_5;
          local_150 = param_5;
          local_158 = param_4;
          FUN_1801f5ec0(param_1,lVar4,lVar7,local_128);
          FUN_18015b930(local_88);
          FUN_18015b930(local_a8);
          FUN_18015c010(local_c8);
          FUN_18015c010(local_e8);
          FUN_18015c010(local_108);
          FUN_18015c010(local_128);
        } while (0 < lVar4);
      }
      if (lVar7 < 2) {
      }
      param_2 = param_2 + -0xd8;
      do {
        if (0x1af < (0xd8 - param_1) + param_2) {
          FUN_1801b90e0(local_128,param_2);
          FUN_180195b10(param_2,param_1);
          local_148 = param_5;
          local_150 = param_5;
          local_158 = param_4;
          FUN_1801f5ec0(param_1,0,(param_2 - param_1) / 0xd8,local_128);
          FUN_18015b930(local_88);
          FUN_18015b930(local_a8);
          FUN_18015c010(local_c8);
          FUN_18015c010(local_e8);
          FUN_18015c010(local_108);
          FUN_18015c010(local_128);
        }
        param_2 = param_2 + -0xd8;
      } while (0x1af < (0xd8 - param_1) + param_2);
    }
    local_158 = param_5;
    local_138 = (undefined1  [16])0x0;
    FUN_1801f4e40(local_138,param_1,param_2,param_4);
    uVar1 = local_138._8_8_;
    lVar7 = local_138._0_8_;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    local_158 = param_5;
    lVar4 = (param_2 - local_138._8_8_) / 0x36 + (param_2 - local_138._8_8_ >> 0x3f);
    if ((local_138._0_8_ - param_1) / 0xd8 < (lVar4 >> 2) - (lVar4 >> 0x3f)) {
      FUN_1801f36c0(param_1,local_138._0_8_,param_3,param_4);
      lVar7 = param_2;
      param_1 = uVar1;
    }
    else {
      FUN_1801f36c0(local_138._8_8_,param_2,param_3,param_4);
    }
    param_2 = lVar7;
    lVar4 = lVar7 - param_1;
  }
  lVar4 = param_1;
  if (param_1 != param_2) {
    while (lVar7 = lVar4 + 0xd8, lVar7 != param_2) {
      FUN_1801b90e0(local_128,lVar7);
      _Size = local_f8;
      puVar5 = (undefined8 *)(lVar4 + 0xf8);
      lVar4 = lVar7;
      do {
        puVar6 = puVar5 + -0x1b;
        _Buf2 = puVar6;
        if (0xf < (ulonglong)puVar5[-0x18]) {
          _Buf2 = (undefined8 *)*puVar6;
        }
        _Buf1 = local_108;
        if (0xf < local_f0) {
          _Buf1 = local_108[0];
        }
        if ((_Size == puVar5[-0x19]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          cVar2 = FUN_180114040(local_128,puVar5 + -0x1f);
        }
        else {
          cVar2 = FUN_180114040(local_108,puVar6);
        }
        if (-1 < cVar2) break;
        FUN_180195b10(lVar4,puVar5 + -0x1f);
        lVar4 = lVar4 + -0xd8;
        puVar5 = puVar6;
      } while (lVar4 != param_1);
      FUN_180195b10(lVar4,local_128);
      FUN_18015b930(local_88);
      FUN_18015b930(local_a8);
      FUN_18015c010(local_c8);
      FUN_18015c010(local_e8);
      FUN_18015c010(local_108);
      FUN_18015c010(local_128);
      lVar4 = lVar7;
    }
  }
}



