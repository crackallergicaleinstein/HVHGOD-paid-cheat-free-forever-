// FUN_1804c7fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1804c7fe0(float *param_1,float *param_2,float *param_3,uint *param_4,float *param_5,
                     float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 local_68 [6] [16];
  
  fVar1 = param_3[1];
  fVar2 = param_5[2];
  fVar3 = *param_3;
  fVar4 = param_5[1];
  auVar14 = ZEXT416((uint)fVar4);
  if (fVar4 <= param_2[1]) {
    auVar14 = vminss_avx(ZEXT416((uint)(param_5[3] - fVar1)),ZEXT416((uint)param_2[1]));
  }
  fVar5 = *param_5;
  auVar11 = ZEXT416((uint)fVar5);
  if (fVar5 <= *param_2) {
    auVar11 = vminss_avx(ZEXT416((uint)(fVar2 - fVar3)),ZEXT416((uint)*param_2));
  }
  if (param_7 == 1) {
    uVar6 = *param_4;
    local_68[0]._8_8_ = 0x200000000;
    local_68[0]._0_8_ = 0x100000003;
    iVar8 = -(uint)(uVar6 != 0xffffffff);
    do {
      if (iVar8 == -1) {
        uVar7 = uVar6;
LAB_1804c80c9:
        auVar14 = ZEXT816(0);
        auVar11 = SUB6416(ZEXT464(0),0) << 0x20;
        if (uVar7 == 3) {
          auVar14 = ZEXT416((uint)*param_6);
          auVar11 = ZEXT416((uint)param_6[3]);
LAB_1804c80df:
          if (uVar7 != 0) goto LAB_1804c8113;
          fVar13 = param_6[3];
LAB_1804c812a:
          auVar11 = ZEXT416((uint)fVar13);
          auVar14 = ZEXT416((uint)(param_6[2] - fVar3));
        }
        else {
          if (uVar7 != 1) goto LAB_1804c80df;
          auVar14 = ZEXT416((uint)*param_6);
          auVar11 = ZEXT416((uint)(param_6[1] - fVar1));
LAB_1804c8113:
          if (uVar7 == 2) {
            fVar13 = param_6[1] - fVar1;
            goto LAB_1804c812a;
          }
        }
        if ((((fVar5 <= auVar14._0_4_) && (fVar4 <= auVar11._0_4_)) &&
            (fVar3 + auVar14._0_4_ <= fVar2)) && (fVar1 + auVar11._0_4_ <= param_5[3])) {
          auVar14 = vunpcklps_avx(auVar14,auVar11);
          *(longlong *)param_1 = auVar14._0_8_;
          *param_4 = uVar7;
          return param_1;
        }
      }
      else {
        uVar7 = *(uint *)(local_68[0] + (longlong)iVar8 * 4);
        if (uVar7 != uVar6) goto LAB_1804c80c9;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    *param_4 = 0xffffffff;
  }
  else {
    if ((param_7 == 2) || (param_7 == 0)) {
      uVar6 = *param_4;
      local_68[0] = _DAT_18086d410;
      iVar8 = -(uint)(uVar6 != 0xffffffff);
      do {
        if (iVar8 == -1) {
          uVar7 = uVar6;
LAB_1804c8236:
          if (uVar7 == 0) {
            fVar13 = *param_6;
LAB_1804c823e:
            fVar9 = fVar5;
            if (uVar7 == 2) {
              fVar10 = param_6[1];
              goto LAB_1804c824c;
            }
            fVar10 = param_5[3];
            if (uVar7 != 3) goto LAB_1804c824c;
            fVar12 = param_6[3];
          }
          else {
            fVar13 = fVar2;
            if (uVar7 != 1) goto LAB_1804c823e;
            fVar9 = param_6[2];
            fVar10 = param_5[3];
LAB_1804c824c:
            fVar12 = fVar4;
          }
          if (((fVar3 <= fVar13 - fVar9) || (1 < uVar7)) &&
             ((fVar1 <= fVar10 - fVar12 || (1 < uVar7 - 2)))) {
            if (uVar7 == 0) {
              auVar11 = ZEXT416((uint)(*param_6 - fVar3));
            }
            else if (uVar7 == 1) {
              auVar11 = ZEXT416((uint)param_6[2]);
            }
            else if (uVar7 == 2) {
              auVar14 = ZEXT416((uint)(param_6[1] - fVar1));
            }
            else if (uVar7 == 3) {
              auVar14 = ZEXT416((uint)param_6[3]);
            }
            auVar11 = vmaxss_avx(auVar11,ZEXT416((uint)fVar5));
            auVar14 = vmaxss_avx(auVar14,ZEXT416((uint)fVar4));
            auVar14 = vunpcklps_avx(auVar11,auVar14);
            *(longlong *)param_1 = auVar14._0_8_;
            *param_4 = uVar7;
            return param_1;
          }
        }
        else {
          uVar7 = *(uint *)(local_68[0] + (longlong)iVar8 * 4);
          if (uVar7 != uVar6) goto LAB_1804c8236;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
    }
    *param_4 = 0xffffffff;
    if (param_7 == 2) {
      fVar1 = *param_2;
      param_1[1] = param_2[1] + 2.0;
      *param_1 = fVar1 + 2.0;
      return param_1;
    }
  }
  auVar14 = vminss_avx(ZEXT416((uint)(*param_2 + *param_3)),ZEXT416((uint)param_5[2]));
  auVar14 = vmaxss_avx(ZEXT416((uint)(auVar14._0_4_ - *param_3)),ZEXT416((uint)*param_5));
  auVar11 = vminss_avx(ZEXT416((uint)(param_3[1] + param_2[1])),ZEXT416((uint)param_5[3]));
  auVar11 = vmaxss_avx(ZEXT416((uint)(auVar11._0_4_ - param_3[1])),ZEXT416((uint)param_5[1]));
  param_1[1] = auVar11._0_4_;
  *param_1 = auVar14._0_4_;
                    /* WARNING: Read-only address (ram,0x00018086d410) is written */
  return param_1;
}



