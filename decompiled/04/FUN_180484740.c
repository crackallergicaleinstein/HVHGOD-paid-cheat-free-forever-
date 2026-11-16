// FUN_180484740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180484740 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_180484740(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 local_3518 [4528];
  undefined1 local_2368 [4528];
  undefined1 local_11b8 [4520];
  undefined8 uStack_10;
  
  uStack_10 = 0x180484750;
  *param_1 = 0;
  uVar1 = FUN_18045ffa0(local_3518);
  FUN_18063aed0(param_1 + 1,uVar1,0x11ac);
  uVar1 = FUN_18045ffa0(local_2368);
  FUN_18063aed0(param_1 + 0x46c,uVar1,0x11ac);
  uVar1 = FUN_18045ffa0(local_11b8);
  FUN_18063aed0(param_1 + 0x8d7,uVar1,0x11ac);
  *(undefined1 *)(param_1 + 0xd43) = 0;
  param_1[0xd44] = 0x3f7afafb;
  param_1[0xd45] = 0x3f7afafb;
  param_1[0xd46] = 0x3f7cfcfd;
  *(undefined8 *)(param_1 + 0xd47) = 0x3f800000;
  param_1[0xd49] = 0x41a00000;
  param_1[0xd4a] = 0x41700000;
  param_1[0xd4b] = 0x43480000;
  param_1[0xd4c] = 0x43480000;
  *(undefined8 *)(param_1 + 0xd4d) = 0x3fc00000;
  param_1[0xd4f] = 0x3f800000;
  param_1[0xd50] = 0x3f000000;
  param_1[0xd51] = 0x3e4ccccd;
  param_1[0xd52] = 0x3d20a0a1;
  param_1[0xd53] = 0x3d20a0a1;
  param_1[0xd54] = 0x3d40c0c1;
  param_1[0xd55] = 0x3f800000;
  param_1[0xd56] = 0x3ef0f0f1;
  param_1[0xd57] = 0x3f3ebebf;
  param_1[0xd58] = 0x3f800000;
  param_1[0xd59] = 0x3f52d2d3;
  *(undefined1 *)(param_1 + 0xd42) = 0;
  *(undefined8 *)(param_1 + 0xd5b) = 0x3ebcbcbd3f70f0f1;
  *(undefined8 *)(param_1 + 0xd5d) = 0x3f8000003f048485;
  *(undefined1 *)(param_1 + 0xd5a) = 0;
  param_1[0xd5f] = 0x3fcccccd;
  param_1[0xd60] = 0x42080000;
  *(undefined1 *)(param_1 + 0xd61) = 0;
  param_1[0xd62] = 0x3f20a0a1;
  param_1[0xd63] = 0x3f26a6a7;
  param_1[0xd64] = 0x3f70f0f1;
  param_1[0xd65] = 0x3f800000;
  param_1[0xd66] = 2;
  *(undefined1 *)(param_1 + 0xd67) = 1;
  param_1[0xd68] = 0x3f800000;
  param_1[0xd69] = 0x3f800000;
  param_1[0xd6a] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd6b) = 0x3f800000;
  param_1[0xd6d] = 0x3ecccccd;
  param_1[0xd6e] = 0x3f62e2e3;
  param_1[0xd6f] = 0x3f70f0f1;
  param_1[0xd70] = 0x3f800000;
  param_1[0xd71] = 2;
  *(undefined1 *)(param_1 + 0xd72) = 0;
  param_1[0xd73] = 0x3f800000;
  param_1[0xd74] = 0x3f800000;
  param_1[0xd75] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd76) = 0x3f800000;
  param_1[0xd78] = 0x3f56d6d7;
  param_1[0xd79] = 0x3f56d6d7;
  param_1[0xd7a] = 0x3f5cdcdd;
  param_1[0xd7b] = 0x3f800000;
  param_1[0xd7c] = 2;
  *(undefined1 *)(param_1 + 0xd7d) = 0;
  param_1[0xd7e] = 0x3f800000;
  param_1[0xd7f] = 0x3f800000;
  param_1[0xd80] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd81) = 0x3f800000;
  param_1[0xd83] = 0x3f3ebebf;
  param_1[0xd84] = 0x3f3ebebf;
  param_1[0xd85] = 0x3f46c6c7;
  param_1[0xd86] = 0x3f800000;
  param_1[0xd87] = 2;
  *(undefined1 *)(param_1 + 0xd88) = 0;
  param_1[0xd89] = 0x3f800000;
  param_1[0xd8a] = 0x3f800000;
  param_1[0xd8b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd8c) = 0x3f800000;
  param_1[0xd8e] = 0x3f3ebebf;
  param_1[0xd8f] = 0x3f3ebebf;
  param_1[0xd90] = 0x3f46c6c7;
  param_1[0xd91] = 0x3f800000;
  param_1[0xd92] = 2;
  *(undefined1 *)(param_1 + 0xd93) = 0;
  param_1[0xd94] = 0x3f800000;
  param_1[0xd95] = 0x3f800000;
  param_1[0xd96] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd97) = 0x3f800000;
  param_1[0xd99] = 0x3f169697;
  param_1[0xd9a] = 0x3f169697;
  param_1[0xd9b] = 0x3f26a6a7;
  param_1[0xd9c] = 0x3f800000;
  param_1[0xd9d] = 2;
  *(undefined1 *)(param_1 + 0xd9e) = 0;
  param_1[0xd9f] = 0x3f800000;
  param_1[0xda0] = 0x3f800000;
  param_1[0xda1] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xda2) = 0x3f800000;
  param_1[0xda4] = 0x3f169697;
  param_1[0xda5] = 0x3f169697;
  param_1[0xda6] = 0x3f26a6a7;
  param_1[0xda7] = 0x3f800000;
  param_1[0xda8] = 2;
  *(undefined1 *)(param_1 + 0xda9) = 0;
  param_1[0xdaa] = 0x3f800000;
  param_1[0xdab] = 0x3f800000;
  param_1[0xdac] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xdad) = 0x3f800000;
  param_1[0xdaf] = 0;
  *(undefined1 *)(param_1 + 0xdb0) = 0;
  *(undefined1 *)(param_1 + 0xdb1) = 0;
  param_1[0xdb2] = 0x3f44c4c5;
  param_1[0xdb3] = 0x3f44c4c5;
  param_1[0xdb4] = 0x3f62e2e3;
  param_1[0xdb5] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xdb6) = 0;
  param_1[0xdb7] = 0x3f4ccccd;
  return param_1;
}



