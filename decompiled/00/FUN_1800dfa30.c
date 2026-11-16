// FUN_1800dfa30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800dfa30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dfa30(undefined8 param_1,undefined1 (*param_2) [16],undefined8 *param_3,
                  undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  uVar2 = FUN_1800aa290(&local_38,&local_48);
  FUN_18015abc0(local_28,0xc,&DAT_1806bbf8c,uVar2);
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  lVar3 = -1;
  do {
    lVar1 = lVar3 + 1;
    lVar3 = lVar3 + 1;
  } while (local_28[lVar1] != '\0');
  FUN_18015ba30(param_2,local_28);
}



