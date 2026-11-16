// FUN_1801cc950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cc950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cc950(undefined1 *param_1,longlong *param_2)

{
  ushort ****ppppuVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  WCHAR ****ppppWVar7;
  undefined1 (*pauVar8) [16];
  ushort ****ppppuVar9;
  WCHAR *pWVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  LPCWSTR lpSrcStr;
  bool bVar14;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  WCHAR local_a8 [2];
  WORD local_a4 [2];
  WCHAR local_a0 [4];
  undefined1 local_98 [16];
  undefined8 uStack_88;
  ulonglong uStack_80;
  WCHAR ****local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  ushort ****local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_148;
  local_108 = ZEXT816(0x180700558);
  local_78 = (WCHAR ****)*param_2;
  lStack_70 = param_2[1];
  puVar5 = (undefined8 *)FUN_180165e50(local_e8,&local_78,local_108);
  local_108._0_8_ = puVar5;
  if (0xf < (ulonglong)puVar5[3]) {
    local_108._0_8_ = *puVar5;
  }
  local_108._8_8_ = puVar5[2];
  FUN_180165be0(&local_78,local_108);
  FUN_18015c010(local_e8);
  bVar14 = local_68 != 0;
  if (bVar14) {
    puVar6 = (undefined1 *)FUN_1800f5370(local_c8,&local_78);
    lVar12 = local_68;
  }
  else {
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    FUN_180159e60(local_108,L"config",6);
    puVar6 = local_108;
    lVar12 = local_68;
  }
  FUN_1800f5370(local_58,puVar6);
  if (bVar14) {
    FUN_18015b930(local_c8);
  }
  else {
    FUN_18015b930(local_108);
  }
  uVar13 = 0;
  ppppuVar9 = (ushort ****)local_58;
  if (7 < local_40) {
    ppppuVar9 = local_58[0];
  }
  ppppuVar1 = (ushort ****)((longlong)ppppuVar9 + local_48 * 2);
  if (ppppuVar9 == ppppuVar1) {
LAB_1801ccad2:
    uVar11 = -uVar13;
    if ((int)-uVar13 < 0) {
      uVar11 = uVar13;
    }
  }
  else {
    do {
      uVar13 = uVar13 * 0x1f + (uint)*(ushort *)ppppuVar9;
      ppppuVar9 = (ushort ****)((longlong)ppppuVar9 + 2);
    } while (ppppuVar9 != ppppuVar1);
    if (uVar13 != 0x80000000) goto LAB_1801ccad2;
    uVar11 = 0;
  }
  local_108._0_8_ = 0xbc72e998c686aedc;
  local_98 = (undefined1  [16])0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_180159e60(local_98,&DAT_1807c6850,1);
  if (lVar12 == 0) goto LAB_1801ccc9a;
  ppppWVar7 = (WCHAR ****)&local_78;
  if (7 < local_60) {
    ppppWVar7 = local_78;
  }
  local_a8[0] = *(WCHAR *)ppppWVar7;
  local_a4[0] = 0;
  GetStringTypeW(1,local_a8,1,local_a4);
  if ((local_a4[0] & 0x104) == 0) {
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    FUN_180159e60(local_e8,&DAT_1807c6854);
    pauVar8 = &local_e8;
    bVar3 = false;
    bVar14 = true;
LAB_1801ccbb3:
    if (7 < uStack_80) {
      if ((0xfff < uStack_80 * 2 + 2) &&
         (0x1f < (local_98._0_8_ - *(longlong *)(local_98._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0();
    }
    uStack_88 = 0;
    uStack_80 = 7;
    auVar2._14_2_ = 0;
    auVar2._0_14_ = local_98._2_14_;
    local_98 = auVar2 << 0x10;
    local_98 = *pauVar8;
    uStack_88 = *(undefined8 *)pauVar8[1];
    uStack_80 = *(ulonglong *)(pauVar8[1] + 8);
    *(undefined8 *)pauVar8[1] = 0;
    *(undefined8 *)(pauVar8[1] + 8) = 7;
    *(undefined2 *)*pauVar8 = 0;
  }
  else {
    pauVar8 = (undefined1 (*) [16])FUN_18017cee0(local_c8,1);
    bVar3 = true;
    bVar14 = false;
    if (&local_98 != pauVar8) goto LAB_1801ccbb3;
  }
  if (bVar14) {
    FUN_18015b930(local_e8);
  }
  if (bVar3) {
    FUN_18015b930(local_c8);
  }
  local_a0[0] = L'\0';
  lpSrcStr = (LPCWSTR)local_98;
  if (7 < uStack_80) {
    lpSrcStr = (LPCWSTR)local_98._0_8_;
  }
  iVar4 = LCMapStringW(0x7f,0x200,lpSrcStr,1,local_a0,1);
  if (iVar4 != 0) {
    pWVar10 = (WCHAR *)local_98;
    if (7 < uStack_80) {
      pWVar10 = (WCHAR *)local_98._0_8_;
    }
    *pWVar10 = local_a0[0];
  }
LAB_1801ccc9a:
  *param_1 = local_108[uVar11 & 7];
  local_108._0_8_ = local_98;
  if (7 < uStack_80) {
    local_108._0_8_ = local_98._0_8_;
  }
  local_108._8_8_ = uStack_88;
  FUN_180165d20(param_1 + 8,local_108);
  FUN_18015b930(local_98);
  FUN_18015b930(local_58);
  FUN_18015b930(&local_78);
}



