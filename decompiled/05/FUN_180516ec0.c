// FUN_180516ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180516ec0 */

void FUN_180516ec0(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  char local_res8 [8];
  longlong local_18;
  longlong local_10;
  
  cVar1 = *param_2;
  local_10 = -1;
  do {
    local_10 = local_10 + 1;
  } while (*(char *)(param_1 + local_10) != '\0');
  local_18 = param_1;
  uVar5 = FUN_180515fb0(&local_18);
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_1);
    local_res8[0] = '\0';
    cVar3 = FUN_1804898a0(param_1,param_2,uVar5,1,1,local_res8);
    if (local_res8[0] != '\0') {
      FUN_180488320("##settings");
    }
    cVar4 = FUN_180488630("##settings",param_1,0);
    if (cVar4 != '\0') {
      FUN_180488c60();
      FUN_18050e290(param_2);
      FUN_180488f10();
      FUN_1804aeac0();
    }
    iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar2 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
    }
    if (cVar3 != '\0') {
      FUN_18050cd00();
    }
  }
  else {
    FUN_1804898a0(param_1,param_2,uVar5,1,1,0);
    FUN_180493f00(param_1);
    FUN_180488c60();
    FUN_18050e290(param_2);
    FUN_180488f10();
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (cVar1 != *param_2) {
    param_2[0x10] = *param_2;
  }
  return;
}



