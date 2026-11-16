// FUN_18053c6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053c6b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053c6b0(char param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined8 *local_160;
  undefined1 local_158;
  undefined *local_150;
  undefined1 local_140;
  int local_138 [4];
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 local_f8;
  uint7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_98 [4];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  piVar8 = &DAT_180b0c1f0;
  bVar11 = param_1 == '\0';
  if (bVar11) {
    piVar8 = &DAT_180b0c160;
  }
  puVar9 = &DAT_180b0c1f4;
  if (bVar11) {
    puVar9 = &DAT_180b0c164;
  }
  puVar10 = &DAT_180b0c1f8;
  if (bVar11) {
    puVar10 = &DAT_180b0c168;
  }
  if ((DAT_180cd7364 & 1) == 0) {
    DAT_180cd7364 = DAT_180cd7364 | 1;
    FUN_18053ca40();
    atexit(FUN_180663f20);
  }
  local_88 = &DAT_180cd7370;
  if (0xf < DAT_180cd7388) {
    local_88 = DAT_180cd7370;
  }
  local_80 = &DAT_180cd7390;
  if (0xf < DAT_180cd73a8) {
    local_80 = DAT_180cd7390;
  }
  local_78 = &DAT_180cd73b0;
  if (0xf < DAT_180cd73c8) {
    local_78 = DAT_180cd73b0;
  }
  local_70 = &DAT_180cd73d0;
  if (0xf < DAT_180cd73e8) {
    local_70 = DAT_180cd73d0;
  }
  local_68 = &DAT_180cd73f0;
  if (0xf < DAT_180cd7408) {
    local_68 = DAT_180cd73f0;
  }
  local_60 = &DAT_180cd7410;
  if (0xf < DAT_180cd7428) {
    local_60 = DAT_180cd7410;
  }
  local_58 = &DAT_180cd7430;
  if (0xf < DAT_180cd7448) {
    local_58 = DAT_180cd7430;
  }
  local_50 = &DAT_180cd7450;
  if (0xf < DAT_180cd7468) {
    local_50 = DAT_180cd7450;
  }
  local_48 = &DAT_180cd7470;
  if (0xf < DAT_180cd7488) {
    local_48 = DAT_180cd7470;
  }
  local_40 = &DAT_180cd7490;
  if (0xf < DAT_180cd74a8) {
    local_40 = DAT_180cd7490;
  }
  local_138[2] = 9;
  local_138[0] = 0;
  local_138[1] = *piVar8;
  piVar6 = local_138;
  if (-1 < local_138[1]) {
    piVar6 = local_138 + 1;
  }
  piVar5 = local_138 + 2;
  if (local_138[1] < 10) {
    piVar5 = piVar6;
  }
  iVar1 = *piVar5;
  cVar4 = '\0';
  local_98[0] = iVar1;
  FUN_180488c60();
  local_118 = 0;
  uStack_110 = 0;
  auStack_108 = ZEXT816(0);
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = (ulonglong)uStack_f7 << 8;
  uStack_b0 = 0;
  auVar2 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_a8 = auVar2._0_8_;
  local_120 = 10;
  local_160 = &local_d8;
  local_168 = &DAT_18085d58c;
  local_128 = &local_88;
  cVar3 = FUN_18048d220("Sound",local_98,&local_128,1);
  if (cVar3 != '\0') {
    *piVar8 = local_98[0];
  }
  local_140 = 0;
  local_150 = &DAT_18085d590;
  local_158 = 1;
  local_160 = (undefined8 *)CONCAT44(local_160._4_4_,0x3f800000);
  local_168 = "%.0f%%";
  FUN_18048a250("Volume",puVar9,0x3f800000,0x42c80000);
  if (local_98[0] == 9) {
    cVar4 = FUN_18048b0e0("Custom Sound",&DAT_18085d58c,1);
  }
  FUN_180488f10();
  if (local_98[0] == 9) {
    if ((cVar4 != '\0') || (iVar1 != 9)) {
      FUN_1805303d0("##custom_sound",0x43aa0000);
    }
    pcVar7 = "Custom Hit Sound";
    if (param_1 != '\0') {
      pcVar7 = "Custom Kill Sound";
    }
    cVar3 = FUN_180488630("##custom_sound",pcVar7,0x43aa0000);
    if (cVar3 != '\0') {
      FUN_18053be30(puVar10,*puVar9,param_1);
      FUN_1804aeac0();
    }
  }
  pcVar7 = "Played for confirmed damage. A configured kill sound takes priority on a killing hit.";
  if (param_1 != '\0') {
    pcVar7 = "Played for a confirmed kill. Kill sound takes priority over hit sound.";
  }
  FUN_1805302b0(pcVar7);
}



