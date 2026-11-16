// FUN_1800c06e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c06e0 */

void FUN_1800c06e0(longlong param_1,char *param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  
  FUN_180113930(param_1 + 0x20,"enabled",7);
  if ((char *)(param_1 + 0x40) != param_2) {
    pcVar2 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar2 = *(char **)param_2;
    }
    FUN_180113930((char *)(param_1 + 0x40),pcVar2,*(undefined8 *)(param_2 + 0x10));
  }
  local_28 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_28 = *(char **)param_2;
  }
  local_20 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "primary layer";
  local_30 = 0xd;
  FUN_1800bacc0(param_1 + 0x68,&local_28,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_38 = param_2;
  }
  else {
    local_38 = *(char **)param_2;
  }
  pcVar2 = param_2 + 0x10;
  local_30 = *(undefined8 *)pcVar2;
  local_28 = "secondary layer";
  local_20 = 0xf;
  FUN_1800bacc0(param_1 + 0x170,&local_38,&local_28);
  puVar1 = (ulonglong *)(param_2 + 0x18);
  if (*puVar1 < 0x10) {
    local_38 = param_2;
  }
  else {
    local_38 = *(char **)param_2;
  }
  local_30 = *(undefined8 *)pcVar2;
  local_28 = "primary visibility";
  local_20 = 0x12;
  FUN_1800f3030(param_1 + 0x278,&local_38,&local_28);
  if (*puVar1 < 0x10) {
    local_38 = param_2;
  }
  else {
    local_38 = *(char **)param_2;
  }
  pcVar3 = param_2 + 0x10;
  local_30 = *(undefined8 *)pcVar2;
  local_28 = "secondary visibility";
  local_20 = 0x14;
  FUN_1800f3030(param_1 + 0x27c,&local_38,&local_28);
  if (0xf < *puVar1) {
    param_2 = *(char **)param_2;
  }
  local_20 = 0xc;
  local_28 = "max distance";
  local_30 = *(undefined8 *)pcVar3;
  local_38 = param_2;
  FUN_1800f2e80(param_1 + 0x280,&local_38,&local_28);
  return;
}



