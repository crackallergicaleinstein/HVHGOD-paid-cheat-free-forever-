// FUN_1801a1cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a1cf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a1cf0(undefined8 *param_1,undefined *param_2,int param_3,undefined2 param_4,
                  longlong param_5,char param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ULONGLONG UVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined *puVar19;
  ulonglong uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_798 [32];
  undefined *local_778;
  int local_770;
  int local_76c;
  undefined2 local_768;
  undefined *local_760;
  undefined8 *local_758;
  longlong local_750;
  undefined *local_748;
  int iStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined1 local_728 [16];
  int local_718;
  int local_714;
  undefined *local_710;
  undefined *local_708;
  undefined8 local_700;
  char local_6f8;
  undefined2 local_6f7;
  undefined2 local_6f4;
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [216];
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [512];
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined4 local_3d0;
  uint uStack_3cc;
  undefined4 uStack_3c8;
  uint uStack_3c4;
  undefined4 local_3c0;
  uint uStack_3bc;
  int local_3b8;
  int local_3b4;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined8 local_3a0;
  char local_398;
  undefined2 local_397;
  undefined2 local_394;
  undefined1 local_390 [24];
  undefined1 local_378 [216];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [512];
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_6c;
  undefined1 local_64;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_798;
  local_750 = param_5;
  local_770 = param_3;
  local_768 = param_4;
  local_760 = param_2;
  local_758 = param_1;
  local_76c = FUN_18019abd0(param_2);
  if (local_76c == 0) {
  }
  uVar20 = 0xffffffffffffffff;
  if ((param_6 != '\0') && (DAT_180bb8428 == 0)) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180bb8420) {
    }
    local_778 = &DAT_1808d8140;
    iVar8 = FUN_1805f68d0(&DAT_1808d8140);
    if (iVar8 != 0) goto LAB_1801a2804;
    if (DAT_1808d818c == 0x7fffffff) {
      DAT_1808d818c = 0x7ffffffe;
      goto LAB_1801a27f9;
    }
    if ((DAT_180bb8428 == 0) && (DAT_180bb8420 <= UVar10)) {
      DAT_180bb8428 = FUN_1804174b0("C_CSPlayerPawn",0x58dee8e2);
      if (DAT_180bb8428 == 0) {
        DAT_180bb8420 = UVar10 + 1000;
      }
      else {
        DAT_180bb8420 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180bb8428;
    FUN_1805f68fc(&DAT_1808d8140);
    if (iVar8 == 0) {
    }
  }
  local_778 = (undefined *)(ulonglong)CONCAT14(param_6,local_76c);
  FUN_1801b1240(*param_1,&local_748,&local_778);
  if (param_6 == '\0') {
    iVar8 = DAT_180bb8408;
    if (DAT_180bb8408 == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180bb8400) {
        iVar8 = 0;
      }
      else {
        local_748 = &DAT_1808d80a0;
        iVar8 = FUN_1805f68d0(&DAT_1808d80a0);
        if (iVar8 != 0) goto LAB_1801a2804;
        if (DAT_1808d80ec == 0x7fffffff) {
          DAT_1808d80ec = 0x7ffffffe;
          goto LAB_1801a27f9;
        }
        if ((DAT_180bb8408 == 0) && (DAT_180bb8400 <= UVar10)) {
          DAT_180bb8408 = FUN_1804174b0("C_EconEntity",0x537b0586);
          if (DAT_180bb8408 == 0) {
            DAT_180bb8400 = UVar10 + 1000;
          }
          else {
            DAT_180bb8400 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180bb8408;
        FUN_1805f68fc(&DAT_1808d80a0);
      }
    }
    iVar9 = DAT_180bb83f8;
    if (DAT_180bb83f8 == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180bb83f0) {
        iVar9 = 0;
      }
      else {
        local_748 = &DAT_1808d8050;
        iVar9 = FUN_1805f68d0(&DAT_1808d8050);
        if (iVar9 != 0) goto LAB_1801a2804;
        if (DAT_1808d809c == 0x7fffffff) {
          DAT_1808d809c = 0x7ffffffe;
          goto LAB_1801a27f9;
        }
        if ((DAT_180bb83f8 == 0) && (DAT_180bb83f0 <= UVar10)) {
          DAT_180bb83f8 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
          if (DAT_180bb83f8 == 0) {
            DAT_180bb83f0 = UVar10 + 1000;
          }
          else {
            DAT_180bb83f0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180bb83f8;
        FUN_1805f68fc(&DAT_1808d8050);
      }
      param_1 = local_758;
    }
    lVar13 = (longlong)iVar9 + (longlong)iVar8;
  }
  else {
    iVar8 = DAT_180bb8418;
    if (DAT_180bb8418 == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180bb8410) {
        lVar13 = 0;
        goto LAB_1801a2088;
      }
      local_748 = &DAT_1808d80f0;
      iVar8 = FUN_1805f68d0(&DAT_1808d80f0);
      if (iVar8 != 0) goto LAB_1801a2804;
      if (DAT_1808d813c == 0x7fffffff) {
        DAT_1808d813c = 0x7ffffffe;
        goto LAB_1801a27f9;
      }
      if ((DAT_180bb8418 == 0) && (DAT_180bb8410 <= UVar10)) {
        DAT_180bb8418 = FUN_1804174b0("C_CSPlayerPawn",0x58dee8e2);
        if (DAT_180bb8418 == 0) {
          DAT_180bb8410 = UVar10 + 1000;
        }
        else {
          DAT_180bb8410 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180bb8418;
      FUN_1805f68fc(&DAT_1808d80f0);
    }
    lVar13 = (longlong)iVar8;
  }
LAB_1801a2088:
  iVar8 = local_770;
  param_2 = param_2 + lVar13;
  plVar14 = (longlong *)
            (((((((((((ulonglong)local_778 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)local_778 >> 8 & 0xff) * 0x100000001b3 ^
                   (ulonglong)local_778 >> 0x10 & 0xff) * 0x100000001b3 ^
                  (ulonglong)local_778 >> 0x18 & 0xff) * 0x100000001b3 ^
                 (ulonglong)local_778 >> 0x20 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_778 >> 0x28 & 0xff) * 0x100000001b3 ^
               (ulonglong)local_778 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_778 >> 0x38)
              * 0x100000001b3 & DAT_180bbe980) * 0x10 + DAT_180bbe968);
  lVar13 = plVar14[1];
  if (lVar13 == DAT_180bbe958) {
LAB_1801a2141:
    lVar13 = 0;
  }
  else {
    puVar19 = *(undefined **)(lVar13 + 0x10);
    while (local_778 != puVar19) {
      if (lVar13 == *plVar14) goto LAB_1801a2141;
      lVar13 = *(longlong *)(lVar13 + 8);
      puVar19 = *(undefined **)(lVar13 + 0x10);
    }
  }
  lVar17 = DAT_180bbe958;
  if (lVar13 != 0) {
    lVar17 = lVar13;
  }
  if (lVar17 == DAT_180bbe958) {
LAB_1801a2191:
    local_3a0 = 0;
    local_397 = 0;
    local_394 = 0;
    FUN_1801576b0(local_390);
    local_2a0 = 0;
    local_298 = 0;
    FUN_18063ab10(local_290,0,0x200);
    local_90 = 0;
    local_8c = 0;
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    local_6c = 0;
    local_64 = 0;
    local_5c = 0;
    local_3b8 = local_76c;
    local_3b4 = iVar8;
    local_3b0 = local_760;
    local_398 = param_6;
    local_3a8 = param_2;
    cVar7 = FUN_18019b0d0(&local_3b8);
    if (cVar7 == '\0') {
      FUN_1801b2a20(local_88);
      puVar16 = local_378;
LAB_1801a2258:
      FUN_18015c010(puVar16);
    }
    plVar14 = (longlong *)FUN_1801a9080(extraout_XMM0_Qa_00,local_728,&local_778,&local_3b8);
    lVar17 = *plVar14;
    FUN_1801b2a20(local_88);
    puVar16 = local_378;
LAB_1801a264b:
    FUN_18015c010(puVar16);
  }
  else {
    if (*(int *)(lVar17 + 0x1c) != local_770) {
      cVar7 = FUN_18019c410(lVar17 + 0x18,param_1[1]);
      if (cVar7 == '\0') {
      }
      FUN_1801a9830(extraout_XMM0_Qa,&local_748,lVar17);
      lVar17 = DAT_180bbe958;
    }
    if (lVar17 == DAT_180bbe958) goto LAB_1801a2191;
    if (*(longlong *)(lVar17 + 0x30) != 0) {
      iVar8 = DAT_180bb83e8;
      if (DAT_180bb83e8 == 0) {
        UVar10 = GetTickCount64();
        if (UVar10 < DAT_180bb83e0) {
          iVar8 = 0;
        }
        else {
          local_748 = &DAT_1808d8000;
          iVar8 = FUN_1805f68d0(&DAT_1808d8000);
          if (iVar8 != 0) goto LAB_1801a2804;
          if (DAT_1808d804c == 0x7fffffff) {
            DAT_1808d804c = 0x7ffffffe;
            goto LAB_1801a27f9;
          }
          if ((DAT_180bb83e8 == 0) && (DAT_180bb83e0 <= UVar10)) {
            DAT_180bb83e8 = FUN_1804174b0("C_EconItemView",0x34b55816);
            if (DAT_180bb83e8 == 0) {
              DAT_180bb83e0 = UVar10 + 1000;
            }
            else {
              DAT_180bb83e0 = 0xffffffffffffffff;
            }
          }
          iVar8 = DAT_180bb83e8;
          FUN_1805f68fc(&DAT_1808d8000);
        }
      }
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (param_2 + iVar8 == (undefined *)0x0) {
        bVar5 = false;
        puVar19 = local_760;
      }
      else {
        local_778 = (undefined *)0x0;
        cVar7 = FUN_1804514f0(&local_778,param_2 + iVar8,8);
        if (cVar7 == '\0') {
          bVar5 = false;
          puVar19 = local_760;
        }
        else {
          bVar5 = true;
          puVar19 = local_778;
        }
      }
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      puVar11 = (undefined *)0x0;
      if (bVar5) {
        puVar11 = puVar19;
      }
      if (puVar11 == *(undefined **)(lVar17 + 0x30)) goto LAB_1801a2650;
      local_700 = 0;
      local_6f7 = 0;
      local_6f4 = 0;
      FUN_1801576b0(local_6f0);
      local_600 = 0;
      uStack_5f8 = 0;
      FUN_18063ab10(auStack_5f0,0,0x200);
      local_3f0 = 0;
      local_3ec = 0;
      local_3e8 = (undefined1  [16])0x0;
      local_3d8 = 0;
      uStack_3cc = uStack_3cc & 0xffffff00;
      uStack_3c4 = uStack_3c4 & 0xffffff00;
      uStack_3bc = uStack_3bc & 0xffffff00;
      local_718 = local_76c;
      local_714 = local_770;
      local_710 = local_760;
      local_6f8 = param_6;
      local_708 = param_2;
      cVar7 = FUN_18019b0d0(&local_718);
      if (cVar7 == '\0') {
        FUN_1801b2a20(local_3e8);
        puVar16 = local_6d8;
        goto LAB_1801a2258;
      }
      local_6f7 = CONCAT11(local_6f7._1_1_,*(undefined1 *)(lVar17 + 0x39));
      local_6f4 = *(undefined2 *)(lVar17 + 0x3c);
      FUN_18017edf0(local_6f0,lVar17 + 0x40);
      lVar18 = 4;
      lVar13 = 4;
      puVar1 = (undefined8 *)(lVar17 + 0x130);
      puVar6 = &local_600;
      do {
        puVar15 = puVar6;
        puVar12 = puVar1;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        *puVar15 = *puVar12;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar2 = puVar12[5];
        uVar3 = puVar12[6];
        uVar4 = puVar12[7];
        puVar15[4] = puVar12[4];
        puVar15[5] = uVar2;
        puVar15[6] = uVar3;
        puVar15[7] = uVar4;
        uVar2 = puVar12[9];
        uVar3 = puVar12[10];
        uVar4 = puVar12[0xb];
        puVar15[8] = puVar12[8];
        puVar15[9] = uVar2;
        puVar15[10] = uVar3;
        puVar15[0xb] = uVar4;
        uVar2 = puVar12[0xd];
        puVar15[0xc] = puVar12[0xc];
        puVar15[0xd] = uVar2;
        uVar2 = puVar12[0xf];
        puVar15[0xe] = puVar12[0xe];
        puVar15[0xf] = uVar2;
        lVar13 = lVar13 + -1;
        puVar1 = puVar12 + 0x10;
        puVar6 = puVar15 + 0x10;
      } while (lVar13 != 0);
      uVar2 = puVar12[0x11];
      puVar15[0x10] = puVar12[0x10];
      puVar15[0x11] = uVar2;
      puVar15[0x12] = puVar12[0x12];
      *(int *)(lVar17 + 0x18) = local_718;
      *(int *)(lVar17 + 0x1c) = local_714;
      *(undefined **)(lVar17 + 0x20) = local_710;
      *(undefined **)(lVar17 + 0x28) = local_708;
      *(undefined8 *)(lVar17 + 0x30) = local_700;
      *(char *)(lVar17 + 0x38) = local_6f8;
      *(undefined1 *)(lVar17 + 0x39) = (undefined1)local_6f7;
      *(undefined1 *)(lVar17 + 0x3a) = local_6f7._1_1_;
      *(undefined2 *)(lVar17 + 0x3c) = local_6f4;
      FUN_1800cf9c0(lVar17 + 0x40,local_6f0);
      puVar1 = &local_600;
      puVar6 = (undefined8 *)(lVar17 + 0x130);
      do {
        puVar15 = puVar6;
        puVar12 = puVar1;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        *puVar15 = *puVar12;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar2 = puVar12[5];
        uVar3 = puVar12[6];
        uVar4 = puVar12[7];
        puVar15[4] = puVar12[4];
        puVar15[5] = uVar2;
        puVar15[6] = uVar3;
        puVar15[7] = uVar4;
        uVar2 = puVar12[9];
        uVar3 = puVar12[10];
        uVar4 = puVar12[0xb];
        puVar15[8] = puVar12[8];
        puVar15[9] = uVar2;
        puVar15[10] = uVar3;
        puVar15[0xb] = uVar4;
        uVar2 = puVar12[0xd];
        puVar15[0xc] = puVar12[0xc];
        puVar15[0xd] = uVar2;
        uVar2 = puVar12[0xf];
        puVar15[0xe] = puVar12[0xe];
        puVar15[0xf] = uVar2;
        lVar18 = lVar18 + -1;
        puVar1 = puVar12 + 0x10;
        puVar6 = puVar15 + 0x10;
      } while (lVar18 != 0);
      uVar2 = puVar12[0x11];
      puVar15[0x10] = puVar12[0x10];
      puVar15[0x11] = uVar2;
      puVar15[0x12] = puVar12[0x12];
      puVar1 = (undefined8 *)(lVar17 + 0x348);
      if (puVar1 != (undefined8 *)local_3e8) {
        FUN_1801b2a20(puVar1);
        *puVar1 = local_3e8._0_8_;
        *(undefined8 *)(lVar17 + 0x350) = local_3e8._8_8_;
        *(undefined8 *)(lVar17 + 0x358) = local_3d8;
        local_3e8 = (undefined1  [16])0x0;
        local_3d8 = 0;
      }
      *(ulonglong *)(lVar17 + 0x360) = CONCAT44(uStack_3cc,local_3d0);
      *(ulonglong *)(lVar17 + 0x368) = CONCAT44(uStack_3c4,uStack_3c8);
      *(ulonglong *)(lVar17 + 0x370) = CONCAT44(uStack_3bc,local_3c0);
      FUN_1801b2a20(local_3e8);
      puVar16 = local_6d8;
      goto LAB_1801a264b;
    }
  }
LAB_1801a2650:
  cVar7 = FUN_18019d260(lVar17 + 0x18,local_768,local_750,local_758[1]);
  if (cVar7 == '\0') {
    local_750 = lVar17 + 0x40;
  }
  if (param_6 != '\0') {
  }
  if (*(char *)(lVar17 + 0x39) == '\0') {
  }
  iVar8 = DAT_180bb83d8;
  if (DAT_180bb83d8 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180bb83d0) {
      iVar8 = 0;
    }
    else {
      local_748 = &DAT_1808d7fb0;
      iVar8 = FUN_1805f68d0(&DAT_1808d7fb0);
      if (iVar8 != 0) {
LAB_1801a2804:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808d7ffc == 0x7fffffff) {
        DAT_1808d7ffc = 0x7ffffffe;
LAB_1801a27f9:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bb83d8 == 0) && (DAT_180bb83d0 <= UVar10)) {
        DAT_180bb83d8 = FUN_1804174b0("C_EconItemView",0x34b55816);
        if (DAT_180bb83d8 == 0) {
          uVar20 = UVar10 + 1000;
        }
        DAT_180bb83d0 = uVar20;
      }
      iVar8 = DAT_180bb83d8;
      FUN_1805f68fc(&DAT_1808d7fb0);
    }
  }
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (param_2 + iVar8 == (undefined *)0x0) {
    bVar5 = false;
    puVar19 = local_760;
  }
  else {
    local_778 = (undefined *)0x0;
    cVar7 = FUN_1804514f0(&local_778,param_2 + iVar8,8);
    if (cVar7 == '\0') {
      bVar5 = false;
      puVar19 = local_760;
    }
    else {
      bVar5 = true;
      puVar19 = local_778;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  puVar11 = (undefined *)0x0;
  if (bVar5) {
    puVar11 = puVar19;
  }
  if (puVar11 != *(undefined **)(lVar17 + 0x30)) {
  }
  if ((*(char *)(local_750 + 0x38) == '\0') && (*(int *)(local_750 + 0x40) < 0)) {
  }
  local_748 = local_760;
  iStack_740 = local_770;
  uStack_73c = (undefined4)*(undefined8 *)(local_750 + 0x38);
  uStack_738 = (undefined4)((ulonglong)*(undefined8 *)(local_750 + 0x38) >> 0x20);
  uStack_734 = (undefined4)*(undefined8 *)(local_750 + 0x40);
  uStack_730 = (undefined4)((ulonglong)*(undefined8 *)(local_750 + 0x40) >> 0x20);
  plVar14 = (longlong *)FUN_1801afc80(*(undefined8 *)local_758[2],local_728,&local_76c);
  lVar13 = *plVar14;
  *(undefined **)(lVar13 + 0x18) = local_748;
  *(ulonglong *)(lVar13 + 0x20) = CONCAT44(uStack_73c,iStack_740);
  *(ulonglong *)(lVar13 + 0x28) = CONCAT44(uStack_734,uStack_738);
  *(ulonglong *)(lVar13 + 0x30) = CONCAT44(uStack_72c,uStack_730);
}



