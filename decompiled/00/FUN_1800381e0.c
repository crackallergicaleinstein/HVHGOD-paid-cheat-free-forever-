// FUN_1800381e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800381e0 */

void FUN_1800381e0(undefined8 *param_1,undefined8 *param_2)

{
  NTSTATUS NVar1;
  int iVar2;
  BCRYPT_ALG_HANDLE local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_60 = (BCRYPT_ALG_HANDLE)0x0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  NVar1 = BCryptOpenAlgorithmProvider(&local_60,L"SHA256",(LPCWSTR)0x0,0);
  if (NVar1 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar2 = BCryptHash(local_60,0,0,*param_2,*(undefined4 *)(param_2 + 1),&local_48,0x20);
    BCryptCloseAlgorithmProvider(local_60,0);
    if (-1 < iVar2) {
      local_50 = 0x20;
      local_58 = &local_48;
      FUN_180001790(param_1,&local_58,0);
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  return;
}



