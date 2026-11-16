// FUN_1805a09a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a09a0 */

longlong FUN_1805a09a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_res8 [4];
  uint local_res18 [2];
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
  local_res8[0] = FUN_1805a07c0((undefined8 *)(param_1 + 0x30),param_2,&local_res20,local_res18);
  if (local_res8[0] != 0) {
    return 0;
  }
  lVar2 = FUN_18057abe0(uVar1,local_res18[0] + 1,local_res8);
  if (local_res8[0] == 0) {
    FUN_18063aed0(lVar2,local_res20,local_res18[0]);
    *(undefined1 *)((ulonglong)local_res18[0] + lVar2) = 0;
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_180578860(*(undefined8 *)(param_1 + 0x30),&local_res20);
  }
  return lVar2;
}



