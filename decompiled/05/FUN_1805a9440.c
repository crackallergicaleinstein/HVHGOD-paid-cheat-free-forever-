// FUN_1805a9440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a9440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a9440(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  iVar2 = (**(code **)(param_2 + 0x68))(param_2,6,&local_38,0);
  if (5 < iVar2) {
    iVar2 = local_2c;
    if (local_2c < 0) {
      iVar2 = -local_2c;
    }
    if (iVar2 != 0) {
      if (iVar2 != 0x10000) {
        local_38 = FUN_180573310(local_38,iVar2);
        local_34 = FUN_180573310(local_34,iVar2);
        local_30 = FUN_180573310(local_30,iVar2);
        local_28 = FUN_180573310(local_28,iVar2);
        local_24 = FUN_180573310(local_24,iVar2);
        local_2c = (local_2c >> 0x1f & 0xfffe0000U) + 0x10000;
      }
      *(undefined4 *)(param_1 + 0x264) = local_38;
      *(undefined4 *)(param_1 + 0x26c) = local_34;
      *(int *)(param_1 + 0x270) = local_2c;
      *(undefined4 *)(param_1 + 0x268) = local_30;
      cVar1 = FUN_180574ff0(param_1 + 0x264);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x274) = local_28 >> 0x10;
        *(int *)(param_1 + 0x278) = local_24 >> 0x10;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x18) = 3;
}



