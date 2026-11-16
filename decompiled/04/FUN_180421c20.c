// FUN_180421c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180421c20 */

/* WARNING: Removing unreachable block (ram,0x000180421ef1) */

float * FUN_180421c20(longlong param_1,char *param_2,float *param_3,undefined8 param_4,char *param_5
                     )

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 extraout_var [56];
  undefined1 auVar20 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar21 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar22 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar23 [64];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar24 [64];
  float fVar25;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float fVar26;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  float fVar27;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  
  if ((param_2 != (char *)0x0) && (pcVar7 = *(char **)(param_1 + 0x9c28), *param_2 != '\0')) {
    for (; pcVar7 != (char *)0x0; pcVar7 = *(char **)(pcVar7 + 0xd8)) {
      pcVar8 = pcVar7;
      do {
        cVar3 = *pcVar8;
        cVar4 = pcVar8[(longlong)param_2 - (longlong)pcVar7];
        if (cVar3 != cVar4) break;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      if (cVar3 == cVar4) {
        if (pcVar7 == (char *)0x0) {
          return (float *)0x0;
        }
        iVar12 = 0;
        pcVar8 = pcVar7;
        do {
          lVar6 = *(longlong *)(pcVar8 + 0xd0);
          if (lVar6 != 0) {
            fVar5 = *(float *)(pcVar8 + 200);
            lVar2 = (longlong)(int)fVar5 * 8;
            lVar11 = lVar2 + 0x28;
            if (0xffffffffffffffcf < lVar2 - 8U) {
              lVar11 = -1;
            }
            pfVar10 = (float *)_malloc_base(lVar11);
            if (pfVar10 == (float *)0x0) {
              return (float *)0x0;
            }
            if (pcVar7[0xad] == '\x01') {
              fVar26 = *param_3;
              fVar27 = param_3[1];
              fVar25 = param_3[2] - fVar26;
              fVar15 = param_3[3] - fVar27;
            }
            else {
              fVar26 = *(float *)(param_1 + 0x9c38);
              fVar27 = *(float *)(param_1 + 0x9c3c);
              fVar25 = *(float *)(param_1 + 40000);
              fVar15 = *(float *)(param_1 + 0x9c44);
            }
            auVar24 = ZEXT464((uint)fVar25);
            auVar23 = ZEXT464((uint)fVar26);
            auVar22 = ZEXT464((uint)fVar15);
            auVar21 = ZEXT464((uint)fVar27);
            if (pcVar7[0x80] == '\x02') {
              uVar17 = FUN_180421b00(param_1,*(undefined8 *)(pcVar7 + 0x84),fVar26,fVar25);
              uVar18 = FUN_180421b00(uVar17,*(undefined8 *)(pcVar7 + 0x8c),auVar21._0_8_,
                                     auVar22._0_8_);
              fVar27 = (float)uVar17;
              uVar17 = FUN_180421b00(uVar18,*(undefined8 *)(pcVar7 + 0x94),auVar23._0_8_,
                                     auVar24._0_8_);
              fVar26 = (float)uVar18;
              fVar25 = (float)uVar17 - fVar27;
              fVar14 = (float)FUN_180421b00(uVar17,*(undefined8 *)(pcVar7 + 0x9c),auVar21._0_8_,
                                            auVar22._0_8_);
              fVar14 = fVar14 - fVar26;
              fVar15 = -fVar25;
            }
            else {
              uVar17 = FUN_180421b00(param_1,*(undefined8 *)(pcVar7 + 0x84),fVar26,fVar25,
                                     unaff_XMM13_Qa,unaff_XMM13_Qb,unaff_XMM12_Qa,unaff_XMM12_Qb,
                                     unaff_XMM11_Qa,unaff_XMM11_Qb,unaff_XMM10_Qa,unaff_XMM10_Qb,
                                     unaff_XMM9_Qa,unaff_XMM9_Qb,unaff_XMM8_Qa,unaff_XMM8_Qb,
                                     unaff_XMM7_Qa,unaff_XMM7_Qb,unaff_XMM6_Qa,unaff_XMM6_Qb);
              uVar18 = FUN_180421b00(uVar17,*(undefined8 *)(pcVar7 + 0x8c),auVar21._0_8_,
                                     auVar22._0_8_);
              fVar27 = (float)uVar17;
              fVar15 = (float)FUN_180421b00(uVar18,*(undefined8 *)(pcVar7 + 0xa4),auVar21._0_8_);
              fVar26 = (float)uVar18;
              fVar25 = auVar22._0_4_ * auVar22._0_4_ + auVar24._0_4_ * auVar24._0_4_;
              if (fVar25 < 0.0) {
                auVar21._0_8_ = FUN_18061e150();
                auVar21._8_56_ = extraout_var;
                auVar19 = auVar21._0_16_;
              }
              else {
                auVar19 = ZEXT416((uint)SQRT(fVar25));
              }
              auVar20._0_4_ = auVar19._0_4_ / 1.4142135;
              auVar20._4_12_ = auVar19._4_12_;
              fVar25 = 0.0;
              uVar17 = FUN_180421b00(param_1,*(undefined8 *)(pcVar7 + 0x94),0,auVar20._0_8_,
                                     unaff_XMM13_Qa,unaff_XMM13_Qb,unaff_XMM12_Qa,unaff_XMM12_Qb,
                                     unaff_XMM11_Qa,unaff_XMM11_Qb,unaff_XMM10_Qa,unaff_XMM10_Qb,
                                     unaff_XMM9_Qa,unaff_XMM9_Qb,unaff_XMM8_Qa,unaff_XMM8_Qb,
                                     unaff_XMM7_Qa,unaff_XMM7_Qb,unaff_XMM6_Qa,unaff_XMM6_Qb);
              fVar16 = (float)FUN_180421b00(uVar17,*(undefined8 *)(pcVar7 + 0x9c),auVar23._0_8_,
                                            auVar24._0_8_);
              fVar14 = (float)uVar17;
              pfVar10[7] = fVar16 / fVar14;
              pfVar10[8] = fVar15 / fVar14;
              fVar15 = 0.0;
            }
            *pfVar10 = fVar14;
            pfVar10[1] = fVar15;
            pfVar10[2] = fVar25;
            pfVar10[3] = fVar14;
            pfVar10[4] = fVar27;
            pfVar10[5] = fVar26;
            uVar17 = FUN_1804210f0(pfVar10,pcVar7 + 0xb0);
            FUN_1804210f0(uVar17,param_4);
            *(char *)(pfVar10 + 6) = pcVar7[0xac];
            FUN_18063aed0(pfVar10 + 10,lVar6,(longlong)(int)fVar5 << 3);
            pfVar10[9] = fVar5;
            *param_5 = pcVar7[0x80];
            return pfVar10;
          }
          pcVar1 = pcVar8 + 0x40;
          if ((pcVar1 != (char *)0x0) && (pcVar13 = *(char **)(param_1 + 0x9c28), *pcVar1 != '\0'))
          {
            do {
              pcVar9 = pcVar13;
              do {
                cVar3 = *pcVar9;
                cVar4 = pcVar9[(longlong)pcVar1 - (longlong)pcVar13];
                if (cVar3 != cVar4) break;
                pcVar9 = pcVar9 + 1;
              } while (cVar4 != '\0');
              if (cVar3 == cVar4) goto LAB_180421d26;
              pcVar13 = *(char **)(pcVar13 + 0xd8);
            } while (pcVar13 != (char *)0x0);
          }
          pcVar13 = (char *)0x0;
LAB_180421d26:
          if (pcVar13 == pcVar8) {
            return (float *)0x0;
          }
          iVar12 = iVar12 + 1;
          if (0x20 < iVar12) {
            return (float *)0x0;
          }
          pcVar8 = pcVar13;
          if (pcVar13 == (char *)0x0) {
            return (float *)0x0;
          }
        } while( true );
      }
    }
  }
  return (float *)0x0;
}



