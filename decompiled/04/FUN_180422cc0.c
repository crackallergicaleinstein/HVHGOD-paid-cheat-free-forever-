// FUN_180422cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422cc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180422cc0(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (param_1[uVar4] != '\0');
  if (uVar4 != 0) {
    if (*param_1 == '#') {
      local_38 = &local_24;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0;
      iVar3 = FUN_1804396b0(param_1,"#%2x%2x%2x",local_20,&local_28);
      if (iVar3 == 3) {
      }
      local_38 = &local_24;
      FUN_1804396b0(param_1,"#%1x%1x%1x",local_20,&local_28);
    }
    if ((((3 < uVar4) && (*param_1 == 'r')) && (param_1[1] == 'g')) &&
       ((param_1[2] == 'b' && (param_1[3] == '(')))) {
      FUN_180422ab0(param_1);
    }
  }
  ppuVar7 = &PTR_DAT_1808da4e0;
  do {
    pcVar5 = *ppuVar7;
    lVar6 = (longlong)param_1 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar6];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) || (ppuVar7 = ppuVar7 + 2, 0x1808da57f < (longlong)ppuVar7)) {
    }
  } while( true );
}



