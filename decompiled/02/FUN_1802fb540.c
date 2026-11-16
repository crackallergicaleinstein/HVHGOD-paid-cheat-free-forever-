// FUN_1802fb540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fb540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802fb540(undefined8 param_1,char param_2)

{
  char cVar1;
  char cVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') {
    FUN_1802fb6e0();
  }
  if (DAT_180bbf100 == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180bbf110) {
    }
    if (DAT_180c64058 != 0) {
      local_38 = local_28;
      local_28[0] = 0x5eacc865;
      local_20 = 0;
      local_30 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_38);
      DAT_180bbf100 = local_20 + 0x58;
      if (local_20 == 0) {
        DAT_180bbf100 = 0;
      }
      if (DAT_180bbf100 == 0) goto LAB_1802fb632;
      goto LAB_1802fb5ef;
    }
  }
  else {
LAB_1802fb5ef:
    lVar5 = DAT_180bbf100;
    local_48 = local_48 & 0xff00;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar1 = FUN_1804514c0(&local_48,lVar5,1);
    if (cVar1 != '\0') {
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      lVar5 = DAT_180bbf100;
      cVar1 = (char)local_48;
      if ((char)local_48 != '\0') {
        local_48 = local_48 & 0xff00;
        if (DAT_180bbf100 == 0) {
        }
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        cVar2 = FUN_1801ad7b0(lVar5,&local_48);
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (cVar2 == '\0') {
        }
      }
      if (DAT_180bbf109 == '\0') {
        local_48 = CONCAT11(1,cVar1);
        _DAT_180bbf108 = local_48;
      }
    }
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    _DAT_180bbf108 = _DAT_180bbf108 & 0xff;
  }
  DAT_180bbf100 = 0;
LAB_1802fb632:
  UVar3 = GetTickCount64();
  DAT_180bbf110 = UVar3 + 1000;
}



