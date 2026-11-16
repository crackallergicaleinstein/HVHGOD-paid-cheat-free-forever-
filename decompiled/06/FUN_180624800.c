// FUN_180624800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180624800 */

void FUN_180624800(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FUN_180632cf0(local_res10,0x1f);
  local_res8[0] = local_res10[0];
  uVar4 = param_1 | 0x20;
  if ((param_1 & 0x18) == 0) {
    uVar4 = param_1;
  }
  uVar3 = uVar4 >> 5 & 1;
  uVar1 = uVar3 | 2;
  if ((uVar4 & 0x10) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 4;
  if ((uVar4 & 8) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3 | 8;
  if ((uVar4 & 4) == 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1 | 0x10;
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar1;
  }
  uVar1 = FUN_180632eb0(uVar3);
  local_res8[0] = local_res8[0] | uVar1;
  FUN_180632d40(local_res8,0x1f);
  if ((uVar4 & 1) != 0) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x21;
    return;
  }
  if ((uVar4 & 0x1c) != 0) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x22;
  }
  return;
}



