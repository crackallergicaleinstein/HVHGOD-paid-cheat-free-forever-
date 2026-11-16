// FUN_1805328b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805328b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805328b0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint local_98 [2];
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 *local_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  char *local_58;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  
  local_98[0] = (uint)*(byte *)(*param_1 + 0x1a8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb88b0;
  uStack_88 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar2 = FUN_18050a280(&PTR_s_Molotov___Incendiary_180800f10,local_90 & 0xffffffff);
  local_78 = &DAT_1808007b0;
  ppuStack_70 = &PTR_180700558;
  ppuStack_68 = &PTR_180700558;
  ppuStack_60 = &PTR_180700558;
  local_58 = "Molotov / Incendiary";
  pcStack_50 = "molotov";
  pcStack_48 = "molotov";
  pcStack_40 = "incgrenade";
  cVar1 = FUN_180551e90("Molotov / Incendiary",local_98,&local_78,&DAT_1808589fc,uVar2);
  if (cVar1 != '\0') {
    *(bool *)(*param_1 + 0x1a8) = local_98[0] != 0;
  }
  local_98[0] = (uint)*(byte *)(*param_1 + 0x1a9);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb88b0;
  uStack_88 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar2 = FUN_18050a280(&PTR_s_HE_Grenade_180800f30,local_90 & 0xffffffff);
  local_78 = &DAT_1808007b0;
  ppuStack_70 = &PTR_180700558;
  ppuStack_68 = &PTR_180700558;
  ppuStack_60 = &PTR_180700558;
  local_58 = "HE Grenade";
  pcStack_50 = "hegrenade";
  pcStack_48 = "hegrenade";
  pcStack_40 = "hegrenade";
  cVar1 = FUN_180551e90("HE Grenade",local_98,&local_78,&DAT_180829f9c,uVar2);
  if (cVar1 != '\0') {
    *(bool *)(*param_1 + 0x1a9) = local_98[0] != 0;
  }
  local_98[0] = (uint)*(byte *)(*param_1 + 0x1aa);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb88b0;
  uStack_88 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar2 = FUN_18050a280(&PTR_s_Smoke_Grenade_180800f50,local_90 & 0xffffffff);
  local_78 = &DAT_1808007b0;
  ppuStack_70 = &PTR_180700558;
  ppuStack_68 = &PTR_180700558;
  ppuStack_60 = &PTR_180700558;
  local_58 = "Smoke Grenade";
  pcStack_50 = "smokegrenade";
  pcStack_48 = "smokegrenade";
  pcStack_40 = "smokegrenade";
  cVar1 = FUN_180551e90("Smoke Grenade",local_98,&local_78,&DAT_180829a44,uVar2);
  if (cVar1 != '\0') {
    *(bool *)(*param_1 + 0x1aa) = local_98[0] != 0;
  }
  local_98[0] = (uint)*(byte *)(*param_1 + 0x1ab);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb88b0;
  uStack_88 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar2 = FUN_18050a280(&PTR_s_Flashbang_180800f70,local_90 & 0xffffffff);
  local_78 = &DAT_1808007b0;
  ppuStack_70 = &PTR_180700558;
  ppuStack_68 = &PTR_180700558;
  ppuStack_60 = &PTR_180700558;
  local_58 = "Flashbang";
  pcStack_50 = "flashbang";
  pcStack_48 = "flashbang";
  pcStack_40 = "flashbang";
  cVar1 = FUN_180551e90("Flashbang",local_98,&local_78,&DAT_18082a25c,uVar2);
  if (cVar1 != '\0') {
    *(bool *)(*param_1 + 0x1ab) = local_98[0] != 0;
  }
  local_98[0] = (uint)*(byte *)(*param_1 + 0x1ac);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb88b0;
  uStack_88 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar2 = FUN_18050a280(&PTR_s_Decoy_Grenade_180800f90,local_90 & 0xffffffff);
  local_78 = &DAT_1808007b0;
  ppuStack_70 = &PTR_180700558;
  ppuStack_68 = &PTR_180700558;
  ppuStack_60 = &PTR_180700558;
  local_58 = "Decoy Grenade";
  pcStack_50 = "decoy";
  pcStack_48 = "decoy";
  pcStack_40 = "decoy";
  cVar1 = FUN_180551e90("Decoy Grenade",local_98,&local_78,&DAT_180858a04,uVar2);
  if (cVar1 != '\0') {
    *(bool *)(*param_1 + 0x1ac) = local_98[0] != 0;
  }
  return;
}



