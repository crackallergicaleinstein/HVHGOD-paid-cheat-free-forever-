// FUN_1805b2880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2880 */

void FUN_1805b2880(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
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
  return;
}



