// FUN_18031a940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031a940 */

void FUN_18031a940(undefined8 *param_1,undefined1 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  
  FUN_18030afc0(*(undefined8 *)*param_1,*(undefined8 *)param_1[1],param_1[2]);
  FUN_18030b660(*(undefined8 *)*param_1,*(undefined8 *)param_1[3],param_2,param_3);
  if (param_4 < 0) {
    uVar1 = *(undefined1 *)(param_1[4] + 0xef);
    if (*(char *)(param_1[4] + 0xee) == '\0') {
      return;
    }
  }
  else {
    uVar1 = 0 < param_4;
  }
  FUN_18030b110(*(undefined8 *)*param_1,*(undefined8 *)param_1[1],uVar1);
  return;
}



