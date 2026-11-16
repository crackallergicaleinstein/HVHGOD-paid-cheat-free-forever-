// FUN_18041b7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041b7b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041b7b0(char param_1)

{
  short sVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  short *psVar4;
  char cVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  short *psVar9;
  short *psVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 *******pppppppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined8 *******local_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *******local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  bVar12 = false;
  local_178 = 0;
  FUN_18041b730();
  FUN_1800a8ff0(local_50);
  FUN_1800f5370(local_150,local_50);
  cVar5 = FUN_180165ac0(local_150);
  if ((cVar5 == '\0') || (cVar5 = FUN_1800a9120(local_50), cVar5 == '\0')) {
    FUN_18015b930(local_50);
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 7;
    while (uVar15 < 0x16) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (*(short *)((&PTR_u_Lifecycle_runtime_log_18081e510)[uVar15] + lVar14 * 2) != 0);
      local_170 = (undefined1  [16])0x0;
      uStack_160 = 0;
      uStack_158 = 0;
      FUN_180159e60(local_170);
      FUN_1800a7e60(local_90,local_50,local_170);
      FUN_18015b930(local_170);
      uVar7 = FUN_1801e9e90(local_90,local_b0);
      FUN_1800f5370(local_110,uVar7);
      pauVar8 = (undefined1 (*) [16])FUN_1800f52e0(local_110,L".previous.log",0xd);
      local_130 = *(undefined8 *)*pauVar8;
      uStack_128 = *(undefined8 *)(*pauVar8 + 8);
      auVar2 = *pauVar8;
      uStack_120 = *(undefined8 *)pauVar8[1];
      uStack_118 = *(undefined8 *)(pauVar8[1] + 8);
      *(undefined2 *)*pauVar8 = 0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 7;
      local_170._2_14_ = auVar2._2_14_;
      auVar2._14_2_ = 0;
      auVar2._0_14_ = local_170._2_14_;
      local_170 = auVar2 << 0x10;
      pppppppuVar13 = local_90;
      if (7 < local_78) {
        pppppppuVar13 = local_90[0];
      }
      psVar10 = (short *)((longlong)pppppppuVar13 + local_80 * 2);
      uStack_160 = uVar16;
      uStack_158 = uVar17;
      psVar9 = (short *)FUN_1800a7b00(pppppppuVar13,psVar10);
      if (psVar9 != psVar10) {
        do {
          if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) break;
          psVar9 = psVar9 + 1;
        } while (psVar9 != psVar10);
        do {
          if (psVar9 == psVar10) goto LAB_18041b9cd;
          sVar1 = psVar10[-1];
          psVar4 = psVar10;
        } while ((sVar1 != 0x5c) && (psVar10 = psVar10 + -1, sVar1 != 0x2f));
        do {
          psVar10 = psVar4;
          if (psVar9 == psVar10) break;
          psVar4 = psVar10 + -1;
        } while ((*psVar4 == 0x5c) || (*psVar4 == 0x2f));
      }
LAB_18041b9cd:
      local_150 = (undefined1  [16])0x0;
      local_140 = 0;
      local_138 = 0;
      FUN_180159e60(local_150,pppppppuVar13,(longlong)psVar10 - (longlong)pppppppuVar13 >> 1);
      FUN_1800a7e60(local_70,local_150,&local_130);
      FUN_18015b930(local_150);
      FUN_18015b930(&local_130);
      FUN_18015b930(local_170);
      FUN_18015b930(local_110);
      FUN_18015b930(local_b0);
      if ((local_80 < 0x104) && (local_60 < 0x104)) {
        FUN_1800f5370(local_f0,local_90);
        cVar5 = FUN_180165ac0(local_f0);
        if (cVar5 == '\0') goto LAB_18041bb9f;
        FUN_1800f5370(local_d0,local_70);
        cVar5 = FUN_180165ac0(local_d0);
        if (cVar5 == '\0') goto LAB_18041bb9f;
        pppppppuVar13 = local_90;
        if (7 < local_78) {
          pppppppuVar13 = local_90[0];
        }
        psVar10 = (short *)((longlong)pppppppuVar13 + local_80 * 2);
        psVar9 = (short *)FUN_1800a7b00(pppppppuVar13,psVar10);
        if (psVar9 != psVar10) {
          do {
            if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) break;
            psVar9 = psVar9 + 1;
          } while (psVar9 != psVar10);
          do {
            if (psVar9 == psVar10) goto LAB_18041bb5d;
            sVar1 = psVar10[-1];
            psVar4 = psVar10;
          } while ((sVar1 != 0x5c) && (psVar10 = psVar10 + -1, sVar1 != 0x2f));
          do {
            psVar10 = psVar4;
            if (psVar9 == psVar10) break;
            psVar4 = psVar10 + -1;
          } while ((*psVar4 == 0x5c) || (*psVar4 == 0x2f));
        }
LAB_18041bb5d:
        local_170 = (undefined1  [16])0x0;
        uStack_160 = 0;
        uStack_158 = 0;
        FUN_180159e60(local_170,pppppppuVar13,(longlong)psVar10 - (longlong)pppppppuVar13 >> 1);
        bVar12 = true;
        cVar5 = FUN_1800a9120(local_170);
        if (cVar5 == '\0') goto LAB_18041bb9f;
        bVar3 = false;
      }
      else {
LAB_18041bb9f:
        bVar3 = true;
      }
      if (bVar12) {
        bVar12 = false;
        FUN_18015b930(local_170);
      }
      if (bVar3) {
        FUN_18015b930(local_70);
        FUN_18015b930(local_90);
        uVar15 = uVar15 + 1;
      }
      else {
        plVar11 = &DAT_180bb2750 + uVar15 * 0x86;
        AcquireSRWLockExclusive((PSRWLOCK)(&DAT_180bb2758 + uVar15 * 0x430));
        pppppppuVar13 = local_90;
        if (7 < local_78) {
          pppppppuVar13 = local_90[0];
        }
        FUN_1806160a0(&DAT_180bb2760 + uVar15 * 0x218,0x104,pppppppuVar13);
        pppppppuVar13 = local_70;
        if (7 < local_58) {
          pppppppuVar13 = local_70[0];
        }
        FUN_1806160a0(&DAT_180bb2968 + uVar15 * 0x218,0x104,pppppppuVar13);
        (&DAT_180bb2b78)[uVar15 * 0x86] = 0;
        cVar5 = FUN_1800a9a50(plVar11);
        if ((cVar5 != '\0') && (1000 < (uint)(&DAT_180bb2b70)[uVar15 * 0x10c])) {
          CloseHandle((HANDLE)*plVar11);
          *plVar11 = 0;
          cVar5 = FUN_18041b1b0(local_90);
          if (cVar5 != '\0') {
            FUN_1800a9a50(plVar11);
          }
        }
        if ((((param_1 != '\0') && (*plVar11 != 0)) && ((&DAT_180bb2b74)[uVar15 * 0x10c] != 0)) &&
           (((uint)(&DAT_180bb2b70)[uVar15 * 0x10c] < 0x3e9 &&
            (BVar6 = MoveFileExW(&DAT_180bb2760 + uVar15 * 0x218,&DAT_180bb2968 + uVar15 * 0x218,1),
            BVar6 != 0)))) {
          CloseHandle((HANDLE)*plVar11);
          *plVar11 = 0;
          FUN_1800a9a50(plVar11);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(&DAT_180bb2758 + uVar15 * 0x430));
        FUN_18015b930(local_70);
        FUN_18015b930(local_90);
        uVar15 = uVar15 + 1;
      }
    }
    FUN_18015b930(local_50);
  }
}



