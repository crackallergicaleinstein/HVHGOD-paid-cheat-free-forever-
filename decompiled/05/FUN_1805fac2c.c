// FUN_1805fac2c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fac2c */

ulonglong FUN_1805fac2c(DWORD param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  DWORD local_res18 [2];
  
  DVar2 = 0;
  local_res18[0] = 0;
  iVar5 = 0;
  do {
    if (DVar2 != 0) break;
    if (iVar5 == 0) {
      local_res18[0] = 0x409;
LAB_1805fac93:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,
                             (va_list *)0x0);
    }
    else {
      if (iVar5 != 1) {
        local_res18[0] = 0;
        goto LAB_1805fac93;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVar1 != 0) goto LAB_1805fac93;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar3 = (ulonglong)DVar2;
  if (DVar2 != 0) {
    pbVar6 = (byte *)(*param_2 + -1 + uVar3);
    uVar4 = uVar3;
    do {
      if ((&DAT_18068cfa0)[*pbVar6] == '\0') {
        return uVar4;
      }
      pbVar6 = pbVar6 + -1;
      uVar4 = uVar4 - 1;
      uVar3 = 0;
    } while (uVar4 != 0);
  }
  return uVar3;
}



