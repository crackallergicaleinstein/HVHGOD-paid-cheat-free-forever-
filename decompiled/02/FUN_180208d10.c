// FUN_180208d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180208d10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180208d10(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 ****ppppuVar7;
  undefined1 auVar8 [8];
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 ****_Buf1;
  longlong lVar18;
  undefined8 ****ppppuVar19;
  undefined8 ***pppuVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  int iVar23;
  size_t sVar24;
  ulonglong uVar25;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined8 local_510;
  undefined8 ***local_508;
  size_t local_500;
  undefined1 *local_4f8;
  undefined8 local_4f0;
  undefined8 ***local_4e8;
  size_t local_4e0;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined2 local_4b8;
  undefined1 local_486;
  longlong local_458;
  longlong local_420;
  longlong local_380;
  longlong local_268;
  undefined4 local_190;
  undefined4 local_160;
  undefined8 ****local_158 [2];
  size_t local_148;
  ulonglong local_140;
  undefined1 local_138 [8];
  undefined1 (*pauStack_130) [16];
  undefined1 (*local_128) [16];
  undefined2 local_118 [4];
  undefined1 local_110 [16];
  undefined8 local_100;
  ulonglong local_f8;
  undefined1 local_f0 [16];
  size_t sStack_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [16];
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [16];
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined1 local_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  char local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined8 ****local_58 [2];
  size_t local_48;
  ulonglong local_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_538;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  bVar1 = false;
  if (param_2 + 0x128 != 0) {
    local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffff00000000);
    cVar9 = FUN_1804514f0(&local_518,param_2 + 0x128,4);
    if (cVar9 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  iVar10 = (int)local_518;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  iVar23 = 0;
  if (bVar1) {
    iVar23 = iVar10;
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (param_2 + 0x130 == 0) {
    bVar1 = false;
  }
  else {
    local_518 = (undefined1 *)0x0;
    cVar9 = FUN_1804514f0(&local_518,param_2 + 0x130,8);
    if (cVar9 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar21 = local_518;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if (((bVar1) && (puVar21 != (undefined1 *)0x0)) && (iVar23 - 1U < 10000)) {
    uVar25 = (ulonglong)iVar23;
    lVar11 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_180cc9c08 - DAT_180cc9bf8),8) +
             (DAT_180cc9c08 - DAT_180cc9bf8);
    if ((ulonglong)((lVar11 >> 7) - (lVar11 >> 0x3f)) < uVar25) {
      if (0x1642c8590b21642 < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar11 = (DAT_180cc9c00 - DAT_180cc9bf8) +
               SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_180cc9c00 - DAT_180cc9bf8),8);
      lVar12 = FUN_18015bca0(uVar25 * 0xb8);
      lVar17 = lVar12;
      lVar18 = DAT_180cc9bf8;
      lVar14 = DAT_180cc9c00;
      if (DAT_180cc9bf8 != DAT_180cc9c00) {
        do {
          FUN_1802128d0();
          lVar17 = lVar17 + 0xb8;
          lVar18 = lVar18 + 0xb8;
        } while (lVar18 != lVar14);
      }
      FUN_1801b6830(lVar17,lVar17);
      FUN_180212050(&DAT_180cc9bf8,lVar12,(lVar11 >> 7) - (lVar11 >> 0x3f),uVar25);
    }
    _local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1 (*) [16])0x0;
    if (uVar25 == 0) {
      pauStack_130 = (undefined1 (*) [16])0x0;
      pauVar15 = pauStack_130;
    }
    else {
      if (0x7ffffffffffffff < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_1801baf80();
      }
      local_138 = (undefined1  [8])FUN_18015bca0(uVar25 * 0x20);
      local_128 = (undefined1 (*) [16])((longlong)local_138 + uVar25 * 2 * 0x10);
      uVar13 = uVar25;
      pauStack_130 = (undefined1 (*) [16])local_138;
      do {
        *pauStack_130 = (undefined1  [16])0x0;
        *(undefined8 *)pauStack_130[1] = 0;
        *(undefined8 *)(pauStack_130[1] + 8) = 0;
        pauStack_130 = pauStack_130 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      pauVar15 = pauStack_130;
    }
    auVar8 = local_138;
    uVar13 = (longlong)pauVar15 - (longlong)local_138;
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    cVar9 = FUN_1804514f0(auVar8,puVar21,uVar13 & 0xffffffffffffffe0);
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    if ((cVar9 != '\0') && (0 < (longlong)uVar25)) {
      lVar11 = 0;
      lVar17 = 0;
      do {
        if ((-2 < *(int *)((longlong)local_138 + 0x10 + lVar17)) &&
           (lVar18 = *(longlong *)((longlong)local_138 + 0x18 + lVar17), lVar18 != 0)) {
          FUN_18063ab10(local_4c8,0,0x370);
          lVar14 = FUN_18017ea70();
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
          cVar9 = FUN_1804514f0(local_4c8,lVar18,0x370);
          lVar18 = FUN_18017ea70();
          if (*(int *)(lVar18 + 4) != 0) {
            *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
          }
          if (cVar9 != '\0') {
            local_100 = 0;
            local_f8 = 0xf;
            local_110._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar2[0xf] = 0;
            auVar2._0_15_ = local_110._1_15_;
            local_110 = auVar2 << 8;
            sStack_e0 = 0;
            uStack_d8 = 0xf;
            local_f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar3[0xf] = 0;
            auVar3._0_15_ = local_f0._1_15_;
            local_f0 = auVar3 << 8;
            uStack_c0 = 0;
            uStack_b8 = 0xf;
            local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar4[0xf] = 0;
            auVar4._0_15_ = local_d0._1_15_;
            local_d0 = auVar4 << 8;
            uStack_a0 = 0;
            uStack_98 = 0xf;
            local_b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar5[0xf] = 0;
            auVar5._0_15_ = local_b0._1_15_;
            local_b0 = auVar5 << 8;
            uStack_80 = 0;
            uStack_78 = 0xf;
            local_90._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar6[0xf] = 0;
            auVar6._0_15_ = local_90._1_15_;
            local_90 = auVar6 << 8;
            local_68 = 0;
            local_66 = 1;
            local_118[0] = local_4b8;
            local_70 = local_190;
            local_6c = local_160;
            local_67 = local_486;
            if (local_268 != 0) {
              pauVar15 = (undefined1 (*) [16])FUN_180454280(local_158,local_268,0x100);
              if (&local_f0 != pauVar15) {
                FUN_18015c010(local_f0);
                local_f0 = *pauVar15;
                sStack_e0 = *(size_t *)pauVar15[1];
                uStack_d8 = *(ulonglong *)(pauVar15[1] + 8);
                *(undefined8 *)pauVar15[1] = 0;
                *(undefined8 *)(pauVar15[1] + 8) = 0xf;
                (*pauVar15)[0] = 0;
              }
              FUN_18015c010(local_158);
              pppuVar20 = (undefined8 ***)local_f0;
              if (0xf < uStack_d8) {
                pppuVar20 = (undefined8 ***)local_f0._0_8_;
              }
              FUN_180113930(local_110,pppuVar20,sStack_e0);
            }
            if (local_380 != 0) {
              pauVar15 = (undefined1 (*) [16])FUN_180454280(local_158,local_380,0x100);
              if (&local_b0 != pauVar15) {
                FUN_18015c010(local_b0);
                local_b0 = *pauVar15;
                uStack_a0 = *(undefined8 *)pauVar15[1];
                uStack_98 = *(ulonglong *)(pauVar15[1] + 8);
                *(undefined8 *)pauVar15[1] = 0;
                *(undefined8 *)(pauVar15[1] + 8) = 0xf;
                (*pauVar15)[0] = 0;
              }
              FUN_18015c010(local_158);
            }
            if (local_420 != 0) {
              pauVar15 = (undefined1 (*) [16])FUN_180454280(local_158,local_420,0x100);
              if (&local_90 != pauVar15) {
                FUN_18015c010(local_90);
                local_90 = *pauVar15;
                uStack_80 = *(undefined8 *)pauVar15[1];
                uStack_78 = *(undefined8 *)(pauVar15[1] + 8);
                *(undefined8 *)pauVar15[1] = 0;
                *(undefined8 *)(pauVar15[1] + 8) = 0xf;
                (*pauVar15)[0] = 0;
              }
              FUN_18015c010(local_158);
            }
            if (local_458 == 0) {
              pppuVar20 = (undefined8 ***)local_f0;
              if (0xf < uStack_d8) {
                pppuVar20 = (undefined8 ***)local_f0._0_8_;
              }
              FUN_180113930(local_d0,pppuVar20,sStack_e0);
            }
            else {
              FUN_180454280(local_58,local_458,0x100);
              lVar18 = DAT_180c63930;
              if (DAT_180c63930 == 0) {
                uVar22 = 0;
              }
              else {
                lVar14 = FUN_18017ea70();
                *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                puVar16 = (undefined8 *)FUN_18020f880(local_4d8,lVar18);
                if (*(char *)(puVar16 + 1) == '\0') {
                  uVar22 = 0;
                }
                else {
                  uVar22 = *puVar16;
                }
                lVar18 = FUN_18017ea70();
                if (*(int *)(lVar18 + 4) != 0) {
                  *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
                }
              }
              FUN_180454280(local_158,uVar22,0x100);
              uVar13 = local_140;
              sVar24 = local_148;
              ppppuVar7 = local_158[0];
              if (local_148 == 0) {
LAB_180209360:
                ppppuVar19 = (undefined8 ****)local_f0;
                if (0xf < uStack_d8) {
                  ppppuVar19 = (undefined8 ****)local_f0._0_8_;
                }
                sVar24 = sStack_e0;
              }
              else {
                ppppuVar19 = local_58;
                if (0xf < local_40) {
                  ppppuVar19 = local_58[0];
                }
                _Buf1 = local_158;
                if (0xf < local_140) {
                  _Buf1 = local_158[0];
                }
                if ((local_148 == local_48) &&
                   (iVar10 = memcmp(_Buf1,ppppuVar19,local_148), iVar10 == 0)) goto LAB_180209360;
                ppppuVar19 = local_158;
                if (0xf < uVar13) {
                  ppppuVar19 = ppppuVar7;
                }
              }
              FUN_180113930(local_d0,ppppuVar19,sVar24);
              FUN_18015c010(local_158);
              FUN_18015c010(local_58);
            }
            puVar21 = local_110;
            if (0xf < local_f8) {
              puVar21 = (undefined1 *)local_110._0_8_;
            }
            local_68 = FUN_18020c710(&DAT_180cc9bb0,puVar21,local_70);
            if (local_68 == '\x03') {
              local_518 = local_d0;
              if (0xf < uStack_b8) {
                local_518 = (undefined1 *)local_d0._0_8_;
              }
              local_508 = (undefined8 ***)local_f0;
              if (0xf < uStack_d8) {
                local_508 = (undefined8 ***)local_f0._0_8_;
              }
              local_510 = uStack_c0;
              local_500 = sStack_e0;
              pauVar15 = (undefined1 (*) [16])FUN_180206f30(local_158,&local_508,&local_518);
              if (&local_d0 != pauVar15) {
                FUN_18015c010(local_d0);
                local_d0 = *pauVar15;
                uStack_c0 = *(undefined8 *)pauVar15[1];
                uStack_b8 = *(ulonglong *)(pauVar15[1] + 8);
                *(undefined8 *)pauVar15[1] = 0;
                *(undefined8 *)(pauVar15[1] + 8) = 0xf;
                (*pauVar15)[0] = 0;
              }
              FUN_18015c010(local_158);
              local_4f8 = local_b0;
              if (0xf < uStack_98) {
                local_4f8 = (undefined1 *)local_b0._0_8_;
              }
              local_4e8 = (undefined8 ***)local_f0;
              if (0xf < uStack_d8) {
                local_4e8 = (undefined8 ***)local_f0._0_8_;
              }
              local_4f0 = uStack_a0;
              local_4e0 = sStack_e0;
              local_66 = FUN_180206db0(&local_4e8,&local_4f8);
            }
            if (DAT_180cc9c00 == DAT_180cc9c08) {
              FUN_180211490(&DAT_180cc9bf8,DAT_180cc9c00,local_118);
            }
            else {
              FUN_1802128d0();
              DAT_180cc9c00 = DAT_180cc9c00 + 0xb8;
            }
            FUN_18015c010(local_90);
            FUN_18015c010(local_b0);
            FUN_18015c010(local_d0);
            FUN_18015c010(local_f0);
            FUN_18015c010(local_110);
          }
        }
        lVar11 = lVar11 + 1;
        lVar17 = lVar17 + 0x20;
      } while (lVar11 < (longlong)uVar25);
    }
    FUN_18020f720(local_138);
  }
}



