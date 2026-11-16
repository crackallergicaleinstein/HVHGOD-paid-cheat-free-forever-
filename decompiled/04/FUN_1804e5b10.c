// FUN_1804e5b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e5b10 */

void FUN_1804e5b10(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  short *psVar2;
  short sVar3;
  short local_28 [4];
  short local_20;
  short local_1e [3];
  
  sVar3 = 0;
  if (*(char *)(param_3 + 0x35) == '\0') {
    if (param_2[1] != 0) {
      FUN_1804e6a30();
    }
    *(undefined1 *)((longlong)param_2 + 0x34) = 0;
    *param_2 = 0;
    param_2[1] = param_1;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  local_20 = *(short *)((longlong)param_2 + 0x32);
  local_1e[0] = -3;
  local_1e[1] = 0x3f;
  local_1e[2] = 0x20;
  if (local_20 == 0) {
    psVar2 = &local_20;
    while ((sVar3 == 0 || (cVar1 = FUN_1804e96e0(param_2,sVar3), cVar1 == '\0'))) {
      psVar2 = psVar2 + 1;
      if (psVar2 == local_1e + 3) goto LAB_1804e5b9b;
      sVar3 = *psVar2;
    }
    *(short *)((longlong)param_2 + 0x32) = sVar3;
  }
LAB_1804e5b9b:
  sVar3 = *(short *)(param_3 + 0x3a);
  local_28[1] = 0x2026;
  local_28[2] = 0x85;
  if (*(short *)(param_2 + 6) != 0) {
    return;
  }
  psVar2 = local_28;
  local_28[0] = sVar3;
  while ((sVar3 == 0 || (cVar1 = FUN_1804e96e0(param_2,sVar3), cVar1 == '\0'))) {
    psVar2 = psVar2 + 1;
    if (psVar2 == local_28 + 3) goto LAB_1804e5beb;
    sVar3 = *psVar2;
  }
  *(short *)(param_2 + 6) = sVar3;
LAB_1804e5beb:
  if (*(short *)(param_2 + 6) == 0) {
    *(undefined2 *)(param_2 + 6) = 0x85;
    *(undefined1 *)((longlong)param_2 + 0x35) = 1;
    return;
  }
  return;
}



