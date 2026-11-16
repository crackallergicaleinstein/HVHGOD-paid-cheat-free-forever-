// FUN_18045c410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045c410 */

float * FUN_18045c410(float *param_1,undefined8 param_2,char param_3,float param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  float local_res8;
  float local_resc;
  float local_88;
  float local_84;
  
  lVar6 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar1 = *(longlong **)(lVar6 + 0x14d0);
  fVar7 = *(float *)(plVar1 + 0x23);
  fVar12 = *(float *)((longlong)plVar1 + 0x11c);
  if ((plVar1[0x39] != 0) || (lVar4 = 0x280, *(longlong *)(lVar6 + 0x2338) != 0)) {
    lVar4 = 0x250;
  }
  fVar8 = *(float *)((longlong)plVar1 + lVar4) - fVar7;
  auVar14 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_4 * DAT_180b0a41c + 0.5)),1);
  auVar11 = ZEXT1664(auVar14);
  local_resc = auVar14._0_4_;
  local_res8 = fVar8;
  FUN_1804c6420(&local_res8,0xbf800000);
  auVar15 = ZEXT464(0x3f800000);
  fVar8 = fVar8 + fVar7;
  fVar13 = auVar11._0_4_ + fVar12;
  param_1[4] = auVar11._0_4_ * 0.5 + fVar12;
  *param_1 = fVar7;
  param_1[1] = fVar12;
  param_1[2] = fVar8;
  param_1[3] = fVar13;
  fVar9 = 0.0;
  if (((*(longlong **)(lVar6 + 0x14d8) != plVar1) || (*(int *)(lVar6 + 0x1550) != 0)) ||
     (*(float *)(lVar6 + 0x110) < fVar7)) {
LAB_18045c72a:
    cVar5 = '\0';
    *(undefined1 *)(param_1 + 5) = 0;
LAB_18045c731:
    *(undefined1 *)((longlong)param_1 + 0x15) = 0;
    if ((cVar5 == '\0') && (param_3 == '\0')) {
      auVar14 = ZEXT816(0);
      goto LAB_18045c5d2;
    }
  }
  else {
    if (((*(float *)(lVar6 + 0x114) < fVar12) || (fVar8 <= *(float *)(lVar6 + 0x110))) ||
       (fVar13 <= *(float *)(lVar6 + 0x114))) goto LAB_18045c72a;
    cVar5 = '\x01';
    *(undefined1 *)(param_1 + 5) = 1;
    cVar2 = FUN_1804c3590(0);
    if ((cVar2 == '\0') || (*(float *)(lVar6 + 0xaf0) < fVar7)) goto LAB_18045c731;
    if ((*(float *)(lVar6 + 0xaf4) < fVar12) ||
       ((fVar8 <= *(float *)(lVar6 + 0xaf0) || (fVar13 <= *(float *)(lVar6 + 0xaf4)))))
    goto LAB_18045c731;
    *(char *)((longlong)param_1 + 0x15) = cVar5;
  }
  auVar14 = auVar15._0_16_;
LAB_18045c5d2:
  auVar11 = ZEXT1664(auVar14);
  iVar3 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  uVar10 = auVar11._0_8_;
  if (*(int *)(*plVar1 + 0x1534) == iVar3) {
    FUN_1804cf810(iVar3,0xb,param_2);
    uVar10 = auVar11._0_8_;
  }
  fVar7 = (float)FUN_1804aaa10(iVar3,uVar10,0x41900000);
  if (fVar9 < fVar7) {
    fVar7 = ((float)(DAT_180b0a42c >> 0x18) / 255.0) * fVar7;
    if (fVar9 <= fVar7) {
      auVar14 = vminss_avx(auVar15._0_16_,ZEXT416((uint)fVar7));
      fVar9 = auVar14._0_4_;
    }
    local_res8 = param_1[2];
    local_resc = param_1[3] - DAT_180b0a41c * 0.7;
    local_84 = DAT_180b0a41c * 0.7 + param_1[1];
    local_88 = *param_1;
    FUN_1804df870(plVar1[0x59],&local_88,&local_res8,
                  (int)(longlong)(fVar9 * 255.0 + 0.5) << 0x18 | DAT_180b0a42c & 0xffffff,
                  DAT_180b0a41c * 5.0,0);
  }
  return param_1;
}



