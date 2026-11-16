// FUN_180422ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422ff0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180422ff0(char *param_1,longlong param_2,int param_3,int *param_4)

{
  double dVar1;
  char cVar2;
  char *pcVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  *param_4 = 0;
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    while (cVar2 != '(') {
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar2 == '\0') {
      }
    }
  }
  cVar2 = *param_1;
  if (cVar2 == '\0') {
  }
  pcVar3 = param_1;
  do {
    if (cVar2 == ')') {
      if (*pcVar3 == '\0') {
      }
      while( true ) {
        while( true ) {
          if (pcVar3 <= param_1) {
          }
          cVar2 = *param_1;
          if ((((cVar2 == '-') || (cVar2 == '+')) || (cVar2 == '.')) || ((byte)(cVar2 - 0x30U) < 10)
             ) break;
          param_1 = param_1 + 1;
        }
        if (param_3 <= *param_4) break;
        param_1 = (char *)FUN_180422970(param_1,local_78);
        dVar1 = (double)FUN_1804227e0(local_78);
        *(float *)(param_2 + (longlong)*param_4 * 4) = (float)dVar1;
        *param_4 = *param_4 + 1;
      }
    }
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
}



