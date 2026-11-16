// FUN_180459d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180459d20 */

void FUN_180459d20(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  char cVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined **local_68;
  undefined **local_60;
  undefined4 local_58 [2];
  int local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  local_50[0] = *(int *)(param_3 + 0x188);
  iVar5 = *(int *)((longlong)param_3 + 0xc44) + -1;
  local_68 = (undefined **)CONCAT44(local_68._4_4_,iVar5);
  local_58[0] = 0;
  pppuVar3 = (undefined ***)local_58;
  if (-1 < local_50[0]) {
    pppuVar3 = (undefined ***)local_50;
  }
  pppuVar2 = &local_68;
  if (local_50[0] <= iVar5) {
    pppuVar2 = pppuVar3;
  }
  ppuVar4 = param_3 + (longlong)*(int *)pppuVar2 * 0x31 + 4;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = (undefined1  [16])0x0;
  FUN_180485630(&local_48,param_2,1,iVar5,0x437d8000,0x420e6666,"EFFECTS",9);
  local_68 = ppuVar4;
  local_60 = param_3;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Presets");
    cVar1 = FUN_180486160(&local_48,"Presets");
    if (DAT_180bbecdb == '\0') {
      if (cVar1 != '\0') {
        FUN_180488320("##settings");
      }
      cVar1 = FUN_180488630("##settings","Presets",0);
      if (cVar1 != '\0') {
        FUN_18045a280(&local_68);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Presets");
      FUN_18045a280(&local_68);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
  }
  else {
    FUN_180493f00();
    FUN_18045a280(&local_68);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  local_68 = ppuVar4;
  FUN_18045ac10(&local_48);
  local_68 = ppuVar4;
  FUN_18045b060(&local_48);
  local_68 = ppuVar4;
  FUN_18045b4b0(&local_48);
  local_68 = ppuVar4;
  FUN_18045b860(&local_48);
  local_68 = ppuVar4;
  FUN_18045bcb0(&local_48);
  if (DAT_180bbecdb == '\0') {
    local_68 = ppuVar4;
    FUN_1804c2800("Post Processing");
    cVar1 = FUN_180486160(&local_48,"Post Processing");
    if (DAT_180bbecdb == '\0') {
      if (cVar1 != '\0') {
        FUN_180488320("##settings");
      }
      cVar1 = FUN_180488630("##settings","Post Processing",0);
      if (cVar1 != '\0') {
        FUN_18045a660(&local_68);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Post Processing");
      FUN_18045a660(&local_68);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
  }
  else {
    local_68 = ppuVar4;
    FUN_180493f00();
    FUN_18045a660(&local_68);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  local_68 = param_3;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Weather");
    cVar1 = FUN_180486160(&local_48,"Weather");
    if (DAT_180bbecdb == '\0') {
      if (cVar1 != '\0') {
        FUN_180488320("##settings");
      }
      cVar1 = FUN_180488630("##settings","Weather",0);
      if (cVar1 != '\0') {
        FUN_18045a890(&local_68);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Weather");
      FUN_18045a890(&local_68);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
  }
  else {
    FUN_180493f00();
    FUN_18045a890(&local_68);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  local_68 = &PTR_DAT_18077ee88;
  local_60 = (undefined **)0x6;
  FUN_180486f50(&local_48,"Removals",&local_68,ppuVar4 + 0x27,"Select");
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar5 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
  }
  return;
}



