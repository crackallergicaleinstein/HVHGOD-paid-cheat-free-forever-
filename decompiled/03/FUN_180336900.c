// FUN_180336900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180336900 */

undefined8 *
FUN_180336900(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined4 *param_16,
             undefined4 *param_17,undefined4 *param_18,undefined4 *param_19,undefined1 *param_20,
             undefined4 *param_21,undefined4 *param_22,undefined4 *param_23,undefined4 *param_24,
             undefined4 *param_25,undefined4 *param_26,undefined4 *param_27,undefined4 *param_28,
             undefined4 *param_29,undefined4 *param_30,undefined1 *param_31,undefined8 *param_32,
             undefined8 *param_33,undefined8 *param_34,undefined8 *param_35,undefined8 *param_36,
             undefined8 *param_37,undefined8 *param_38,undefined1 *param_39,undefined8 *param_40,
             undefined1 *param_41,undefined8 *param_42,undefined4 *param_43,undefined4 *param_44)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 2;
  puVar1 = param_1;
  do {
    puVar2 = puVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined1 (*) [16])(puVar2 + 0xc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar2 + 0x10;
  } while (lVar3 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *(undefined1 (*) [16])(puVar2 + 0x18) = (undefined1  [16])0x0;
  puVar2[0x1a] = 0;
  param_1[0x2b] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  param_1[0x2c] = param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff;
  param_1[1] = param_1[1] | 0xb000000000000000;
  param_1[2] = 0x10;
  *(undefined4 *)(param_1 + 0x2d) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[3] = 0x14;
  *(undefined8 *)((longlong)param_1 + 0x16c) = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x174) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x8000000000000000;
  param_1[5] = 0x24;
  *(undefined8 *)((longlong)param_1 + 0x17c) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x8000000000000000;
  param_1[6] = 0x2c;
  *(undefined8 *)((longlong)param_1 + 0x184) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  param_1[7] = 0x34;
  *(undefined8 *)((longlong)param_1 + 0x18c) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff;
  param_1[7] = param_1[7] | 0x8000000000000000;
  param_1[8] = 0x3c;
  *(undefined8 *)((longlong)param_1 + 0x194) = *param_10;
  param_1[8] = param_1[8] & 0xfffffffffffffff;
  param_1[8] = param_1[8] | 0x8000000000000000;
  param_1[9] = 0x44;
  *(undefined8 *)((longlong)param_1 + 0x19c) = *param_11;
  param_1[9] = param_1[9] & 0xfffffffffffffff;
  param_1[9] = param_1[9] | 0x8000000000000000;
  param_1[10] = 0x4c;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = *param_12;
  param_1[10] = param_1[10] & 0xfffffffffffffff;
  param_1[10] = param_1[10] | 0x8000000000000000;
  param_1[0xb] = 0x54;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *param_13;
  param_1[0xb] = param_1[0xb] & 0xfffffffffffffff;
  param_1[0xb] = param_1[0xb] | 0x8000000000000000;
  param_1[0xc] = 0x5c;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = *param_14;
  param_1[0xc] = param_1[0xc] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[0xd] = 100;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = *param_15;
  param_1[0xd] = param_1[0xd] & 0xfffffffffffffff;
  param_1[0xd] = param_1[0xd] | 0x8000000000000000;
  param_1[0xe] = 0x6c;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *param_16;
  param_1[0xe] = param_1[0xe] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0xf] = 0x70;
  *(undefined4 *)(param_1 + 0x39) = *param_17;
  param_1[0xf] = param_1[0xf] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x10] = 0x74;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *param_18;
  param_1[0x10] = param_1[0x10] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x11] = 0x78;
  *(undefined4 *)(param_1 + 0x3a) = *param_19;
  param_1[0x11] = param_1[0x11] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x12] = 0x7c;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = *param_20;
  param_1[0x12] = param_1[0x12] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x13] = 0x7d;
  *(undefined4 *)((longlong)param_1 + 0x1d5) = *param_21;
  param_1[0x13] = param_1[0x13] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x14] = 0x81;
  *(undefined4 *)((longlong)param_1 + 0x1d9) = *param_22;
  param_1[0x14] = param_1[0x14] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x15] = 0x85;
  *(undefined4 *)((longlong)param_1 + 0x1dd) = *param_23;
  param_1[0x15] = param_1[0x15] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x16] = 0x89;
  *(undefined4 *)((longlong)param_1 + 0x1e1) = *param_24;
  param_1[0x16] = param_1[0x16] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x17] = 0x8d;
  *(undefined4 *)((longlong)param_1 + 0x1e5) = *param_25;
  param_1[0x17] = param_1[0x17] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x18] = 0x91;
  *(undefined4 *)((longlong)param_1 + 0x1e9) = *param_26;
  param_1[0x18] = param_1[0x18] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x19] = 0x95;
  *(undefined4 *)((longlong)param_1 + 0x1ed) = *param_27;
  param_1[0x19] = param_1[0x19] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x1a] = 0x99;
  *(undefined4 *)((longlong)param_1 + 0x1f1) = *param_28;
  param_1[0x1a] = param_1[0x1a] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x1b] = 0x9d;
  *(undefined4 *)((longlong)param_1 + 0x1f5) = *param_29;
  param_1[0x1b] = param_1[0x1b] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x1c] = 0xa1;
  *(undefined4 *)((longlong)param_1 + 0x1f9) = *param_30;
  param_1[0x1c] = param_1[0x1c] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x1d] = 0xa5;
  *(undefined1 *)((longlong)param_1 + 0x1fd) = *param_31;
  param_1[0x1d] = param_1[0x1d] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x1e] = 0xa6;
  *(undefined8 *)((longlong)param_1 + 0x1fe) = *param_32;
  param_1[0x1e] = param_1[0x1e] & 0xfffffffffffffff;
  param_1[0x1e] = param_1[0x1e] | 0x8000000000000000;
  param_1[0x1f] = 0xae;
  *(undefined8 *)((longlong)param_1 + 0x206) = *param_33;
  param_1[0x1f] = param_1[0x1f] & 0xfffffffffffffff;
  param_1[0x1f] = param_1[0x1f] | 0x8000000000000000;
  param_1[0x20] = 0xb6;
  *(undefined8 *)((longlong)param_1 + 0x20e) = *param_34;
  param_1[0x20] = param_1[0x20] & 0xfffffffffffffff;
  param_1[0x20] = param_1[0x20] | 0x8000000000000000;
  param_1[0x21] = 0xbe;
  *(undefined8 *)((longlong)param_1 + 0x216) = *param_35;
  param_1[0x21] = param_1[0x21] & 0xfffffffffffffff;
  param_1[0x21] = param_1[0x21] | 0x8000000000000000;
  param_1[0x22] = 0xc6;
  *(undefined8 *)((longlong)param_1 + 0x21e) = *param_36;
  param_1[0x22] = param_1[0x22] & 0xfffffffffffffff;
  param_1[0x22] = param_1[0x22] | 0x8000000000000000;
  param_1[0x23] = 0xce;
  *(undefined8 *)((longlong)param_1 + 0x226) = *param_37;
  param_1[0x23] = param_1[0x23] & 0xfffffffffffffff;
  param_1[0x23] = param_1[0x23] | 0x8000000000000000;
  param_1[0x24] = 0xd6;
  *(undefined8 *)((longlong)param_1 + 0x22e) = *param_38;
  param_1[0x24] = param_1[0x24] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[0x25] = 0xde;
  *(undefined1 *)((longlong)param_1 + 0x236) = *param_39;
  param_1[0x25] = param_1[0x25] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x26] = 0xdf;
  *(undefined8 *)((longlong)param_1 + 0x237) = *param_40;
  param_1[0x26] = param_1[0x26] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[0x27] = 0xe7;
  *(undefined1 *)((longlong)param_1 + 0x23f) = *param_41;
  param_1[0x27] = param_1[0x27] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x28] = 0xe8;
  param_1[0x48] = *param_42;
  param_1[0x28] = param_1[0x28] & 0xfffffffffffffff;
  param_1[0x28] = param_1[0x28] | 0x8000000000000000;
  param_1[0x29] = 0xf0;
  *(undefined4 *)(param_1 + 0x49) = *param_43;
  param_1[0x29] = param_1[0x29] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0x2a] = 0xf4;
  *(undefined4 *)((longlong)param_1 + 0x24c) = *param_44;
  param_1[0x2a] = param_1[0x2a] & 0xfffffffffffffff | 0x2000000000000000;
  return param_1;
}



