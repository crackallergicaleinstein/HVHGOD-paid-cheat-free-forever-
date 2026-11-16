// FUN_18051a6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051a6b0 */

void FUN_18051a6b0(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *local_18;
  undefined8 local_10;
  
  cVar1 = *param_2;
  local_18 = "Block While Flashed";
  local_10 = 0x13;
  uVar2 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Block While Flashed",param_2,uVar2,1,0,0);
  if (cVar1 != *param_2) {
    FUN_18050cd00();
  }
  cVar1 = param_2[1];
  local_18 = "Block Through Smoke";
  local_10 = 0x13;
  uVar2 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Block Through Smoke",param_2 + 1,uVar2,1,0,0);
  if (cVar1 != param_2[1]) {
    FUN_18050cd00();
  }
  cVar1 = param_2[2];
  local_18 = "Block While Airborne";
  local_10 = 0x14;
  uVar2 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Block While Airborne",param_2 + 2,uVar2,1,0,0);
  if (cVar1 != param_2[2]) {
    FUN_18050cd00();
  }
  cVar1 = param_2[3];
  local_10 = 0x16;
  local_18 = "Block Airborne Targets";
  uVar2 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Block Airborne Targets",param_2 + 3,uVar2,1,0,0);
  if (cVar1 != param_2[3]) {
    FUN_18050cd00();
  }
  return;
}



