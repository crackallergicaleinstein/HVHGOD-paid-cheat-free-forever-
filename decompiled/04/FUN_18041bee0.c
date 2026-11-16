// FUN_18041bee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041bee0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041bee0(longlong *param_1,char *param_2)

{
  uint uVar1;
  uint *puVar2;
  LPCSTR lpModuleName;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined **local_7e8;
  char *local_7e0;
  undefined8 local_7d8;
  undefined1 *local_7d0;
  char *local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  HMODULE local_798 [2];
  undefined1 local_788 [320];
  char local_648 [1536];
  ulonglong local_48;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_808;
  if (*param_1 == 0) {
  }
  LOCK();
  bVar10 = DAT_180c7d8b8 == 0;
  if (bVar10) {
    DAT_180c7d8b8 = 1;
  }
  UNLOCK();
  if (!bVar10) {
  }
  puVar2 = (uint *)*param_1;
  lpModuleName = *(LPCSTR *)(puVar2 + 4);
  FUN_18063ab10(local_788,0,0x134);
  uVar6 = 0;
  if (((DAT_180c7dce8 == 0) || (*(ulonglong *)(puVar2 + 4) < DAT_180c7dce8)) ||
     (DAT_180c7d8c0 <= *(ulonglong *)(puVar2 + 4))) {
    local_798[0] = (HMODULE)0x0;
    if ((lpModuleName == (LPCSTR)0x0) ||
       (BVar3 = GetModuleHandleExA(6,lpModuleName,local_798), BVar3 == 0)) {
      local_7e8 = *(undefined ***)(puVar2 + 4);
      pcVar9 = "0x%p";
      goto LAB_18041c051;
    }
    FUN_18063ab10(local_648,0,0x104);
    GetModuleFileNameA(local_798[0],local_648,0x104);
    lVar5 = FUN_1806069d0(local_648,0x5c);
    if (lVar5 == 0) {
      local_7e8 = (undefined **)local_648;
    }
    else {
      local_7e8 = (undefined **)(lVar5 + 1);
    }
    local_7e0 = (char *)((longlong)lpModuleName - (longlong)local_798[0]);
    FUN_18015ad60(local_788,0x134,0xffffffffffffffff,"%s+0x%llX");
  }
  else {
    local_7e8 = (undefined **)(lpModuleName + -DAT_180c7dce8);
    pcVar9 = "hvhgod-cheat.dll+0x%llX";
LAB_18041c051:
    FUN_18015ad60(local_788,0x134,0xffffffffffffffff,pcVar9);
  }
  if (puVar2[6] == 0) {
    lVar5 = -1;
  }
  else {
    lVar5 = *(longlong *)(puVar2 + 8);
    if (1 < puVar2[6]) {
      uVar6 = *(undefined8 *)(puVar2 + 10);
    }
  }
  if (lVar5 == 0) {
    pcVar9 = "read";
  }
  else if (lVar5 == 1) {
    pcVar9 = "write";
  }
  else {
    pcVar9 = "unknown";
    if (lVar5 == 8) {
      pcVar9 = "execute";
    }
  }
  DVar4 = GetCurrentThreadId();
  uVar1 = *puVar2;
  if (uVar1 < 0xc0000097) {
    if (uVar1 == 0xc0000096) {
      pcVar7 = "PRIV_INSTRUCTION";
      goto LAB_18041c159;
    }
    if (uVar1 == 0xc0000005) {
      pcVar7 = "ACCESS_VIOLATION";
      goto LAB_18041c159;
    }
    if (uVar1 == 0xc0000006) {
      pcVar7 = "IN_PAGE_ERROR";
      goto LAB_18041c159;
    }
    if (uVar1 == 0xc000001d) {
      pcVar7 = "ILLEGAL_INSTRUCTION";
      goto LAB_18041c159;
    }
    if (uVar1 == 0xc0000094) {
      pcVar7 = "INT_DIVIDE_BY_ZERO";
      goto LAB_18041c159;
    }
  }
  else {
    if (uVar1 == 0xc00000fd) {
      pcVar7 = "STACK_OVERFLOW";
      goto LAB_18041c159;
    }
    if (uVar1 == 0xc0000409) {
      pcVar7 = "STACK_BUFFER_OVERRUN";
      goto LAB_18041c159;
    }
    if (uVar1 == 0xe0560001) {
      pcVar7 = "DIAGNOSTIC_SNAPSHOT";
      goto LAB_18041c159;
    }
  }
  pcVar7 = "UNKNOWN";
LAB_18041c159:
  FUN_18063ab10(local_648,0,0x600);
  local_7b8 = CONCAT44(local_7b8._4_4_,DVar4);
  local_7d0 = local_788;
  local_7d8 = CONCAT44(local_7d8._4_4_,uVar1);
  local_7e8 = (undefined **)"unknown";
  if (param_2 != (char *)0x0) {
    local_7e8 = (undefined **)param_2;
  }
  local_7e0 = pcVar7;
  local_7c8 = pcVar9;
  local_7c0 = uVar6;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "stage=\"%s\" exception=%s code=0x%08lX location=%s access=%s address=0x%p thread=%lu lifecycle_hint=see_last_GAME_STATE_CHANGED"
               );
  local_7e0 = local_648;
  ppuVar8 = &PTR_180700558;
  local_7e8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_7e8 = (undefined **)&DAT_1806bcfc0;
  }
  FUN_1800f6900(4);
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    FUN_18063ab10(local_648,0,0x600);
    local_7a8 = *(undefined8 *)(lVar5 + 0xb0);
    local_7b0 = *(undefined8 *)(lVar5 + 0xa8);
    local_7b8 = *(undefined8 *)(lVar5 + 0x88);
    local_7c0 = *(undefined8 *)(lVar5 + 0x80);
    local_7c8 = *(char **)(lVar5 + 0x90);
    local_7d0 = *(undefined1 **)(lVar5 + 0x78);
    local_7d8 = *(undefined8 *)(lVar5 + 0xa0);
    local_7e0 = *(char **)(lVar5 + 0x98);
    local_7e8 = *(undefined ***)(lVar5 + 0xf8);
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "rip=0x%p rsp=0x%p rbp=0x%p rax=0x%p rbx=0x%p rcx=0x%p rdx=0x%p rsi=0x%p rdi=0x%p"
                 );
    local_7e0 = local_648;
    if (local_648[0] != '\0') {
      ppuVar8 = (undefined **)&DAT_1806bcfc0;
    }
    local_7e8 = ppuVar8;
    FUN_1800f6900(4);
  }
}



