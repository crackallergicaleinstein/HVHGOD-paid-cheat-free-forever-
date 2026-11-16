// FUN_180387850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387850 */

undefined4 FUN_180387850(ulonglong param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_28;
  int local_24 [2];
  int local_1c;
  int local_18 [2];
  undefined8 local_10;
  
  local_10 = param_1;
  cVar1 = FUN_180387210(&local_10);
  if (cVar1 == '\0') {
    return 0x80008000;
  }
  local_18[1] = 0x7fff;
  local_1c = -0x8000;
  iVar2 = FUN_18060eb80(local_10 & 0xffffffff);
  local_24[1] = 0x7fff;
  local_28 = -0x8000;
  local_18[0] = iVar2;
  local_24[0] = FUN_18060eb80(local_10._4_4_);
  piVar5 = &local_28;
  if (-0x8001 < local_24[0]) {
    piVar5 = local_24;
  }
  piVar3 = local_24 + 1;
  if (local_24[0] < 0x8000) {
    piVar3 = piVar5;
  }
  piVar5 = &local_1c;
  if (-0x8001 < iVar2) {
    piVar5 = local_18;
  }
  piVar4 = local_18 + 1;
  if (iVar2 < 0x8000) {
    piVar4 = piVar5;
  }
  return CONCAT22((short)*piVar3,(short)*piVar4);
}



