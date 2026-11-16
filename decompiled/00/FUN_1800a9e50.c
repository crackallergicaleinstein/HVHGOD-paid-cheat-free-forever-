// FUN_1800a9e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a9e50 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a9e50(int param_1,char *param_2)

{
  DWORD DVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar7;
  longlong lVar6;
  undefined8 uVar8;
  undefined1 auStack_10e8 [32];
  uint local_10c8;
  uint local_10c0;
  uint local_10b8;
  uint local_10b0;
  uint local_10a8;
  uint local_10a0;
  uint local_1098;
  char *local_1090;
  char *local_1088;
  DWORD local_1080;
  DWORD local_1078;
  undefined4 local_1070;
  char *local_1068;
  char *local_1058;
  longlong local_1050;
  _SYSTEMTIME local_1048;
  char local_1038 [4096];
  ulonglong local_38;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_10e8;
  uVar4 = 0;
  lVar6 = 0;
  if (*param_2 != '\0') {
    do {
      lVar7 = lVar6;
      lVar6 = lVar7 + 1;
    } while (param_2[lVar6] != '\0');
    if (lVar6 != 0) {
      pcVar2 = param_2 + lVar7;
      do {
        if ((*pcVar2 != '\r') && (*pcVar2 != '\n')) break;
        pcVar2 = pcVar2 + -1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  local_1048.wYear = 0;
  local_1048.wMonth = 0;
  local_1048.wDayOfWeek = 0;
  local_1048.wDay = 0;
  local_1048.wHour = 0;
  local_1048.wMinute = 0;
  local_1048.wSecond = 0;
  local_1048.wMilliseconds = 0;
  GetLocalTime(&local_1048);
  FUN_18063ab10(local_1038,0,0x1000);
  DVar1 = GetCurrentThreadId();
  local_1080 = GetCurrentProcessId();
  if (param_1 == 0) {
    local_1090 = "DEBUG";
  }
  else if (param_1 == 1) {
    local_1090 = "INFO ";
  }
  else if (param_1 == 2) {
    local_1090 = "WARN ";
  }
  else if (param_1 == 3) {
    local_1090 = "ERROR";
  }
  else if (param_1 == 4) {
    local_1090 = "FATAL";
  }
  else {
    local_1090 = "?????";
  }
  local_1070 = (undefined4)lVar6;
  local_1088 = s_uninitialized_1808d7d90;
  local_1098 = (uint)local_1048.wMilliseconds;
  local_10a0 = (uint)local_1048.wSecond;
  local_10a8 = (uint)local_1048.wMinute;
  local_10b0 = (uint)local_1048.wHour;
  local_10b8 = (uint)local_1048.wDay;
  local_10c0 = (uint)local_1048.wMonth;
  local_10c8 = (uint)local_1048.wYear;
  local_1078 = DVar1;
  local_1068 = param_2;
  FUN_18015ad60(local_1038,0x1000,0xffffffffffffffff,
                "[%04u-%02u-%02u %02u:%02u:%02u.%03u] [%s] [session=%s] [P%lu:T%lu] %.*s\r\n");
  do {
    iVar5 = (int)uVar4;
    if (local_1038[uVar4] == '\0') break;
    uVar4 = (ulonglong)(iVar5 + 1);
  } while (iVar5 + 2U < 0x1000);
  uVar3 = 0;
  if ((int)uVar4 != 0) {
    do {
      uVar3 = (int)uVar4 - 1;
      if ((local_1038[uVar3] != '\r') && (local_1038[uVar3] != '\n')) break;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 != 0);
    uVar3 = (uint)uVar4;
    if (uVar3 != 0) {
      pcVar2 = local_1038;
      do {
        if ((*pcVar2 == '\r') || (*pcVar2 == '\n')) {
          *pcVar2 = ' ';
        }
        pcVar2 = pcVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  uVar4 = (ulonglong)uVar3;
  if (0xffd < uVar3) {
    uVar4 = 0xffd;
  }
  local_1038[uVar4] = '\r';
  uVar3 = (int)uVar4 + 2;
  local_1038[(int)uVar4 + 1] = '\n';
  if (0xfff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f5e50();
  }
  local_1038[uVar3] = '\0';
  local_1058 = param_2;
  local_1050 = lVar6;
  lVar6 = FUN_1800a9160(&local_1058);
  if (param_1 - 3U < 2) {
    FUN_1800a9c30(lVar6,local_1038,uVar3,1);
    if (lVar6 == 0x15) goto LAB_1800aa0e4;
    uVar8 = 1;
    lVar6 = 0x15;
  }
  else {
    uVar8 = 0;
  }
  FUN_1800a9c30(lVar6,local_1038,uVar3,uVar8);
LAB_1800aa0e4:
  OutputDebugStringA(local_1038);
}



