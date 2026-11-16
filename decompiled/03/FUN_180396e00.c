// FUN_180396e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180396e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180396e00(longlong param_1,undefined4 param_2,byte param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  HWND pHVar3;
  SHORT SVar4;
  ushort uVar5;
  longlong *plVar6;
  HWND pHVar7;
  char *pcVar8;
  ULONGLONG UVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined4 uVar18;
  undefined1 auStack_778 [32];
  undefined **local_758;
  char *local_750;
  longlong local_748;
  uint local_740;
  uint local_738;
  undefined8 local_730;
  undefined8 local_728;
  uint local_720;
  uint local_718;
  undefined8 local_710;
  undefined4 local_708;
  undefined8 local_700;
  uint local_6f8;
  uint local_6f0;
  uint local_6e8;
  undefined4 local_6e0;
  uint local_6d8;
  int local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c0;
  byte local_6b8;
  byte local_6b7;
  int local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined8 local_6a0;
  longlong *local_698;
  longlong local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_778;
  local_6b7 = param_3;
  local_6a8 = param_2;
  local_6a0 = param_4;
  local_690 = param_1;
  plVar6 = (longlong *)FUN_1803a7390();
  plVar15 = &DAT_180c71110;
  if (plVar6 != (longlong *)0x0) {
    plVar15 = plVar6;
  }
  *plVar15 = *plVar15 + 1;
  pHVar3 = DAT_180c6e520;
  local_698 = plVar15;
  if ((DAT_180c6e520 == (HWND)0x0) || (pHVar7 = GetForegroundWindow(), pHVar7 != pHVar3)) {
    local_6b8 = 0;
  }
  else {
    local_6b8 = 1;
  }
  plVar6 = plVar15 + 2;
  for (plVar17 = plVar6; plVar17 != plVar15 + 0x26; plVar17 = plVar17 + 3) {
    pcVar8 = (char *)*plVar17;
    if (pcVar8 == (char *)0x0) {
LAB_180396ed2:
      *plVar17 = param_1;
      if (local_6b8 == 0) {
        plVar17 = plVar17 + 2;
      }
      else {
        plVar17 = plVar17 + 1;
      }
      *plVar17 = *plVar17 + 1;
      break;
    }
    lVar16 = param_1 - (longlong)pcVar8;
    do {
      cVar1 = *pcVar8;
      cVar2 = pcVar8[lVar16];
      if (cVar1 != cVar2) break;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) goto LAB_180396ed2;
  }
  UVar9 = GetTickCount64();
  if (UVar9 < (ulonglong)plVar15[1]) {
  }
  plVar15[1] = UVar9 + 2000;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_678 = _DAT_180bb8890;
  uStack_670 = uRam0000000180bb8898;
  uStack_668 = uRam0000000180bb88a0;
  uStack_660 = uRam0000000180bb88a8;
  local_688 = _DAT_180bb88b0;
  uStack_680 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar18 = 1;
  local_6b4 = DAT_180c7e1f8;
  if (DAT_180c7e1f8 != 0) {
    SVar4 = GetAsyncKeyState(DAT_180c7e1f8);
    local_6b0 = 1;
    local_6b4 = DAT_180c7e1f8;
    if (SVar4 < 0) goto LAB_180396f9a;
  }
  local_6b0 = 0;
  local_6b4 = DAT_180c7e1f8;
LAB_180396f9a:
  local_6ac = DAT_180c7e1fc;
  if (((DAT_180c8fdf0 == '\0') && (DAT_180c8ff98 == '\0')) && (DAT_180c8ff08 == '\0')) {
    if (DAT_180c8fdb8 == 1) {
      uVar11 = 0;
      do {
        if (((&DAT_180c8fdc4)[uVar11] != '\0') &&
           (((lVar16 = uVar11 * 0xb70, (&DAT_180c90960)[lVar16] != '\0' ||
             ((&DAT_180c90b08)[lVar16] != '\0')) || ((&DAT_180c90a78)[lVar16] != '\0'))))
        goto LAB_18039706b;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < 6);
    }
    else if (DAT_180c8fdb8 == 2) {
      uVar11 = 0;
      do {
        if (((&DAT_180c8fdca)[uVar11] != '\0') &&
           (((lVar16 = uVar11 * 0xb70, (&DAT_180c94e00)[lVar16] != '\0' ||
             ((&DAT_180c94fa8)[lVar16] != '\0')) || ((&DAT_180c94f18)[lVar16] != '\0'))))
        goto LAB_18039706b;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < 0x22);
    }
    uVar18 = 0;
  }
LAB_18039706b:
  uVar12 = (uint)DAT_180c7e1f0;
  DAT_180c7e1f8 = local_6b4;
  uVar5 = GetAsyncKeyState(0x1b);
  uVar14 = (uint)DAT_180ccaa20;
  uVar10 = (uint)DAT_180b8e2b0;
  uVar13 = (uint)DAT_1808d9bd8;
  FUN_18063ab10(local_658,0,0x600);
  local_6c0 = local_6b0;
  local_6c8 = local_6ac;
  local_6d0 = local_6b4;
  local_6d8 = (uint)local_6b8;
  local_6f0 = (uint)(uVar5 >> 0xf);
  local_700 = param_6;
  local_708 = param_5;
  local_710 = local_6a0;
  local_720 = (uint)(byte)uStack_680;
  local_728 = uStack_670;
  local_730 = local_678;
  local_740 = (uint)local_6b7;
  local_748 = CONCAT44(local_748._4_4_,local_6a8);
  local_750 = (char *)*local_698;
  local_758 = (undefined **)local_690;
  local_738 = uVar13;
  local_718 = uVar10;
  local_6f8 = uVar14;
  local_6e8 = uVar12;
  local_6e0 = uVar18;
  FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                "reason=%s callbacks=%llu slot=%d active=%d world=%u controller=0x%llx pawn=0x%llx alive=%d camera=%d movement=0x%llx last_processed=%u command=%lld menu_open=%d escape_down=%d rage_auto_fire=%d legit_input=%d foreground=%d rage_fire_key=%d rage_fire_mode=%d rage_fire_key_down=%d"
               );
  local_750 = local_658;
  local_758 = &PTR_180700558;
  if (local_658[0] != '\0') {
    local_758 = (undefined **)&DAT_1806bcfc0;
  }
  FUN_1800f6900(0);
  for (; plVar6 != plVar15 + 0x26; plVar6 = plVar6 + 3) {
    lVar16 = plVar6[1];
    if ((lVar16 != 0) || (plVar6[2] != 0)) {
      FUN_18063ab10(local_658,0,0x600);
      local_748 = plVar6[2];
      local_758 = (undefined **)*plVar6;
      local_750 = (char *)lVar16;
      FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                    "reason=%s focused=%llu unfocused=%llu interval_ms=2000");
      local_750 = local_658;
      local_758 = &PTR_180700558;
      if (local_658[0] != '\0') {
        local_758 = (undefined **)&DAT_1806bcfc0;
      }
      FUN_1800f6900(0);
    }
    plVar6[2] = 0;
    plVar6[1] = 0;
  }
}



