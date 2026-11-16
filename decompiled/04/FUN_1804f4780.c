// FUN_1804f4780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f4780 */

void FUN_1804f4780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  lVar1 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x14d0) + 0xd1) == '\0') {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1804b0940(local_10,&local_18,param_1,&local_res10);
    FUN_1804f4090(local_10[0],local_18);
  }
  return;
}



