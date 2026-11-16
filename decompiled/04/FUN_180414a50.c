// FUN_180414a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180414a50(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  byte local_28 [4];
  undefined4 local_24 [2];
  undefined4 local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    bVar5 = false;
  }
  else {
    lVar3 = FUN_18017ea70();
    local_24[0] = 0;
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    cVar2 = FUN_1804514f0(local_24,param_1,4);
    uVar1 = local_24[0];
    bVar5 = cVar2 != '\0';
    lVar3 = FUN_18017ea70();
    local_24[0] = uVar1;
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
  }
  local_1c[0] = local_24[0];
  if (bVar5) {
    local_28[0] = 0x48;
    local_28[1] = 0x8b;
    local_28[2] = 0xc1;
    local_28[3] = 0xc3;
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      if (*(byte *)((longlong)local_1c + lVar3) != local_28[lVar3]) {
      }
      lVar3 = lVar4;
    } while (lVar4 != 4);
  }
}



