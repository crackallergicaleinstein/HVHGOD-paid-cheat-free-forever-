// FUN_1803c2180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c2180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c2180(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  byte local_88 [16];
  undefined4 local_78;
  uint *local_68;
  ulonglong *local_60;
  uint **local_58;
  undefined1 *local_50;
  ulonglong local_48;
  undefined1 local_40 [4];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_3c = 0;
  local_48 = 0;
  do {
    lVar4 = param_2 + local_48 * 0x14;
    if (*(char *)(param_2 + local_48 * 0x14) != '\0') {
      if (*(char *)(lVar4 + 7) == '\0') {
        bVar1 = *(byte *)(lVar4 + 1);
        local_88[0] = 0;
        local_88[1] = 2;
        local_88[2] = 3;
        local_88[3] = 4;
        local_88[4] = 5;
        local_88[5] = 6;
        local_88[6] = 8;
        local_88[7] = 9;
        if (10 < bVar1) {
          if (0x12 < bVar1) goto LAB_1803c22eb;
          bVar1 = local_88[bVar1 - 0xb];
        }
        if ((bVar1 != 6) || (*(char *)(lVar4 + 0xf) == '\0')) goto LAB_1803c22eb;
      }
      bVar1 = *(byte *)(lVar4 + 1);
      local_78 = *(uint *)(lVar4 + 4);
      uVar2 = (ulonglong)local_78;
      iVar3 = *(int *)(lVar4 + 0x10);
      local_68 = &local_3c;
      local_60 = &local_48;
      local_40[0] = FUN_18028c7b0(bVar1);
      local_58 = &local_68;
      local_50 = local_40;
      FUN_1803c99d0(local_40[0],uVar2 & 0xffffffff,*(undefined4 *)(lVar4 + 0xc),&local_58);
      if (iVar3 - 1U < 3) {
LAB_1803c22ca:
        if ((iVar3 != 0) && (local_78._3_1_ != '\0')) {
          *local_68 = *local_68 | 1 << ((int)*local_60 * 3 + 2U & 0x1f);
        }
      }
      else {
        local_88[8] = 0;
        local_88[9] = 2;
        local_88[10] = 3;
        local_88[0xb] = 4;
        local_88[0xc] = 5;
        local_88[0xd] = 6;
        local_88[0xe] = 8;
        local_88[0xf] = 9;
        if (10 < bVar1) {
          if (bVar1 < 0x13) {
            bVar1 = local_88[(ulonglong)(bVar1 - 0xb) + 8];
          }
          else {
            bVar1 = 2;
          }
        }
        uVar2 = 0;
        do {
          if ((&DAT_1807d1130)[uVar2] == bVar1) {
            iVar3 = (int)uVar2 + 1;
            goto LAB_1803c22ca;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 3);
      }
    }
LAB_1803c22eb:
    local_48 = local_48 + 1;
    if (2 < local_48) {
    }
  } while( true );
}



