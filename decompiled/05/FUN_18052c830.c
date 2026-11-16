// FUN_18052c830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052c830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052c830(int param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  ULONGLONG UVar11;
  char *pcVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  char *local_180;
  undefined8 local_178;
  float local_168;
  float local_164;
  byte *local_160;
  undefined8 *local_158;
  undefined4 *local_150;
  byte local_148 [4];
  undefined4 local_144;
  undefined8 local_140;
  int local_138 [6];
  undefined1 local_120 [216];
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  lVar10 = FUN_180529500(param_1,param_2);
  uVar15 = DAT_180c630d0;
  local_140 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x28);
  local_148[0] = param_2 == 0xf;
  auVar6 = vpcmpeqd_avx(ZEXT416(param_2),SUB6416(ZEXT464(0xf),0));
  auVar6 = vblendvps_avx(SUB6416(ZEXT464(0x43670000),0),SUB6416(ZEXT464(0x42780000),0),auVar6);
  local_144 = auVar6._0_4_;
  local_160 = local_148;
  local_158 = &local_140;
  local_150 = &local_144;
  if (DAT_1808e6670 == '\0') {
    local_188 = CONCAT31(local_188._1_3_,1);
    cVar9 = FUN_18052cec0(&local_160,"Save & Refresh",&DAT_18082ac70,0x432c0000);
    if (cVar9 != '\0') {
      FUN_18052be80(param_2);
    }
  }
  else {
    if ((((DAT_180c63100 & 1) == 0) && (DAT_180c630d8 == '\0')) &&
       (UVar11 = GetTickCount64(), uVar15 <= UVar11)) {
      pcVar12 = &DAT_1808e6888;
      do {
        if (*pcVar12 != '\0') goto LAB_18052c943;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 != &DAT_1808e688d);
      if ((DAT_1808e6764 != 0) && (DAT_1808e6778 == '\0')) goto LAB_18052c943;
      uVar8 = 1;
    }
    else {
LAB_18052c943:
      uVar8 = 0;
    }
    local_188 = CONCAT31(local_188._1_3_,uVar8);
    cVar9 = FUN_18052cec0(&local_160,"Save Draft",&DAT_180830b3c,0x432c0000);
    if (cVar9 != '\0') {
      FUN_1805260a0(1);
    }
    local_188 = CONCAT31(local_188._1_3_,1);
    cVar9 = FUN_18052cec0(&local_160,"Cancel",&DAT_180829a40,0x43430000);
    if (cVar9 != '\0') {
      FUN_18052c6c0();
    }
  }
  if (DAT_1808e6673 != '\0') {
    DAT_1808e6673 = '\0';
    FUN_180488320("##discard_attachment_draft");
  }
  cVar9 = FUN_180488630("##discard_attachment_draft","Discard Attachment Changes?",0x43700000);
  if (cVar9 != '\0') {
    cVar9 = FUN_18048b0e0("Keep Editing",&DAT_18082a288,1);
    if (cVar9 != '\0') {
      DAT_1808e4fb8 = 0xffffffff;
      _DAT_1808e68a0 = 0;
      puVar13 = &DAT_1808e6890;
      if (0xf < DAT_1808e68a8) {
        puVar13 = DAT_1808e6890;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_180bbef48 = '\0';
      FUN_1804c7bf0();
    }
    cVar9 = FUN_18048b0e0("Discard Changes",&DAT_180829a48,1);
    if (cVar9 != '\0') {
      FUN_1805260a0(0);
      FUN_1804c7bf0();
    }
    FUN_1804aeac0();
  }
  if ((DAT_1808e6670 == '\0') || (DAT_180bbef48 == '\0')) {
    lVar14 = DAT_180bb8ae8;
  }
  else {
    plVar5 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar17 = ~*(uint *)(plVar5[0x22] + -4 + (longlong)(int)plVar5[0x21] * 4);
    pcVar12 = "##discard_attachment_draft";
    cVar9 = '#';
    uVar19 = uVar17;
    do {
      pcVar12 = pcVar12 + 1;
      if (((cVar9 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
        pcVar12 = pcVar12 + 2;
        uVar19 = uVar17;
      }
      else {
        uVar19 = crc32(uVar19,cVar9);
      }
      cVar9 = *pcVar12;
    } while (cVar9 != '\0');
    uVar19 = ~uVar19;
    if (*(uint *)(*plVar5 + 0x1534) == uVar19) {
      FUN_1804cf810(uVar19,0xb,"##discard_attachment_draft");
    }
    lVar14 = DAT_180bb8ae8;
    if ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) ||
       (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
                 *(longlong *)(DAT_180bb8ae8 + 0x2000)) != uVar19)) {
      DAT_1808e4fb8 = 0xffffffff;
      _DAT_1808e68a0 = 0;
      puVar13 = &DAT_1808e6890;
      if (0xf < DAT_1808e68a8) {
        puVar13 = DAT_1808e6890;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_180bbef48 = '\0';
    }
  }
  uVar21 = DAT_180c62ca8;
  uVar7 = DAT_1808da474;
  pcVar12 = (char *)(lVar10 + 0x200);
  if (0xf < *(ulonglong *)(lVar10 + 0x218)) {
    pcVar12 = *(char **)(lVar10 + 0x200);
  }
  if ((DAT_1808e6670 == '\0') || (DAT_1808e667c != 1)) {
LAB_18052cbf0:
    if (*pcVar12 == '\0') goto LAB_18052ccb7;
  }
  else if ((&DAT_1808e66d8)[(longlong)DAT_1808e6680 * 7] == 0) {
    pcVar12 = "Choose a sticker";
  }
  else {
    if (DAT_1808e6672 != '\0') {
      pcVar12 = "Click or drag on the gun to move the sticker";
      if ((&DAT_1808e6888)[DAT_1808e6680] != '\0') {
        pcVar12 = "Click the gun to place the sticker";
      }
      goto LAB_18052cbf0;
    }
    pcVar12 = "Preparing sticker editor...";
  }
  auVar6 = vpcmpeqd_avx(ZEXT416((uint)local_148[0]),SUB6416(ZEXT464(0),0));
  auVar6 = vblendvps_avx(SUB6416(ZEXT464(0x43db0000),0),SUB6416(ZEXT464(0x430f0000),0),auVar6);
  local_168 = auVar6._0_4_ * DAT_180b0a41c + (float)local_140;
  auVar6 = vpcmpeqd_avx(ZEXT416((uint)local_148[0]),SUB6416(ZEXT464(0),0));
  auVar6 = vblendvps_avx(SUB6416(ZEXT464(0x43ec0000),0),SUB6416(ZEXT464(0x43760000),0),auVar6);
  local_164 = auVar6._0_4_ * DAT_180b0a41c + local_140._4_4_;
  *(undefined1 *)(*(longlong *)(lVar14 + 0x14d0) + 0xce) = 1;
  local_178 = 0;
  local_188 = uVar7;
  local_180 = pcVar12;
  FUN_180463450(*(undefined8 *)(*(longlong *)(lVar14 + 0x14d0) + 0x2c8),uVar21,0x41100000,&local_168
               );
LAB_18052ccb7:
  if (*(int *)(lVar10 + 0x220) != 0) {
    sVar1 = *(short *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4970
                      + ((longlong)param_1 * 0x15 + (longlong)(int)param_2) * 4);
    if ((((DAT_180b909b0 == 0) || (sVar1 < 0)) ||
        ((int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68)
         <= (int)sVar1)) ||
       (puVar18 = (ushort *)((longlong)sVar1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
       puVar18 == (ushort *)0x0)) {
      uVar19 = 0;
    }
    else {
      uVar2 = *puVar18;
      uVar15 = (((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar2 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
      lVar14 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar15 * 0x10);
      if (lVar14 == DAT_180cc9c90) {
LAB_18052cda8:
        lVar14 = 0;
      }
      else {
        uVar3 = *(ushort *)(lVar14 + 0x10);
        while (uVar2 != uVar3) {
          if (lVar14 == *(longlong *)(DAT_180cc9ca0 + uVar15 * 0x10)) goto LAB_18052cda8;
          lVar14 = *(longlong *)(lVar14 + 8);
          uVar3 = *(ushort *)(lVar14 + 0x10);
        }
      }
      lVar16 = DAT_180cc9c90;
      if (lVar14 != 0) {
        lVar16 = lVar14;
      }
      if (lVar16 == DAT_180cc9c90) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(longlong *)(lVar16 + 0x18) * 0xb8 + DAT_180cc9bf8;
      }
      if ((lVar14 == 0) || (*(char *)(lVar14 + 0xb0) != '\0')) {
        uVar19 = FUN_180221b40(lVar16,*puVar18,*(undefined4 *)(puVar18 + 2));
      }
      else {
        iVar4 = *(int *)(puVar18 + 2);
        uVar19 = 0;
        iVar20 = 2;
        do {
          uVar21 = FUN_1801d6430(&DAT_180cc8068,local_138,uVar2,iVar20);
          if (((local_48 != '\0') && (local_138[0] == iVar4)) &&
             (lVar14 = FUN_180221c10(uVar21,uVar2,iVar20), lVar14 != 0)) {
            uVar19 = uVar19 | 1 << (iVar20 - 2U & 0x1f);
          }
          if (local_48 != '\0') {
            FUN_18015c010(local_120);
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < 4);
      }
    }
    if ((*(uint *)(lVar10 + 0x220) & uVar19) == *(uint *)(lVar10 + 0x220)) {
      *(undefined4 *)(lVar10 + 0x220) = 0;
      FUN_180113930(lVar10 + 0x200,"Saved",5);
    }
  }
}



