// FUN_1803bb240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803bb240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bb240(longlong param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined2 local_48;
  undefined1 local_46;
  int local_44;
  ushort local_40;
  byte bStack_3e;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  lVar4 = **(longlong **)(param_1 + 8) + param_2 * 8;
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    local_58 = 0;
    cVar2 = FUN_1804514f0(&local_58,lVar4,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar6 = local_58;
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if (!bVar1) {
    uVar6 = 0;
  }
  if (uVar6 < **(ulonglong **)(param_1 + 0x10)) {
  }
  if (**(longlong **)(param_1 + 0x18) - 0xfU < uVar6 - **(ulonglong **)(param_1 + 0x10)) {
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (uVar6 != 0) {
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_4a = 0;
    cVar2 = FUN_1804514f0(&local_58,uVar6,0xf);
    if (cVar2 != '\0') {
      uStack_38 = local_50;
      uStack_34 = local_4c;
      uStack_32 = local_4a;
      local_40 = (ushort)local_58;
      bStack_3e = (byte)(local_58 >> 0x10);
      uStack_3d = (undefined4)(local_58 >> 0x18);
      uStack_39 = (undefined1)(local_58 >> 0x38);
      local_31 = '\x01';
      goto LAB_1803bb34c;
    }
  }
  local_31 = '\0';
LAB_1803bb34c:
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if (local_31 != '\0') {
    local_48 = 0xbf0f;
    local_46 = 0x81;
    iVar5 = local_40 - 0xbf0f;
    if (iVar5 == 0) {
      iVar5 = bStack_3e - 0x81;
    }
    if (iVar5 == 0) {
      local_58 = CONCAT17(0xc3,CONCAT43(0x124d0f6,CONCAT12(param_3,0xe8c1)));
      if (CONCAT17(uStack_32,CONCAT25(uStack_34,CONCAT41(uStack_38,uStack_39))) == local_58) {
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        if (uVar6 + 3 != 0) {
          local_44 = 0;
          FUN_1804514f0(&local_44,uVar6 + 3,4);
        }
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
      }
    }
  }
}



