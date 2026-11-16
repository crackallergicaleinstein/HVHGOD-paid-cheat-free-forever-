// FUN_1802d7110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d7110 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d7110(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3)

{
  int iVar1;
  ULONGLONG UVar2;
  undefined1 auStack_88 [40];
  undefined1 (*local_60) [16];
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  iVar1 = DAT_180c6e960;
  local_60 = param_2;
  if (DAT_180c6e960 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6e948) {
      iVar1 = 0;
    }
    else {
      local_60 = (undefined1 (*) [16])&DAT_1808fc670;
      iVar1 = FUN_1805f68d0(&DAT_1808fc670);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fc6bc == 0x7fffffff) {
        DAT_1808fc6bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e960 == 0) && (DAT_180c6e948 <= UVar2)) {
        DAT_180c6e960 = FUN_1804174b0("CCSPlayerController",0xde63b6d1);
        if (DAT_180c6e960 == 0) {
          DAT_180c6e948 = UVar2 + 1000;
        }
        else {
          DAT_180c6e948 = 0xffffffffffffffff;
        }
      }
      iVar1 = DAT_180c6e960;
      FUN_1805f68fc(&DAT_1808fc670);
    }
  }
  if (*(longlong *)(iVar1 + param_3) == 0) {
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    FUN_18015ba30(param_2,"unknown",7);
  }
  else {
    FUN_180454280(&local_58,*(longlong *)(iVar1 + param_3),0x40);
    *(ulonglong *)*param_2 = CONCAT71(uStack_57,local_58);
    *(undefined8 *)(*param_2 + 8) = uStack_50;
    *(undefined8 *)param_2[1] = uStack_48;
    *(undefined8 *)(param_2[1] + 8) = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0xf;
    local_58 = 0;
    FUN_18015c010(&local_58);
  }
}



