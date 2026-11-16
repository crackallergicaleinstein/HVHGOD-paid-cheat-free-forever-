// FUN_1803f23c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f23c0 */

undefined4 * FUN_1803f23c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar1 = (undefined8 *)(param_2 + 4);
  param_1[2] = param_2[2];
  if ((undefined8 *)(param_1 + 4) != puVar1) {
    if (0xf < *(ulonglong *)(param_2 + 10)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_180113930(param_1 + 4,puVar1,*(undefined8 *)(param_2 + 8));
  }
  plVar2 = (longlong *)(param_2 + 0x1e);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  if ((longlong *)(param_1 + 0x1e) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x24)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180113930(param_1 + 0x1e,plVar2,*(undefined8 *)(param_2 + 0x22));
  }
  plVar2 = (longlong *)(param_2 + 0x34);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  if ((longlong *)(param_1 + 0x34) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x3a)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180113930(param_1 + 0x34,plVar2,*(undefined8 *)(param_2 + 0x38));
  }
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)((longlong)param_2 + 0xf9);
  *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)((longlong)param_2 + 0xfa);
  *(undefined1 *)((longlong)param_1 + 0xfb) = *(undefined1 *)((longlong)param_2 + 0xfb);
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  return param_1;
}



