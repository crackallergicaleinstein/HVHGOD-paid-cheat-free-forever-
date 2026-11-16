// FUN_1805b3cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b3cb0 */

void FUN_1805b3cb0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x3e0);
  FUN_18063ab10(param_1,0,0x448);
  param_1[1] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  param_1[2] = param_4;
  uVar4 = 0;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar3 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar3;
    param_1[4] = lVar3 + 0x18;
    param_1[5] = lVar3 + 0x60;
    FUN_1805743a0();
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    if (((param_5 != '\0') && (param_3 != 0)) &&
       ((undefined8 *)**(longlong **)(param_3 + 0x38) != (undefined8 *)0x0)) {
      param_1[0xd] = *(undefined8 *)**(longlong **)(param_3 + 0x38);
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xe] = FUN_1805b2880;
  param_1[0xf] = FUN_1805b2420;
  param_1[0x10] = FUN_1805b2450;
  param_1[0x11] = FUN_1805b2970;
  param_1[0x12] = FUN_1805b29c0;
  param_1[0x13] = FUN_1805b2ba0;
  param_1[0x14] = FUN_1805b2a50;
  param_1[0x15] = FUN_1805b27a0;
  param_1[0x16] = lVar2;
  uVar1 = *(uint *)(lVar2 + 0xa0);
  *(uint *)((longlong)param_1 + 0x3fc) = uVar1;
  param_1[0x82] = *(undefined8 *)(lVar2 + 0x5b8);
  if (*(int *)(lVar2 + 0x608) != 1) {
    if (uVar1 < 0x4d8) {
      uVar4 = 0x6b;
    }
    else {
      uVar4 = 0x8000;
      if (uVar1 < 0x846c) {
        uVar4 = 0x46b;
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x424) = param_6;
  param_1[0x87] = param_7;
  *(undefined4 *)((longlong)param_1 + 0x404) = uVar4;
  param_1[0x88] = param_8;
  return;
}



