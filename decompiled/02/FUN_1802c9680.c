// FUN_1802c9680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c9680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c9680(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int local_res8 [6];
  undefined8 local_48;
  uint5 uStack_40;
  undefined3 uStack_3b;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  local_res8[0] = param_1;
  piVar3 = (int *)FUN_1802e96a0();
  local_res8[4] = 0x400;
  local_res8[2] = 1;
  piVar6 = &DAT_180b92f80;
  if (piVar3 != (int *)0x0) {
    piVar6 = piVar3;
  }
  piVar3 = local_res8 + 2;
  if (0 < param_1) {
    piVar3 = local_res8;
  }
  *(undefined1 *)(piVar6 + 1) = 1;
  piVar4 = local_res8 + 4;
  if (param_1 < 0x401) {
    piVar4 = piVar3;
  }
  *piVar6 = *piVar4;
  iVar2 = FUN_1805f68d0(&DAT_180b8e260);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e2ac == 0x7fffffff) {
    DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_28 = _DAT_180b8e220;
  uStack_20 = uRam0000000180b8e228;
  uStack_18 = uRam0000000180b8e230;
  uStack_10 = uRam0000000180b8e238;
  local_48 = _DAT_180b8e240;
  _uStack_40 = uRam0000000180b8e248;
  uStack_38 = uRam0000000180b8e250;
  uStack_30 = uRam0000000180b8e258;
  FUN_1805f68fc(&DAT_180b8e260);
  *(undefined8 *)(piVar6 + 8) = local_28;
  *(undefined8 *)(piVar6 + 10) = uStack_20;
  *(undefined8 *)(piVar6 + 0xc) = uStack_18;
  *(undefined8 *)(piVar6 + 0xe) = uStack_10;
  *(undefined8 *)(piVar6 + 0x10) = local_48;
  *(undefined8 *)(piVar6 + 0x12) = _uStack_40;
  *(undefined8 *)(piVar6 + 0x14) = uStack_38;
  *(undefined8 *)(piVar6 + 0x16) = uStack_30;
  if (DAT_180b8e2b0 == '\0') {
    uStack_40 = (uint5)(uint)uStack_40;
    puVar5 = &local_48;
  }
  else {
    puVar5 = (undefined8 *)FUN_1802e2da0(&local_28);
  }
  uVar1 = puVar5[1];
  *(undefined8 *)(piVar6 + 2) = *puVar5;
  *(undefined8 *)(piVar6 + 4) = uVar1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_28 = _DAT_180bb8890;
  uStack_20 = uRam0000000180bb8898;
  uStack_18 = uRam0000000180bb88a0;
  uStack_10 = uRam0000000180bb88a8;
  local_48 = _DAT_180bb88b0;
  _uStack_40 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar5 = &uStack_18;
  if ((char)uStack_40 != '\0') {
    puVar5 = &uStack_20;
  }
  *(undefined8 *)(piVar6 + 6) = *puVar5;
  return;
}



