// FUN_1805b36a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b36a0 */

undefined8
FUN_1805b36a0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_18063ab10(param_1,0,0x740);
  lVar1 = FUN_18057ae80(*(undefined8 *)(param_2 + 0x90),"postscript-cmaps",1);
  if (lVar1 == 0) {
    uVar2 = 7;
  }
  else {
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0xcb] = lVar1;
    *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
    param_1[1] = param_2;
    param_1[2] = param_4;
    *param_1 = *(undefined8 *)(param_2 + 0x98);
    if (param_4 != 0) {
      lVar1 = **(longlong **)(param_4 + 0xf0);
      param_1[3] = lVar1;
      param_1[4] = lVar1 + 0x18;
      param_1[5] = lVar1 + 0x60;
      FUN_1805743a0();
      param_1[0xd] = **(undefined8 **)(param_3 + 0x38);
      param_1[0xc] = 0;
      if (param_7 != '\0') {
        param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
      }
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xe] = FUN_1805b2340;
    param_1[0xf] = FUN_1805b2420;
    param_1[0x10] = FUN_1805b2450;
    param_1[0x11] = FUN_1805b2480;
    param_1[0x12] = FUN_1805b2510;
    param_1[0x13] = FUN_1805b25c0;
    param_1[0x14] = FUN_1805b2650;
    param_1[0x15] = FUN_1805b27a0;
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x10);
    param_1[0xcd] = param_5;
    *(undefined4 *)(param_1 + 0xde) = param_8;
    param_1[0xdd] = param_6;
    param_1[0xdf] = param_9;
    uVar2 = 0;
    param_1[0xe0] = FUN_1805b36a0;
    param_1[0xe1] = FUN_1805b3820;
    param_1[0xe2] = FUN_1805b31e0;
    param_1[0xe3] = FUN_1805b38a0;
  }
  return uVar2;
}



