// FUN_1804340b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804340b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804340b0(undefined8 param_1,undefined8 param_2,float param_3,undefined8 *param_4,
                  int param_5,longlong param_6)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 in_ZMM8 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined4 local_148;
  float local_138;
  uint local_134;
  undefined8 local_130;
  longlong *local_128;
  float *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  undefined1 local_78 [16];
  
  local_78 = in_ZMM8._0_16_;
  local_f0 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  if ((param_4[1] != 0) && ((char)((uint)param_5 >> 0x18) != '\0')) {
    if (param_6 == 0) {
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        param_6 = DAT_180bbade0;
      }
      else {
        param_6 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (param_6 == 0) {
      }
    }
    if (*(longlong *)(param_6 + 8) != 0) {
      auVar15 = vroundss_avx(ZEXT816(0),in_ZMM1._0_16_,1);
      auVar16 = ZEXT1664(auVar15);
      local_134 = auVar15._0_4_;
      auVar26 = ZEXT1664(auVar15);
      auVar15 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3 + *(float *)(param_6 + 0x1c))),1);
      auVar18 = ZEXT1664(auVar15);
      local_138 = auVar15._0_4_;
      pbVar14 = (byte *)*param_4;
      pbVar1 = pbVar14 + param_4[1];
      if (pbVar14 < pbVar1) {
        fVar19 = 0.0;
        local_130 = param_1;
        do {
          iVar11 = 0;
          bVar2 = *pbVar14;
          if (bVar2 < 0x80) {
            uVar12 = (uint)bVar2;
            pbVar14 = pbVar14 + 1;
LAB_180434252:
            if (uVar12 == 10) {
              auVar26 = ZEXT1664(auVar16._0_16_);
              local_138 = auVar18._0_4_ + *(float *)(param_6 + 0x24);
              auVar18 = ZEXT464((uint)local_138);
            }
            else if (0x1f < uVar12) goto LAB_180434282;
          }
          else {
            if (0xbf < bVar2) {
              uVar12 = (uint)bVar2;
              if (bVar2 < 0xe0) {
                uVar12 = uVar12 & 0x1f;
                iVar13 = 1;
              }
              else if (bVar2 < 0xf0) {
                uVar12 = uVar12 & 0xf;
                iVar13 = 2;
              }
              else {
                if (0xf7 < bVar2) goto LAB_180434279;
                uVar12 = uVar12 & 7;
                iVar13 = 3;
              }
              pbVar14 = pbVar14 + 1;
              do {
                if ((pbVar1 <= pbVar14) || ((*pbVar14 & 0xc0) != 0x80)) goto LAB_18043427c;
                uVar12 = *pbVar14 & 0x3f | uVar12 << 6;
                pbVar14 = pbVar14 + 1;
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar13);
              goto LAB_180434252;
            }
LAB_180434279:
            pbVar14 = pbVar14 + 1;
LAB_18043427c:
            uVar12 = 0xfffd;
LAB_180434282:
            FUN_18042fec0(param_6,&local_128,uVar12);
            plVar6 = local_128;
            fVar25 = auVar26._0_4_;
            if ((fVar19 < local_120[3]) && (fVar19 < local_120[4])) {
              if (((char)local_128[0x19] != '\0') &&
                 (plVar3 = (longlong *)*local_128, plVar3 != (longlong *)0x0)) {
                local_110 = (longlong *)0x0;
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_110);
                local_118 = (longlong *)0x0;
                (**(code **)(*local_110 + 0x140))(local_110,&local_118);
                local_108 = 0;
                local_fc = (int)plVar6[2];
                local_f8 = *(undefined4 *)((longlong)plVar6 + 0x14);
                local_100 = 0;
                local_f4 = 1;
                local_150 = local_fc * 4;
                local_148 = 0;
                local_158 = plVar6[0x16];
                (**(code **)(*local_118 + 0x180))(local_118,*plVar6,0,&local_108);
                plVar3 = local_118;
                *(undefined1 *)(plVar6 + 0x19) = 0;
                if (local_118 != (longlong *)0x0) {
                  local_118 = (longlong *)0x0;
                  (**(code **)(*plVar3 + 0x10))();
                }
                plVar6 = local_110;
                if (local_110 != (longlong *)0x0) {
                  local_110 = (longlong *)0x0;
                  (**(code **)(*plVar6 + 0x10))();
                }
              }
              auVar15._0_4_ = (float)(int)local_128[2];
              auVar15._4_12_ = SUB1612(ZEXT816(0),4);
              fVar21 = 1.0 / auVar15._0_4_;
              fVar20 = 1.0 / (float)*(int *)((longlong)local_128 + 0x14);
              FUN_1804353e0(auVar15._0_8_,local_128[1]);
              fVar4 = auVar26._0_4_ + local_120[1];
              auVar24 = ZEXT464((uint)fVar4);
              fVar5 = auVar18._0_4_ - local_120[2];
              auVar16 = ZEXT464((uint)fVar5);
              fVar19 = local_120[3];
              fVar25 = local_120[4];
              auVar23 = ZEXT464((uint)(fVar21 * local_120[5]));
              fVar17 = fVar20 * local_120[6];
              auVar22 = ZEXT464((uint)((fVar19 + local_120[5]) * fVar21));
              fVar20 = (fVar25 + local_120[6]) * fVar20;
              local_150 = param_5;
              local_158._0_4_ = fVar17;
              uVar7 = FUN_1804354e0(fVar19 + local_120[5],fVar4,fVar5,fVar21 * local_120[5]);
              fVar19 = auVar24._0_4_ + fVar19;
              auVar18 = ZEXT464((uint)fVar19);
              local_150 = param_5;
              local_158._0_4_ = fVar17;
              uVar8 = FUN_1804354e0(param_1,fVar19,auVar16._0_8_,auVar22._0_8_);
              fVar25 = auVar16._0_4_ + fVar25;
              auVar16 = ZEXT464((uint)fVar25);
              local_150 = param_5;
              local_158._0_4_ = fVar20;
              uVar9 = FUN_1804354e0(local_130,auVar18._0_8_,fVar25,auVar22._0_8_);
              local_150 = param_5;
              local_158._0_4_ = fVar20;
              uVar10 = FUN_1804354e0(local_130,auVar24._0_8_,auVar16._0_8_,auVar23._0_8_);
              param_1 = local_130;
              local_158 = CONCAT44(local_158._4_4_,uVar10);
              FUN_180435650(local_130,uVar7,uVar8,uVar9);
              fVar25 = auVar26._0_4_;
              auVar18 = ZEXT464((uint)local_138);
              fVar19 = 0.0;
            }
            auVar26 = ZEXT464((uint)(fVar25 + *local_120));
            auVar16 = ZEXT464(local_134);
          }
        } while (pbVar14 < pbVar1);
      }
    }
  }
}



