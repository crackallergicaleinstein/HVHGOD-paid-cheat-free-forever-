// FUN_180619958 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180619958 */

/* WARNING: Removing unreachable block (ram,0x00018061974a) */
/* WARNING: Removing unreachable block (ram,0x00018061975a) */
/* WARNING: Removing unreachable block (ram,0x000180619776) */
/* WARNING: Removing unreachable block (ram,0x00018061979d) */
/* WARNING: Removing unreachable block (ram,0x0001806197a9) */

int thunk_FUN_180619658(tm *param_1,__int64 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong alStack_28 [2];
  
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
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        puVar2 = (undefined4 *)FUN_18060fe00();
        *puVar2 = 0x16;
        return 0x16;
      }
      __tzset();
      iVar1 = FUN_180628cf8();
      if ((iVar1 != 0) ||
         ((iVar1 = FUN_180628d28(), iVar1 != 0 || (iVar1 = FUN_180628d58(), iVar1 != 0)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      alStack_28[0] = *param_2;
      if (alStack_28[0] - 0x3f481U < 0x7935041fe) {
        iVar1 = common_gmtime_s<__int64>(param_1,alStack_28);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        iVar1 = common_gmtime_s<__int64>(param_1,param_2);
        if (iVar1 != 0) {
          return iVar1;
        }
        lVar5 = (longlong)param_1->tm_sec;
        lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5),8) + lVar5;
        iVar1 = param_1->tm_sec + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c;
        param_1->tm_sec = iVar1;
        if (iVar1 < 0) {
          lVar5 = lVar5 + -0x3c;
          param_1->tm_sec = iVar1 + 0x3c;
        }
        lVar5 = lVar5 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5),8);
        lVar5 = ((lVar5 >> 5) - (lVar5 >> 0x3f)) + (longlong)param_1->tm_min;
        lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5),8) + lVar5;
        iVar1 = (int)lVar5 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c;
        param_1->tm_min = iVar1;
        if (iVar1 < 0) {
          lVar5 = lVar5 + -0x3c;
          param_1->tm_min = iVar1 + 0x3c;
        }
        lVar5 = lVar5 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5),8);
        lVar5 = ((lVar5 >> 5) - (lVar5 >> 0x3f)) + (longlong)param_1->tm_hour;
        iVar1 = (int)lVar5 + (int)(lVar5 / 0x18) * -0x18;
        param_1->tm_hour = iVar1;
        if (iVar1 < 0) {
          lVar5 = lVar5 + -0x18;
          param_1->tm_hour = iVar1 + 0x18;
        }
        lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
        lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
        iVar1 = (int)lVar5;
        if (lVar5 < 1) {
          if (lVar5 < 0) {
            iVar3 = param_1->tm_mday + iVar1;
            param_1->tm_mday = iVar3;
            param_1->tm_wday = (param_1->tm_wday + 7 + iVar1) % 7;
            iVar1 = param_1->tm_yday + iVar1;
            if (iVar3 < 1) {
              param_1->tm_year = param_1->tm_year + -1;
              param_1->tm_mday = iVar3 + 0x1f;
              param_1->tm_yday = iVar1 + 0x16d;
              param_1->tm_mon = 0xb;
            }
            else {
              param_1->tm_yday = iVar1;
            }
          }
        }
        else {
          param_1->tm_mday = param_1->tm_mday + iVar1;
          param_1->tm_yday = param_1->tm_yday + iVar1;
          param_1->tm_wday = (param_1->tm_wday + iVar1) % 7;
        }
      }
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18060fe00();
  *puVar2 = 0x16;
  FUN_18060aad4();
  return 0x16;
}



