// FUN_1801b55b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b55b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b55b0(undefined1 (*param_1) [16],longlong param_2)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_98 [32];
  undefined1 (*local_78 [2]) [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_78[0] = param_1;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (param_2 + 0x10 == 0) {
    bVar1 = false;
  }
  else {
    local_78[0] = (undefined1 (*) [16])0x0;
    cVar3 = FUN_1804514f0(local_78,param_2 + 0x10,8);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  pauVar2 = local_78[0];
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if ((bVar1) && (pauVar2 != (undefined1 (*) [16])0x0)) {
    lVar4 = FUN_18017ea70();
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar3 = FUN_1804514f0(&local_68,pauVar2,0x20);
    local_28[0] = cVar3 != '\0';
    if ((bool)local_28[0]) {
      local_48 = local_68;
      uStack_40 = uStack_60;
      uStack_38 = uStack_58;
      uStack_30 = uStack_50;
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (local_28[0] != '\0') {
      pcVar5 = (char *)thunk_FUN_1805f7e70(&local_48,local_28,0);
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      if ((pcVar5 != local_28) && (*(undefined8 *)(param_1[1] + 8) = 0, (char *)&local_48 != pcVar5)
         ) {
        FUN_18015ba30(param_1,&local_48,(longlong)pcVar5 - (longlong)&local_48);
      }
      goto LAB_1801b56f8;
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
LAB_1801b56f8:
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
}



