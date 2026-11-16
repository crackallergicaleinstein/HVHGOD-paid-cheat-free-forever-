// FUN_18062578c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062578c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18062578c(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1806257a4;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_180bb2130)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
    }
  } while( true );
}



