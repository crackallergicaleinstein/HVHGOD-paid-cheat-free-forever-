// FUN_1805c6010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6010 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c6010(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) && (*(longlong *)(lVar1 + 0x80) != 0)) {
    if ((char)param_2[1] == '\0') {
      FUN_1805ca980(param_2[1],lVar1,uVar2,param_3);
    }
    else {
      *param_3 = 0xc;
      *(undefined8 *)(param_3 + 2) = uVar2;
      *(ulonglong *)(param_3 + 4) = CONCAT44(iStack_2c,uStack_30) & 0xffffffffffffff00;
      uStack_34 = 0;
      uStack_30 = 0;
      local_38 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) + 0x20 >> 6;
      iStack_2c = *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x20 >> 6;
      uVar4 = 0;
      uVar3 = 0;
      if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
        FUN_180575150(*(longlong *)(param_1 + 0xd0),&local_38);
        uVar4 = uStack_30;
        uVar3 = uStack_34;
      }
      param_3[6] = local_38;
      param_3[7] = uVar3;
      param_3[9] = uVar4;
      param_3[10] = iStack_2c;
      if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 2) == 0) {
        param_3[8] = 0;
        param_3[0xb] = 0;
      }
      else {
        param_3[8] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10) << 10;
        param_3[0xb] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x14) << 10;
      }
    }
  }
}



