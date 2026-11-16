// FUN_1804f47f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f47f0 */

void FUN_1804f47f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1804b2af0(0,param_1);
  lVar1 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x14d0) + 0xd1) == '\0') {
    FUN_1804b0940(local_20,&local_28,param_2,&local_res18);
    FUN_1804f4090(local_20[0],local_28);
  }
  FUN_1804b2b70(1);
  return;
}



