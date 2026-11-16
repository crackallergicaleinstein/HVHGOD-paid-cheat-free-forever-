// FUN_18041f290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041f290 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041f290(void)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  uVar1 = DAT_180bb8ad0;
  do {
    LOCK();
    bVar2 = uVar1 == DAT_180bb8ad0;
    if (bVar2) {
      DAT_180bb8ad0 = uVar1 | 1;
    }
    else {
      uVar1 = DAT_180bb8ad0;
    }
    UNLOCK();
  } while (!bVar2);
  if ((uVar1 & 1) == 0) {
    DAT_1808d9bda = 1;
    DAT_180c70b40 = 0;
    DAT_180c70e20 = 0;
    if (DAT_180c62b68 != (HANDLE)0x0) {
      ResetEvent(DAT_180c62b68);
    }
    if (DAT_180c62b70 != (HANDLE)0x0) {
      ResetEvent(DAT_180c62b70);
    }
    if (DAT_180c62b80 != (HANDLE)0x0) {
      SetEvent(DAT_180c62b80);
    }
    FUN_18063ab10(local_618,0,0x600);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                  "cleanup=game_and_render_threads mapping=retained_until_acknowledgment");
    local_628 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_628 = (undefined **)&DAT_1806bcfc0;
    }
    local_620 = local_618;
    FUN_1800f6900(1);
  }
}



