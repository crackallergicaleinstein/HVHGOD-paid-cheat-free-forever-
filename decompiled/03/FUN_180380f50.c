// FUN_180380f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180380f50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180380f50(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  ULONGLONG UVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined **ppuVar15;
  bool bVar16;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  undefined8 *local_6d0;
  uint local_6c8;
  undefined4 local_6c0;
  uint local_6b8;
  longlong local_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  PSRWLOCK pRStack_690;
  undefined8 local_688;
  undefined *local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 local_658 [32];
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined4 local_614;
  undefined1 local_610 [16];
  undefined8 local_600;
  undefined8 local_5f8;
  undefined1 local_5f0 [16];
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined1 local_5c4;
  undefined1 local_5b4;
  undefined1 local_5a4;
  undefined1 local_5a0 [16];
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined8 local_560;
  undefined2 local_558;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  DAT_180c70b40 = 0;
  DAT_180c70e20 = 0;
  DAT_180c70e21 = 0;
  FUN_1800abea0();
  FUN_1800e1d10();
  DAT_180b8f9e8 = 0;
  local_680 = &DAT_180b8f998;
  iVar8 = FUN_1805f68d0(&DAT_180b8f998);
  if (iVar8 != 0) {
LAB_180381653:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8f9e4 == 0x7fffffff) {
    DAT_180b8f9e4 = 0x7ffffffe;
    goto LAB_180381668;
  }
  ppuVar15 = &PTR_180700558;
  if (DAT_180b8f9f0 != 0) {
    if ((DAT_180b8f9ec != '\0') &&
       (((DAT_180b8f9e9 != '\0' || (DAT_180b8f9eb != '\0')) || (DAT_180b0b448 != '\0')))) {
      puVar12 = &DAT_180b8fa00;
      if (0xf < DAT_180b8fa18) {
        puVar12 = _DAT_180b8fa00;
      }
      FUN_180113930(&DAT_180b8fa88,puVar12,DAT_180b8fa10);
    }
    DAT_180b8f9e9 = '\0';
    DAT_180b8f9f0 = 0;
    FUN_18063ab10(&local_638,0,0x600);
    local_6d8 = (undefined **)0x1806ff008;
    if (DAT_180b8fa98 == 0) {
      local_6d8 = (undefined **)0x1806ff000;
    }
    FUN_18015ad60(&local_638,0x600,0xffffffffffffffff,"name_queued=%s");
    ppuVar9 = &PTR_180700558;
    if ((char)local_638 != '\0') {
      ppuVar9 = (undefined **)&DAT_1806bcfc0;
    }
    local_6d0 = &local_638;
    local_6d8 = ppuVar9;
    FUN_1800f6900(0,local_6d0,"ProfileChanger","PROFILE_SHUTDOWN_RESTORE");
  }
  FUN_1805f68fc(&DAT_180b8f998);
  FUN_1802f9360();
  FUN_180227ab0();
  FUN_180229610();
  DAT_180c64054 = 0;
  uVar14 = 1;
  LOCK();
  DAT_180cca116 = 1;
  UNLOCK();
  iVar8 = FUN_1805f68d0(&DAT_180cc9e50);
  lVar4 = DAT_180cc9ea8;
  if (iVar8 != 0) goto LAB_180381653;
  if (DAT_180cc9e9c == 0x7fffffff) {
LAB_18038165e:
    DAT_180cc9e9c = 0x7ffffffe;
LAB_180381668:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  lVar13 = DAT_180cc9ea0;
  if (DAT_180cc9ea0 != DAT_180cc9ea8) {
    do {
      FUN_18015c010(lVar13 + 0x20);
      lVar13 = lVar13 + 0x110;
    } while (lVar13 != lVar4);
    DAT_180cc9ea8 = DAT_180cc9ea0;
  }
  DAT_180cc9fd0 = 0;
  FUN_1805f68fc(&DAT_180cc9e50);
  cVar5 = FUN_180223720();
  if (cVar5 == '\0') {
    bVar6 = 0;
  }
  else {
    FUN_18021e670(&DAT_180cc9e50,1);
    iVar8 = FUN_1805f68d0(&DAT_180cc9e50);
    if (iVar8 != 0) goto LAB_180381653;
    lVar4 = DAT_180cca000;
    if (DAT_180cc9e9c == 0x7fffffff) goto LAB_18038165e;
    for (; lVar4 != DAT_180cca008; lVar4 = lVar4 + 0x128) {
      if (*(char *)(lVar4 + 0x110) != '\0') {
        bVar6 = 0;
        goto LAB_1803811e8;
      }
    }
    bVar6 = 1;
LAB_1803811e8:
    LOCK();
    UNLOCK();
    DAT_180cca117 = bVar6;
    FUN_1805f68fc(&DAT_180cc9e50);
  }
  FUN_1801e7150(&DAT_180b90250);
  DAT_1808dafc8 = 0;
  if ((DAT_1808daef0 == 0) || (iVar8 = FUN_1801f8210(), iVar8 != DAT_1808daf14)) {
    local_638 = 0;
    local_630 = 0;
    local_628 = 0;
    local_620 = 0;
    local_618 = 0;
    local_614 = 0xffffffff;
    local_600 = 0;
    local_5f8 = 0xf;
    local_610._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_610._1_15_;
    local_610 = auVar1 << 8;
    local_5e0 = 0;
    local_5d8 = 0xf;
    local_5f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_5f0._1_15_;
    local_5f0 = auVar2 << 8;
    local_5c4 = 0;
    local_5b4 = 0;
    local_5a4 = 0;
    local_590 = 0;
    local_588 = 0xf;
    local_5a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_5a0._1_15_;
    local_5a0 = auVar3 << 8;
    local_580 = 0;
    local_578 = 0;
    local_570 = 0xffffffffffffffff;
    local_568 = 0xffffffff;
    local_560 = 0;
    local_558 = 1;
    FUN_1801fa180(&DAT_1808daef0,&local_638);
    FUN_18015c010(local_5a0);
    FUN_18015c010(local_5f0);
    FUN_18015c010(local_610);
    bVar16 = true;
  }
  else {
    FUN_1801f92b0(DAT_1808daef0,0);
    bVar16 = DAT_1808daf48 == 0;
  }
  cVar5 = DAT_180b9030a;
  FUN_1801a4bb0();
  bVar7 = FUN_1803ed240(1);
  if (((bVar6 == 0) || (bVar16 == false)) ||
     ((cVar5 != '\0' ||
      ((((bVar7 == 0 || (DAT_1808da688 == '\0')) || (DAT_180bbe960 != 0)) || (DAT_180bbe9a0 != 0))))
     )) {
    UVar11 = GetTickCount64();
    if (DAT_180c6fd10 <= UVar11) {
      DAT_180c6fd10 = UVar11 + 1000;
      if (((DAT_1808da688 == '\0') || (DAT_180bbe960 != 0)) || (DAT_180bbe9a0 != 0)) {
        uVar14 = 0;
      }
      FUN_18063ab10(&local_638,0,0x600);
      local_6b8 = (uint)bVar7;
      local_6c8 = (uint)(cVar5 == '\0');
      local_6d0 = (undefined8 *)CONCAT44(local_6d0._4_4_,(uint)bVar16);
      local_6d8 = (undefined **)CONCAT44(local_6d8._4_4_,(uint)bVar6);
      local_6c0 = uVar14;
      FUN_18015ad60(&local_638,0x600,0xffffffffffffffff,
                    "inventory=%d hands=%d agent=%d sync=%d lobby=%d");
      if ((char)local_638 != '\0') {
        ppuVar15 = (undefined **)&DAT_1806bcfc0;
      }
      local_6d0 = &local_638;
      local_6d8 = ppuVar15;
      FUN_1800f6900(2);
    }
  }
  else {
    local_6a8 = 0;
    uStack_6a0 = 0;
    uStack_698 = 0;
    pRStack_690 = (PSRWLOCK)0x0;
    local_688 = 0;
    FUN_180377300(DAT_1808da688,&local_6a8,5);
    FUN_1802b8de0();
    FUN_180376cc0();
    DAT_180902cd0 = 0;
    DAT_180902cd8 = 0xffffffff;
    puVar10 = (undefined8 *)FUN_1803717a0(local_658);
    local_678 = *puVar10;
    uStack_670 = puVar10[1];
    uStack_668 = puVar10[2];
    uStack_660 = puVar10[3];
    local_6c8 = CONCAT31(local_6c8._1_3_,1);
    local_6d0 = (undefined8 *)((ulonglong)local_6d0 & 0xffffffff00000000);
    local_6d8 = (undefined **)((ulonglong)local_6d8 & 0xffffffff00000000);
    FUN_180372440();
    LOCK();
    DAT_180b90200 = 0;
    UNLOCK();
    DAT_180b90230 = 0;
    puVar10 = &DAT_180b90220;
    if (0xf < DAT_180b90238) {
      puVar10 = DAT_180b90220;
    }
    *(undefined1 *)puVar10 = 0;
    DAT_180b90240 = 0;
    FUN_1802cdcb0();
    FUN_1802fb6e0();
    if ((DAT_180bbf109 == '\0') && (DAT_180902c30 == -1)) {
      iVar8 = FUN_1805f68d0(&DAT_1808e4860);
      if (iVar8 != 0) {
LAB_180381648:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e48ac == 0x7fffffff) {
        DAT_1808e48ac = 0x7ffffffe;
LAB_18038167d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      bVar16 = DAT_1808e48e0 == 0;
      FUN_1805f68fc(&DAT_1808e4860);
      if ((bVar16) && (DAT_180902d88 == 0)) {
        iVar8 = FUN_1805f68d0(&DAT_180cc9b08);
        lVar13 = DAT_180cc9af8;
        lVar4 = DAT_180cc9af0;
        if (iVar8 != 0) goto LAB_180381648;
        if (DAT_180cc9b54 == 0x7fffffff) {
          DAT_180cc9b54 = 0x7ffffffe;
          goto LAB_18038167d;
        }
        FUN_1805f68fc(&DAT_180cc9b08);
        if (lVar4 == lVar13) {
          FUN_1803d5e60();
          FUN_180378420("runtime_shutdown",1);
          if ((DAT_180902d88 == 0) && (DAT_180c64058 != 0)) {
            FUN_18044cfa0();
          }
        }
      }
    }
    if (local_6a8 != 0) {
      *(undefined1 *)(local_6a8 + 0x59) = 0;
    }
    if ((char)local_688 != '\0') {
      ReleaseSRWLockExclusive(pRStack_690);
    }
    if ((char)uStack_698 != '\0') {
      FUN_1805f68fc(uStack_6a0);
    }
  }
}



