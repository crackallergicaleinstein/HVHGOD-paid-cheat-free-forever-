// FUN_1805a3d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a3d30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a3d30(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (*(uint *)(param_2 + 0xb8) < *(uint *)(param_1 + 0x1b0)) {
    lVar4 = (ulonglong)*(uint *)(param_2 + 0xb8) * 0xfc + *(longlong *)(param_1 + 0x1b8);
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
        *(undefined4 *)(lVar4 + 0xd8) = local_38;
        *(undefined4 *)(lVar4 + 0xe0) = local_34;
        *(undefined4 *)(lVar4 + 0xdc) = local_30;
        *(int *)(lVar4 + 0xe4) = local_2c;
        cVar1 = FUN_180574ff0(lVar4 + 0xd8);
        if (cVar1 == '\0') {
          *(undefined4 *)(param_2 + 0x18) = 3;
        }
        else {
          *(int *)(lVar4 + 0xe8) = local_28 >> 0x10;
          *(int *)(lVar4 + 0xec) = local_24 >> 0x10;
        }
      }
    }
  }
}



