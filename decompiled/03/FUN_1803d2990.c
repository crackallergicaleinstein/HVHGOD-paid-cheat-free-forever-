// FUN_1803d2990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d2990 */

undefined8 * FUN_1803d2990(ulonglong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x114) = 0;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0;
  *(undefined8 *)((longlong)param_2 + 0x134) = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x144) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x154) = 0;
  *(undefined8 *)((longlong)param_2 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x164) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  *(undefined8 *)((longlong)param_2 + 0x23c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x244) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x254) = 0;
  *(undefined8 *)((longlong)param_2 + 0x25c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x264) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x274) = 0;
  *(undefined8 *)((longlong)param_2 + 0x27c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x284) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x294) = 0;
  *(undefined8 *)((longlong)param_2 + 0x29c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_2 + 700) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x304) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x314) = 0;
  *(undefined8 *)((longlong)param_2 + 0x31c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x324) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x334) = 0;
  *(undefined8 *)((longlong)param_2 + 0x33c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x344) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x354) = 0;
  *(undefined4 *)((longlong)param_2 + 0x35c) = 0x3f800000;
  local_res8[0] = param_1 & 0xffffffff00000000;
  lVar4 = FUN_1803d2ed0(0,param_3,local_res8);
  if ((lVar4 != 0) && (0 < (int)(uint)local_res8[0])) {
    puVar7 = &DAT_180811b80;
    do {
      uVar5 = (ulonglong)*puVar7;
      if (*puVar7 < (uint)local_res8[0]) {
        lVar6 = uVar5 * 0x20;
        uVar2 = *(undefined4 *)(lVar6 + 8 + lVar4);
        param_2[uVar5 * 4] = *(undefined8 *)(lVar6 + lVar4);
        *(undefined4 *)(param_2 + uVar5 * 4 + 1) = uVar2;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar4);
        uVar3 = puVar1[1];
        param_2[uVar5 * 4 + 2] = *puVar1;
        (param_2 + uVar5 * 4 + 2)[1] = uVar3;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (uint *)&DAT_180811bd4);
  }
  return param_2;
}



