// FUN_18051aa10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051aa10 */

void FUN_18051aa10(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *local_18;
  undefined8 local_10;
  
  lVar3 = *param_1;
  FUN_180488c60();
  FUN_180516ec0("Seeded Ray",lVar3 + 0x318);
  cVar2 = *(char *)(lVar3 + 0x2a8);
  local_18 = "Wait for Stop";
  local_10 = 0xd;
  uVar4 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Wait for Stop",lVar3 + 0x2a8,uVar4,1,0,0);
  if (cVar2 != *(char *)(lVar3 + 0x2a8)) {
    FUN_18050cd00();
  }
  cVar2 = *(char *)(lVar3 + 0x278);
  local_18 = "Auto Stop";
  local_10 = 9;
  uVar4 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Auto Stop",lVar3 + 0x278,uVar4,1,0,0);
  if (cVar2 != *(char *)(lVar3 + 0x278)) {
    FUN_18050cd00();
  }
  pcVar1 = (char *)(lVar3 + 0x2a9);
  local_10 = 10;
  cVar2 = *pcVar1;
  local_18 = "Auto Scope";
  uVar4 = FUN_180515fb0(&local_18);
  FUN_1804898a0("Auto Scope",pcVar1,uVar4,1,0,0);
  if (cVar2 != *pcVar1) {
    FUN_18050cd00();
  }
  FUN_180488f10();
  return;
}



