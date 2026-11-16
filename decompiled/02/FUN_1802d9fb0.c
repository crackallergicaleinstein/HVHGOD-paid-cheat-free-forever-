// FUN_1802d9fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d9fb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802d9fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158;
  int local_148;
  int local_144;
  undefined1 local_140 [16];
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  int local_108 [4];
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8 [22];
  
  local_d8[8] = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  local_140 = ZEXT816(0x180cc9b08);
  iVar5 = FUN_1805f68d0(&DAT_180cc9b08);
  lVar7 = DAT_180cc99e0;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_140[8] = 1;
  if (DAT_180b0b340 == '\0') {
    lVar10 = DAT_180cc99d8;
    if (DAT_180cc99d8 != DAT_180cc99e0) {
      do {
        FUN_1801bc3d0(lVar10);
        lVar10 = lVar10 + 400;
      } while (lVar10 != lVar7);
      DAT_180cc99e0 = DAT_180cc99d8;
    }
  }
  else {
    sVar4 = thunk_FUN_180624430(param_3);
    if (sVar4 < 1) {
      lVar7 = DAT_180cc99d8;
      if (DAT_180cc99d8 != DAT_180cc99e0) {
        do {
          lVar10 = lVar7 + 400;
          cVar3 = FUN_1802e4d60(lVar7,param_3);
          lVar2 = DAT_180cc99e0;
          if (cVar3 == '\0') {
            for (; lVar10 != lVar2; lVar10 = lVar10 + 400) {
              FUN_1802e8910(lVar10 + -400,lVar10);
            }
            FUN_1801bc3d0(DAT_180cc99e0 + -400);
            DAT_180cc99e0 = DAT_180cc99e0 + -400;
            lVar10 = lVar7;
          }
          lVar7 = lVar10;
        } while (lVar10 != DAT_180cc99e0);
      }
      _local_f8 = (undefined1  [16])0x0;
      local_e8 = 0;
      local_108[0] = 1;
      if ((DAT_180bbab78 == 0) ||
         ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_108,local_f8),
         local_108[0] != 0)) {
        auVar16 = ZEXT864(0);
        if (0.0 < (float)uStack_f0) {
          if ((0x9f < (int)(float)uStack_f0) && (99 < (int)uStack_f0._4_4_)) {
            vminss_avx(ZEXT416((uint)((float)(int)(float)uStack_f0 - 30.0)),ZEXT416(0x441b0000));
            local_d8[0] = 0;
            local_d8[1] = 0;
            local_d8[2] = 0;
            local_d8[3] = 0;
            local_d8[4] = 0;
            local_d8[5] = 0;
            local_d8[6] = 0;
            local_d8[7] = 0;
            uVar12 = 0;
            local_144 = 8;
            local_148 = 1;
            piVar9 = &local_148;
            if (0 < DAT_180b0b3a8) {
              piVar9 = &DAT_180b0b3a8;
            }
            piVar6 = &local_144;
            if (DAT_180b0b3a8 < 9) {
              piVar6 = piVar9;
            }
            iVar5 = *piVar6;
            for (lVar7 = DAT_180cc99d8; lVar7 != DAT_180cc99e0; lVar7 = lVar7 + 400) {
              if (0.01 < *(float *)(lVar7 + 0x15c)) {
                local_d8[uVar12] = lVar7;
                uVar12 = uVar12 + 1;
                if (uVar12 == (longlong)iVar5) break;
              }
            }
            fVar15 = 24.0;
            uVar13 = 0;
            if (uVar12 != 0) {
              fVar17 = (float)((int)uStack_f0._4_4_ + -10);
              fVar18 = 15.0;
              auVar19 = ZEXT464(0x40a00000);
              do {
                uVar8 = uVar13;
                if (DAT_180b0b3ac == 1) {
                  uVar8 = (uVar12 - uVar13) - 1;
                }
                lVar7 = local_d8[uVar8];
                local_128 = lVar7 + 0x60;
                if (0xf < *(ulonglong *)(lVar7 + 0x78)) {
                  local_128 = *(longlong *)local_128;
                }
                local_120 = *(undefined8 *)(lVar7 + 0x70);
                plVar11 = (longlong *)(lVar7 + 0x80);
                local_118 = (longlong)plVar11;
                if (0xf < *(ulonglong *)(lVar7 + 0x98)) {
                  local_118 = *plVar11;
                }
                local_110 = *(undefined8 *)(lVar7 + 0x90);
                local_178 = (undefined1 *)CONCAT71(local_178._1_7_,DAT_180b0b3b0);
                auVar16 = ZEXT1664(auVar16._0_16_);
                auVar19 = ZEXT1664(auVar19._0_16_);
                FUN_1802c83f0(lVar7 + 0xa0,&local_118,&local_128);
                if (fVar17 < fVar15 + *(float *)(lVar7 + 0x11c)) break;
                if (*(char *)(lVar7 + 0x172) == '\0') {
                  *(float *)(lVar7 + 0x174) = fVar15;
                  *(undefined4 *)(lVar7 + 0x178) = 0;
                  *(undefined4 *)(lVar7 + 0x180) = 0x43340000;
                  *(undefined4 *)(lVar7 + 0x184) = 0x41c00000;
                  *(undefined1 *)(lVar7 + 0x172) = 1;
                }
                *(float *)(lVar7 + 0x17c) = fVar15;
                fVar14 = DAT_180bbae00;
                fVar1 = ((fVar15 - *(float *)(lVar7 + 0x174)) * *(float *)(lVar7 + 0x180) -
                        *(float *)(lVar7 + 0x178) * *(float *)(lVar7 + 0x184)) * DAT_180bbae00 +
                        *(float *)(lVar7 + 0x178);
                *(float *)(lVar7 + 0x178) = fVar1;
                fVar1 = fVar1 * fVar14 + *(float *)(lVar7 + 0x174);
                *(float *)(lVar7 + 0x174) = fVar1;
                local_158 = *(undefined1 *)(lVar7 + 0x188);
                local_160 = *(undefined4 *)(lVar7 + 0x15c);
                if (0xf < *(ulonglong *)(lVar7 + 0x98)) {
                  plVar11 = *(longlong **)(lVar7 + 0x80);
                }
                if (*(char *)(lVar7 + 0x170) == '\0') {
                  fVar14 = *(float *)(lVar7 + 0x140);
                }
                else {
                  fVar14 = auVar16._0_4_;
                }
                uStack_f0 = *(undefined8 *)(lVar7 + 0x90);
                local_f8 = (undefined1  [8])plVar11;
                local_168 = DAT_180ccde38;
                local_178 = local_f8;
                FUN_1802e4fa0(param_2,fVar14 + fVar18,fVar1,lVar7 + 0xa0);
                fVar15 = fVar15 + auVar19._0_4_ + *(float *)(lVar7 + 0x11c);
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar12);
            }
          }
        }
      }
    }
  }
  FUN_1805f68fc(&DAT_180cc9b08);
}



