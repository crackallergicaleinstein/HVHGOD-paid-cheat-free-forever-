// FUN_180187280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180187280 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187280(undefined8 *param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  DWORD DVar5;
  short *psVar6;
  LPCWSTR pWVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (cVar4 = FUN_1800a7de0(), cVar4 != '\0')) {
    puVar8 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    psVar1 = (short *)((longlong)puVar8 + lVar2 * 2);
    for (psVar6 = (short *)FUN_1800a7b00(puVar8,psVar1);
        (psVar6 != psVar1 && ((*psVar6 == 0x5c || (*psVar6 == 0x2f)))); psVar6 = psVar6 + 1) {
    }
    local_70 = (undefined1  [16])0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_180159e60(local_70,puVar8,(longlong)psVar6 - (longlong)puVar8 >> 1);
    puVar8 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    psVar1 = (short *)((longlong)puVar8 + param_1[2] * 2);
    for (psVar6 = (short *)FUN_1800a7b00(puVar8,psVar1);
        (psVar6 != psVar1 && ((*psVar6 == 0x5c || (*psVar6 == 0x2f)))); psVar6 = psVar6 + 1) {
    }
    local_90 = (undefined1  [16])0x0;
    local_80 = 0;
    local_78 = 0;
    FUN_180159e60(local_90,psVar6,(longlong)psVar1 - (longlong)psVar6 >> 1);
    local_50 = (undefined1 *)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    local_30 = (undefined1  [16])0x0;
    FUN_18017d720(local_90,&local_50);
    puVar9 = local_90;
    if (7 < local_78) {
      puVar9 = (undefined1 *)local_90._0_8_;
    }
    lVar2 = local_80 * 2;
    uStack_c8 = 0;
    auStack_d8._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar3._14_2_ = 0;
    auVar3._0_14_ = auStack_d8._2_14_;
    auStack_d8 = auVar3 << 0x10;
    auStack_c0._8_8_ = local_90;
    auStack_c0._0_8_ = 7;
    local_e0 = puVar9 + lVar2;
    while (local_50 != puVar9 + lVar2) {
      FUN_1800a7c10(local_70,&uStack_48);
      pWVar7 = (LPCWSTR)FUN_180186ef0(local_b0,local_70);
      if (7 < *(ulonglong *)(pWVar7 + 0xc)) {
        pWVar7 = *(LPCWSTR *)pWVar7;
      }
      CreateDirectoryW(pWVar7,(LPSECURITY_ATTRIBUTES)0x0);
      FUN_18015b930(local_b0);
      pWVar7 = (LPCWSTR)FUN_180186ef0(local_b0,local_70);
      if (7 < *(ulonglong *)(pWVar7 + 0xc)) {
        pWVar7 = *(LPCWSTR *)pWVar7;
      }
      DVar5 = GetFileAttributesW(pWVar7);
      FUN_18015b930(local_b0);
      if ((DVar5 == 0xffffffff) || ((DVar5 & 0x410) != 0x10)) {
        FUN_18015b930(auStack_d8);
        FUN_18015b930(&uStack_48);
        FUN_18015b930(local_90);
        goto LAB_1801874bb;
      }
      FUN_1801ad0b0(&local_50);
    }
    FUN_18015b930(auStack_d8);
    FUN_18015b930(&uStack_48);
    FUN_18015b930(local_90);
LAB_1801874bb:
    FUN_18015b930(local_70);
  }
}



