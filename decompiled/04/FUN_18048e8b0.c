// FUN_18048e8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048e8b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18048e8b0(longlong *param_1,char *param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_38;
  undefined8 local_30;
  
  local_38 = (char *)0x0;
  FUN_1804841d0(&local_38);
  pcVar2 = local_38;
  if (local_38 != param_2) {
    pcVar3 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar3 = *(char **)param_2;
    }
    FUN_180113930(local_38,pcVar3,*(undefined8 *)(param_2 + 0x10));
  }
  FUN_18063aed0(pcVar2 + 0x28,param_3,0x69d8);
  FUN_18063aed0(pcVar2 + 0x6a00,param_3,0x69d8);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    FUN_180485470(param_1,puVar1,&local_38);
  }
  else {
    local_38 = (char *)0x0;
    *puVar1 = pcVar2;
    param_1[1] = param_1[1] + 8;
  }
  if (param_4 != '\0') {
    *(int *)((longlong)param_1 + 0x144) = (int)(param_1[1] - *param_1 >> 3) + -1;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    strncpy((char *)(param_1 + 0x29),param_2,0x3f);
    *(undefined2 *)((longlong)param_1 + 0x187) = 0x100;
  }
  pcVar2 = local_38;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x49742400;
  *(undefined1 *)((longlong)param_1 + 0x214) = 1;
  if (local_38 != (char *)0x0) {
    FUN_1804853b0(local_38 + 0xd3d8);
    FUN_18015c010(pcVar2);
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_38 = "tier0.dll:g_pMemAlloc";
      local_30 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_38);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,pcVar2);
  }
  return;
}



