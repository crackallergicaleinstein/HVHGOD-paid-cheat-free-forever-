// FUN_18018e720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018e720 */

undefined8 * FUN_18018e720(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  cVar2 = FUN_1804513c0(uVar1,1,2);
  if (cVar2 != '\0') {
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    FUN_1801ad780(uVar1,param_2,param_3);
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
  }
  return param_2;
}



