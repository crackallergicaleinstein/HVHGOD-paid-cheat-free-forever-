// FUN_18052b460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052b460 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18052b460(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  DWORD DVar8;
  BOOL BVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  LPCWSTR ***ppppWVar12;
  bool bVar13;
  undefined1 auStackY_118 [32];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  char local_90;
  undefined1 local_88 [32];
  char local_68;
  LPCWSTR ***local_60 [3];
  ulonglong local_48;
  undefined1 local_40 [16];
  undefined1 auStack_30 [16];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStackY_118;
  local_c0 = (undefined1  [16])0x0;
  plVar10 = (longlong *)FUN_180113860(&DAT_180bb9388);
  lVar6 = DAT_180bb9380;
  local_c0._8_8_ = plVar10;
  local_c0._0_8_ = DAT_180bb9380;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar7 = (byte)DAT_180bb9388;
  DAT_180bb9388 = (longlong)plVar10;
  if ((bVar7 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) {
    pauVar11 = (undefined1 (*) [16])FUN_1801d8420(local_88);
    bVar5 = false;
    bVar4 = true;
  }
  else {
    FUN_1800f5370(local_b0,lVar6);
    local_90 = '\x01';
    pauVar11 = (undefined1 (*) [16])local_b0;
    bVar5 = true;
    bVar4 = false;
  }
  local_20 = 0;
  bVar13 = pauVar11[2][0] != '\0';
  if (bVar13) {
    local_40 = (undefined1  [16])0x0;
    auStack_30 = (undefined1  [16])0x0;
    local_40 = *pauVar11;
    auStack_30 = pauVar11[1];
    *(undefined2 *)*pauVar11 = 0;
    *(undefined8 *)pauVar11[1] = 0;
    *(undefined8 *)(pauVar11[1] + 8) = 7;
  }
  local_20 = bVar13;
  if ((bVar4) && (local_68 != '\0')) {
    FUN_18015b930(local_88);
  }
  if ((bVar5) && (local_90 != '\0')) {
    FUN_18015b930(local_b0);
  }
  if (local_20 == '\0') goto LAB_18052b671;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = 0;
  local_c8 = 0;
  FUN_180159e60(local_e0,L"characters",10);
  FUN_1800a7e60(local_60,local_40,local_e0);
  FUN_18015b930(local_e0);
  ppppWVar12 = (LPCWSTR ***)local_60;
  if (7 < local_48) {
    ppppWVar12 = local_60[0];
  }
  DVar8 = GetFileAttributesW((LPCWSTR)ppppWVar12);
  if (DVar8 == 0xffffffff) {
    ppppWVar12 = (LPCWSTR ***)local_60;
    if (7 < local_48) {
      ppppWVar12 = local_60[0];
    }
    BVar9 = CreateDirectoryW((LPCWSTR)ppppWVar12,(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar9 != 0) goto LAB_18052b617;
    DVar8 = GetLastError();
    if (DVar8 == 0xb7) goto LAB_18052b617;
  }
  else {
LAB_18052b617:
    ppppWVar12 = (LPCWSTR ***)local_60;
    if (7 < local_48) {
      ppppWVar12 = local_60[0];
    }
    DVar8 = GetFileAttributesW((LPCWSTR)ppppWVar12);
    if ((DVar8 != 0xffffffff) && ((DVar8 & 0x410) == 0x10)) {
      ppppWVar12 = (LPCWSTR ***)local_60;
      if (7 < local_48) {
        ppppWVar12 = local_60[0];
      }
      ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)ppppWVar12,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    }
  }
  FUN_18015b930(local_60);
LAB_18052b671:
  if (local_20 != '\0') {
    FUN_18015b930(local_40);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
}



