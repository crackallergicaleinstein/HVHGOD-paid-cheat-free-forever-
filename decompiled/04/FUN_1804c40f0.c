// FUN_1804c40f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c40f0 */

void FUN_1804c40f0(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar14 [64];
  undefined4 local_res8;
  float fStackX_c;
  
  lVar3 = DAT_180bb8ae8;
  auVar10 = ZEXT864(0);
  lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x14f8);
  lVar7 = lVar3;
  if (lVar5 == 0) {
LAB_1804c41eb:
    lVar6 = *(longlong *)(lVar3 + 0x14d8);
    if (*(longlong *)(lVar3 + 0x14d8) == 0) {
      return;
    }
  }
  else {
    fVar12 = *(float *)(DAT_180bb8ae8 + 0x1510) - *(float *)(DAT_180bb8ae8 + 0x40);
    *(float *)(DAT_180bb8ae8 + 0x1510) = fVar12;
    if ((((-256000.0 <= *(float *)(lVar3 + 0x110)) && (-256000.0 <= *(float *)(lVar3 + 0x114))) &&
        (fVar11 = *(float *)(lVar3 + 0x110) - *(float *)(lVar3 + 0x1500),
        fVar13 = *(float *)(lVar3 + 0x114) - *(float *)(lVar3 + 0x1504),
        *(float *)(lVar3 + 0xa0) * *(float *)(lVar3 + 0xa0) < fVar13 * fVar13 + fVar11 * fVar11)) ||
       (fVar12 <= 0.0)) {
      *(undefined4 *)(lVar3 + 0x1510) = 0;
      if ((*(byte *)(lVar3 + 0x28cc) & 0x80) != 0) {
        FUN_1804cf3e0("[io] LockWheelingWindow() \"%s\"\n",&DAT_1808595bc);
        lVar7 = DAT_180bb8ae8;
      }
      *(undefined8 *)(lVar3 + 0x1500) = *(undefined8 *)(lVar3 + 0x110);
      *(undefined8 *)(lVar3 + 0x14f8) = 0;
      lVar5 = 0;
      *(undefined4 *)(lVar3 + 0x1508) = 0xffffffff;
      *(undefined8 *)(lVar3 + 0x151c) = 0;
      goto LAB_1804c41eb;
    }
    if (lVar5 == 0) goto LAB_1804c41eb;
    lVar6 = lVar5;
  }
  if (*(char *)(lVar6 + 0xcf) != '\0') {
    return;
  }
  iVar1 = *(int *)(lVar6 + 0x10);
  if (iVar1 == 0) {
    if (*(char *)(lVar7 + 0x1cd8) == '\0') goto LAB_1804c4226;
LAB_1804c448e:
    local_res8 = 0.0;
  }
  else {
    if ((*(int *)(lVar7 + 0x1cd0) != iVar1) &&
       ((*(char *)(lVar7 + 0x1cd8) != '\0' || (*(int *)(lVar7 + 0x1cd0) != -1))))
    goto LAB_1804c448e;
LAB_1804c4226:
    local_res8 = *(float *)(lVar3 + 0x124);
  }
  if (iVar1 == 0) {
    if (*(char *)(lVar7 + 0x1ce4) == '\0') goto LAB_1804c4243;
LAB_1804c44b7:
    auVar9 = ZEXT816(0);
  }
  else {
    if ((*(int *)(lVar7 + 0x1cdc) != iVar1) &&
       ((*(char *)(lVar7 + 0x1ce4) != '\0' || (*(int *)(lVar7 + 0x1cdc) != -1))))
    goto LAB_1804c44b7;
LAB_1804c4243:
    auVar9 = ZEXT416(*(uint *)(lVar3 + 0x120));
  }
  fVar12 = auVar9._0_4_;
  if (lVar5 != 0) {
    *(int *)(lVar7 + 0x1cd4) = iVar1;
    *(int *)(lVar7 + 0x1cd0) = iVar1;
    *(undefined2 *)(lVar7 + 0x1cd8) = 0;
    *(int *)(lVar7 + 0x1ce0) = iVar1;
    *(int *)(lVar7 + 0x1cdc) = iVar1;
    *(undefined2 *)(lVar7 + 0x1ce4) = 0;
  }
  fVar11 = auVar10._0_4_;
  if (fVar12 != fVar11) {
    if (*(char *)(lVar3 + 300) == '\0') goto LAB_1804c44cd;
    if (*(char *)(lVar3 + 0x70) != '\0') {
      auVar9 = vminss_avx(ZEXT416((uint)(ABS(fVar12) * 0.7 + *(float *)(lVar7 + 0x1510))),
                          ZEXT416(0x3f333333));
      *(int *)(lVar7 + 0x1510) = auVar9._0_4_;
      lVar5 = lVar7;
      if (*(longlong *)(lVar7 + 0x14f8) != lVar6) {
        if ((*(byte *)(lVar7 + 0x28cc) & 0x80) != 0) {
          FUN_1804cf3e0("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar6 + 8));
          lVar5 = DAT_180bb8ae8;
        }
        *(undefined8 *)(lVar7 + 0x1500) = *(undefined8 *)(lVar7 + 0x110);
        *(longlong *)(lVar7 + 0x14f8) = lVar6;
      }
      fVar12 = *(float *)(lVar6 + 0x2b8);
      auVar9 = SUB6416(ZEXT464(0x3f000000),0);
      fVar11 = *(float *)(lVar3 + 0x120) * 0.1 + fVar12;
      if (0.5 <= fVar11) {
        auVar9 = vminss_avx(SUB6416(ZEXT464(0x40200000),0),ZEXT416((uint)fVar11));
      }
      *(float *)(lVar6 + 0x2b8) = auVar9._0_4_;
      fVar12 = auVar9._0_4_ / fVar12;
      auVar14 = ZEXT1664(CONCAT124(auVar9._4_12_,fVar12));
      if (lVar6 != *(longlong *)(lVar6 + 0x3d8)) {
        return;
      }
      fVar12 = 1.0 - fVar12;
      fVar11 = ((*(float *)(lVar3 + 0x114) - *(float *)(lVar6 + 0x2c)) *
               fVar12 * *(float *)(lVar6 + 0x34)) / *(float *)(lVar6 + 0x34) +
               *(float *)(lVar6 + 0x2c);
      _local_res8 = CONCAT44(fVar11,(fVar12 * *(float *)(lVar6 + 0x30) *
                                    (*(float *)(lVar3 + 0x110) - *(float *)(lVar6 + 0x28))) /
                                    *(float *)(lVar6 + 0x30) + *(float *)(lVar6 + 0x28));
      FUN_1804c1ac0(lVar6,&local_res8,0,fVar11,unaff_XMM9_Qa,unaff_XMM9_Qb);
      fVar12 = auVar14._0_4_;
      *(float *)(lVar6 + 0x34) = (float)(int)(fVar12 * *(float *)(lVar6 + 0x34));
      *(float *)(lVar6 + 0x30) = (float)(int)(fVar12 * *(float *)(lVar6 + 0x30));
      *(float *)(lVar6 + 0x38) = (float)(int)(fVar12 * *(float *)(lVar6 + 0x38));
      *(float *)(lVar6 + 0x3c) = (float)(int)(fVar12 * *(float *)(lVar6 + 0x3c));
      if ((*(uint *)(lVar6 + 0x14) & 0x100) != 0) {
        return;
      }
      if (*(float *)(lVar5 + 0x277c) <= auVar10._0_4_) {
        *(undefined4 *)(lVar5 + 0x277c) = *(undefined4 *)(lVar5 + 0x44);
        return;
      }
      return;
    }
  }
  if (*(char *)(lVar3 + 300) != '\0') {
    return;
  }
LAB_1804c44cd:
  if (*(char *)(lVar3 + 0xb9a) != '\0') {
    auVar9 = vunpcklps_avx(auVar9,auVar10._0_16_);
    local_res8 = auVar9._0_4_;
    auVar9 = vshufps_avx(auVar9,auVar9,0x55);
    fVar12 = auVar9._0_4_;
  }
  *(float *)(lVar3 + 0x151c) =
       ABS(local_res8) / 30.0 + (*(float *)(lVar3 + 0x151c) - *(float *)(lVar3 + 0x151c) / 30.0);
  *(float *)(lVar3 + 0x1520) =
       ABS(fVar12) / 30.0 + (*(float *)(lVar3 + 0x1520) - *(float *)(lVar3 + 0x1520) / 30.0);
  fVar13 = local_res8 + *(float *)(lVar3 + 0x1514);
  fVar12 = fVar12 + *(float *)(lVar3 + 0x1518);
  _local_res8 = CONCAT44(fVar12,fVar13);
  *(undefined8 *)(lVar3 + 0x1514) = 0;
  if ((fVar13 != fVar11) || (fVar12 != fVar11)) {
    lVar5 = *(longlong *)(lVar3 + 0x14f8);
    if ((lVar5 == 0) && (lVar5 = FUN_1804c3f80(&local_res8), lVar5 == 0)) {
      return;
    }
    if ((*(uint *)(lVar5 + 0x14) & 0x210) == 0) {
      fVar11 = auVar10._0_4_;
      if ((fVar13 == fVar11) || (*(float *)(lVar5 + 0xa0) == fVar11)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      if ((fVar12 == fVar11) || (*(float *)(lVar5 + 0xa4) == fVar11)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x01';
      }
      local_res8._0_2_ = CONCAT11(cVar8,cVar4);
      auVar10 = ZEXT464(0x3f333333);
      auVar9 = auVar10._0_16_;
      fVar11 = 0.67;
      lVar6 = lVar7;
      if (cVar4 != '\0') {
        if (cVar8 != '\0') {
          *(undefined1 *)
           ((longlong)&local_res8 +
           (ulonglong)(*(float *)(lVar3 + 0x1520) < *(float *)(lVar3 + 0x151c))) = 0;
          cVar4 = (char)local_res8;
          cVar8 = local_res8._1_1_;
        }
        if (cVar4 != '\0') {
          auVar2 = vminss_avx(ZEXT416((uint)(ABS(fVar13) * 0.7 + *(float *)(lVar7 + 0x1510))),auVar9
                             );
          *(int *)(lVar7 + 0x1510) = auVar2._0_4_;
          if (*(longlong *)(lVar7 + 0x14f8) != lVar5) {
            if ((*(byte *)(lVar7 + 0x28cc) & 0x80) != 0) {
              FUN_1804cf3e0("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar5 + 8));
              auVar9 = auVar10._0_16_;
              lVar6 = DAT_180bb8ae8;
            }
            *(undefined8 *)(lVar7 + 0x1500) = *(undefined8 *)(lVar7 + 0x110);
            *(longlong *)(lVar7 + 0x14f8) = lVar5;
          }
          auVar2 = vminss_avx(ZEXT416((uint)(*(float *)(lVar5 + 0x2c0) + *(float *)(lVar5 + 0x2c0)))
                              ,ZEXT416((uint)((*(float *)(lVar5 + 0x230) - *(float *)(lVar5 + 0x228)
                                              ) * fVar11)));
          *(undefined4 *)(lVar5 + 0xb0) = 0;
          *(undefined4 *)(lVar5 + 0xb8) = 0;
          *(float *)(lVar5 + 0xa8) = *(float *)(lVar5 + 0x98) - (float)(int)auVar2._0_4_ * fVar13;
          *(undefined4 *)(lVar3 + 0x150c) = *(undefined4 *)(lVar3 + 4);
        }
      }
      if (cVar8 != '\0') {
        auVar9 = vminss_avx(ZEXT416((uint)(ABS(fVar12) * auVar9._0_4_ + *(float *)(lVar6 + 0x1510)))
                            ,auVar9);
        *(int *)(lVar6 + 0x1510) = auVar9._0_4_;
        if (*(longlong *)(lVar6 + 0x14f8) != lVar5) {
          if ((*(byte *)(lVar6 + 0x28cc) & 0x80) != 0) {
            FUN_1804cf3e0("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar5 + 8));
          }
          *(undefined8 *)(lVar6 + 0x1500) = *(undefined8 *)(lVar6 + 0x110);
          *(longlong *)(lVar6 + 0x14f8) = lVar5;
        }
        auVar9 = vminss_avx(ZEXT416((uint)(*(float *)(lVar5 + 0x2c0) * 5.0)),
                            ZEXT416((uint)((*(float *)(lVar5 + 0x234) - *(float *)(lVar5 + 0x22c)) *
                                          fVar11)));
        *(undefined4 *)(lVar5 + 0xb4) = 0;
        *(undefined4 *)(lVar5 + 0xbc) = 0;
        *(float *)(lVar5 + 0xac) = *(float *)(lVar5 + 0x9c) - (float)(int)auVar9._0_4_ * fVar12;
        *(undefined4 *)(lVar3 + 0x150c) = *(undefined4 *)(lVar3 + 4);
      }
    }
  }
  return;
}



