// FUN_1800a8bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a8bb0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a8bb0(undefined1 (*param_1) [16])

{
  DWORD DVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined1 auStack_10058 [16];
  undefined8 uStack_10048;
  undefined8 uStack_10040;
  undefined1 auStack_10038 [16];
  longlong lStack_10028;
  ulonglong uStack_10020;
  WCHAR aWStack_10018 [32776];
  
  FUN_18063ab10(aWStack_10018,0,0x10000);
  DVar1 = GetEnvironmentVariableW(L"LOCALAPPDATA",aWStack_10018,0x8000);
  if (0x7ffe < DVar1 - 1) {
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (aWStack_10018[lVar4] != L'\0');
  auStack_10038 = (undefined1  [16])0x0;
  lStack_10028 = 0;
  uStack_10020 = 0;
  FUN_180159e60(auStack_10038,aWStack_10018);
  puVar3 = (uint *)auStack_10038;
  if (7 < uStack_10020) {
    puVar3 = (uint *)auStack_10038._0_8_;
  }
  lVar4 = lStack_10028 * 2 >> 1;
  if ((lVar4 < 2) || (0x19 < (*puVar3 & 0xffffffdf) - 0x3a0041)) {
    puVar2 = (uint *)FUN_1800a7b00(puVar3,lStack_10028 * 2 + (longlong)puVar3);
    if (puVar3 == puVar2) goto LAB_1800a8d12;
  }
  else if ((lVar4 < 3) || (((short)puVar3[1] != 0x5c && ((short)puVar3[1] != 0x2f)))) {
LAB_1800a8d12:
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
    FUN_18015b930(auStack_10038);
  }
  auStack_10058 = (undefined1  [16])0x0;
  uStack_10048 = 0;
  uStack_10040 = 0;
  FUN_180159e60(auStack_10058,L"HVHGOD",6);
  FUN_1800a7e60(param_1,auStack_10038,auStack_10058);
  FUN_18015b930(auStack_10058);
  FUN_18015b930(auStack_10038);
}



