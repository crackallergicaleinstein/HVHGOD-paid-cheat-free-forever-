// FUN_1805d73c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d73c0 */

undefined4 FUN_1805d73c0(longlong param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = strcmp(param_2,"svg-hooks");
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *param_3 = *(undefined8 *)(param_1 + 0x80);
    param_3[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    param_3[2] = *(undefined8 *)(param_1 + 0x90);
    param_3[3] = uVar1;
    return 0;
  }
  return 0xc;
}



