// FUN_180599950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180599950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180599950(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  iVar3 = (**(code **)(param_2 + 0x68))(param_2,6,&local_38,3);
  if (5 < iVar3) {
    iVar3 = local_2c;
    if (local_2c < 0) {
      iVar3 = -local_2c;
    }
    if (iVar3 != 0) {
      if (iVar3 != 0x10000) {
        uVar2 = FUN_180573310(1000,iVar3);
        *(undefined2 *)(param_1 + 0x68) = uVar2;
        local_38 = FUN_180573310(local_38,iVar3);
        local_34 = FUN_180573310(local_34,iVar3);
        local_30 = FUN_180573310(local_30,iVar3);
        local_28 = FUN_180573310(local_28,iVar3);
        local_24 = FUN_180573310(local_24,iVar3);
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



