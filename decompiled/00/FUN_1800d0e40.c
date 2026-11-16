// FUN_1800d0e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d0e40 */

void FUN_1800d0e40(longlong param_1,char *param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  
  local_38 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_38 = *(char **)param_2;
  }
  local_30 = *(undefined8 *)(param_2 + 0x10);
  local_48 = "color";
  local_40 = 5;
  FUN_1800aa4b0(param_1,&local_38,&local_48);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "end color";
  local_30 = 9;
  FUN_1800aa4b0(param_1 + 4,&local_48,&local_38);
  puVar1 = (ulonglong *)(param_2 + 0x18);
  if (*puVar1 < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  pcVar2 = param_2 + 0x10;
  local_40 = *(undefined8 *)pcVar2;
  local_38 = "duration";
  local_30 = 8;
  FUN_1800f2e80(param_1 + 8,&local_48,&local_38);
  if (*puVar1 < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)pcVar2;
  local_38 = "size";
  local_30 = 4;
  FUN_1800f2e80(param_1 + 0xc,&local_48,&local_38);
  if (*puVar1 < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)pcVar2;
  local_38 = "spread";
  local_30 = 6;
  FUN_1800f2e80(param_1 + 0x10,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "speed";
  local_30 = 5;
  FUN_1800f2e80(param_1 + 0x14,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "gravity";
  local_30 = 7;
  FUN_1800f2e80(param_1 + 0x18,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "count";
  local_30 = 5;
  FUN_1800f3030(param_1 + 0x1c,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "glow";
  local_30 = 4;
  FUN_1800f29f0(param_1 + 0x20,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "hold";
  local_30 = 4;
  FUN_1800f2e80(param_1 + 0x28,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "rise";
  local_30 = 4;
  FUN_1800f2e80(param_1 + 0x2c,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "turn";
  local_30 = 4;
  FUN_1800f2e80(param_1 + 0x30,&local_48,&local_38);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    local_48 = param_2;
  }
  else {
    local_48 = *(char **)param_2;
  }
  pcVar2 = param_2 + 0x10;
  local_40 = *(undefined8 *)(param_2 + 0x10);
  local_38 = "opacity";
  local_30 = 7;
  FUN_1800f2e80(param_1 + 0x34,&local_48,&local_38);
  local_48 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_48 = *(char **)param_2;
  }
  local_40 = *(undefined8 *)pcVar2;
  local_38 = "native material";
  local_30 = 0xf;
  FUN_1800f29f0(param_1 + 0x21,&local_48,&local_38);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  local_30 = 10;
  local_38 = "visibility";
  local_40 = *(undefined8 *)pcVar2;
  local_48 = param_2;
  FUN_1800f3030(param_1 + 0x24,&local_48,&local_38);
  return;
}



