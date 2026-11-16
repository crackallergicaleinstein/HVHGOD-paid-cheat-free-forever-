// FUN_1800d0540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d0540 */

void FUN_1800d0540(longlong param_1,char *param_2,char param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  char *pcVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  
  if (param_3 != '\0') {
    FUN_180113930(param_1 + 0x20,"trajectory",10);
    if ((char *)(param_1 + 0x40) != param_2) {
      pcVar1 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pcVar1 = *(char **)param_2;
      }
      FUN_180113930((char *)(param_1 + 0x40),pcVar1,*(undefined8 *)(param_2 + 0x10));
    }
  }
  FUN_180113930(param_1 + 0x88,"straight throw",0xe);
  puVar2 = (ulonglong *)(param_2 + 0x18);
  if ((char *)(param_1 + 0xa8) != param_2) {
    pcVar1 = param_2;
    if (0xf < *puVar2) {
      pcVar1 = *(char **)param_2;
    }
    FUN_180113930((char *)(param_1 + 0xa8),pcVar1,*(undefined8 *)(param_2 + 0x10));
  }
  FUN_180113930(param_1 + 0xf0,&DAT_1806bd1f0,4);
  if ((char *)(param_1 + 0x110) != param_2) {
    pcVar1 = param_2;
    if (0xf < *puVar2) {
      pcVar1 = *(char **)param_2;
    }
    FUN_180113930((char *)(param_1 + 0x110),pcVar1,*(undefined8 *)(param_2 + 0x10));
  }
  local_28 = param_2;
  if (0xf < *puVar2) {
    local_28 = *(char **)param_2;
  }
  puVar2 = (ulonglong *)(param_2 + 0x18);
  pcVar1 = param_2 + 0x10;
  local_20 = *(undefined8 *)pcVar1;
  local_38 = "held color";
  local_30 = 10;
  FUN_1800aa4b0(param_1 + 0x138,&local_28,&local_38);
  if (*puVar2 < 0x10) {
    local_38 = param_2;
  }
  else {
    local_38 = *(char **)param_2;
  }
  local_30 = *(undefined8 *)pcVar1;
  local_28 = "thrown color";
  local_20 = 0xc;
  FUN_1800aa4b0(param_1 + 0x13c,&local_38,&local_28);
  if (*puVar2 < 0x10) {
    local_38 = param_2;
  }
  else {
    local_38 = *(char **)param_2;
  }
  pcVar3 = param_2 + 0x10;
  local_30 = *(undefined8 *)pcVar1;
  local_28 = "will damage held color";
  local_20 = 0x16;
  FUN_1800aa4b0(param_1 + 0x140,&local_38,&local_28);
  local_38 = param_2;
  if (0xf < *puVar2) {
    local_38 = *(char **)param_2;
  }
  local_30 = *(undefined8 *)pcVar3;
  local_28 = "will damage thrown color";
  local_20 = 0x18;
  FUN_1800aa4b0(param_1 + 0x144,&local_38,&local_28);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  local_20 = 0xd;
  local_28 = "glow strength";
  local_30 = *(undefined8 *)pcVar3;
  local_38 = param_2;
  FUN_1800f2e80(param_1 + 0x148,&local_38,&local_28);
  return;
}



