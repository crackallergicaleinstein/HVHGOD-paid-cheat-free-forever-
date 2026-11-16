// FUN_1804f4880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f4880 */

void FUN_1804f4880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  fVar1 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1f0);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (fVar1 < 0.0) {
    FUN_1804c18e0();
  }
  lVar4 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar4 + 0x14d0) + 0xd1) == '\0') {
    FUN_1804b0940(&local_20,&local_28,param_1,&local_res10);
    FUN_1804f4090(local_20,local_28);
    lVar4 = DAT_180bb8ae8;
  }
  if (fVar1 < 0.0) {
    lVar4 = *(longlong *)(lVar4 + 0x14d0);
    iVar2 = *(int *)(lVar4 + 0x208);
    if (iVar2 < 1) {
      FUN_1804c5a40("Calling PopTextWrapPos() too many times!");
      return;
    }
    uVar3 = *(undefined4 *)(*(longlong *)(lVar4 + 0x210) + -4 + (longlong)iVar2 * 4);
    *(int *)(lVar4 + 0x208) = iVar2 + -1;
    *(undefined4 *)(lVar4 + 0x1f0) = uVar3;
  }
  return;
}



