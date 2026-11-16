// FUN_180544310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180544310 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180544310(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined1 auVar12 [64];
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined4 local_a0;
  code *local_98;
  ulonglong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  lVar9 = -1;
  if (iVar1 == 4) {
    DAT_180c62ec0 = '\0';
LAB_180544362:
    LOCK();
    DAT_180cd2898 = 0;
    UNLOCK();
    _DAT_180cd2918 = 0;
    FUN_180509360(&DAT_180cd21d0);
    LOCK();
    DAT_180cd3978 = 0;
    UNLOCK();
    _DAT_180cd39f8 = 0;
    FUN_180509360(&DAT_180cd32b0);
LAB_18054439c:
    if (DAT_180c62ec0 != '\0') {
      if ((DAT_1808e6670 != '\0') && (DAT_180c63119 != '\0')) {
        FUN_1801d80f0();
      }
      FUN_180533dd0(param_1,param_2);
      goto LAB_180544990;
    }
    if (iVar1 != 6) goto LAB_1805443f0;
LAB_180544442:
    if ((DAT_1808e6670 != '\0') && (DAT_180c63119 != '\0')) {
      FUN_1801d80f0();
    }
    if (iVar1 == 2) {
      if (DAT_180bbe7ec != '\0') {
        FUN_18063aed0(*(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8) + 0x2ec,&DAT_180bbb2e8
                      ,0x3504);
        DAT_180bbe7ec = '\0';
      }
      FUN_180520a30(1);
      iVar1 = *(int *)(*(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8) + 0x2e8);
      FUN_18049b060(param_1,param_2);
      if (iVar1 == *(int *)(*(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8) + 0x2e8)) {
        FUN_180520a30(0);
      }
      goto LAB_180544990;
    }
    if (iVar1 == 4) goto LAB_1805444e7;
    if (iVar1 == 6) {
LAB_1805448a0:
      FUN_18052feb0(param_2);
      goto LAB_180544990;
    }
    if (iVar1 == 0xb) {
      local_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_a0 = 4;
      local_a8 = "Overlays";
      local_b0 = 0x425c0000;
      local_b8 = 0x436e0000;
      FUN_180485630(&local_70,param_2,0);
      cVar3 = DAT_180b0d5f0;
      local_98 = FUN_180537d70;
      auVar12 = ZEXT464(0x43af0000);
      local_b0 = 0x43af0000;
      FUN_180559330(&local_70,"Active Keybinds",&DAT_180b0d5f0,&local_98);
      cVar4 = DAT_180cc7fe0;
      if (cVar3 != DAT_180b0d5f0) {
        DAT_180b0d600 = DAT_180b0d5f0;
      }
      local_98 = FUN_1805381d0;
      local_b0 = auVar12._0_4_;
      FUN_180559330(&local_70,"Spectators",&DAT_180cc7fe0,&local_98);
      cVar3 = DAT_180cc7f78;
      if (cVar4 != DAT_180cc7fe0) {
        DAT_180cc7ff0 = DAT_180cc7fe0;
      }
      local_98 = FUN_180538680;
      local_b0 = auVar12._0_4_;
      FUN_180559330(&local_70,"Bomb Timer",&DAT_180cc7f78,&local_98);
      if (cVar3 != DAT_180cc7f78) {
        DAT_180cc7f88 = DAT_180cc7f78;
      }
      FUN_18054e820(&local_70,"Velocity",FUN_180538f20,auVar12._0_8_);
      if (DAT_180bbecdb != '\0') {
        if (DAT_180c62d18 != DAT_180c62d20) {
          FUN_18015c010(DAT_180c62d20 + -0x20);
          DAT_180c62d20 = DAT_180c62d20 + -0x20;
        }
        DAT_1808e4e38 = 0xffffffff;
      }
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      goto LAB_180544990;
    }
    if (iVar1 == 10) {
      FUN_18053b680(param_2);
      goto LAB_180544990;
    }
    if (iVar1 == 5) {
      local_90 = &local_70;
      local_70 = DAT_1808e6650;
      uStack_68 = uRam00000001808e6658;
      uStack_60 = DAT_1808e6660;
      uStack_58 = DAT_1808e6668;
      uVar11 = 0;
      uVar13 = 0xf;
      DAT_1808e6660 = 0;
      DAT_1808e6668 = 0xf;
      DAT_1808e6650 = DAT_1808e6650 & 0xffffffffffffff00;
      local_98 = (code *)CONCAT44(local_98._4_4_,2);
      FUN_180113930(&DAT_1808e6650,&DAT_180830bfc,4);
      FUN_18053e7a0(param_2);
    }
    else if ((iVar1 == 3) || (iVar1 == 9)) {
      pcVar8 = "View";
      if (iVar1 == 3) {
        pcVar8 = "World";
      }
      local_90 = &local_70;
      local_70 = DAT_1808e6650;
      uStack_68 = uRam00000001808e6658;
      uStack_60 = DAT_1808e6660;
      uStack_58 = DAT_1808e6668;
      uVar11 = 0;
      uVar13 = 0xf;
      DAT_1808e6660 = 0;
      DAT_1808e6668 = 0xf;
      DAT_1808e6650 = (ulonglong)DAT_1808e6650._1_7_ << 8;
      local_98 = (code *)CONCAT44(local_98._4_4_,4);
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar8[lVar9] != '\0');
      FUN_180113930(&DAT_1808e6650,pcVar8,lVar9);
      if (iVar1 == 3) {
        FUN_1805420e0();
      }
      else {
        FUN_18053fee0(param_2);
      }
    }
    else {
      if (iVar1 != 7) {
        if (iVar1 == 0xc) {
          FUN_18053a600(param_2);
          goto LAB_180544990;
        }
        if (iVar1 == 0xd) {
          FUN_180539e60(param_2);
          goto LAB_180544990;
        }
        if (iVar1 != 8) {
          if (iVar1 == 0) {
            if (DAT_180cad2e0 == 1) {
              FUN_180517d40(param_2);
              goto LAB_180544990;
            }
            if (DAT_180cad2e0 == 0) {
              FUN_180518f60(param_2);
              goto LAB_180544990;
            }
          }
          FUN_18051ae20(param_2,iVar1);
          goto LAB_180544990;
        }
        *(undefined8 *)((longlong)param_1 + 0x24) = 6;
        goto LAB_1805448a0;
      }
      local_90 = &local_70;
      local_70 = DAT_1808e6650;
      uStack_68 = uRam00000001808e6658;
      uStack_60 = DAT_1808e6660;
      uStack_58 = DAT_1808e6668;
      uVar11 = 0;
      uVar13 = 0xf;
      DAT_1808e6660 = 0;
      DAT_1808e6668 = 0xf;
      DAT_1808e6650 = (ulonglong)DAT_1808e6650._1_7_ << 8;
      local_98 = (code *)CONCAT44(local_98._4_4_,8);
      FUN_180113930(&DAT_1808e6650,"Movement",8);
      FUN_180543ac0(param_2);
    }
  }
  else {
    if (iVar1 == 0xd) goto LAB_180544362;
    if ((iVar1 != 2) || (DAT_180c62ec0 != '\0')) {
      FUN_18052ef00(param_2);
      goto LAB_18054439c;
    }
LAB_1805443f0:
    if (-1 < DAT_1808e4fc0) {
      puVar5 = (undefined8 *)FUN_180439710();
      plVar2 = (longlong *)puVar5[1];
      for (plVar7 = (longlong *)*puVar5; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        if (*plVar7 != 0) {
          *(undefined2 *)(*plVar7 + 0x20) = 0x101;
        }
      }
      lVar6 = FUN_180439770();
      *(undefined8 *)(lVar6 + 0x428) = 0;
      DAT_1808e4fc0 = -1;
    }
    if (iVar1 != 4) goto LAB_180544442;
LAB_1805444e7:
    local_90 = &local_70;
    local_70 = DAT_1808e6650;
    uStack_68 = uRam00000001808e6658;
    uStack_60 = DAT_1808e6660;
    uStack_58 = DAT_1808e6668;
    uVar11 = 0;
    uVar13 = 0xf;
    DAT_1808e6660 = 0;
    DAT_1808e6668 = 0xf;
    DAT_1808e6650 = DAT_1808e6650 & 0xffffffffffffff00;
    local_98 = (code *)CONCAT44(local_98._4_4_,1);
    FUN_180113930(&DAT_1808e6650,"Skin changer",0xc);
    FUN_1805286b0();
    FUN_18052eb60();
    if (DAT_180c63090 != DAT_180c63098) {
      FUN_1801d9fe0();
      DAT_180c63098 = DAT_180c63090;
    }
    uVar10 = FUN_180475cc0(param_1,param_2,
                           *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8) + 0x28);
    local_78 = DAT_180c630a0;
    local_80 = DAT_180c63098;
    local_88 = DAT_180c63090;
    DAT_180c630a0 = 0;
    DAT_180c63098 = 0;
    DAT_180c63090 = 0;
    FUN_1803f5380(uVar10,&local_88);
  }
  FUN_18015c010(&DAT_1808e6650);
  DAT_1808e6650 = local_70;
  local_70 = local_70 & 0xffffffffffffff00;
  uRam00000001808e6658 = uStack_68;
  DAT_1808e6660 = uStack_60;
  DAT_1808e6668 = uStack_58;
  uStack_60 = uVar11;
  uStack_58 = uVar13;
  FUN_18015c010(&local_70);
LAB_180544990:
  FUN_180536470();
}



