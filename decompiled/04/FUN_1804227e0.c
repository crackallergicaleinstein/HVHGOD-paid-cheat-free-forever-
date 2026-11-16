// FUN_1804227e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804227e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804227e0(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_68 [32];
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  cVar3 = *param_1;
  bVar2 = false;
  bVar1 = false;
  local_48 = (char *)0x0;
  if ((cVar3 == '+') || (cVar3 == '-')) {
    cVar3 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (((byte)(cVar3 - 0x30U) < 10) && (FUN_18060faa4(param_1,&local_48,10), param_1 != local_48)) {
    bVar1 = true;
    param_1 = local_48;
  }
  pcVar5 = param_1;
  if (((*param_1 == '.') && (pcVar5 = param_1 + 1, (byte)(param_1[1] - 0x30U) < 10)) &&
     (FUN_18060faa4(pcVar5,&local_48,10), pcVar5 != local_48)) {
    FUN_18061d2e0(0x4024000000000000,(double)((longlong)local_48 - (longlong)pcVar5));
    bVar2 = true;
    pcVar5 = local_48;
  }
  if ((((bVar1) || (bVar2)) && ((*pcVar5 == 'e' || (*pcVar5 == 'E')))) &&
     (iVar4 = FUN_18060f9f0(pcVar5 + 1,&local_48,10), pcVar5 + 1 != local_48)) {
    FUN_18061d2e0(0x4024000000000000,(double)iVar4);
  }
}



