// FUN_180628d88 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180628d88 */

/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * __ptr64 const,__int64 const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  bool local_res8 [8];
  longlong local_res18 [2];
  
  if (param_1 != (tm *)0x0) {
    param_1->tm_sec = -1;
    param_1->tm_min = -1;
    param_1->tm_hour = -1;
    param_1->tm_mday = -1;
    param_1->tm_mon = -1;
    param_1->tm_year = -1;
    param_1->tm_wday = -1;
    param_1->tm_yday = -1;
    param_1->tm_isdst = -1;
    if (param_2 != (__int64 *)0x0) {
      local_res18[0] = *param_2;
      if ((local_res18[0] < -0xa8c0) || (0x79358efdf < local_res18[0])) {
        puVar2 = (undefined4 *)FUN_18060fe00();
        *puVar2 = 0x16;
        return 0x16;
      }
      local_res8[0] = false;
      iVar1 = compute_year(local_res18,local_res8);
      piVar6 = (int *)&DAT_1806ba638;
      param_1->tm_year = iVar1;
      iVar5 = 1;
      iVar1 = (int)(local_res18[0] / 0x15180);
      param_1->tm_yday = iVar1;
      local_res18[0] = local_res18[0] + (longlong)iVar1 * -0x15180;
      if (local_res8[0] != false) {
        piVar6 = &DAT_1806ba670;
      }
      piVar3 = piVar6;
      while (piVar3 = piVar3 + 1, *piVar3 < iVar1) {
        iVar5 = iVar5 + 1;
      }
      param_1->tm_mon = iVar5 + -1;
      param_1->tm_mday = iVar1 - piVar6[(longlong)iVar5 + -1];
      lVar4 = *param_2;
      param_1->tm_isdst = 0;
      param_1->tm_wday = ((int)(lVar4 / 0x15180) + 4) % 7;
      iVar1 = (int)(local_res18[0] / 0xe10);
      param_1->tm_hour = iVar1;
      local_res18[0] = local_res18[0] + (longlong)iVar1 * -0xe10;
      lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(local_res18[0]),8) + local_res18[0];
      iVar1 = (int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f);
      param_1->tm_min = iVar1;
      param_1->tm_sec = (int)local_res18[0] + iVar1 * -0x3c;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18060fe00();
  *puVar2 = 0x16;
  FUN_18060aad4();
  return 0x16;
}



