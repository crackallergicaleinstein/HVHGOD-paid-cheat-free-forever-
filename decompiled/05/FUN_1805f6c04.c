// FUN_1805f6c04 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6c04 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001805f6c91) */
/* WARNING: Removing unreachable block (ram,0x0001805f6cb7) */
/* WARNING: Removing unreachable block (ram,0x0001805f6cbb) */
/* WARNING: Removing unreachable block (ram,0x0001805f6cc1) */
/* WARNING: Removing unreachable block (ram,0x0001805f6cc5) */

void FUN_1805f6c04(undefined8 *param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  size_t sVar1;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_48 [6];
  
  local_48[4] = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_58 = param_1;
  sVar1 = strlen(param_4);
  FUN_18015ba30(local_48,param_4,sVar1);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,param_2);
  uStack_50 = param_3;
  FUN_18015b430(param_1,&local_58);
  if (0xf < (ulonglong)local_48[3]) {
    if ((0xfff < local_48[3] + 1U) && (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U))
    {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
  *param_1 = std::system_error::vftable;
}



