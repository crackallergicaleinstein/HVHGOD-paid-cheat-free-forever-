// FUN_1805b2c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2c20 */

void FUN_1805b2c20(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2 + 6;
  param_1[7] = (longlong)param_2 + 0x34;
  param_1[8] = param_2 + 7;
  param_1[9] = param_2 + 8;
  param_1[10] = param_2 + 9;
  if (param_3 == '\0') {
    lVar2 = 0x5b;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    lVar3 = 0x5a;
    lVar1 = 0x59;
  }
  else {
    lVar1 = 0x5c;
    lVar2 = 0x5e;
    lVar3 = 0x5d;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + lVar1);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)(lVar3 + (longlong)param_2);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)(lVar2 + (longlong)param_2);
  *(char *)((longlong)param_1 + 0x5c) = param_3;
  param_1[0xc] = FUN_1805b2c20;
  param_1[0xd] = FUN_1805b2420;
  return;
}



