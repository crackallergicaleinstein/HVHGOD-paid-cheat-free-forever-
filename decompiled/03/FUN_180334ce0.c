// FUN_180334ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334ce0 */

undefined8 *
FUN_180334ce0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16,
             undefined8 *param_17,undefined8 *param_18,undefined8 *param_19,undefined8 *param_20,
             undefined4 *param_21,undefined4 *param_22,undefined8 *param_23,undefined1 *param_24,
             undefined8 *param_25,undefined8 *param_26,undefined1 *param_27,undefined8 *param_28,
             undefined8 *param_29,undefined8 *param_30,undefined8 *param_31,undefined8 *param_32,
             undefined4 *param_33,undefined4 *param_34,undefined4 *param_35,undefined8 *param_36,
             undefined8 *param_37,undefined8 *param_38,undefined8 *param_39,undefined1 *param_40,
             undefined8 *param_41,undefined1 *param_42,undefined8 *param_43,undefined8 *param_44,
             undefined8 *param_45,undefined8 *param_46,undefined8 *param_47,undefined8 *param_48,
             undefined4 *param_49,undefined4 *param_50,undefined8 *param_51,undefined1 *param_52,
             undefined8 *param_53,undefined8 *param_54,undefined8 *param_55,undefined8 *param_56,
             undefined1 *param_57,undefined8 *param_58,undefined1 *param_59,undefined1 *param_60,
             undefined8 *param_61,undefined8 *param_62,undefined8 *param_63,undefined8 *param_64,
             undefined8 *param_65,undefined8 *param_66)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *in_stack_00000218;
  undefined8 *in_stack_00000220;
  undefined8 *in_stack_00000228;
  
  lVar3 = 4;
  puVar4 = param_1;
  do {
    puVar2 = puVar4;
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
    puVar4 = puVar2 + 0x10;
  } while (lVar3 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  param_1[0x44] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  param_1[0x45] = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[2] = 0x10;
  *(undefined1 *)(param_1 + 0x46) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[3] = 0x11;
  *(undefined8 *)((longlong)param_1 + 0x231) = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[4] = 0x19;
  *(undefined8 *)((longlong)param_1 + 0x239) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[5] = 0x21;
  *(undefined4 *)((longlong)param_1 + 0x241) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[6] = 0x25;
  *(undefined4 *)((longlong)param_1 + 0x245) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[7] = 0x29;
  *(undefined8 *)((longlong)param_1 + 0x249) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff;
  param_1[7] = param_1[7] | 0x8000000000000000;
  param_1[8] = 0x31;
  *(undefined8 *)((longlong)param_1 + 0x251) = *param_10;
  param_1[8] = param_1[8] & 0xfffffffffffffff;
  param_1[8] = param_1[8] | 0x8000000000000000;
  param_1[9] = 0x39;
  *(undefined8 *)((longlong)param_1 + 0x259) = *param_11;
  param_1[9] = param_1[9] & 0xfffffffffffffff;
  param_1[9] = param_1[9] | 0x8000000000000000;
  param_1[10] = 0x41;
  *(undefined8 *)((longlong)param_1 + 0x261) = *param_12;
  param_1[10] = param_1[10] & 0xfffffffffffffff;
  param_1[10] = param_1[10] | 0x8000000000000000;
  param_1[0xb] = 0x49;
  *(undefined8 *)((longlong)param_1 + 0x269) = *param_13;
  param_1[0xb] = param_1[0xb] & 0xfffffffffffffff;
  param_1[0xb] = param_1[0xb] | 0x8000000000000000;
  param_1[0xc] = 0x51;
  *(undefined8 *)((longlong)param_1 + 0x271) = *param_14;
  param_1[0xc] = param_1[0xc] & 0xfffffffffffffff;
  param_1[0xc] = param_1[0xc] | 0x8000000000000000;
  param_1[0xd] = 0x59;
  *(undefined8 *)((longlong)param_1 + 0x279) = *param_15;
  param_1[0xd] = param_1[0xd] & 0xfffffffffffffff;
  param_1[0xd] = param_1[0xd] | 0x8000000000000000;
  param_1[0xe] = 0x61;
  *(undefined8 *)((longlong)param_1 + 0x281) = *param_16;
  param_1[0xe] = param_1[0xe] & 0xfffffffffffffff;
  param_1[0xe] = param_1[0xe] | 0x8000000000000000;
  param_1[0xf] = 0x69;
  *(undefined8 *)((longlong)param_1 + 0x289) = *param_17;
  param_1[0xf] = param_1[0xf] & 0xfffffffffffffff;
  param_1[0xf] = param_1[0xf] | 0x8000000000000000;
  param_1[0x10] = 0x71;
  *(undefined8 *)((longlong)param_1 + 0x291) = *param_18;
  param_1[0x10] = param_1[0x10] & 0xfffffffffffffff;
  param_1[0x10] = param_1[0x10] | 0x8000000000000000;
  param_1[0x11] = 0x79;
  *(undefined8 *)((longlong)param_1 + 0x299) = *param_19;
  param_1[0x11] = param_1[0x11] & 0xfffffffffffffff;
  param_1[0x11] = param_1[0x11] | 0x8000000000000000;
  param_1[0x12] = 0x81;
  *(undefined8 *)((longlong)param_1 + 0x2a1) = *param_20;
  param_1[0x12] = param_1[0x12] & 0xfffffffffffffff;
  param_1[0x12] = param_1[0x12] | 0x8000000000000000;
  param_1[0x13] = 0x89;
  *(undefined4 *)((longlong)param_1 + 0x2a9) = *param_21;
  param_1[0x13] = param_1[0x13] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0x14] = 0x8d;
  *(undefined4 *)((longlong)param_1 + 0x2ad) = *param_22;
  param_1[0x14] = param_1[0x14] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0x15] = 0x91;
  *(undefined8 *)((longlong)param_1 + 0x2b1) = *param_23;
  param_1[0x15] = param_1[0x15] & 0xfffffffffffffff;
  param_1[0x15] = param_1[0x15] | 0x8000000000000000;
  param_1[0x16] = 0x99;
  *(undefined1 *)((longlong)param_1 + 0x2b9) = *param_24;
  param_1[0x16] = param_1[0x16] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x17] = 0x9a;
  *(undefined8 *)((longlong)param_1 + 0x2ba) = *param_25;
  param_1[0x17] = param_1[0x17] & 0xfffffffffffffff;
  param_1[0x17] = param_1[0x17] | 0x8000000000000000;
  param_1[0x18] = 0xa2;
  *(undefined8 *)((longlong)param_1 + 0x2c2) = *param_26;
  param_1[0x18] = param_1[0x18] & 0xfffffffffffffff;
  param_1[0x18] = param_1[0x18] | 0x8000000000000000;
  param_1[0x19] = 0xaa;
  *(undefined1 *)((longlong)param_1 + 0x2ca) = *param_27;
  param_1[0x19] = param_1[0x19] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x1a] = 0xab;
  *(undefined8 *)((longlong)param_1 + 0x2cb) = *param_28;
  param_1[0x1a] = param_1[0x1a] & 0xfffffffffffffff;
  param_1[0x1a] = param_1[0x1a] | 0x8000000000000000;
  param_1[0x1b] = 0xb3;
  *(undefined8 *)((longlong)param_1 + 0x2d3) = *param_29;
  param_1[0x1b] = param_1[0x1b] & 0xfffffffffffffff;
  param_1[0x1b] = param_1[0x1b] | 0x8000000000000000;
  param_1[0x1c] = 0xbb;
  *(undefined8 *)((longlong)param_1 + 0x2db) = *param_30;
  param_1[0x1c] = param_1[0x1c] & 0xfffffffffffffff;
  param_1[0x1c] = param_1[0x1c] | 0x8000000000000000;
  param_1[0x1d] = 0xc3;
  *(undefined8 *)((longlong)param_1 + 0x2e3) = *param_31;
  param_1[0x1d] = param_1[0x1d] & 0xfffffffffffffff;
  param_1[0x1d] = param_1[0x1d] | 0x8000000000000000;
  param_1[0x1e] = 0xcb;
  *(undefined8 *)((longlong)param_1 + 0x2eb) = *param_32;
  param_1[0x1e] = param_1[0x1e] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[0x1f] = 0xd3;
  *(undefined4 *)((longlong)param_1 + 0x2f3) = *param_33;
  param_1[0x1f] = param_1[0x1f] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x20] = 0xd7;
  *(undefined4 *)((longlong)param_1 + 0x2f7) = *param_34;
  param_1[0x20] = param_1[0x20] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x21] = 0xdb;
  *(undefined4 *)((longlong)param_1 + 0x2fb) = *param_35;
  param_1[0x21] = param_1[0x21] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0x22] = 0xdf;
  *(undefined8 *)((longlong)param_1 + 0x2ff) = *param_36;
  param_1[0x22] = param_1[0x22] & 0xfffffffffffffff;
  param_1[0x22] = param_1[0x22] | 0x8000000000000000;
  param_1[0x23] = 0xe7;
  *(undefined8 *)((longlong)param_1 + 0x307) = *param_37;
  param_1[0x23] = param_1[0x23] & 0xfffffffffffffff;
  param_1[0x23] = param_1[0x23] | 0x8000000000000000;
  param_1[0x24] = 0xef;
  *(undefined8 *)((longlong)param_1 + 0x30f) = *param_38;
  param_1[0x24] = param_1[0x24] & 0xfffffffffffffff;
  param_1[0x24] = param_1[0x24] | 0x8000000000000000;
  param_1[0x25] = 0xf7;
  *(undefined8 *)((longlong)param_1 + 0x317) = *param_39;
  param_1[0x25] = param_1[0x25] & 0xfffffffffffffff;
  param_1[0x25] = param_1[0x25] | 0x8000000000000000;
  param_1[0x26] = 0xff;
  *(undefined1 *)((longlong)param_1 + 799) = *param_40;
  param_1[0x26] = param_1[0x26] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x27] = 0x100;
  param_1[100] = *param_41;
  param_1[0x27] = param_1[0x27] & 0xfffffffffffffff;
  param_1[0x27] = param_1[0x27] | 0x8000000000000000;
  param_1[0x28] = 0x108;
  *(undefined1 *)(param_1 + 0x65) = *param_42;
  param_1[0x28] = param_1[0x28] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x29] = 0x109;
  *(undefined8 *)((longlong)param_1 + 0x329) = *param_43;
  param_1[0x29] = param_1[0x29] & 0xfffffffffffffff;
  param_1[0x29] = param_1[0x29] | 0x8000000000000000;
  param_1[0x2a] = 0x111;
  *(undefined8 *)((longlong)param_1 + 0x331) = *param_44;
  param_1[0x2a] = param_1[0x2a] & 0xfffffffffffffff;
  param_1[0x2a] = param_1[0x2a] | 0x8000000000000000;
  param_1[0x2b] = 0x119;
  *(undefined8 *)((longlong)param_1 + 0x339) = *param_45;
  param_1[0x2b] = param_1[0x2b] & 0xfffffffffffffff;
  param_1[0x2b] = param_1[0x2b] | 0x8000000000000000;
  param_1[0x2c] = 0x121;
  *(undefined8 *)((longlong)param_1 + 0x341) = *param_46;
  param_1[0x2c] = param_1[0x2c] & 0xfffffffffffffff;
  param_1[0x2c] = param_1[0x2c] | 0x8000000000000000;
  param_1[0x2d] = 0x129;
  *(undefined8 *)((longlong)param_1 + 0x349) = *param_47;
  param_1[0x2d] = param_1[0x2d] & 0xfffffffffffffff;
  param_1[0x2d] = param_1[0x2d] | 0x8000000000000000;
  param_1[0x2e] = 0x131;
  *(undefined8 *)((longlong)param_1 + 0x351) = *param_48;
  param_1[0x2e] = param_1[0x2e] & 0xfffffffffffffff;
  param_1[0x2e] = param_1[0x2e] | 0x8000000000000000;
  param_1[0x2f] = 0x139;
  *(undefined4 *)((longlong)param_1 + 0x359) = *param_49;
  param_1[0x2f] = param_1[0x2f] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0x30] = 0x13d;
  *(undefined4 *)((longlong)param_1 + 0x35d) = *param_50;
  param_1[0x30] = param_1[0x30] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0x31] = 0x141;
  *(undefined8 *)((longlong)param_1 + 0x361) = *param_51;
  param_1[0x31] = param_1[0x31] & 0xfffffffffffffff;
  param_1[0x31] = param_1[0x31] | 0x8000000000000000;
  param_1[0x32] = 0x149;
  *(undefined1 *)((longlong)param_1 + 0x369) = *param_52;
  param_1[0x32] = param_1[0x32] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x33] = 0x14a;
  *(undefined8 *)((longlong)param_1 + 0x36a) = *param_53;
  param_1[0x33] = param_1[0x33] & 0xfffffffffffffff;
  param_1[0x33] = param_1[0x33] | 0x8000000000000000;
  param_1[0x34] = 0x152;
  *(undefined8 *)((longlong)param_1 + 0x372) = *param_54;
  param_1[0x34] = param_1[0x34] & 0xfffffffffffffff;
  param_1[0x34] = param_1[0x34] | 0x8000000000000000;
  param_1[0x35] = 0x15a;
  *(undefined8 *)((longlong)param_1 + 0x37a) = *param_55;
  param_1[0x35] = param_1[0x35] & 0xfffffffffffffff;
  param_1[0x35] = param_1[0x35] | 0x8000000000000000;
  param_1[0x36] = 0x162;
  *(undefined8 *)((longlong)param_1 + 0x382) = *param_56;
  param_1[0x36] = param_1[0x36] & 0xfffffffffffffff;
  param_1[0x36] = param_1[0x36] | 0x8000000000000000;
  param_1[0x37] = 0x16a;
  *(undefined1 *)((longlong)param_1 + 0x38a) = *param_57;
  param_1[0x37] = param_1[0x37] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x38] = 0x16b;
  *(undefined8 *)((longlong)param_1 + 0x38b) = *param_58;
  param_1[0x38] = param_1[0x38] & 0xfffffffffffffff;
  param_1[0x38] = param_1[0x38] | 0x8000000000000000;
  param_1[0x39] = 0x173;
  *(undefined1 *)((longlong)param_1 + 0x393) = *param_59;
  param_1[0x39] = param_1[0x39] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x3a] = 0x174;
  *(undefined1 *)((longlong)param_1 + 0x394) = *param_60;
  param_1[0x3a] = param_1[0x3a] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[0x3b] = 0x175;
  *(undefined8 *)((longlong)param_1 + 0x395) = *param_61;
  param_1[0x3b] = param_1[0x3b] & 0xfffffffffffffff;
  param_1[0x3b] = param_1[0x3b] | 0x8000000000000000;
  param_1[0x3c] = 0x17d;
  *(undefined8 *)((longlong)param_1 + 0x39d) = *param_62;
  param_1[0x3c] = param_1[0x3c] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[0x3d] = 0x185;
  puVar4 = param_63;
  if (0xf < (ulonglong)param_63[3]) {
    puVar4 = (undefined8 *)*param_63;
  }
  uVar1 = param_63[2];
  *(undefined8 **)((longlong)param_1 + 0x3a5) = puVar4;
  *(undefined8 *)((longlong)param_1 + 0x3ad) = uVar1;
  param_1[0x3d] = param_1[0x3d] & 0xfffffffffffffff;
  param_1[0x3d] = param_1[0x3d] | 0xc000000000000000;
  param_1[0x3e] = 0x195;
  *(undefined8 *)((longlong)param_1 + 0x3b5) = *param_64;
  param_1[0x3e] = param_1[0x3e] & 0xfffffffffffffff;
  param_1[0x3e] = param_1[0x3e] | 0x8000000000000000;
  param_1[0x3f] = 0x19d;
  *(undefined8 *)((longlong)param_1 + 0x3bd) = *param_65;
  param_1[0x3f] = param_1[0x3f] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[0x40] = 0x1a5;
  *(undefined8 *)((longlong)param_1 + 0x3c5) = *param_66;
  param_1[0x40] = param_1[0x40] & 0xfffffffffffffff;
  param_1[0x40] = param_1[0x40] | 0x8000000000000000;
  param_1[0x41] = 0x1ad;
  *(undefined8 *)((longlong)param_1 + 0x3cd) = *in_stack_00000218;
  param_1[0x41] = param_1[0x41] & 0xfffffffffffffff;
  param_1[0x41] = param_1[0x41] | 0x8000000000000000;
  param_1[0x42] = 0x1b5;
  *(undefined8 *)((longlong)param_1 + 0x3d5) = *in_stack_00000220;
  param_1[0x42] = param_1[0x42] & 0xfffffffffffffff;
  param_1[0x42] = param_1[0x42] | 0x8000000000000000;
  param_1[0x43] = 0x1bd;
  *(undefined8 *)((longlong)param_1 + 0x3dd) = *in_stack_00000228;
  param_1[0x43] = param_1[0x43] & 0xfffffffffffffff;
  param_1[0x43] = param_1[0x43] | 0x8000000000000000;
  return param_1;
}



