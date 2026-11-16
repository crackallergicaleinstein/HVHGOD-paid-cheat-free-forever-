// FUN_180185df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185df0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180185df0(LPCWSTR param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  LARGE_INTEGER LVar2;
  char cVar3;
  BOOL BVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStackY_88 [32];
  HANDLE local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  local_48 = CreateFileW(param_1,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (((longlong)local_48 + 1U & 0xfffffffffffffffe) == 0) {
    pcVar5 = "open failed";
    uVar6 = 0xb;
  }
  else {
    local_40.QuadPart = 0;
    BVar4 = GetFileSizeEx(local_48,&local_40);
    LVar2.s = local_40.s;
    if (((BVar4 == 0) || (local_40.QuadPart < 0)) || ((ulonglong)local_40.s < 0x1c)) {
      pcVar5 = "invalid file size";
LAB_180185f54:
      uVar6 = 0x11;
    }
    else {
      cVar3 = FUN_180185d40(&local_48,param_2,0x1c);
      if (cVar3 == '\0') {
        pcVar5 = "header read failed";
        uVar6 = 0x12;
      }
      else {
        if ((*param_2 == 0x55aa1234) && (param_2[1] == 2)) {
          uVar1 = param_2[2];
          if (((uVar1 != 0) && (uVar1 < 0x10000001)) && ((ulonglong)uVar1 <= LVar2.QuadPart - 0x1cU)
             ) {
            FUN_1801b0ec0(param_3,uVar1);
            cVar3 = FUN_180185d40(&local_48,*param_3,param_3[1] - *param_3);
            if (cVar3 == '\0') {
              FUN_180113930(param_4,"tree read failed",0x10);
              if (*param_3 != param_3[1]) {
                param_3[1] = *param_3;
              }
            }
            goto LAB_180185f64;
          }
          pcVar5 = "invalid tree size";
          goto LAB_180185f54;
        }
        pcVar5 = "unsupported header";
        uVar6 = 0x12;
      }
    }
  }
  FUN_180113930(param_4,pcVar5,uVar6);
LAB_180185f64:
  if ((longlong)local_48 - 1U < 0xfffffffffffffffe) {
    CloseHandle(local_48);
  }
}



