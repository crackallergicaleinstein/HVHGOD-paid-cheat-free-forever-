// FUN_1800e5400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5400 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e5400(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined **ppuVar5;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  undefined1 local_648 [8];
  undefined1 local_640 [8];
  undefined8 ***local_638 [2];
  undefined8 local_628;
  ulonglong local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  if (DAT_180bb8ec0 == 0) {
    puVar3 = (undefined8 *)&DAT_1806bba88;
  }
  else {
    puVar3 = &DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      puVar3 = DAT_180bb8eb0;
    }
  }
  FUN_18063ab10(local_618,0,0x600);
  local_658 = (undefined **)puVar3;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"id=%s");
  ppuVar5 = &PTR_180700558;
  local_658 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_658 = (undefined **)&DAT_1806bcfc0;
  }
  local_650 = local_618;
  FUN_1800f6900(1);
  if (DAT_180bb8ec0 == 0) {
    FUN_18063ab10(local_618,0,0x600);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"id=none reason=no_active_config");
    if (local_618[0] != '\0') {
      ppuVar5 = (undefined **)&DAT_1806bcfc0;
    }
    local_650 = local_618;
    local_658 = ppuVar5;
    FUN_1800f6900(2);
  }
  else {
    uVar2 = FUN_1800abfc0(local_648);
    local_650 = (char *)((ulonglong)local_650 & 0xffffffff00000000);
    FUN_1800f4710(uVar2,local_638,0xffffffff);
    FUN_1801409d0(local_640,local_648[0]);
    cVar1 = FUN_18016a980();
    if (cVar1 == '\0') {
      puVar3 = &DAT_180bb8eb0;
      if (0xf < DAT_180bb8ec8) {
        puVar3 = DAT_180bb8eb0;
      }
      FUN_18063ab10(local_618,0,0x600);
      local_650 = (char *)local_628;
      local_658 = (undefined **)puVar3;
      FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"id=%s reason=bridge_rejected bytes=%zu");
      if (local_618[0] != '\0') {
        ppuVar5 = (undefined **)&DAT_1806bcfc0;
      }
      local_650 = local_618;
      local_658 = ppuVar5;
      FUN_1800f6900(3);
    }
    else {
      puVar3 = &DAT_180bb8eb0;
      if (0xf < DAT_180bb8ec8) {
        puVar3 = DAT_180bb8eb0;
      }
      FUN_180113930(&DAT_1808da580,puVar3,DAT_180bb8ec0);
      if (local_620 < 0x10) {
        FUN_180113930(&DAT_1808da5a0,local_638,local_628);
      }
      else {
        FUN_180113930(&DAT_1808da5a0,local_638[0],local_628);
      }
      puVar3 = &DAT_180bb8eb0;
      if (0xf < DAT_180bb8ec8) {
        puVar3 = DAT_180bb8eb0;
      }
      FUN_180113930(&DAT_1808da5c0,puVar3,DAT_180bb8ec0);
      pppuVar4 = local_638;
      if (0xf < local_620) {
        pppuVar4 = local_638[0];
      }
      FUN_180113930(&DAT_1808da5e0,pppuVar4,local_628);
      puVar3 = &DAT_180bb8eb0;
      if (0xf < DAT_180bb8ec8) {
        puVar3 = DAT_180bb8eb0;
      }
      FUN_18063ab10(local_618,0,0x600);
      local_650 = (char *)local_628;
      local_658 = (undefined **)puVar3;
      FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"id=%s bytes=%zu");
      if (local_618[0] != '\0') {
        ppuVar5 = (undefined **)&DAT_1806bcfc0;
      }
      local_650 = local_618;
      local_658 = ppuVar5;
      FUN_1800f6900(1);
    }
    FUN_18015c010(local_638);
  }
}



