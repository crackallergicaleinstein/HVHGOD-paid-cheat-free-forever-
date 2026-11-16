// FUN_18050e080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050e080 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18050e080(longlong param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  undefined8 ****local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  if (param_3 < 0) {
    bVar7 = DAT_180c62fe0 == param_2;
  }
  else {
    bVar7 = DAT_1808e4f84 == param_3;
  }
  if (bVar7) {
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    FUN_18015ba30(local_b0,"Press a key...",0xe);
    uVar4 = 1;
  }
  else {
    FUN_18050da90(local_70,*param_2);
    uVar4 = 2;
  }
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(param_1 + lVar6) != '\0');
  local_d8 = uVar4;
  FUN_18015ba30(local_d0,param_1);
  puVar2 = (undefined8 *)FUN_18015b2a0(local_d0,&DAT_180700480,2);
  local_90 = *puVar2;
  uStack_88 = puVar2[1];
  uStack_80 = puVar2[2];
  uStack_78 = puVar2[3];
  *(undefined1 *)puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  uVar5 = uVar4 | 4;
  local_d8 = uVar5;
  FUN_18015a6e0(local_50);
  FUN_18015c010(&local_90);
  FUN_18015c010(local_d0);
  if ((uVar4 & 2) != 0) {
    uVar5 = uVar4 & 0xfffffffd;
    FUN_18015c010(local_70);
  }
  if ((uVar5 & 1) != 0) {
    FUN_18015c010(local_b0);
  }
  ppppuVar3 = local_50;
  if (0xf < local_38) {
    ppppuVar3 = local_50[0];
  }
  cVar1 = FUN_18048b0e0(ppppuVar3,&DAT_180829e08,1);
  if (cVar1 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = (undefined4 *)0x0;
    DAT_1808e4f84 = -1;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    *(undefined8 *)(lVar6 + 0x420) = 0;
    if (param_3 < 0) {
      DAT_180c62fe0 = param_2;
    }
    else {
      DAT_1808e4f84 = param_3;
    }
    DAT_180bbecdf = 1;
    lVar6 = FUN_180439770();
    *(undefined8 *)(lVar6 + 0x420) = 1;
  }
  FUN_18015c010(local_50);
}



