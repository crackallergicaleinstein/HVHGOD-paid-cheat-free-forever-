// FUN_18018dcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018dcb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018dcb0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if (*(longlong *)*param_1 != 0) {
    DVar2 = GetLastError();
    pcVar6 = (char *)((longlong)&uStack_20 + 5);
    uVar4 = (ulonglong)DVar2;
    do {
      pcVar6 = pcVar6 + -1;
      uVar1 = uVar4 / 10;
      *pcVar6 = (char)uVar4 + (char)uVar1 * -10 + '0';
      uVar4 = uVar1;
    } while ((int)uVar1 != 0);
    FUN_18015bdb0(local_50,pcVar6,(longlong)&uStack_20 + 5);
    local_70 = (undefined1  [16])0x0;
    local_60 = (undefined1  [16])0x0;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)(param_2 + lVar5) != '\0');
    FUN_18015ba30(local_70,param_2);
    puVar3 = (undefined8 *)FUN_18015b2a0(local_70,&DAT_1807013fc,1);
    local_30 = *puVar3;
    uStack_28 = puVar3[1];
    uStack_20 = puVar3[2];
    uStack_18 = puVar3[3];
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    FUN_18015a6e0(&local_90);
    puVar3 = *(undefined8 **)*param_1;
    if (puVar3 != &local_90) {
      FUN_18015c010(puVar3);
      *puVar3 = CONCAT71(local_90._1_7_,(undefined1)local_90);
      puVar3[1] = uStack_88;
      puVar3[2] = uStack_80;
      puVar3[3] = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0xf;
      local_90._0_1_ = 0;
    }
    FUN_18015c010(&local_90);
    FUN_18015c010(&local_30);
    FUN_18015c010(local_70);
    FUN_18015c010(local_50);
  }
}



