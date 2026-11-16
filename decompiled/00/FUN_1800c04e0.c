// FUN_1800c04e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c04e0 */

void FUN_1800c04e0(longlong param_1,char *param_2)

{
  char *pcVar1;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  FUN_180113930(param_1 + 0x20,"enabled",7);
  if ((char *)(param_1 + 0x40) != param_2) {
    pcVar1 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar1 = *(char **)param_2;
    }
    FUN_180113930((char *)(param_1 + 0x40),pcVar1,*(undefined8 *)(param_2 + 0x10));
  }
  local_18 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_18 = *(char **)param_2;
  }
  local_10 = *(undefined8 *)(param_2 + 0x10);
  local_28 = "color";
  local_20 = 5;
  FUN_1800aa4b0(param_1 + 0x68,&local_18,&local_28);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_28 = param_2;
  }
  else {
    local_28 = *(char **)param_2;
  }
  pcVar1 = param_2 + 0x10;
  local_20 = *(undefined8 *)pcVar1;
  local_18 = "visibility";
  local_10 = 10;
  FUN_1800f3030(param_1 + 0x6c,&local_28,&local_18);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  local_10 = 0xc;
  local_18 = "max distance";
  local_20 = *(undefined8 *)pcVar1;
  local_28 = param_2;
  FUN_1800f2e80(param_1 + 0x70,&local_28,&local_18);
  return;
}



