// FUN_180377ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180377ef0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180377ef0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  longlong local_648;
  longlong local_640;
  longlong local_638 [2];
  char local_628 [1536];
  ulonglong local_28;
  
  lVar7 = DAT_180c70e08;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  bVar1 = false;
  if (lVar7 != 0) {
    local_638[0] = 0;
    cVar2 = FUN_1804514f0(local_638,lVar7,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  lVar7 = local_638[0];
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  uVar6 = 1;
  if (bVar1) {
    if (lVar7 != 0) {
      lVar3 = FUN_18017ea70();
      local_638[0] = 0;
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      cVar2 = FUN_1804514f0(local_638,lVar7,8);
      lVar3 = local_638[0];
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      lVar4 = 0;
      if (cVar2 != '\0') {
        lVar4 = lVar3;
      }
      if (lVar4 != 0) {
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        bVar1 = false;
        if (lVar4 + 0x78 != 0) {
          local_638[0] = 0;
          cVar2 = FUN_1804514f0(local_638,lVar4 + 0x78,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        lVar3 = local_638[0];
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        lVar5 = 0;
        if (bVar1) {
          lVar5 = lVar3;
        }
        *param_1 = lVar5;
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        bVar1 = false;
        if (lVar4 + 0x80 != 0) {
          local_638[0] = 0;
          cVar2 = FUN_1804514f0(local_638,lVar4 + 0x80,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        lVar3 = local_638[0];
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        lVar5 = 0;
        if (bVar1) {
          lVar5 = lVar3;
        }
        param_1[1] = lVar5;
        cVar2 = FUN_1804513c0(*param_1,1,2);
        if (cVar2 == '\0') {
          *param_1 = 0;
        }
        cVar2 = FUN_1804513c0(param_1[1],1,2);
        if (cVar2 == '\0') {
          param_1[1] = 0;
        }
      }
      goto LAB_1803780d4;
    }
  }
  else {
    lVar7 = 0;
  }
  lVar4 = 0;
LAB_1803780d4:
  lVar3 = *param_1;
  lVar5 = param_1[1];
  if (((lVar3 == 0) || (lVar5 == 0)) && ((lVar3 == 0 || (lVar5 == 0)))) {
    uVar6 = 2;
  }
  FUN_18063ab10(local_628,0,0x600);
  local_658 = (undefined **)lVar7;
  local_650 = (char *)lVar4;
  local_648 = lVar3;
  local_640 = lVar5;
  FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                "system=0x%llx vtable=0x%llx add=0x%llx remove=0x%llx");
  local_658 = &PTR_180700558;
  if (local_628[0] != '\0') {
    local_658 = (undefined **)&DAT_1806bcfc0;
  }
  local_650 = local_628;
  FUN_1800f6900(uVar6);
}



