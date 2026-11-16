// FUN_1805d2b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d2b70 */

undefined4 FUN_1805d2b70(longlong param_1,char *param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"spread");
  if (iVar1 == 0) {
    *param_3 = *(uint *)(param_1 + 0x78);
    return 0;
  }
  iVar1 = strcmp(param_2,"flip_sign");
  if (iVar1 == 0) {
    *param_3 = (uint)*(byte *)(param_1 + 0x7c);
    return 0;
  }
  iVar1 = strcmp(param_2,"flip_y");
  if (iVar1 == 0) {
    *param_3 = (uint)*(byte *)(param_1 + 0x7d);
    return 0;
  }
  iVar1 = strcmp(param_2,"overlaps");
  if (iVar1 == 0) {
    *param_3 = (uint)*(byte *)(param_1 + 0x7e);
    return 0;
  }
  return 0xc;
}



