// FUN_1802c6f70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c6f70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c6f70(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  LPCWSTR ***lpFileName;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint local_d8;
  undefined1 (*local_d0) [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [40];
  undefined1 local_80 [32];
  LPCWSTR ***local_60 [3];
  ulonglong local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  lVar1 = param_2[1];
  if (lVar1 == 0) {
LAB_1802c71ab:
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  pbVar2 = (byte *)*param_2;
  local_e8 = 3;
  local_d0 = param_1;
  lVar7 = FUN_18010fae0(pbVar2,lVar1,param_3,&DAT_1808005e4);
  if (lVar7 != -1) goto LAB_1802c71ab;
  for (pbVar8 = pbVar2; pbVar8 != pbVar2 + lVar1; pbVar8 = pbVar8 + 1) {
    if (*pbVar8 < 0x20) goto LAB_1802c71ab;
  }
  FUN_1802c6ac0(local_40);
  FUN_1800f5370(local_c8,local_40);
  cVar4 = FUN_180165ac0(local_c8);
  if (cVar4 == '\0') {
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
    FUN_18015b930(local_40);
  }
  uVar9 = FUN_1802e27f0(local_80,pbVar2,pbVar2 + lVar1);
  uVar9 = FUN_1802e28c0(local_c8,uVar9);
  FUN_1800a7e60(local_60,local_40,uVar9);
  FUN_18015b930(local_c8);
  FUN_18015c010(local_80);
  puVar10 = (undefined8 *)FUN_1801bdad0(local_60,local_a8);
  if (7 < (ulonglong)puVar10[3]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  iVar5 = FUN_180615da0(puVar10,L".wav");
  FUN_18015b930(local_a8);
  if (iVar5 == 0) {
    lpFileName = (LPCWSTR ***)local_60;
    if (7 < local_48) {
      lpFileName = local_60[0];
    }
    DVar6 = GetFileAttributesW((LPCWSTR)lpFileName);
    if ((DVar6 != 0xffffffff) && ((DVar6 & 0x410) == 0)) {
      FUN_1800f5370(local_a8,local_60);
      puVar11 = local_a8;
      uVar12 = 2;
      goto LAB_1802c7159;
    }
  }
  local_b8 = 0;
  uStack_b0 = 7;
  local_c8._2_14_ = SUB1614((undefined1  [16])0x0,2);
  auVar3._14_2_ = 0;
  auVar3._0_14_ = local_c8._2_14_;
  local_c8 = auVar3 << 0x10;
  puVar11 = local_c8;
  uVar12 = 4;
LAB_1802c7159:
  local_d8 = uVar12;
  FUN_1800f5370(param_1,puVar11);
  if ((uVar12 & 4) != 0) {
    uVar12 = uVar12 & 0xfffffffb;
    FUN_18015b930(local_c8);
  }
  if ((uVar12 & 2) != 0) {
    FUN_18015b930(local_a8);
  }
  FUN_18015b930(local_60);
  FUN_18015b930(local_40);
}



