// FUN_1804d7270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d7270 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d7270(longlong param_1,int param_2,float param_3,longlong *param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f0;
  float local_e8;
  float local_e0;
  float local_d8;
  float local_d0;
  float local_c8;
  undefined4 local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int *local_a0;
  int local_98 [2];
  ulonglong local_90;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  lVar3 = 0;
  iVar11 = 0;
  lVar14 = (longlong)param_2;
  iVar6 = 0;
  lVar13 = 0;
  local_a0 = param_5;
  param_3 = param_3 * param_3;
  if (0 < param_2) {
    pcVar7 = (char *)(param_1 + 0xc);
    lVar9 = lVar14;
    iVar12 = iVar6;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 0xe;
      iVar6 = iVar12 + 1;
      if (cVar2 != '\x01') {
        iVar6 = iVar12;
      }
      lVar9 = lVar9 + -1;
      iVar12 = iVar6;
    } while (lVar9 != 0);
  }
  *param_5 = iVar6;
  if (iVar6 != 0) {
    local_b0 = lVar14;
    local_a8 = param_1;
    lVar9 = FUN_1804b8110((longlong)iVar6 << 2);
    *param_4 = lVar9;
    if (lVar9 == 0) {
      *param_5 = 0;
    }
    else {
      local_48 = in_ZMM6._0_16_;
      local_58 = in_ZMM7._0_16_;
      local_b8 = 0;
      while( true ) {
        iVar6 = local_b8;
        auVar16 = ZEXT864(0);
        auVar17 = ZEXT864(0);
        if ((local_b8 == 1) && (lVar3 = FUN_1804b8110((longlong)iVar11 << 3), lVar3 == 0)) break;
        local_98[0] = 0;
        lVar9 = -1;
        iVar11 = 0;
        if (0 < lVar14) {
          psVar10 = (short *)(param_1 + 10);
          do {
            cVar2 = (char)psVar10[1];
            if (cVar2 == '\x01') {
              if (-1 < lVar9) {
                *(int *)(*param_4 + lVar9 * 4) = iVar11 - (int)lVar13;
              }
              lVar9 = lVar9 + 1;
              lVar13 = (longlong)iVar11;
              auVar16 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)psVar10[-5]));
              sVar5 = psVar10[-4];
              iVar11 = iVar11 + 1;
              auVar17 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)sVar5));
              local_98[0] = iVar11;
              if (lVar3 != 0) {
                *(float *)(lVar3 + lVar13 * 8) = (float)(int)psVar10[-5];
                *(float *)(lVar3 + 4 + lVar13 * 8) = (float)(int)sVar5;
              }
            }
            else if (cVar2 == '\x02') {
              auVar16 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)psVar10[-5]));
              sVar5 = psVar10[-4];
              auVar17 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)sVar5));
              lVar4 = (longlong)iVar11;
              iVar11 = iVar11 + 1;
              local_98[0] = iVar11;
              if (lVar3 != 0) {
                *(float *)(lVar3 + lVar4 * 8) = (float)(int)psVar10[-5];
                *(float *)(lVar3 + 4 + lVar4 * 8) = (float)(int)sVar5;
              }
            }
            else {
              if (cVar2 == '\x03') {
                local_d0 = 0.0;
                local_e0 = (float)(int)psVar10[-4];
                local_e8 = (float)(int)psVar10[-5];
                local_f0 = (float)(int)psVar10[-2];
                local_f8 = (float)(int)psVar10[-3];
                local_d8 = param_3;
                FUN_1804d6c60(lVar3,local_98,auVar16._0_8_,auVar17._0_8_);
                auVar15._0_4_ = (float)(int)psVar10[-5];
                auVar15._4_12_ = SUB1612(ZEXT816(0),4);
              }
              else {
                if (cVar2 != '\x04') goto LAB_1804d7596;
                local_c0 = 0;
                local_d0 = (float)(int)psVar10[-4];
                local_d8 = (float)(int)psVar10[-5];
                local_e0 = (float)(int)*psVar10;
                local_e8 = (float)(int)psVar10[-1];
                local_f0 = (float)(int)psVar10[-2];
                local_f8 = (float)(int)psVar10[-3];
                local_c8 = param_3;
                FUN_1804d6e60(lVar3,local_98,auVar16._0_8_,auVar17._0_8_);
                auVar15._0_4_ = (float)(int)psVar10[-5];
                auVar15._4_12_ = SUB1612(ZEXT816(0),4);
              }
              auVar16 = ZEXT1664(auVar15);
              auVar17 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)psVar10[-4]));
              iVar11 = local_98[0];
            }
LAB_1804d7596:
            psVar10 = psVar10 + 7;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          param_1 = local_a8;
          lVar14 = local_b0;
          iVar6 = local_b8;
        }
        local_b8 = iVar6 + 1;
        *(int *)(*param_4 + lVar9 * 4) = iVar11 - (int)lVar13;
        if (1 < local_b8) {
        }
      }
      thunk_FUN_180621380(0);
      lVar3 = DAT_180bb8ae8;
      lVar14 = *param_4;
      if ((lVar14 != 0) && (DAT_180bb8ae8 != 0)) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar8 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar8 != *piVar1) {
          iVar6 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar5;
          piVar8 = (int *)(lVar3 + ((longlong)sVar5 + 0x533) * 8);
          *piVar8 = *piVar1;
          piVar8[1] = 0;
        }
        *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
        piVar1 = (int *)(lVar3 + 0x2990);
        *piVar1 = *piVar1 + 1;
      }
      thunk_FUN_180621380(lVar14);
      *param_4 = 0;
      *local_a0 = 0;
    }
  }
}



