// FUN_180187510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180187510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187510(ulonglong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  LPCWSTR lpFileName;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [2] [16];
  undefined1 local_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  FUN_180186af0(local_68);
  cVar2 = FUN_180187280(local_68);
  if ((cVar2 != '\0') && (param_1 < 0x10000001)) {
    uVar7 = 0;
    uVar10 = 0;
    uVar5 = FUN_180186ef0(local_88,local_68);
    local_98 = (undefined1  [16])0x0;
    iVar3 = FUN_1801a5100(local_98,uVar5,0);
    FUN_18015b930(local_88);
    local_88[0] = (undefined1  [16])0x0;
    lVar1 = local_98._0_8_;
    while ((lVar1 != 0 && (iVar3 == 0))) {
      uVar10 = uVar10 + 1;
      if (0x2000 < uVar10) {
LAB_1801876d2:
        FUN_1800efed0(local_88);
        FUN_1800efed0(local_98);
        goto LAB_1801876e9;
      }
      plVar8 = (longlong *)(lVar1 + 0x20);
      lpFileName = (LPCWSTR)FUN_180186ef0(local_48,plVar8);
      if (7 < *(ulonglong *)(lpFileName + 0xc)) {
        lpFileName = *(LPCWSTR *)lpFileName;
      }
      DVar4 = GetFileAttributesW(lpFileName);
      FUN_18015b930(local_48);
      if ((DVar4 == 0xffffffff) || ((DVar4 >> 10 & 1) != 0)) goto LAB_1801876d2;
      if ((DVar4 & 0x10) == 0) {
        if ((*(uint *)(lVar1 + 0x1c) & 8) == 0) {
          if ((*(uint *)(lVar1 + 0x1c) & 2) == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = *(undefined4 *)(lVar1 + 0x10);
          }
          if (7 < *(ulonglong *)(lVar1 + 0x38)) {
            plVar8 = (longlong *)*plVar8;
          }
          iVar3 = FUN_1805fb620(plVar8,local_48,9,uVar9);
          if (iVar3 != 0) goto LAB_1801876d2;
          uVar6 = local_40;
        }
        else {
          uVar6 = *(ulonglong *)(lVar1 + 8);
        }
        if ((0x40000000 < uVar6) || (0x40000000 - uVar6 < uVar7)) goto LAB_1801876d2;
        uVar7 = uVar7 + uVar6;
      }
      iVar3 = FUN_18017dba0(local_98);
      lVar1 = local_98._0_8_;
    }
    FUN_1800efed0(local_88);
    FUN_1800efed0(local_98);
  }
LAB_1801876e9:
  FUN_18015b930(local_68);
}



