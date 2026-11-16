// FUN_180224600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180224600 */

undefined8 FUN_180224600(void)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char *local_a8;
  undefined1 *local_a0;
  char *local_98;
  longlong local_90;
  char local_88 [56];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  
  local_88[0] = 'I';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = -0x75;
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = -0x1d;
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '_';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = -0x3d;
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = 'H';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = -0x75;
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = -0x35;
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = -0x18;
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = -1;
  local_88[0x25] = -1;
  local_88[0x26] = -1;
  local_88[0x27] = -1;
  local_88[0x28] = -1;
  local_88[0x29] = -1;
  local_88[0x2a] = -1;
  local_88[0x2b] = -1;
  local_88[0x2c] = -1;
  local_88[0x2d] = -1;
  local_88[0x2e] = -1;
  local_88[0x2f] = -1;
  local_88[0x30] = -1;
  local_88[0x31] = -1;
  local_88[0x32] = -1;
  local_88[0x33] = -1;
  local_88[0x34] = 'H';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  uStack_50 = 0xcb0000008b;
  local_48 = 0xffffffff000000e8;
  uStack_40 = 0xffffffffffffffff;
  local_38 = 0xffffffff;
  local_a8 = local_88;
  local_a0 = local_34;
  lVar5 = FUN_180219910(&local_a8);
  if (lVar5 == 0) {
    return 0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar2 = DAT_1808ec1d0;
  lVar8 = DAT_1808da460;
  if ((DAT_1808ec1d0 == DAT_1808da460) && (lVar10 = DAT_180c63f00, DAT_180c63f00 != 0))
  goto LAB_1802247e6;
  UVar6 = GetTickCount64();
  if ((lVar2 == lVar8) && (UVar6 < DAT_180c63ef8)) {
    lVar10 = 0;
    goto LAB_1802247e6;
  }
  iVar4 = FUN_1805f68d0(&DAT_1808ec180);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808ec1cc == 0x7fffffff) {
    DAT_1808ec1cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar11 = 1000;
  if (DAT_1808ec1d0 == lVar8) {
    if ((DAT_180c63f00 == 0) && (DAT_180c63ef8 <= UVar6)) goto LAB_180224757;
  }
  else {
    DAT_1808ec170 = 1000;
LAB_180224757:
    puVar7 = (undefined1 *)0xffffffffffffffff;
    do {
      local_a0 = puVar7 + 1;
      pcVar1 = puVar7 + 0x180825f81;
      puVar7 = local_a0;
    } while (*pcVar1 != '\0');
    local_a8 = "client.dll:498BE35FC3488BCB>E8????????488BCBE8????????";
    local_98 = "patterns::hud_weapon_selection_update";
    local_90 = 0x25;
    DAT_180c63f00 = FUN_1800e5d20(&local_98,&local_a8);
    DAT_1808ec1d0 = lVar8;
    DAT_180c63ef8 = 0xffffffffffffffff;
    if (DAT_180c63f00 == 0) {
      DAT_180c63ef8 = DAT_1808ec170 + UVar6;
      uVar11 = 60000;
      if (DAT_1808ec170 < 60000) {
        uVar11 = DAT_1808ec170 * 2;
      }
    }
    DAT_1808ec170 = uVar11;
  }
  lVar10 = DAT_180c63f00;
  FUN_1805f68fc(&DAT_1808ec180);
LAB_1802247e6:
  lVar8 = FUN_180219870(lVar5 + 8,1,5);
  if (lVar8 != lVar10) {
    return 0;
  }
  uVar9 = FUN_180219870(lVar5 + 0x10,1,5);
  local_88[0] = 'H';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = -0x77;
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\\';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '$';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\x10';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = 'W';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = 'H';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = -0x7d;
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = -0x14;
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '3';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = -1;
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = 'H';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = -0x75;
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  uStack_50 = CONCAT44(uStack_50._4_4_,0xd9);
  local_98 = local_88;
  local_90 = (longlong)&uStack_50 + 4;
  cVar3 = FUN_1802197b0(uVar9,&local_98);
  uVar12 = 0;
  if (cVar3 != '\0') {
    uVar12 = uVar9;
  }
  return uVar12;
}



