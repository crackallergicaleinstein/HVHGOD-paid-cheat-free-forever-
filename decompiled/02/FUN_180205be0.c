// FUN_180205be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180205be0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180205be0(LPCWSTR param_1,LARGE_INTEGER param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  char cVar1;
  BOOL BVar2;
  HANDLE hFile;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStackY_88 [32];
  HANDLE local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  if (0xfffffff < param_3 - 1) {
    FUN_180113930(param_5,"invalid entry length",0x14);
  }
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  hFile = CreateFileW(param_1,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_48 = hFile;
  if (((longlong)hFile + 1U & 0xfffffffffffffffe) == 0) {
    pcVar3 = "archive open failed";
    uVar4 = 0x13;
  }
  else {
    local_40.QuadPart._0_4_ = 0;
    local_40.QuadPart._4_4_ = 0;
    BVar2 = GetFileSizeEx(hFile,&local_40);
    if ((((BVar2 == 0) || (local_40.QuadPart < 0)) || ((ulonglong)local_40.s < (ulonglong)param_2.s)
        ) || ((ulonglong)(local_40.QuadPart - param_2.QuadPart) < (ulonglong)param_3)) {
      pcVar3 = "entry outside archive";
      uVar4 = 0x15;
    }
    else {
      if (((ulonglong)param_2.s < 0x8000000000000000) &&
         (BVar2 = SetFilePointerEx(hFile,param_2,(PLARGE_INTEGER)0x0,0), BVar2 != 0)) {
        FUN_1801b0ec0(param_4,(ulonglong)param_3);
        cVar1 = FUN_180185d40(&local_48,*param_4,param_4[1] - *param_4);
        if (cVar1 == '\0') {
          FUN_180113930(param_5,"entry read failed",0x11);
          hFile = local_48;
          if (*param_4 != param_4[1]) {
            param_4[1] = *param_4;
          }
        }
        else {
          hFile = local_48;
        }
        goto LAB_180205d5a;
      }
      pcVar3 = "archive seek failed";
      uVar4 = 0x13;
    }
  }
  FUN_180113930(param_5,pcVar3,uVar4);
LAB_180205d5a:
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    CloseHandle(hFile);
  }
}



