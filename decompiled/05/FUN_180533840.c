// FUN_180533840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180533840 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180533840(byte ******param_1)

{
  char *pcVar1;
  byte *****pppppbVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 ******ppppppuVar9;
  byte ******ppppppbVar10;
  byte *pbVar11;
  byte ******ppppppbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined1 local_1c8 [16];
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  byte ******local_1a0;
  byte *****pppppbStack_198;
  byte *****pppppbStack_190;
  byte *****pppppbStack_188;
  byte ******local_180;
  byte *****pppppbStack_178;
  byte *****pppppbStack_170;
  byte *****pppppbStack_168;
  undefined1 local_160 [16];
  byte *****pppppbStack_150;
  byte *****pppppbStack_148;
  byte *****local_138 [2];
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  byte ******local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 ******local_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  local_78 = param_1;
  local_1a0 = (byte ******)*param_1;
  pppppbStack_190 = param_1[2];
  pppppbStack_188 = param_1[3];
  pppppbStack_198 = param_1[1];
  *(undefined1 *)param_1 = 0;
  param_1[2] = (byte *****)0x0;
  param_1[3] = (byte *****)0xf;
  ppppppbVar10 = (byte ******)&local_1a0;
  if ((byte *****)0xf < pppppbStack_188) {
    ppppppbVar10 = local_1a0;
  }
  ppppppbVar12 = (byte ******)((longlong)ppppppbVar10 + (longlong)pppppbStack_190);
  local_180 = local_1a0;
  pppppbStack_170 = pppppbStack_190;
  pppppbStack_168 = pppppbStack_188;
  for (; ppppppbVar10 != ppppppbVar12; ppppppbVar10 = (byte ******)((longlong)ppppppbVar10 + 1)) {
    local_1a0 = local_180;
    pppppbStack_190 = pppppbStack_170;
    pppppbStack_188 = pppppbStack_168;
    iVar4 = tolower((uint)*(byte *)ppppppbVar10);
    *(byte *)ppppppbVar10 = (byte)iVar4;
    if ((byte)iVar4 == 0x5f) {
      *(byte *)ppppppbVar10 = 0x20;
    }
    local_180 = local_1a0;
    pppppbStack_170 = pppppbStack_190;
    pppppbStack_168 = pppppbStack_188;
  }
  local_160._8_8_ = pppppbStack_198;
  local_160._0_8_ = local_180;
  pppppbStack_150 = pppppbStack_170;
  pppppbStack_148 = pppppbStack_168;
  local_1a0 = (byte ******)((ulonglong)local_180 & 0xffffffffffffff00);
  pppppbStack_190 = (byte *****)0x0;
  pppppbStack_188 = (byte *****)0xf;
  pppppbStack_178 = pppppbStack_198;
  FUN_18015c010(&local_1a0);
  if ((byte *******)param_1 != &local_180) {
    FUN_18015c010(param_1);
    *param_1 = (byte *****)local_160._0_8_;
    param_1[1] = (byte *****)local_160._8_8_;
    param_1[2] = pppppbStack_150;
    param_1[3] = pppppbStack_148;
    pppppbStack_170 = (byte *****)0x0;
    pppppbStack_168 = (byte *****)0xf;
    local_180 = (byte ******)((ulonglong)local_180 & 0xffffffffffffff00);
  }
  FUN_18015c010(&local_180);
  local_138[0] = (byte *****)&DAT_1806bc7c4;
  local_138[1] = (byte *****)0x1808685c8;
  local_128 = "triggerbot";
  local_120 = "trigger bot";
  local_118 = "doubletap";
  local_110 = "double tap";
  local_108 = "autowall";
  local_100 = "auto wall wallbang";
  local_f8 = "jumpbug";
  local_f0 = "jump bug";
  local_e8 = "edgebug";
  local_e0 = "edge bug";
  local_d8 = "edgejump";
  local_d0 = "edge jump";
  local_c8 = "pixelsurf";
  local_c0 = "pixel surf";
  local_b8 = &DAT_18081e9cc;
  local_b0 = "recoil control";
  local_a8 = "hitchance";
  local_a0 = "hit chance";
  local_98 = "airstrafe";
  local_90 = "air strafe";
  local_88 = "clantag";
  local_80 = "clan tag";
  ppppppbVar10 = local_138;
  do {
    local_1d8 = -1;
    do {
      local_1d8 = local_1d8 + 1;
    } while (*(char *)((longlong)*ppppppbVar10 + local_1d8) != '\0');
    ppppppbVar12 = param_1;
    if ((byte *****)0xf < param_1[3]) {
      ppppppbVar12 = (byte ******)*param_1;
    }
    lVar5 = FUN_180159df0(ppppppbVar12,param_1[2],0);
    if (lVar5 != -1) {
      pppppbVar2 = ppppppbVar10[1];
      local_70 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
      FUN_18015ba30(local_70,&DAT_1806bcfc0,1);
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)((longlong)pppppbVar2 + lVar5) != '\0');
      pauVar6 = (undefined1 (*) [32])FUN_18015b2a0(local_70,pppppbVar2);
      _local_160 = *pauVar6;
      (*pauVar6)[0] = 0;
      *(undefined8 *)(*pauVar6 + 0x10) = 0;
      *(undefined8 *)(*pauVar6 + 0x18) = 0xf;
      puVar8 = local_160;
      if (0xf < local_160._24_8_) {
        puVar8 = local_160._0_8_;
      }
      FUN_18015b2a0(param_1,puVar8);
      FUN_18015c010(local_160);
      FUN_18015c010(local_70);
    }
    ppppppbVar10 = ppppppbVar10 + 2;
  } while ((byte *******)ppppppbVar10 != &local_78);
  local_1c8 = (undefined1  [16])0x0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  lVar5 = -1;
  do {
    pcVar1 = (char *)(lVar5 + 0x180c62ec1);
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  FUN_18015ba30(local_1c8);
  pbVar11 = local_1c8;
  if (0xf < uStack_1b0) {
    pbVar11 = (byte *)local_1c8._0_8_;
  }
  pbVar13 = pbVar11 + uStack_1b8;
  uStack_40 = uStack_1b8;
  uStack_38 = uStack_1b0;
  for (; pbVar11 != pbVar13; pbVar11 = pbVar11 + 1) {
    uStack_1b8 = uStack_40;
    uStack_1b0 = uStack_38;
    iVar4 = tolower((uint)*pbVar11);
    *pbVar11 = (byte)iVar4;
    if ((byte)iVar4 == 0x5f) {
      *pbVar11 = 0x20;
    }
    uStack_40 = uStack_1b8;
    uStack_38 = uStack_1b0;
  }
  local_50 = (undefined8 ******)local_1c8._0_8_;
  uStack_48 = local_1c8._8_8_;
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_1c8._1_15_;
  local_1c8 = auVar3 << 8;
  uStack_1b8 = 0;
  uStack_1b0 = 0xf;
  FUN_18015c010(local_1c8);
  uVar17 = 0;
  if (uStack_40 != 0) {
    do {
      ppppppuVar9 = &local_50;
      if (0xf < uStack_38) {
        ppppppuVar9 = local_50;
      }
      lVar5 = uStack_40 + (longlong)ppppppuVar9;
      lVar7 = thunk_FUN_1805f7e70((longlong)ppppppuVar9 + uVar17,lVar5,0x20);
      if (lVar7 == lVar5) {
        uVar14 = 0xffffffffffffffff;
LAB_180533c7e:
        uVar15 = uStack_40;
      }
      else {
        uVar14 = lVar7 - (longlong)ppppppuVar9;
        if (uVar14 == 0xffffffffffffffff) goto LAB_180533c7e;
        uVar15 = uVar14;
      }
      local_70 = (undefined1  [16])0x0;
      local_60 = ZEXT816(0);
      if (uStack_40 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_180141470();
      }
      uVar16 = uVar15 - uVar17;
      if (uStack_40 - uVar17 < uVar15 - uVar17) {
        uVar16 = uStack_40 - uVar17;
      }
      ppppppuVar9 = &local_50;
      if (0xf < uStack_38) {
        ppppppuVar9 = local_50;
      }
      FUN_18015ba30(local_70,(longlong)ppppppuVar9 + uVar17,uVar16);
      if ((byte *****)local_60._0_8_ != (byte *****)0x0) {
        puVar8 = local_70;
        if (0xf < (ulonglong)local_60._8_8_) {
          puVar8 = (undefined1 *)local_70._0_8_;
        }
        ppppppbVar10 = param_1;
        if ((byte *****)0xf < param_1[3]) {
          ppppppbVar10 = (byte ******)*param_1;
        }
        if (((param_1[2] < (ulonglong)local_60._0_8_) ||
            (lVar5 = (longlong)ppppppbVar10 + (longlong)param_1[2],
            lVar7 = thunk_FUN_1805f9970(ppppppbVar10,lVar5,puVar8), lVar7 == lVar5)) ||
           (lVar7 - (longlong)ppppppbVar10 == -1)) {
          FUN_18015c010(local_70);
          FUN_18015c010(&local_50);
          FUN_18015c010(param_1);
        }
      }
      if (uVar14 == 0xffffffffffffffff) {
        FUN_18015c010(local_70);
        break;
      }
      uVar17 = uVar14 + 1;
      FUN_18015c010(local_70);
    } while (uVar17 < uStack_40);
  }
  FUN_18015c010(&local_50);
  FUN_18015c010(param_1);
}



