// FUN_180010410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180010410 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_180010410(char param_1,undefined8 *param_2,longlong *param_3,PUCHAR param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  NTSTATUS NVar2;
  int iVar3;
  PUCHAR pUVar4;
  undefined4 uVar5;
  uint cbInput;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStackY_f8 [32];
  ULONG local_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  BCRYPT_KEY_HANDLE local_48;
  BCRYPT_ALG_HANDLE local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_f8;
  if ((DAT_180bacc54 != '\x01') || ((ulonglong)(param_3[1] - *param_3) < 0x1c)) {
    uVar5 = 0;
    goto LAB_180010449;
  }
  local_40 = (BCRYPT_HANDLE)0x0;
  local_48 = (BCRYPT_KEY_HANDLE)0x0;
  uVar5 = 0;
  NVar2 = BCryptOpenAlgorithmProvider(&local_40,L"AES",(LPCWSTR)0x0,0);
  if (NVar2 < 0) goto LAB_180010449;
  NVar2 = BCryptSetProperty(local_40,L"ChainingMode",(PUCHAR)L"ChainingModeGCM",0x20,0);
  if (NVar2 < 0) {
    bVar8 = false;
  }
  else {
    if (param_5[1] == 0) {
      pUVar4 = &DAT_180bacbf0;
    }
    else {
      pUVar4 = (PUCHAR)*param_5;
    }
    NVar2 = BCryptGenerateSymmetricKey(local_40,&local_48,(PUCHAR)0x0,0,pUVar4,0x20,0);
    bVar8 = -1 < NVar2;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  local_50 = 0;
  local_a0 = 0x100000058;
  local_98 = *param_3;
  local_90 = 0xc;
  lStack_78 = local_98 + 0xc;
  local_70 = 0x10;
  uStack_88 = *param_2;
  local_80 = (ulonglong)*(uint *)(param_2 + 1);
  local_a4 = 0;
  cbInput = ((int)param_3[1] - (int)local_98) - 0x1c;
  uVar6 = (ulonglong)cbInput;
  if (param_1 == '\0') {
    uVar1 = *(ulonglong *)(param_4 + 0x10);
    uVar7 = uVar6 - uVar1;
    if (uVar6 < uVar1 || uVar7 == 0) {
      *(ulonglong *)(param_4 + 0x10) = uVar6;
      pUVar4 = param_4;
      if (0xf < *(ulonglong *)(param_4 + 0x18)) {
        pUVar4 = *(PUCHAR *)param_4;
      }
      pUVar4[uVar6] = '\0';
    }
    else if (*(ulonglong *)(param_4 + 0x18) - uVar1 < uVar7) {
      FUN_180047ee0(param_4,uVar7,uVar7,uVar7);
    }
    else {
      *(ulonglong *)(param_4 + 0x10) = uVar6;
      pUVar4 = param_4;
      if (0xf < *(ulonglong *)(param_4 + 0x18)) {
        pUVar4 = *(PUCHAR *)param_4;
      }
      FUN_18063ab10(pUVar4 + uVar1);
      pUVar4[uVar6] = '\0';
    }
    if (!bVar8) goto LAB_18001067a;
    pUVar4 = param_4;
    if (0xf < *(ulonglong *)(param_4 + 0x18)) {
      pUVar4 = *(PUCHAR *)param_4;
    }
    iVar3 = BCryptDecrypt(local_48,(PUCHAR)(*param_3 + 0x1c),cbInput,&local_a0,(PUCHAR)0x0,0,pUVar4,
                          cbInput,&local_a4,0);
LAB_180010706:
    uVar5 = CONCAT31((int3)(cbInput >> 8),local_a4 == cbInput && -1 < iVar3);
  }
  else {
    if (bVar8) {
      pUVar4 = param_4;
      if (0xf < *(ulonglong *)(param_4 + 0x18)) {
        pUVar4 = *(PUCHAR *)param_4;
      }
      iVar3 = BCryptEncrypt(local_48,pUVar4,cbInput,&local_a0,(PUCHAR)0x0,0,
                            (PUCHAR)(local_98 + 0x1c),cbInput,&local_a4,0);
      goto LAB_180010706;
    }
LAB_18001067a:
    uVar5 = 0;
  }
  if (local_48 != (BCRYPT_KEY_HANDLE)0x0) {
    BCryptDestroyKey(local_48);
  }
  BCryptCloseAlgorithmProvider(local_40,0);
  if (((char)uVar5 == '\0') && (*(longlong *)(param_4 + 0x10) != 0)) {
    pUVar4 = param_4;
    if (0xf < *(ulonglong *)(param_4 + 0x18)) {
      pUVar4 = *(PUCHAR *)param_4;
    }
    FUN_18063ab10(pUVar4,0);
    param_4[0x10] = '\0';
    param_4[0x11] = '\0';
    param_4[0x12] = '\0';
    param_4[0x13] = '\0';
    param_4[0x14] = '\0';
    param_4[0x15] = '\0';
    param_4[0x16] = '\0';
    param_4[0x17] = '\0';
    if (0xf < *(ulonglong *)(param_4 + 0x18)) {
      param_4 = *(PUCHAR *)param_4;
    }
    *param_4 = '\0';
  }
LAB_180010449:
  if (DAT_1808d5f00 != (local_38 ^ (ulonglong)auStackY_f8)) {
  }
  return uVar5;
}



