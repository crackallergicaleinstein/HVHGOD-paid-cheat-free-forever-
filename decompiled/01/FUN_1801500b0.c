// FUN_1801500b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801500b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801500b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 auStack_58 [48];
  undefined1 local_28 [8];
  int local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0) {
    local_20[0] = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
    local_28[0] = 3;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    cVar8 = (**(code **)(*plVar3 + 0x10))(plVar3,local_20,local_28);
    if (cVar8 == '\0') {
      puVar9 = (undefined1 *)FUN_1800f4a50(local_20,param_1 + 0xb8);
      puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 0x10) + -8);
      uVar2 = *puVar4;
      *puVar4 = *puVar9;
      *puVar9 = uVar2;
      puVar1 = (undefined8 *)(puVar9 + 8);
      uVar5 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = *puVar1;
      *puVar1 = uVar5;
      FUN_1801409d0(puVar1,*puVar9);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      FUN_180151b00(param_1 + 0x20);
      if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
      }
      pcVar6 = *(char **)(*(longlong *)(param_1 + 0x10) + -8);
      if (*pcVar6 == '\x02') {
        lVar7 = *(longlong *)(pcVar6 + 8);
        FUN_1800aab30(*(longlong *)(lVar7 + 8) + -0x10);
        plVar3 = (longlong *)(lVar7 + 8);
        *plVar3 = *plVar3 + -0x10;
      }
    }
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  FUN_180151b00(param_1 + 0x20);
}



