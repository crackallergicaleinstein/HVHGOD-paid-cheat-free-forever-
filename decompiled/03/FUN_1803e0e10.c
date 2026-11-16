// FUN_1803e0e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e0e10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e0e10(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if ((**(byte **)*param_1 & 1) != 0) {
    uVar5 = *(ulonglong *)(*(byte **)*param_1 + 0x20);
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    uVar5 = uVar5 & 0xfffffffffffffffc;
    bVar2 = false;
    if (uVar5 != 0) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      cVar3 = FUN_1804514f0(&local_78,uVar5,0x20);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (((bVar2) && (uStack_68 - 0x19 < 0x1c)) && (uStack_68 <= uStack_60)) {
      local_18 = 0;
      local_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      local_28 = (undefined1  [16])0x0;
      *(ulonglong *)param_1[1] = uStack_68;
      uVar1 = *(undefined8 *)param_1[1];
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      cVar3 = FUN_1804514f0(&local_48,local_78,uVar1);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if (cVar3 != '\0') {
        local_78 = &local_48;
        uStack_70 = *(undefined8 *)param_1[1];
        FUN_1803dde90(&local_78,param_1[2]);
      }
    }
  }
}



