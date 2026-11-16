// FUN_1805c9b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c9b50(longlong param_1,longlong param_2,short *param_3)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  int local_68 [2];
  short *local_60;
  int local_58 [2];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0xc) + 0xc;
  sVar2 = 0;
  local_60 = param_3;
  iVar1 = FUN_1805788b0(param_2,iVar4);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 4) != 0) {
      local_68[0] = 0;
      do {
        local_68[0] = FUN_180578280(param_2,&DAT_180684880,local_58);
        if (local_68[0] != 0) {
          *(ushort *)(param_1 + 4) = uVar3;
          break;
        }
        iVar1 = 0;
        if ((local_50 <= *(uint *)(param_2 + 8)) &&
           (((local_4c <= *(uint *)(param_2 + 8) - local_50 || (local_58[0] == 0x686d7478)) ||
            (local_58[0] == 0x766d7478)))) {
          if ((local_58[0] == 0x68656164) || (local_58[0] == 0x62686564)) {
            if (local_4c < 0x36) {
            }
            local_68[0] = FUN_1805788b0(param_2,local_50 + 0xc);
            if (local_68[0] != 0) {
            }
            FUN_180578540(param_2,local_68);
            if (local_68[0] != 0) {
            }
            iVar1 = FUN_1805788b0(param_2,(uVar3 + 1) * 0x10 + iVar4);
            sVar2 = sVar2 + 1;
            if (iVar1 != 0) {
            }
          }
          else {
            sVar2 = sVar2 + 1;
          }
        }
        local_68[0] = iVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 4));
    }
    *local_60 = sVar2;
  }
}



