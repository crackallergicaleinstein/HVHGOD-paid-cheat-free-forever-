// FUN_18020e400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020e400 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18020e400(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ushort uVar10;
  char cVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  ushort local_58 [4];
  longlong local_50;
  longlong local_48;
  uint local_40 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  lVar5 = *param_1;
  puVar9 = &local_38;
  uVar6 = 0x13ac;
  lVar12 = param_1[1] * 0x20 + lVar5;
  local_38._0_4_ = 0x13ac;
  local_38._4_4_ = 0x13ad;
  if (lVar5 != lVar12) {
    uVar10 = local_58[0];
    cVar11 = (char)local_58[0];
    local_48 = lVar5;
    while( true ) {
      lVar8 = local_48;
      while (*(int *)(lVar8 + 0x10) != (int)(short)uVar6) {
        lVar8 = lVar8 + 0x20;
        if (lVar8 == lVar12) {
        }
      }
      if (*(longlong *)(lVar8 + 0x18) == 0) break;
      lVar4 = *(longlong *)(lVar8 + 0x18) + 0x10;
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      bVar1 = false;
      if (lVar4 != 0) {
        local_58[0] = 0;
        cVar2 = FUN_1804514f0(local_58,lVar4,2);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          uVar10 = local_58[0];
        }
      }
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if (!bVar1) {
      }
      if (uVar10 != uVar6) {
      }
      local_40[0] = 0x148;
      puVar7 = local_40;
      local_40[1] = 0x260;
      do {
        lVar3 = (ulonglong)*puVar7 + *(longlong *)(lVar8 + 0x18);
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        bVar1 = false;
        if (lVar3 != 0) {
          local_50 = 0;
          cVar2 = FUN_1804514f0(&local_50,lVar3,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            lVar5 = local_50;
          }
        }
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if (!bVar1) {
        }
        if (lVar5 == 0) {
        }
        lVar4 = FUN_18017ea70();
        local_58[0] = local_58[0] & 0xff00;
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        cVar2 = FUN_1804514f0(local_58,lVar5,1);
        if (cVar2 != '\0') {
          cVar11 = (char)local_58[0];
        }
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if (cVar2 == '\0') {
        }
        if (cVar11 == '\0') {
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != (uint *)&local_38);
      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
      if (puVar9 == &local_30) {
      }
      uVar6 = *(ushort *)puVar9;
    }
  }
}



