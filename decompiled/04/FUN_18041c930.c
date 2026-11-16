// FUN_18041c930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041c930 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041c930(char param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [32];
  short *local_308;
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [16];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [32];
  undefined1 local_270 [32];
  undefined1 local_250 [40];
  short local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  FUN_1802c6ac0(local_250);
  FUN_1800f5370(local_2f0,local_250);
  cVar1 = FUN_180165ac0(local_2f0);
  if (((cVar1 == '\0') || (cVar1 = FUN_1800a9120(local_250), cVar1 == '\0')) || (param_1 == '\0')) {
    FUN_18015b930(local_250);
  }
  FUN_18063ab10(local_228,0,0x208);
  local_308 = local_228;
  iVar2 = SHGetFolderPathW(0,0x1a,0,0);
  if (-1 < iVar2) {
    local_2f0 = (undefined1  [16])0x0;
    local_2e0 = 0;
    local_2d8 = 0;
    FUN_180159e60(local_2f0,L"sounds",6);
    local_2b0 = (undefined1  [16])0x0;
    local_2a0 = 0;
    local_298 = 0;
    FUN_180159e60(local_2b0,L"velocity",8);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (local_228[lVar4] != 0);
    local_2d0 = (undefined1  [16])0x0;
    local_2c0 = 0;
    local_2b8 = 0;
    FUN_180159e60(local_2d0,local_228);
    uVar3 = FUN_1800a7e60(local_270,local_2d0,local_2b0);
    uVar3 = FUN_1800a7e60(local_290,uVar3,local_2f0);
    FUN_18041c770(uVar3,local_250);
    FUN_18015b930(local_290);
    FUN_18015b930(local_270);
    FUN_18015b930(local_2d0);
    FUN_18015b930(local_2b0);
    FUN_18015b930(local_2f0);
  }
  FUN_18015b930(local_250);
}



