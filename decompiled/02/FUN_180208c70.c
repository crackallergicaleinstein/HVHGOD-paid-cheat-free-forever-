// FUN_180208c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180208c70 */

int FUN_180208c70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int local_28 [4];
  
  uVar5 = 0;
  uVar6 = 0;
  cVar4 = '\x04';
  lVar1 = FUN_180208800();
  if (lVar1 != 0) {
    uVar5 = (uint)*(byte *)(lVar1 + 0xb1);
    cVar4 = *(char *)(lVar1 + 0xb0);
  }
  lVar1 = FUN_180208890(param_1,param_3);
  if (lVar1 != 0) {
    uVar6 = (uint)*(byte *)(lVar1 + 0x91);
  }
  if (cVar4 == '\x01') {
    return 5;
  }
  local_28[2] = 7;
  local_28[1] = (uVar5 - 2) + uVar6;
  local_28[0] = 0;
  piVar3 = local_28;
  if (-1 < local_28[1]) {
    piVar3 = local_28 + 1;
  }
  piVar2 = local_28 + 2;
  if (local_28[1] < 8) {
    piVar2 = piVar3;
  }
  return *piVar2;
}



