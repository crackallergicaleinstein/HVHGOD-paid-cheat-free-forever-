// FUN_180378230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180378230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180378230(undefined1 param_1,undefined1 param_2,char *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  char *local_6c8;
  undefined4 local_6c0;
  undefined4 local_6b8;
  longlong local_6b0;
  char *local_6a8;
  char *local_6a0;
  undefined8 local_698;
  longlong lStack_690;
  longlong lStack_688;
  undefined8 uStack_680;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  pcVar7 = "false";
  pcVar6 = "false";
  if (DAT_180b8e2b0 != '\0') {
    pcVar6 = "true";
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_698 = _DAT_180bb8890;
  lStack_690 = lRam0000000180bb8898;
  lStack_688 = lRam0000000180bb88a0;
  uStack_680 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((lStack_690 != 0) || (bVar1 = false, lStack_688 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pcVar7 = "true";
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  lVar5 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  uVar3 = DAT_1808d9be0;
  uVar2 = DAT_1808d9bdc;
  FUN_18063ab10(local_648,0,0x600);
  local_6c8 = "unknown";
  if (param_3 != (char *)0x0) {
    local_6c8 = param_3;
  }
  uVar4 = FUN_1803781c0(param_2);
  local_6d8 = (undefined **)FUN_1803781c0(param_1);
  local_6b8 = uVar2;
  local_6c0 = uVar3;
  local_6d0 = (char *)uVar4;
  local_6b0 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  local_6a8 = pcVar7;
  local_6a0 = pcVar6;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "previous=%s current=%s reason=%s transitions=%u active_readers=%u entities=%zu local_valid=%s camera_valid=%s"
               );
  local_6d8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_6d8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6d0 = local_648;
  FUN_1800f6900(1,local_6d0,"GameState","GAME_STATE_CHANGED");
}



