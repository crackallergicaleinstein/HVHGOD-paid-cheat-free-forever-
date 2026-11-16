// FUN_180185fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185fa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180185fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  uint local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  uVar18 = 0;
  local_1a8 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_198 = param_2;
  local_190 = param_3;
  cVar6 = FUN_180185df0(0,&local_60,local_98,param_3);
  if (cVar6 != '\0') {
    uVar4 = local_98._0_8_;
    uVar16 = local_98._8_8_ - local_98._0_8_;
    local_a8 = 0;
    local_a0 = 0xf;
    local_b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_b8._1_15_;
    local_b8 = auVar1 << 8;
    local_c8 = 0;
    local_c0 = 0xf;
    local_d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_d8._1_15_;
    local_d8 = auVar2 << 8;
    local_70 = 0;
    local_68 = 0xf;
    local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_80._1_15_;
    local_80 = auVar3 << 8;
    uVar15 = 0;
LAB_180186080:
    if (uVar15 < uVar16) {
      uVar14 = uVar15;
      while( true ) {
        uVar7 = uVar14;
        if (0x10000 < uVar7 - uVar15) goto LAB_1801860d0;
        if (*(char *)(uVar4 + uVar7) == '\0') break;
        uVar14 = uVar7 + 1;
        if (uVar16 <= uVar7 + 1) goto LAB_1801860c7;
      }
      FUN_180113930(local_b8,uVar15 + uVar4,uVar7 - uVar15);
      uVar14 = uVar7 + 1;
      if (local_a8 == 0) {
LAB_1801860c7:
        if (uVar7 + 1 < uVar16) {
LAB_1801860d0:
          pcVar12 = "Truncated VPK directory";
LAB_1801860d7:
          FUN_180113930(local_190,pcVar12,0x17);
        }
        goto LAB_18018644d;
      }
LAB_180186110:
      uVar15 = uVar14;
      if (uVar14 < uVar16) {
        while( true ) {
          uVar7 = uVar15 + 1;
          if (0x10000 < uVar15 - uVar14) goto LAB_180186080;
          if (*(char *)(uVar4 + uVar15) == '\0') break;
          uVar15 = uVar7;
          if (uVar16 <= uVar7) goto LAB_180186080;
        }
        FUN_180113930(local_d8,uVar14 + uVar4,uVar15 - uVar14);
        uVar15 = uVar15 + 1;
        if (local_c8 == 0) goto LAB_180186080;
        local_1a0 = (char *)local_d8._0_8_;
        lVar19 = local_c8;
        uVar7 = local_c0;
        while (uVar14 = uVar15, uVar15 < uVar16) {
          uVar20 = uVar15;
          while( true ) {
            uVar8 = uVar20 + 1;
            uVar14 = uVar20;
            if (0x10000 < uVar20 - uVar15) goto LAB_180186110;
            if (*(char *)(uVar4 + uVar20) == '\0') break;
            uVar14 = uVar8;
            uVar20 = uVar8;
            if (uVar16 <= uVar8) goto LAB_180186110;
          }
          FUN_180113930(local_80,uVar15 + uVar4,uVar20 - uVar15);
          lVar5 = local_70;
          uVar14 = uVar20 + 1;
          if (local_70 == 0) break;
          if (uVar16 - uVar14 < 0x12) {
LAB_18018643f:
            pcVar12 = "Malformed VPK directory";
            goto LAB_1801860d7;
          }
          if ((*(short *)(uVar4 + 0x10 + uVar14) != -1) ||
             (uVar15 = (ulonglong)SUB162(*(undefined1 (*) [16])(uVar4 + uVar14),4),
             uVar16 - (uVar20 + 0x13) < uVar15)) goto LAB_18018643f;
          uVar15 = uVar20 + 0x13 + uVar15;
          pcVar12 = local_d8;
          if (0xf < uVar7) {
            pcVar12 = local_1a0;
          }
          if ((lVar19 == 1) && (*pcVar12 == ' ')) {
            local_148 = (undefined1  [16])0x0;
            local_138 = (undefined1  [16])0x0;
            FUN_18015ba30(local_148,&PTR_180700558,0);
            puVar11 = local_148;
            uVar17 = uVar18 | 1;
          }
          else {
            if (lVar19 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            local_1b8 = 1;
            local_1c0 = &DAT_1807c47a0;
            local_1c8 = lVar19;
            FUN_18015a9c0(local_108);
            puVar11 = local_108;
            uVar17 = uVar18 | 0x22;
            local_1a0 = (char *)local_d8._0_8_;
            lVar19 = local_c8;
            uVar7 = local_c0;
          }
          puVar13 = local_80;
          if (0xf < local_68) {
            puVar13 = (undefined1 *)local_80._0_8_;
          }
          local_1a8 = uVar17;
          pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(puVar11,puVar13,lVar5);
          local_168 = *pauVar9;
          auStack_158 = pauVar9[1];
          *(undefined8 *)(pauVar9[1] + 8) = 0xf;
          (*pauVar9)[0] = 0;
          *(undefined8 *)pauVar9[1] = 0;
          local_1a8 = uVar17 | 8;
          pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_168,&DAT_1807c5af8,1);
          local_188 = *pauVar9;
          auStack_178 = pauVar9[1];
          (*pauVar9)[0] = 0;
          *(undefined8 *)pauVar9[1] = 0;
          *(undefined8 *)(pauVar9[1] + 8) = 0xf;
          local_1a8 = uVar17 | 0xc;
          puVar11 = local_b8;
          if (0xf < local_a0) {
            puVar11 = (undefined1 *)local_b8._0_8_;
          }
          puVar10 = (undefined8 *)FUN_18015b2a0(local_188,puVar11,local_a8);
          local_128 = *puVar10;
          uStack_120 = puVar10[1];
          uStack_118 = puVar10[2];
          uStack_110 = puVar10[3];
          *(undefined1 *)puVar10 = 0;
          puVar10[2] = 0;
          puVar10[3] = 0xf;
          uVar18 = uVar17 | 0x1c;
          local_1a8 = uVar18;
          FUN_1801b0a30(local_198,local_e8,&local_128);
          FUN_18015c010(&local_128);
          FUN_18015c010(local_188);
          FUN_18015c010(local_168);
          if ((uVar17 & 2) != 0) {
            uVar18 = uVar17 & 0xfffffffd | 0x1c;
            local_1a8 = uVar18;
            FUN_18015c010(local_108);
          }
          if ((uVar18 & 1) != 0) {
            uVar18 = uVar18 & 0xfffffffe;
            local_1a8 = uVar18;
            FUN_18015c010(local_148);
          }
        }
        goto LAB_180186110;
      }
      goto LAB_180186080;
    }
LAB_18018644d:
    FUN_18015c010(local_80);
    FUN_18015c010(local_d8);
    FUN_18015c010(local_b8);
  }
  FUN_180113710(local_98);
}



