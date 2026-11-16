// FUN_180378420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180378420 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180378420(char *param_1,char param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  undefined8 **ppuVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  ulonglong *puVar16;
  undefined **ppuVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_728 [32];
  undefined **local_708;
  ulonglong *local_700;
  longlong local_6f8;
  undefined4 local_6f0;
  undefined1 local_6e8 [16];
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  char local_6c8 [128];
  ulonglong local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  uint local_628;
  undefined4 uStack_624;
  undefined1 uStack_620;
  undefined7 uStack_61f;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 local_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined7 uStack_5ff;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [16];
  uint5 uStack_5d8;
  undefined3 uStack_5d3;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined8 local_5c0;
  uint5 local_5b8;
  undefined3 uStack_5b3;
  undefined1 local_5b0 [16];
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_570;
  undefined2 local_568;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_728;
  FUN_1802fb6e0();
  DAT_180bbf100 = 0;
  DAT_180bbf109 = 0;
  DAT_180bbf110 = 0;
  FUN_180285200();
  DAT_180b8f9e8 = 0;
  LOCK();
  DAT_180bbec8b = 0;
  UNLOCK();
  DAT_180c62780 = 0;
  local_648 = 0;
  uStack_640 = 0;
  uStack_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_624 = 0xffffffff;
  uStack_61f = 0;
  uStack_618 = 0;
  uStack_610 = 0;
  local_608 = 0xf;
  uStack_607 = 0;
  uStack_620 = 0;
  uStack_5ff = 0;
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8._0_8_ = 0xf;
  uStack_600 = 0;
  uStack_5d8 = (uint5)(uint)uStack_5d8;
  local_5c4 = 0;
  local_5b8 = (uint5)(uint)local_5b8;
  local_5a0 = 0;
  local_598 = 0xf;
  local_5b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_5b0._1_15_;
  local_5b0 = auVar3 << 8;
  local_590 = 0;
  local_588 = 0;
  local_580 = 0xffffffffffffffff;
  local_578 = 0xffffffff;
  local_570 = 0;
  local_568 = 1;
  FUN_1801fa180(&DAT_1808daef0,&local_648);
  FUN_18015c010(local_5b0);
  FUN_18015c010(&uStack_600);
  FUN_18015c010(&uStack_620);
  _DAT_180bbebe0 = 0;
  uRam0000000180bbebe8 = 0;
  uRam0000000180bbebf0 = 0;
  uRam0000000180bbebf8 = 0;
  _DAT_180bbec00 = 0;
  uRam0000000180bbec08 = 0;
  uRam0000000180bbec10 = 0;
  uRam0000000180bbec18 = 0;
  DAT_180bbeb00 = 0;
  iVar7 = FUN_1805f68d0(&DAT_1808daea0);
  if (iVar7 != 0) {
LAB_1803790aa:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808daeec == 0x7fffffff) {
    DAT_1808daeec = 0x7ffffffe;
LAB_18037909f:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1801f3220(&DAT_180bbeac0);
  FUN_1801f3150(&DAT_180bbeb60);
  FUN_1801bc7b0(&DAT_180bbeb20);
  lVar13 = DAT_180bbeb10;
  DAT_180bbeb08 = 0;
  DAT_180bbeb10 = 0;
  if (lVar13 != 0) {
    LOCK();
    piVar1 = (int *)(lVar13 + 8);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)lVar13)(lVar13);
      LOCK();
      piVar1 = (int *)(lVar13 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*(longlong *)lVar13 + 8))(lVar13);
      }
    }
  }
  DAT_180bbeb18 = 0;
  FUN_18063ab10(&local_648,0,0x600);
  FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                "mounts=invalidated resources=invalidated selection=preserved");
  ppuVar17 = &PTR_180700558;
  local_708 = &PTR_180700558;
  if ((char)local_648 != '\0') {
    local_708 = (undefined **)&DAT_1806bcfc0;
  }
  local_700 = &local_648;
  FUN_1800f6900(0,local_700,"SkinChanger","CUSTOM_AGENT_CONTENT_RESET");
  FUN_1805f68fc(&DAT_1808daea0);
  FUN_18063ab10(&local_648,0,0xc0);
  uStack_630 = 0xf;
  local_648 = local_648 & 0xffffffffffffff00;
  uStack_624 = 0;
  uStack_620 = 0;
  uStack_61f = 0;
  uVar19 = 0;
  uVar20 = 0xf;
  uStack_618 = 0;
  uStack_610 = 0xf;
  local_628 = 0;
  uStack_607 = 0;
  uStack_600 = 0;
  uStack_5ff = 0;
  uStack_5f8 = 0;
  uStack_5f0 = 0xf;
  local_608 = 0;
  _uStack_5d8 = 0;
  uStack_5d0 = 0xf;
  local_5e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_5e8._1_15_;
  local_5e8 = auVar4 << 8;
  local_5c8 = 0;
  local_5c0 = 0;
  _local_5b8 = 0;
  local_5b0._0_12_ = ZEXT412(0xffffffff) << 0x40;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  FUN_18015c010(&DAT_180b90250);
  DAT_180b90250 = local_648;
  uRam0000000180b90258 = uStack_640;
  DAT_180b90260 = uStack_638;
  DAT_180b90268 = uStack_630;
  local_648 = local_648 & 0xffffffffffffff00;
  uStack_638 = uVar19;
  uStack_630 = uVar20;
  FUN_18015c010(&DAT_180b90270);
  DAT_180b90270 = CONCAT44(uStack_624,local_628);
  uRam0000000180b90278 = CONCAT71(uStack_61f,uStack_620);
  DAT_180b90280 = uStack_618;
  DAT_180b90288 = uStack_610;
  local_628 = local_628 & 0xffffff00;
  uStack_618 = uVar19;
  uStack_610 = uVar20;
  FUN_18015c010(&DAT_180b90290);
  DAT_180b90290 = CONCAT71(uStack_607,local_608);
  uRam0000000180b90298 = CONCAT71(uStack_5ff,uStack_600);
  DAT_180b902a0 = uStack_5f8;
  DAT_180b902a8 = uStack_5f0;
  local_608 = 0;
  uStack_5f8 = uVar19;
  uStack_5f0 = uVar20;
  FUN_18015c010(&DAT_180b902b0);
  DAT_180b902b0 = local_5e8._0_8_;
  uRam0000000180b902b8 = local_5e8._8_8_;
  DAT_180b902c0 = _uStack_5d8;
  DAT_180b902c8 = uStack_5d0;
  DAT_180b902d0 = 0;
  DAT_180b902d8 = 0;
  DAT_180b902e0 = 0;
  DAT_180b902e8 = 0;
  DAT_180b902f0 = 0xffffffff;
  DAT_180b902f8 = 0;
  DAT_180b90300 = 0;
  _DAT_180b90308 = 0;
  FUN_18015c010(local_5e8);
  FUN_18015c010(&local_608);
  FUN_18015c010(&local_628);
  FUN_18015c010(&local_648);
  DAT_180c70e22 = 1;
  if (((param_2 != '\0') || (DAT_180c63119 != '\0')) &&
     (FUN_1803f25d0(&DAT_180cce340), param_2 != '\0')) {
    puVar15 = &DAT_180cce780;
    do {
      FUN_1803f25d0(puVar15);
      puVar15 = puVar15 + 0x440;
    } while (puVar15 != &DAT_180ccf000);
    LOCK();
    DAT_180cd17b8 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180cd0770);
    FUN_1803f25d0(&DAT_180cd10f0);
    local_6e8 = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd1790,local_6e8);
    DAT_180cd1844 = 0;
    _DAT_180cd1838 = 0;
    LOCK();
    DAT_180cd2898 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180cd1850);
    FUN_1803f25d0(&DAT_180cd21d0);
    local_6e8 = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd2870,local_6e8);
    DAT_180cd2924 = 0;
    _DAT_180cd2918 = 0;
    LOCK();
    DAT_180cd3978 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180cd2930);
    FUN_1803f25d0(&DAT_180cd32b0);
    local_6e8 = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd3950,local_6e8);
    DAT_180cd3a04 = 0;
    _DAT_180cd39f8 = 0;
  }
  LOCK();
  DAT_180ccf440 = 1;
  UNLOCK();
  FUN_1803f25d0(&DAT_180ccf000);
  uVar6 = DAT_1808d9bdc;
  DAT_180c70e18 = 0;
  DAT_180c70e10 = 0;
  LOCK();
  UNLOCK();
  iVar7 = DAT_180c70df8 + 1;
  DAT_180c70df8 = DAT_180c70df8 + 1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  lVar13 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  FUN_18063ab10(&local_648,0,0x600);
  pcVar18 = "unknown";
  if (param_1 != (char *)0x0) {
    pcVar18 = param_1;
  }
  local_6f0 = uVar6;
  local_700 = (ulonglong *)CONCAT44(local_700._4_4_,iVar7);
  local_708 = (undefined **)pcVar18;
  local_6f8 = (lVar13 >> 2) - (lVar13 >> 0x3f);
  FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                "reason=%s cleanup_count=%u entities=%zu active_readers=%u");
  local_708 = &PTR_180700558;
  if ((char)local_648 != '\0') {
    local_708 = (undefined **)&DAT_1806bcfc0;
  }
  local_700 = &local_648;
  FUN_1800f6900(0);
  FUN_1802b8de0();
  FUN_180290660(&DAT_180cc9690);
  FUN_1802946a0(&DAT_180cc96d0);
  FUN_180376cc0();
  DAT_180902cd0 = 0;
  DAT_180902cd8 = 0xffffffff;
  pauVar9 = (undefined1 (*) [16])FUN_1803717a0(local_6c8);
  local_6e8 = *pauVar9;
  uStack_6d8 = *(undefined8 *)pauVar9[1];
  uStack_6d0 = *(undefined8 *)(pauVar9[1] + 8);
  local_6f8 = CONCAT71(local_6f8._1_7_,1);
  local_700 = (ulonglong *)((ulonglong)local_700 & 0xffffffff00000000);
  local_708 = (undefined **)((ulonglong)local_708 & 0xffffffff00000000);
  FUN_180372440();
  LOCK();
  DAT_180b90200 = 0;
  UNLOCK();
  DAT_180b90230 = 0;
  ppuVar10 = &DAT_180b90220;
  if (0xf < DAT_180b90238) {
    ppuVar10 = (undefined8 **)DAT_180b90220;
  }
  *(undefined1 *)ppuVar10 = 0;
  DAT_180b90240 = 0;
  FUN_1802cdcb0();
  DAT_180b8fb30 = 0;
  FUN_1802c1400(&DAT_180b8fb38);
  DAT_180b8fb31 = 0;
  _DAT_180b8fb78 = 0;
  _DAT_180b8fb80 = (undefined1  [16])0x0;
  local_6c8[0x40] = -0x7b;
  local_6c8[0x41] = -0x3f;
  local_6c8[0x42] = -0x1f;
  local_6c8[0x43] = '\'';
  local_6c8[0x44] = -0x65;
  local_6c8[0x45] = -0x1d;
  local_6c8[0x46] = '5';
  local_6c8[0x47] = -0x25;
  local_6c8[0x48] = '\x06';
  local_6c8[0x49] = 'z';
  local_6c8[0x4a] = -0x2b;
  local_6c8[0x4b] = 'w';
  local_6c8[0x4c] = -0x12;
  local_6c8[0x4d] = -0x7f;
  local_6c8[0x4e] = 'Q';
  local_6c8[0x4f] = -0x60;
  local_6c8[0x50] = 'w';
  local_6c8[0x51] = 's';
  local_6c8[0x52] = '\x1b';
  local_6c8[0x53] = 'F';
  local_6c8[0x54] = -0x4f;
  local_6c8[0x55] = 'T';
  local_6c8[0x56] = -0x6a;
  local_6c8[0x57] = -0x6e;
  local_6c8[0x58] = '\x10';
  local_6c8[0x59] = 'q';
  local_6c8[0x5a] = -0x11;
  local_6c8[0x5b] = -0x41;
  local_6c8[0x5c] = 'T';
  local_6c8[0x5d] = -0x16;
  local_6c8[0x5e] = '\\';
  local_6c8[0x5f] = '\n';
  local_6c8[0x60] = '\x19';
  local_6c8[0x61] = '~';
  local_6c8[0x62] = 'k';
  local_6c8[99] = -0x6f;
  local_6c8[100] = '\x7f';
  local_6c8[0x65] = -0x61;
  local_6c8[0x66] = '\f';
  local_6c8[0x67] = -0x59;
  local_6c8[0x68] = '\n';
  local_6c8[0x69] = ',';
  local_6c8[0x6a] = '@';
  local_6c8[0x6b] = -0x56;
  local_6c8[0x6c] = -0x7e;
  local_6c8[0x6d] = 'm';
  local_6c8[0x6e] = '-';
  local_6c8[0x6f] = '+';
  local_6c8[0x70] = '\v';
  local_6c8[0x71] = '\x01';
  local_6c8[0x72] = -0x44;
  local_6c8[0x73] = '\x10';
  local_6c8[0x74] = -0x6b;
  local_6c8[0x75] = -0x13;
  local_6c8[0x76] = 'd';
  local_6c8[0x77] = -0x40;
  local_6c8[0x78] = -0x3c;
  local_6c8[0x79] = '&';
  local_6c8[0x7a] = '_';
  local_6c8[0x7b] = '9';
  local_6c8[0x7c] = '\x18';
  local_6c8[0x7d] = -0x67;
  local_6c8[0x7e] = -0x40;
  local_6c8[0x7f] = -2;
  builtin_strncpy(local_6c8,"[scoreboard_weapons] level change — state reset\n",0x33);
  local_6c8[0x33] = '\0';
  local_6c8[0x34] = '\0';
  local_6c8[0x35] = '\0';
  local_6c8[0x36] = '\0';
  local_6c8[0x37] = '\0';
  local_6c8[0x38] = '\0';
  local_6c8[0x39] = '\0';
  local_6c8[0x3a] = '\0';
  local_6c8[0x3b] = '\0';
  local_6c8[0x3c] = '\0';
  local_6c8[0x3d] = '\0';
  local_6c8[0x3e] = '\0';
  local_6c8[0x3f] = '\0';
  lVar13 = -1;
  do {
    local_6e8._8_8_ = lVar13 + 1;
    lVar5 = lVar13 + 1;
    lVar13 = local_6e8._8_8_;
  } while (local_6c8[lVar5] != '\0');
  local_6e8._0_8_ = local_6c8;
  uVar19 = FUN_18020e620(local_6e8);
  FUN_1802f7d90(uVar19,param_1);
  FUN_1803773d0();
  puVar16 = &DAT_180b0e108;
  do {
    uVar14 = *puVar16;
    while ((uVar14 & 1) == 0) {
      LOCK();
      uVar2 = *puVar16;
      if (uVar14 == uVar2) {
        *puVar16 = uVar14 + 1;
        uVar11 = uVar14;
      }
      else {
        uVar11 = uVar2;
      }
      UNLOCK();
      if (uVar14 == uVar2) {
        *(undefined4 *)(puVar16 + 1) = 0;
        puVar16[2] = 0;
        *(undefined4 *)(puVar16 + 3) = 0;
        *puVar16 = uVar14 + 2;
        puVar16 = puVar16 + 4;
        if (puVar16 == (ulonglong *)&DAT_180b8e108) {
          local_6e8 = ZEXT816(0x180b0e0f8);
          AcquireSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
          local_6e8[8] = 1;
          if (DAT_180b0e0e0 != DAT_180b0e0e8) {
            DAT_180b0e0e8 = DAT_180b0e0e0;
          }
          plVar12 = &DAT_180b0e068;
          do {
            if (*plVar12 != plVar12[1]) {
              plVar12[1] = *plVar12;
            }
            plVar12 = plVar12 + 3;
          } while (plVar12 != &DAT_180b0e0e0);
          FUN_1803d4860();
          DAT_180b0e100 = 0;
          ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
          FUN_1803e2410();
          FUN_1803d9340();
          iVar8 = FUN_1805f68d0(&DAT_180b8e260);
          if (iVar8 != 0) goto LAB_1803790aa;
          if (DAT_180b8e2ac != 0x7fffffff) {
            _DAT_180b8e220 = 0;
            uRam0000000180b8e228 = 0;
            uRam0000000180b8e230 = 0;
            uRam0000000180b8e238 = 0;
            _DAT_180b8e240 = 0;
            uRam0000000180b8e248 = 0;
            uRam0000000180b8e250 = 0;
            uRam0000000180b8e258 = 0;
            FUN_1805f68fc(&DAT_180b8e260);
            DAT_180b8e2b4 = 0x475ead00;
            DAT_180b8e2b8 = 0x475ead00;
            DAT_180b8e2bc = 0x475ead00;
            _DAT_180b8e2c0 = 0x475ead00475ead00;
            _DAT_180b8e2c8 = 0x475ead00475ead00;
            DAT_180b8e2b0 = 0;
            AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
            lVar13 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
            ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
            FUN_18063ab10(&local_648,0,0x600);
            local_700 = (ulonglong *)CONCAT44(local_700._4_4_,iVar7);
            local_708 = (undefined **)pcVar18;
            local_6f8 = (lVar13 >> 2) - (lVar13 >> 0x3f);
            FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                          "reason=%s cleanup_count=%u entities=%zu local_valid=false camera_valid=false"
                         );
            if ((char)local_648 != '\0') {
              ppuVar17 = (undefined **)&DAT_1806bcfc0;
            }
            local_700 = &local_648;
            local_708 = ppuVar17;
            FUN_1800f6900(1);
          }
          DAT_180b8e2ac = 0x7ffffffe;
          goto LAB_18037909f;
        }
        break;
      }
      uVar14 = uVar11;
    }
  } while( true );
}



