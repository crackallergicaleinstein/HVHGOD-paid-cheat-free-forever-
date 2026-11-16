// FUN_1805f9c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9c00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1805f7970(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                        ulonglong param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar19;
  undefined1 auVar18 [16];
  undefined1 auStack_d8 [32];
  uint auStack_b8 [2];
  longlong lStack_b0;
  undefined1 (**appauStack_a8 [2]) [16];
  undefined1 auStack_98 [16];
  undefined1 (*pauStack_88) [16];
  ulonglong uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uStack_68 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  lStack_b0 = param_2;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_1805f7d20(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar12 = param_2 - (longlong)param_1;
      if (param_4 <= uVar12) {
        if ((((byte)DAT_1808d5f64 & 4) == 0) || (uVar12 < 0x10)) {
          pauVar8 = (undefined1 (*) [16])(param_2 - param_4);
          lVar10 = (longlong)param_3 - (longlong)pauVar8;
          while( true ) {
            if ((*pauVar8)[0] == (*param_3)[0]) {
              pcVar5 = *pauVar8 + 1;
              while (*pcVar5 == pcVar5[lVar10]) {
                pcVar5 = pcVar5 + 1;
                if ((longlong)pcVar5 - (longlong)pauVar8 == param_4) {
                }
              }
            }
            if (pauVar8 == param_1) break;
            pauVar8 = (undefined1 (*) [16])(pauVar8[-1] + 0xf);
            lVar10 = lVar10 + 1;
          }
        }
        else {
          iVar4 = (int)param_4;
          if (param_4 < 0x11) {
            uVar11 = (uint)uVar12 & 0xf;
            uVar13 = (1 << (0x11U - (char)param_4 & 0x1f)) - 1;
            FUN_18063aed0(&pauStack_78,param_3,param_4);
            auVar16._8_8_ = uStack_70;
            auVar16._0_8_ = pauStack_78;
            pauVar8 = (undefined1 (*) [16])(lStack_b0 + -0x10);
            auVar14 = pcmpestrm(auVar16,*pauVar8,0xc,iVar4,0x10);
            uVar3 = auVar14._0_4_ & uVar13;
            if (uVar3 == 0) {
              uVar3 = (uint)((ulonglong)pauStack_78 >> 0x20);
              uVar19 = (uint)((ulonglong)uStack_70 >> 0x20);
              if (pauVar8 != (undefined1 (*) [16])(*param_1 + uVar11)) {
                do {
                  pauVar8 = pauVar8 + -1;
                  auVar14 = pcmpestrm(auVar16,*pauVar8,0xc,iVar4,0x10);
                  uVar9 = auVar14._0_4_;
                  if (uVar9 != 0) {
                    auStack_b8[0] = (uVar13 ^ 0xffff) & uVar9;
                    if (auStack_b8[0] != 0) {
                      auVar14 = *(undefined1 (*) [16])(&DAT_18068bfd0 + -param_4);
                      do {
                        uVar1 = 0x1f;
                        if (auStack_b8[0] != 0) {
                          for (; auStack_b8[0] >> uVar1 == 0; uVar1 = uVar1 - 1) {
                          }
                        }
                        puVar6 = (uint *)(*pauVar8 + uVar1);
                        auVar15._0_4_ = *puVar6 ^ (uint)pauStack_78;
                        auVar15._4_4_ = puVar6[1] ^ uVar3;
                        auVar15._8_4_ = puVar6[2] ^ (uint)uStack_70;
                        auVar15._12_4_ = puVar6[3] ^ uVar19;
                        if ((auVar14 & auVar15) == (undefined1  [16])0x0) {
                        }
                        pbVar2 = (byte *)((longlong)auStack_b8 + ((longlong)(int)uVar1 >> 3));
                        *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
                      } while (auStack_b8[0] != 0);
                    }
                    uVar9 = uVar9 & uVar13;
                    if (uVar9 != 0) {
                      iVar4 = 0x1f;
                      if (uVar9 == 0) {
                      }
                      for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                      }
                    }
                  }
                } while (pauVar8 != (undefined1 (*) [16])(*param_1 + uVar11));
              }
              if ((ulonglong)uVar11 != 0) {
                auVar16 = pcmpestrm(auVar16,*param_1,0xc,iVar4,0x10);
                uVar11 = auVar16._0_4_ & (1 << (sbyte)uVar11) - 1U;
                if (uVar11 != 0) {
                  auStack_b8[0] = (uVar13 ^ 0xffff) & uVar11;
                  if (auStack_b8[0] != 0) {
                    auVar16 = *(undefined1 (*) [16])(&DAT_18068bfd0 + -param_4);
                    do {
                      uVar9 = 0x1f;
                      if (auStack_b8[0] != 0) {
                        for (; auStack_b8[0] >> uVar9 == 0; uVar9 = uVar9 - 1) {
                        }
                      }
                      puVar6 = (uint *)(*param_1 + uVar9);
                      auVar14._0_4_ = *puVar6 ^ (uint)pauStack_78;
                      auVar14._4_4_ = puVar6[1] ^ uVar3;
                      auVar14._8_4_ = puVar6[2] ^ (uint)uStack_70;
                      auVar14._12_4_ = puVar6[3] ^ uVar19;
                      if ((auVar16 & auVar14) == (undefined1  [16])0x0) {
                      }
                      pbVar2 = (byte *)((longlong)auStack_b8 + ((longlong)(int)uVar9 >> 3));
                      *pbVar2 = *pbVar2 & ~('\x01' << (uVar9 & 7));
                    } while (auStack_b8[0] != 0);
                  }
                  uVar11 = uVar11 & uVar13;
                  if ((uVar11 != 0) && (iVar4 = 0x1f, uVar11 != 0)) {
                    for (; uVar11 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                    }
                  }
                }
              }
            }
            else {
              iVar4 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                }
              }
            }
          }
          else {
            auVar16 = *param_3;
            uVar3 = (uint)uVar12 - iVar4;
            uStack_80 = param_4;
            param_3 = param_3 + 1;
            auStack_98 = auVar16;
            pauStack_88 = param_3;
            pauVar8 = (undefined1 (*) [16])(param_2 - param_4);
            appauStack_a8[0] = &pauStack_78;
            auVar17._0_4_ = *(uint *)*pauVar8 ^ auVar16._0_4_;
            auVar17._4_4_ = *(uint *)(*pauVar8 + 4) ^ auVar16._4_4_;
            auVar17._8_4_ = *(uint *)(*pauVar8 + 8) ^ auVar16._8_4_;
            auVar17._12_4_ = *(uint *)(*pauVar8 + 0xc) ^ auVar16._12_4_;
            if ((auVar17 != (undefined1  [16])0x0) ||
               (pauStack_78 = pauVar8, iVar4 = memcmp(pauVar8 + 1,param_3,param_4 - 0x10),
               iVar4 != 0)) {
              while (pauVar8 != (undefined1 (*) [16])(*param_1 + (uVar3 & 0xf))) {
                pauVar8 = pauVar8 + -1;
                pauStack_78 = pauVar8;
                auVar14 = pcmpestrm(auVar16,*pauVar8,0xc,0x10,0x10);
                if (auVar14._0_4_ != 0) {
                  auStack_b8[0] = auVar14._0_4_;
                  do {
                    uVar11 = 0x1f;
                    if (auStack_b8[0] != 0) {
                      for (; auStack_b8[0] >> uVar11 == 0; uVar11 = uVar11 - 1) {
                      }
                    }
                    pauVar7 = pauVar8;
                    if (((uVar11 == 0) ||
                        (pauVar7 = (undefined1 (*) [16])(*pauVar8 + uVar11),
                        auVar18._0_4_ = auVar16._0_4_ ^ *(uint *)*pauVar7,
                        auVar18._4_4_ = auVar16._4_4_ ^ *(uint *)(*pauVar7 + 4),
                        auVar18._8_4_ = auVar16._8_4_ ^ *(uint *)(*pauVar7 + 8),
                        auVar18._12_4_ = auVar16._12_4_ ^ *(uint *)(*pauVar7 + 0xc),
                        auVar18 == (undefined1  [16])0x0)) &&
                       (iVar4 = memcmp(pauVar7 + 1,param_3,param_4 - 0x10), iVar4 == 0)) {
                    }
                    pbVar2 = (byte *)((longlong)auStack_b8 + ((longlong)(int)uVar11 >> 3));
                    *pbVar2 = *pbVar2 & ~('\x01' << (uVar11 & 7));
                  } while (auStack_b8[0] != 0);
                }
              }
              uVar3 = uVar3 & 0xf;
              if ((uVar3 != 0) &&
                 (auVar16 = pcmpestrm(auVar16,*param_1,0xc,0x10,0x10),
                 (auVar16._0_4_ & (1 << (sbyte)uVar3) - 1U) != 0)) {
                pauStack_78 = param_1;
                FUN_1805f9b60(appauStack_a8);
              }
            }
          }
        }
      }
    }
  }
}



