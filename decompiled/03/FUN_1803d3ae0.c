// FUN_1803d3ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d3ae0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d3ae0(void)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  short *psVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  undefined1 auVar18 [8];
  uint uVar19;
  bool bVar20;
  longlong lVar21;
  longlong extraout_XMM0_Qa;
  longlong extraout_XMM0_Qa_00;
  longlong extraout_XMM0_Qa_01;
  undefined1 auStackY_698 [32];
  undefined1 local_668 [16];
  uint local_658;
  undefined4 uStack_654;
  undefined1 local_650 [8];
  longlong *plStack_648;
  longlong *local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_698;
  local_650 = (undefined1  [8])0x0;
  plStack_648 = (longlong *)0x0;
  local_640 = (longlong *)0x0;
  lVar21 = FUN_1803d4860(local_650);
  uVar13 = 1;
  uVar19 = local_668._0_4_;
  lVar12 = local_668._0_8_;
  do {
    lVar6 = FUN_1803d4150(lVar21,uVar13);
    lVar21 = extraout_XMM0_Qa;
    if (lVar6 != 0) {
      pcVar7 = (char *)FUN_1803d3fa0(extraout_XMM0_Qa,lVar6);
      lVar21 = extraout_XMM0_Qa_00;
      if (pcVar7 != (char *)0x0) {
        cVar4 = *pcVar7;
        lVar21 = extraout_XMM0_Qa_00;
        if (cVar4 != '\0') {
          uVar14 = 0x811c9dc5;
          do {
            pcVar7 = pcVar7 + 1;
            uVar14 = ((int)cVar4 ^ uVar14) * 0x1000193;
            cVar4 = *pcVar7;
          } while (cVar4 != '\0');
          lVar21 = FUN_18017ea70();
          *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + 1;
          bVar20 = false;
          if (lVar6 + 0x10 != 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_668._8_8_;
            local_668 = auVar2 << 0x40;
            cVar4 = FUN_1804514f0(local_668,lVar6 + 0x10,8);
            if (cVar4 == '\0') {
              bVar20 = false;
            }
            else {
              bVar20 = true;
              lVar12 = local_668._0_8_;
            }
          }
          lVar21 = FUN_18017ea70();
          uVar9 = *(uint *)(lVar21 + 4);
          if (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *(uint *)(lVar21 + 4) = uVar9;
          }
          uVar10 = (ulonglong)uVar9;
          if ((!bVar20) || (lVar12 == 0)) {
            uVar9 = 0xffffffff;
          }
          else {
            lVar21 = FUN_18017ea70();
            *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + 1;
            bVar20 = false;
            if (lVar12 + 0x10 != 0) {
              auVar3._12_4_ = 0;
              auVar3._0_12_ = local_668._4_12_;
              local_668 = auVar3 << 0x20;
              cVar4 = FUN_1804514f0(local_668,lVar12 + 0x10,4);
              if (cVar4 == '\0') {
                bVar20 = false;
              }
              else {
                bVar20 = true;
                uVar19 = local_668._0_4_;
              }
            }
            lVar21 = FUN_18017ea70();
            uVar9 = *(uint *)(lVar21 + 4);
            if (uVar9 != 0) {
              uVar9 = uVar9 - 1;
              *(uint *)(lVar21 + 4) = uVar9;
            }
            uVar10 = (ulonglong)uVar9;
            uVar9 = 0xffffffff;
            if (bVar20) {
              uVar9 = uVar19;
            }
            if ((((uVar9 != 0xffffffff) && (uVar5 = uVar9 & 0x7fff, uVar5 == uVar13)) &&
                (uVar9 != 0)) && ((uVar14 != 0 && (uVar5 < 0x4000)))) {
              uVar17 = (ulonglong)uVar5;
              puVar16 = &DAT_180b0e108 + uVar17 * 4;
              do {
                uVar10 = *puVar16;
                while ((uVar10 & 1) == 0) {
                  LOCK();
                  uVar1 = *puVar16;
                  if (uVar10 == uVar1) {
                    *puVar16 = uVar10 + 1;
                    uVar8 = uVar10;
                  }
                  else {
                    uVar8 = uVar1;
                  }
                  UNLOCK();
                  if (uVar10 == uVar1) {
                    (&DAT_180b0e110)[uVar17 * 8] = uVar9;
                    (&DAT_180b0e118)[uVar17 * 4] = lVar6;
                    (&DAT_180b0e120)[uVar17 * 8] = uVar14;
                    uVar10 = uVar10 + 2;
                    *puVar16 = uVar10;
                    goto LAB_1803d3cb7;
                  }
                  uVar10 = uVar8;
                }
              } while( true );
            }
          }
LAB_1803d3cb7:
          cVar4 = FUN_1803d4600(uVar10,uVar14);
          auVar2 = local_668;
          lVar21 = extraout_XMM0_Qa_01;
          if (cVar4 != '\0') {
            local_668._8_4_ = uVar14;
            local_668._0_8_ = lVar6;
            local_668._12_2_ = (short)uVar13;
            local_668[0xf] = auVar2[0xf];
            local_668[0xe] = cVar4;
            local_658 = uVar9;
            if (plStack_648 == local_640) {
              lVar21 = FUN_1802eac60(local_650,plStack_648,local_668);
            }
            else {
              *plStack_648 = lVar6;
              plStack_648[1] = local_668._8_8_;
              plStack_648[2] = CONCAT44(uStack_654,uVar9);
              plStack_648 = plStack_648 + 3;
              lVar21 = lVar6;
            }
          }
        }
      }
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x800);
  local_668 = ZEXT816(0x180b0e0f8);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
  local_668[8] = 1;
  lVar21 = ((longlong)DAT_180b0e0e8 - DAT_180b0e0e0) / 6 +
           ((longlong)DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  lVar12 = ((longlong)plStack_648 - (longlong)local_650) / 6 +
           ((longlong)plStack_648 - (longlong)local_650 >> 0x3f);
  lVar6 = lVar12 >> 2;
  lVar12 = lVar12 >> 0x3f;
  uVar10 = lVar6 - lVar12;
  bVar20 = (lVar21 >> 2) - (lVar21 >> 0x3f) != uVar10;
  if ((!bVar20) && (uVar17 = 0, lVar6 != lVar12)) {
    psVar11 = (short *)(DAT_180b0e0e0 + 0xc);
    lVar12 = (longlong)local_650 - DAT_180b0e0e0;
    do {
      if ((((*(longlong *)(psVar11 + -6) != *(longlong *)(lVar12 + -0xc + (longlong)psVar11)) ||
           (*psVar11 != *(short *)(lVar12 + (longlong)psVar11))) ||
          (*(int *)(psVar11 + -2) != *(int *)(lVar12 + -4 + (longlong)psVar11))) ||
         (*(int *)(psVar11 + 2) != *(int *)(lVar12 + 4 + (longlong)psVar11))) {
        bVar20 = true;
        break;
      }
      uVar17 = uVar17 + 1;
      psVar11 = psVar11 + 0xc;
    } while (uVar17 < uVar10);
  }
  plVar15 = plStack_648;
  auVar18 = local_650;
  if (DAT_180b0e0e0 != 0) {
    lVar12 = DAT_180b0e0e0;
    if ((0xfff < (ulonglong)((((longlong)DAT_180b0e0f0 - DAT_180b0e0e0) / 0x18) * 0x18)) &&
       (lVar12 = *(longlong *)(DAT_180b0e0e0 + -8), 0x1f < (DAT_180b0e0e0 - lVar12) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar12);
    plVar15 = plStack_648;
    auVar18 = local_650;
  }
  DAT_180b0e0f0 = local_640;
  _local_650 = (undefined1  [16])0x0;
  local_640 = (longlong *)0x0;
  DAT_180b0e0e0 = (longlong)auVar18;
  DAT_180b0e0e8 = plVar15;
  if (bVar20) {
    FUN_1803d4410();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
  DAT_180b0e100 = GetTickCount64();
  if (bVar20) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    FUN_18063ab10(local_638,0,0x600);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"old_count=%zu new_count=%zu");
    FUN_1800f6900(0);
  }
  FUN_1801abba0(local_650);
}



