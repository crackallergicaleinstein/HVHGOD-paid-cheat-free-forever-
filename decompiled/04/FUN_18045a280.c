// FUN_18045a280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045a280 */

void FUN_18045a280(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char **ppcVar4;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  undefined4 local_40;
  char *local_38;
  undefined4 local_30;
  undefined *local_28;
  undefined4 local_20;
  char *local_18;
  undefined4 local_10 [2];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_180488c60();
  local_50 = 0;
  local_58 = "Midnight";
  ppcVar4 = &local_58;
  local_40 = 1;
  local_48 = "Sunset";
  local_38 = "Storm";
  local_28 = &DAT_180829bd4;
  local_18 = "Winter";
  local_30 = 2;
  local_20 = 3;
  local_10[0] = 4;
  do {
    cVar3 = FUN_18048b0e0(*ppcVar4,&DAT_180829a38,1);
    if (cVar3 != '\0') {
      FUN_1804586e0(*(undefined4 *)(ppcVar4 + 1),uVar1,uVar2);
    }
    ppcVar4 = ppcVar4 + 2;
  } while (ppcVar4 != (char **)(local_10 + 2));
  FUN_180488f10();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_180488c60();
  cVar3 = FUN_18048b0e0("Clear Everything",&DAT_180829a4c,1);
  if (cVar3 != '\0') {
    FUN_1804586e0(5,uVar1,uVar2);
  }
  FUN_180488f10();
  return;
}



