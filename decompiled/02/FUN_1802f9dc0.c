// FUN_1802f9dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f9dc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f9dc0(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auStack_6e8 [32];
  undefined **local_6c8;
  char *local_6c0;
  undefined *local_6b8;
  float local_6b0;
  byte local_6ac;
  undefined1 *local_6a8;
  longlong local_6a0;
  char *local_698;
  longlong lStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  char *local_678;
  longlong lStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  char local_658 [1544];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_6e8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_698 = _DAT_180bb8890;
  lStack_690 = lRam0000000180bb8898;
  uStack_688 = uRam0000000180bb88a0;
  uStack_680 = uRam0000000180bb88a8;
  cVar4 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar10 = lStack_690;
  bVar13 = DAT_180b0d9a0;
  if (lStack_690 == 0) {
  }
  if (cVar4 == '\0') {
  }
  local_6ac = DAT_180b0d9a0;
  auVar17._12_4_ = 0;
  auVar17._0_12_ = ZEXT812(0);
  auVar17 = auVar17 << 0x20;
  iVar7 = DAT_180c6eeb8;
  if (DAT_180c6eeb8 == 0) {
    auVar18 = ZEXT1264(ZEXT812(0)) << 0x20;
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6eec0) {
      iVar7 = 0;
    }
    else {
      local_6b8 = &DAT_1808fe630;
      iVar7 = FUN_1805f68d0(&DAT_1808fe630);
      if (iVar7 != 0) goto LAB_1802fa693;
      if (DAT_1808fe67c == 0x7fffffff) {
        DAT_1808fe67c = 0x7ffffffe;
        goto LAB_1802fa688;
      }
      if ((DAT_180c6eeb8 == 0) && (DAT_180c6eec0 <= UVar8)) {
        DAT_180c6eeb8 = FUN_1804174b0("C_CSPlayerPawnBase",0x8f0ee3c1);
        if (DAT_180c6eeb8 == 0) {
          DAT_180c6eec0 = UVar8 + 1000;
        }
        else {
          DAT_180c6eec0 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c6eeb8;
      FUN_1805f68fc(&DAT_1808fe630);
      auVar17 = auVar18._0_16_;
      if (iVar7 != 0) goto LAB_1802fa05d;
    }
    auVar15 = ZEXT464((uint)DAT_180b8fadc);
  }
  else {
LAB_1802fa05d:
    auVar18 = ZEXT1664(auVar17);
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    uVar11 = 0;
    if (iVar7 + lVar10 != 0) {
      local_6b0 = auVar18._0_4_;
      cVar4 = FUN_1804514f0(&local_6b0,iVar7 + lVar10,4);
      if (cVar4 == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    auVar15 = ZEXT464((uint)local_6b0);
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    auVar17 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
    auVar17 = vblendvps_avx(auVar15._0_16_,ZEXT416((uint)DAT_180b8fadc),auVar17);
    auVar15 = ZEXT1664(auVar17);
  }
  UVar8 = GetTickCount64();
  if ((bVar13 == 0) && (DAT_180b8faf9 == 0)) {
  }
  if ((((bVar13 == DAT_180b8faf8) && (lVar10 == DAT_180b8fae0)) &&
      ((sVar5 = thunk_FUN_180624430(auVar15._0_8_), 0 < sVar5 || (auVar15._0_4_ == DAT_180b8fae8))))
     && (UVar8 < DAT_180b8faf0)) {
  }
  DAT_180b8fae0 = lVar10;
  DAT_180b8faf8 = bVar13;
  sVar5 = thunk_FUN_180624430(auVar15._0_8_);
  if (sVar5 < 1) {
    DAT_180b8fae8 = auVar15._0_4_;
  }
  DAT_180b8faf0 = UVar8 + 0xfa;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fe680;
  lVar10 = DAT_1808da460;
  uVar14 = 1000;
  if (DAT_1808fe680 != DAT_1808da460) {
LAB_1802f9f77:
    UVar8 = GetTickCount64();
    if ((lVar9 != lVar10) || (DAT_180c6eea0 <= UVar8)) {
      local_6b8 = &DAT_1808fe5d0;
      iVar6 = FUN_1805f68d0(&DAT_1808fe5d0);
      if (iVar6 != 0) goto LAB_1802fa693;
      if (DAT_1808fe61c == 0x7fffffff) {
        DAT_1808fe61c = 0x7ffffffe;
        goto LAB_1802fa688;
      }
      if (DAT_1808fe680 == lVar10) {
        if ((DAT_180c6ee98 == 0) && (DAT_180c6eea0 <= UVar8)) goto LAB_1802fa102;
      }
      else {
        DAT_1808fe620 = 1000;
LAB_1802fa102:
        lVar9 = -1;
        do {
          local_6a0 = lVar9 + 1;
          pcVar2 = "lient.dll:488D0D????????>E8????????4885C0488D48E0490F44CC4885C974" + lVar9;
          lVar9 = local_6a0;
        } while (*pcVar2 != '\0');
        local_6a8 = &DAT_180826830;
        local_678 = "patterns::find_hud_element";
        lStack_670 = 0x1a;
        DAT_180c6ee98 = FUN_1800e5d20(&local_678,&local_6a8);
        DAT_1808fe680 = lVar10;
        DAT_180c6eea0 = 0xffffffffffffffff;
        if (DAT_180c6ee98 == 0) {
          DAT_180c6eea0 = DAT_1808fe620 + UVar8;
          if (DAT_1808fe620 < 60000) {
            DAT_1808fe620 = DAT_1808fe620 * 2;
          }
          else {
            DAT_1808fe620 = 60000;
          }
        }
        else {
          DAT_1808fe620 = 1000;
        }
      }
      lVar12 = DAT_180c6ee98;
      FUN_1805f68fc(&DAT_1808fe5d0);
      if (lVar12 != 0) {
        bVar13 = local_6ac;
        goto LAB_1802fa1f8;
      }
    }
    cVar4 = DAT_180c6ee80;
    LOCK();
    DAT_180c6ee80 = '\x01';
    UNLOCK();
    if (cVar4 != '\0') {
      DAT_180c6ee80 = 1;
    }
    FUN_18063ab10(local_658,0,0x600);
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,"action=disabled");
    goto LAB_1802fa63c;
  }
  lVar12 = DAT_180c6ee98;
  if (DAT_180c6ee98 == 0) goto LAB_1802f9f77;
LAB_1802fa1f8:
  local_678 = (char *)0xdb35e39b27e1c185;
  lStack_670 = -0x5fae7e11882a85fa;
  local_668 = 0x929654b1461b7377;
  local_6b8 = (undefined *)0xa5cea54bfef7110;
  uStack_660 = 0xa5cea54bfef7110;
  local_698 = (char *)0x75485f4f47534343;
  lStack_690 = 0x6f4e687461654464;
  uStack_688 = 0x65636974;
  uStack_680 = 0;
  cVar4 = FUN_1804513c0(lVar12,1,2);
  if (cVar4 != '\0') {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_1801ad7c0(&local_6a8,lVar12,&local_698);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (((char)local_6a0 != '\0') && (local_6a8 != (undefined1 *)0x0)) {
      auVar17 = vpcmpeqd_avx(ZEXT116(bVar13),SUB6416(ZEXT464(0),0));
      auVar17 = vblendvps_avx(SUB6416(ZEXT464(0x447a0000),0),SUB6416(ZEXT464(0x3fc00000),0),auVar17)
      ;
      auVar19 = ZEXT1664(auVar17);
      local_6b8 = (undefined *)CONCAT44(local_6b8._4_4_,auVar17._0_4_);
      puVar1 = local_6a8 + 0x58;
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if (puVar1 == (undefined1 *)0x0) {
        bVar3 = false;
      }
      else {
        local_6b0 = auVar18._0_4_;
        cVar4 = FUN_1804514f0(&local_6b0,puVar1,4);
        if (cVar4 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      fVar16 = local_6b0;
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if (!bVar3) {
      }
      if (fVar16 != auVar19._0_4_) {
        cVar4 = FUN_1804513c0(puVar1,4,1);
        if (cVar4 == '\0') {
        }
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        cVar4 = FUN_1801ad800(puVar1,&local_6b8);
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if (cVar4 == '\0') {
        }
      }
      if (bVar13 == 0) {
        DAT_180b8faf9 = bVar13;
      }
      if (iVar7 == 0) {
        DAT_180b8faf9 = bVar13;
      }
      if (DAT_180b8fadc == auVar15._0_4_) {
        DAT_180b8faf9 = bVar13;
      }
      DAT_180b8faf9 = bVar13;
      if ((DAT_180cce330 & 1) == 0) {
        DAT_180cce330 = DAT_180cce330 | 1;
        atexit(FUN_180662340);
      }
      lVar9 = DAT_1808fe628;
      lVar10 = DAT_1808da460;
      if ((DAT_1808fe628 == DAT_1808da460) && (lVar12 = DAT_180c6ee90, DAT_180c6ee90 != 0))
      goto LAB_1802fa59a;
      UVar8 = GetTickCount64();
      if ((lVar9 == lVar10) && (UVar8 < DAT_180c6ee88)) {
        DAT_180b8fadc = (float)auVar15._0_4_;
      }
      local_6b8 = &DAT_1808fe570;
      iVar7 = FUN_1805f68d0(&DAT_1808fe570);
      if (iVar7 != 0) {
LAB_1802fa693:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fe5bc == 0x7fffffff) {
        DAT_1808fe5bc = 0x7ffffffe;
LAB_1802fa688:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808fe628 == lVar10) {
        if ((DAT_180c6ee90 == 0) && (DAT_180c6ee88 <= UVar8)) goto LAB_1802fa506;
      }
      else {
        DAT_1808fe5c0 = 1000;
LAB_1802fa506:
        lVar9 = -1;
        do {
          lStack_670 = lVar9 + 1;
          pcVar2 = "lient.dll:85C07509488D4EE0>E8????????488B5C2440" + lVar9;
          lVar9 = lStack_670;
        } while (*pcVar2 != '\0');
        local_678 = "client.dll:85C07509488D4EE0>E8????????488B5C2440";
        local_698 = "patterns::hud_death_notice_clear";
        lStack_690 = 0x20;
        DAT_180c6ee90 = FUN_1800e5d20(&local_698,&local_678);
        DAT_1808fe628 = lVar10;
        DAT_180c6ee88 = 0xffffffffffffffff;
        if (DAT_180c6ee90 == 0) {
          DAT_180c6ee88 = DAT_1808fe5c0 + UVar8;
          uVar14 = DAT_1808fe5c0 * 2;
          if (59999 < DAT_1808fe5c0) {
            uVar14 = 60000;
          }
        }
        DAT_1808fe5c0 = uVar14;
      }
      lVar12 = DAT_180c6ee90;
      FUN_1805f68fc(&DAT_1808fe570);
      if (lVar12 == 0) {
        DAT_180b8fadc = (float)auVar15._0_4_;
      }
LAB_1802fa59a:
      FUN_1801a5f80(lVar12,local_6a8 + -0x20);
      DAT_180b8fadc = (float)auVar15._0_4_;
    }
  }
  cVar4 = DAT_180c6ee81;
  LOCK();
  DAT_180c6ee81 = '\x01';
  UNLOCK();
  if (cVar4 != '\0') {
    DAT_180c6ee81 = 1;
  }
  FUN_18063ab10(local_658,0,0x600);
  FUN_18015ad60(local_658,0x600,0xffffffffffffffff,"name=CCSGO_HudDeathNotice action=disabled");
LAB_1802fa63c:
  local_6c8 = &PTR_180700558;
  if (local_658[0] != '\0') {
    local_6c8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6c0 = local_658;
  FUN_1800f6900(2);
}



