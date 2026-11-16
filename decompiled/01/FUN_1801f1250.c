// FUN_1801f1250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f1250 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f1250(void)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 ****ppppuVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_758 [32];
  undefined8 ****local_738;
  char *local_730;
  undefined8 local_728;
  undefined1 local_718;
  char local_717;
  char local_716;
  char local_714;
  char local_713;
  longlong local_710;
  undefined8 *local_708;
  undefined1 local_700 [8];
  int local_6f8;
  undefined1 local_6f0 [8];
  undefined8 *local_6e8;
  undefined8 local_6e0;
  undefined1 local_6d8 [16];
  longlong local_6c8;
  undefined *local_6c0;
  undefined *local_6b8;
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [16];
  undefined8 ****local_690 [3];
  ulonglong local_678;
  char local_670;
  undefined8 ****local_668 [3];
  ulonglong local_650;
  undefined1 local_648 [16];
  char local_638 [1544];
  ulonglong local_30;
  
  cVar4 = DAT_1808da689;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_758;
  if ((DAT_180bbe88c == '\0') && (DAT_180bb93ae == '\0')) {
    LOCK();
    DAT_1808da689 = '\0';
    UNLOCK();
    if (cVar4 != '\0') {
      local_708 = (undefined8 *)&DAT_1808dae50;
      iVar5 = FUN_1805f68d0(&DAT_1808dae50);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808dae9c == 0x7fffffff) {
        DAT_1808dae9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bbe88c == '\0') && (DAT_180bb93ae == '\0')) {
        FUN_1801d8420(local_690);
        if (local_670 == '\0') {
          LOCK();
          DAT_1808da689 = '\x01';
          UNLOCK();
        }
        else {
          if (DAT_180bb9398 != 0) {
            FUN_18015a3e0(&DAT_180bb9390);
          }
          LOCK();
          DAT_180bb93ae = '\x01';
          UNLOCK();
          FUN_1800f5370(local_668,local_690);
          uVar6 = FUN_1801f2650(local_700,local_668);
          FUN_18017ccc0(&DAT_180bb9390,uVar6);
          FUN_18015a450(local_700);
          FUN_18015a520(local_6f0);
          if (local_6f8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_18060ab3c();
          }
          FUN_18015b930(local_668);
        }
        if (local_670 != '\0') {
          FUN_18015b930(local_690);
        }
      }
      FUN_1805f68fc(&DAT_1808dae50);
    }
  }
  local_648 = (undefined1  [16])0x0;
  plVar7 = (longlong *)FUN_180113860(&DAT_180bb9388);
  lVar22 = DAT_180bb9380;
  local_710 = DAT_180bb9380;
  local_648._8_8_ = plVar7;
  local_648._0_8_ = DAT_180bb9380;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar3 = (byte)DAT_180bb9388;
  DAT_180bb9388 = (longlong)plVar7;
  if ((bVar3 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  if ((((DAT_180c63228 != 0) && (*(longlong *)(lVar22 + 0x38) != *(longlong *)(lVar22 + 0x40))) &&
      (UVar8 = GetTickCount64(), lVar22 != DAT_180bbeb08)) && (DAT_180bbeb18 <= UVar8)) {
    DAT_180bbeb18 = UVar8 + 2000;
    iVar5 = FUN_1805f68d0(&DAT_1808daea0);
    plVar10 = DAT_180bbeac8;
    if (iVar5 != 0) {
LAB_1801f1b78:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808daeec == 0x7fffffff) {
LAB_1801f1ba9:
      DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    plVar17 = (longlong *)*DAT_180bbeac8;
    plVar21 = DAT_180bbeac8;
    if (plVar17 != DAT_180bbeac8) {
      do {
        if ((char)plVar17[6] == '\0') {
          plVar14 = plVar17 + 2;
          if (7 < (ulonglong)plVar17[5]) {
            plVar14 = (longlong *)plVar17[2];
          }
          uVar9 = 0xcbf29ce484222325;
          uVar13 = 0;
          if (plVar17[4] * 2 != 0) {
            do {
              uVar9 = (uVar9 ^ *(byte *)(uVar13 + (longlong)plVar14)) * 0x100000001b3;
              uVar13 = uVar13 + 1;
            } while (uVar13 < (ulonglong)(plVar17[4] * 2));
          }
          plVar14 = (longlong *)(DAT_180bbead8 + (uVar9 & DAT_180bbeaf0) * 0x10);
          if ((longlong *)plVar14[1] == plVar17) {
            if ((longlong *)*plVar14 == plVar17) {
              *plVar14 = (longlong)plVar21;
              plVar14[1] = (longlong)plVar21;
            }
            else {
              plVar14[1] = plVar17[1];
            }
          }
          else if ((longlong *)*plVar14 == plVar17) {
            *plVar14 = *plVar17;
          }
          plVar14 = (longlong *)*plVar17;
          DAT_180bbead0 = DAT_180bbead0 + -1;
          *(longlong **)plVar17[1] = plVar14;
          plVar14[1] = plVar17[1];
          FUN_18015b930(plVar17 + 2);
          FUN_1804547d0(plVar17,0x38);
          plVar21 = DAT_180bbeac8;
        }
        else {
          plVar14 = (longlong *)*plVar17;
        }
        plVar17 = plVar14;
      } while (plVar14 != plVar10);
      lVar22 = local_710;
    }
    FUN_1805f68fc(&DAT_1808daea0);
    plVar10 = (longlong *)FUN_1801edc30(local_6d8);
    lVar12 = *plVar10;
    lVar2 = plVar10[1];
    local_6c8 = plVar10[2];
    if (((lVar12 == 0) || (lVar2 == 0)) || (local_6c8 == 0)) {
      FUN_18063ab10(local_638,0,0x600);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"action=retry validated=0 retry_ms=2000");
      local_738 = (undefined8 ****)&PTR_180700558;
      if (local_638[0] != '\0') {
        local_738 = (undefined8 ****)&DAT_1806bcfc0;
      }
      local_730 = local_638;
      FUN_1800f6900(2);
    }
    else {
      puVar20 = *(undefined8 **)(lVar22 + 0x20);
      local_708 = *(undefined8 **)(lVar22 + 0x28);
      if (puVar20 != local_708) {
        local_6c0 = &DAT_1808daea0;
        do {
          iVar5 = FUN_1805f68d0(&DAT_1808daea0);
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808daeec == 0x7fffffff) {
            DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          puVar15 = puVar20;
          if (7 < (ulonglong)puVar20[3]) {
            puVar15 = (undefined8 *)*puVar20;
          }
          uVar13 = 0xcbf29ce484222325;
          uVar9 = 0;
          if (puVar20[2] * 2 != 0) {
            do {
              uVar13 = (uVar13 ^ *(byte *)(uVar9 + (longlong)puVar15)) * 0x100000001b3;
              uVar9 = uVar9 + 1;
            } while (uVar9 < (ulonglong)(puVar20[2] * 2));
            lVar22 = local_710;
          }
          lVar11 = FUN_1801f3be0(uVar9,local_6b0,puVar20,uVar13);
          if (*(longlong *)(lVar11 + 8) == 0) {
            local_718 = 0;
            FUN_1801f2e20(extraout_XMM0_Qa,local_6a0,puVar20,&local_718);
            FUN_1805f68fc(&DAT_1808daea0);
            lVar11 = *(longlong *)(lVar22 + 0x40);
            for (lVar18 = *(longlong *)(lVar22 + 0x38); lVar18 != lVar11; lVar18 = lVar18 + 0xd8) {
              local_6e8 = puVar20;
              if (7 < (ulonglong)puVar20[3]) {
                local_6e8 = (undefined8 *)*puVar20;
              }
              local_6e0 = puVar20[2];
              iVar5 = FUN_180162c60(lVar18 + 0x80,&local_6e8);
              if ((iVar5 == 0) && (*(char *)(lVar18 + 0xc0) != '\0')) break;
            }
            if (lVar18 != *(longlong *)(lVar22 + 0x40)) {
              if (0x7fffffffffffffffU - *(longlong *)(lVar18 + 0x50) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bb70();
              }
              local_728 = 2;
              local_730 = "_c";
              local_738 = (undefined8 ****)*(longlong *)(lVar18 + 0x50);
              FUN_18015a9c0(local_668);
              FUN_1801ebc40(local_690,puVar20);
              ppppuVar19 = local_668;
              if (0xf < local_650) {
                ppppuVar19 = local_668[0];
              }
              cVar4 = FUN_1804513c0(lVar2,1,2);
              if (cVar4 == '\0') {
                local_716 = '\0';
              }
              else {
                lVar11 = FUN_18017ea70();
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                FUN_1801f3b90(&local_717,lVar2,lVar12,ppppuVar19);
                lVar11 = FUN_18017ea70();
                if (*(int *)(lVar11 + 4) != 0) {
                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                }
              }
              lVar11 = local_6c8;
              cVar4 = local_717;
              if (local_716 == '\0') {
                cVar4 = '\0';
              }
              if (cVar4 == '\0') {
                ppppuVar19 = local_690;
                if (0xf < local_678) {
                  ppppuVar19 = local_690[0];
                }
                cVar4 = FUN_1804513c0(local_6c8,1,2);
                if (cVar4 != '\0') {
                  lVar18 = FUN_18017ea70();
                  *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
                  cVar4 = FUN_1801f3b50(lVar11,lVar12,ppppuVar19);
                  lVar11 = FUN_18017ea70();
                  if (*(int *)(lVar11 + 4) != 0) {
                    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                  }
                  if (cVar4 != '\0') goto LAB_1801f1801;
                }
LAB_1801f186c:
                bVar3 = 0;
              }
              else {
LAB_1801f1801:
                ppppuVar19 = local_668;
                if (0xf < local_650) {
                  ppppuVar19 = local_668[0];
                }
                cVar4 = FUN_1804513c0(lVar2,1,2);
                if (cVar4 == '\0') {
                  local_713 = '\0';
                }
                else {
                  lVar11 = FUN_18017ea70();
                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                  FUN_1801f3b90(&local_714,lVar2,lVar12,ppppuVar19);
                  lVar11 = FUN_18017ea70();
                  if (*(int *)(lVar11 + 4) != 0) {
                    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                  }
                }
                cVar4 = local_714;
                if (local_713 == '\0') {
                  cVar4 = '\0';
                }
                if (cVar4 == '\0') goto LAB_1801f186c;
                bVar3 = 1;
              }
              local_6b8 = &DAT_1808daea0;
              iVar5 = FUN_1805f68d0(&DAT_1808daea0);
              if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808daeec == 0x7fffffff) {
                DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              plVar10 = (longlong *)FUN_1801f4250(extraout_XMM0_Qa_00,local_700,puVar20);
              *(byte *)(*plVar10 + 0x30) = bVar3;
              FUN_1805f68fc(&DAT_1808daea0);
              ppppuVar19 = local_690;
              if (0xf < local_678) {
                ppppuVar19 = local_690[0];
              }
              FUN_18063ab10(local_638,0,0x600);
              local_730 = (char *)CONCAT44(local_730._4_4_,(uint)bVar3);
              local_738 = ppppuVar19;
              FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                            "root=%s accepted=%d precedence=tail gameinfo_modified=0");
              local_738 = (undefined8 ****)&PTR_180700558;
              if (local_638[0] != '\0') {
                local_738 = (undefined8 ****)&DAT_1806bcfc0;
              }
              local_730 = local_638;
              FUN_1800f6900((bVar3 ^ 1) + 1);
              FUN_18015c010(local_690);
              FUN_18015c010(local_668);
            }
          }
          else {
            FUN_1805f68fc(&DAT_1808daea0);
          }
          puVar20 = puVar20 + 4;
        } while (puVar20 != local_708);
      }
      iVar5 = FUN_1805f68d0(&DAT_1808daea0);
      if (iVar5 != 0) goto LAB_1801f1b78;
      if (DAT_1808daeec == 0x7fffffff) goto LAB_1801f1ba9;
      puVar20 = *(undefined8 **)(lVar22 + 0x28);
      for (puVar15 = *(undefined8 **)(lVar22 + 0x20); puVar15 != puVar20; puVar15 = puVar15 + 4) {
        puVar16 = puVar15;
        if (7 < (ulonglong)puVar15[3]) {
          puVar16 = (undefined8 *)*puVar15;
        }
        uVar13 = 0xcbf29ce484222325;
        uVar9 = 0;
        if (puVar15[2] * 2 != 0) {
          do {
            uVar13 = (uVar13 ^ *(byte *)(uVar9 + (longlong)puVar16)) * 0x100000001b3;
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulonglong)(puVar15[2] * 2));
          lVar22 = local_710;
        }
        lVar12 = FUN_1801f3be0(uVar9,local_700,puVar15,uVar13);
        plVar10 = DAT_180bbeac8;
        if (*(longlong **)(lVar12 + 8) != (longlong *)0x0) {
          plVar10 = *(longlong **)(lVar12 + 8);
        }
        plVar17 = (longlong *)DAT_180bbeb10;
        if ((plVar10 == DAT_180bbeac8) || ((char)plVar10[6] == '\0')) goto LAB_1801f1a8a;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar12 = DAT_180bbeb10;
      DAT_180bbeb08 = lVar22;
      plVar17 = plVar7;
      if (DAT_180bbeb10 != 0) {
        LOCK();
        piVar1 = (int *)(DAT_180bbeb10 + 8);
        iVar5 = *piVar1;
        DAT_180bbeb10 = (longlong)plVar7;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar17 = (longlong *)DAT_180bbeb10;
        if (iVar5 == 1) {
          (*(code *)**(undefined8 **)lVar12)(lVar12);
          LOCK();
          piVar1 = (int *)(lVar12 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar17 = (longlong *)DAT_180bbeb10;
          if (iVar5 == 1) {
            (**(code **)(*(longlong *)lVar12 + 8))(lVar12);
            plVar17 = (longlong *)DAT_180bbeb10;
          }
        }
      }
LAB_1801f1a8a:
      DAT_180bbeb10 = (longlong)plVar17;
      FUN_1805f68fc(&DAT_1808daea0);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar22 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
}



