// FUN_18019d260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019d260 */

undefined8 FUN_18019d260(longlong param_1,short param_2,int *param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  size_t _Size;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  short sVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  ULONGLONG UVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  ulonglong **ppuVar23;
  ulonglong **ppuVar24;
  longlong *plVar25;
  longlong *plVar26;
  int *piVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int *piVar37;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [64];
  double dVar45;
  undefined8 in_stack_fffffffffffffa48;
  undefined4 uVar46;
  char local_568 [2];
  short local_566;
  int *local_558;
  undefined8 local_550;
  undefined1 local_548 [16];
  int *local_538;
  undefined1 local_530 [16];
  undefined1 local_518 [16];
  int *local_508 [2];
  char *local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [32];
  undefined8 local_4c8;
  longlong local_4b8;
  longlong lStack_4b0;
  undefined1 auStack_4a8 [512];
  int local_2a8;
  char local_2a4;
  ulonglong *local_298;
  longlong lStack_290;
  int local_88;
  char local_84;
  
  uVar46 = (undefined4)((ulonglong)in_stack_fffffffffffffa48 >> 0x20);
  local_530._0_8_ = param_4;
  local_566 = param_2;
  local_508[0] = param_3;
  uVar13 = FUN_18019f170(&local_298,param_3);
  piVar14 = (int *)FUN_18021adc0(extraout_XMM0_Qa,param_2,uVar13);
  iVar11 = DAT_180bb8558;
  if (piVar14 == (int *)0x0) {
    return 0;
  }
  local_558 = piVar14;
  if (DAT_180bb8558 == 0) {
    UVar15 = GetTickCount64();
    if (DAT_180bb8550 <= UVar15) {
      local_538 = (int *)&DAT_1808d8770;
      iVar11 = FUN_1805f68d0(&DAT_1808d8770);
      if (iVar11 != 0) goto LAB_18019f165;
      if (DAT_1808d87bc == 0x7fffffff) {
        DAT_1808d87bc = 0x7ffffffe;
        goto LAB_18019f15a;
      }
      if ((DAT_180bb8558 == 0) && (DAT_180bb8550 <= UVar15)) {
        DAT_180bb8558 = FUN_1804174b0("C_EconItemView",0x34b55816);
        if (DAT_180bb8558 == 0) {
          DAT_180bb8550 = UVar15 + 1000;
        }
        else {
          DAT_180bb8550 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180bb8558;
      FUN_1805f68fc(&DAT_1808d8770);
    }
    param_2 = local_566;
  }
  lVar29 = (longlong)iVar11 + *(longlong *)(param_1 + 0x10);
  lVar16 = FUN_18017ea70();
  *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
  if (lVar29 == 0) {
    bVar6 = false;
    piVar37 = (int *)local_530._0_8_;
  }
  else {
    local_538 = (int *)0x0;
    cVar10 = FUN_1804514f0(&local_538,lVar29,8);
    if (cVar10 == '\0') {
      bVar6 = false;
      piVar37 = (int *)local_530._0_8_;
    }
    else {
      bVar6 = true;
      piVar37 = local_538;
    }
  }
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (((((*(char *)(param_1 + 0x21) == '\0') || (*(short *)(param_1 + 0x24) != param_2)) ||
       (*(int *)(param_1 + 0x28) != *param_3)) ||
      ((*(float *)(param_1 + 0x2c) != (float)param_3[1] || (*(int *)(param_1 + 0x30) != param_3[2]))
      )) || ((*(char *)(param_1 + 0x34) != (char)param_3[3] ||
             (*(int *)(param_1 + 0x38) != param_3[4])))) {
LAB_18019d659:
    bVar7 = false;
  }
  else {
    piVar27 = param_3 + 6;
    puVar22 = (undefined8 *)(param_1 + 0x40);
    if (0xf < *(ulonglong *)(param_3 + 0xc)) {
      piVar27 = *(int **)piVar27;
    }
    _Size = *(size_t *)(param_1 + 0x50);
    if (0xf < *(ulonglong *)(param_1 + 0x58)) {
      puVar22 = (undefined8 *)*puVar22;
    }
    if ((((_Size != *(size_t *)(param_3 + 10)) ||
         ((_Size != 0 && (iVar11 = memcmp(puVar22,piVar27,_Size), iVar11 != 0)))) ||
        (cVar10 = FUN_18019c200(param_1 + 0x70,param_3 + 0x12), cVar10 == '\0')) ||
       ((((*(int *)(param_1 + 0xfc) != param_3[0x35] || (*(int *)(param_1 + 0x100) != param_3[0x36])
          ) || (*(float *)(param_1 + 0x104) != (float)param_3[0x37])) ||
        (((*(float *)(param_1 + 0x108) != (float)param_3[0x38] ||
          (*(float *)(param_1 + 0x10c) != (float)param_3[0x39])) ||
         (*(char *)(param_1 + 0x110) != (char)param_3[0x3a])))))) goto LAB_18019d659;
    bVar7 = true;
    piVar27 = (int *)(param_1 + 0x28);
    if ((bVar6) && (piVar37 == piVar14)) {
      local_538 = piVar27;
      if ((*(char *)(param_1 + 0x20) == '\0') && (*(char *)(param_1 + 0x32c) == '\0')) {
        plVar17 = (longlong *)FUN_18019a780(&local_298,*(undefined8 *)(param_1 + 8));
        lVar29 = 4;
        lVar16 = 4;
        plVar25 = &local_4b8;
        do {
          plVar26 = plVar25;
          plVar21 = plVar17;
          lVar20 = plVar21[1];
          lVar31 = plVar21[2];
          lVar3 = plVar21[3];
          *plVar26 = *plVar21;
          plVar26[1] = lVar20;
          plVar26[2] = lVar31;
          plVar26[3] = lVar3;
          lVar20 = plVar21[5];
          lVar31 = plVar21[6];
          lVar3 = plVar21[7];
          plVar26[4] = plVar21[4];
          plVar26[5] = lVar20;
          plVar26[6] = lVar31;
          plVar26[7] = lVar3;
          lVar20 = plVar21[9];
          lVar31 = plVar21[10];
          lVar3 = plVar21[0xb];
          plVar26[8] = plVar21[8];
          plVar26[9] = lVar20;
          plVar26[10] = lVar31;
          plVar26[0xb] = lVar3;
          lVar20 = plVar21[0xd];
          plVar26[0xc] = plVar21[0xc];
          plVar26[0xd] = lVar20;
          lVar20 = plVar21[0xf];
          plVar26[0xe] = plVar21[0xe];
          plVar26[0xf] = lVar20;
          lVar16 = lVar16 + -1;
          plVar17 = plVar21 + 0x10;
          plVar25 = plVar26 + 0x10;
        } while (lVar16 != 0);
        lVar16 = plVar21[0x11];
        plVar26[0x10] = plVar21[0x10];
        plVar26[0x11] = lVar16;
        plVar26[0x12] = plVar21[0x12];
        plVar17 = &local_4b8;
        plVar25 = (longlong *)(param_1 + 0x118);
        do {
          plVar26 = plVar25;
          plVar21 = plVar17;
          lVar16 = plVar21[1];
          lVar20 = plVar21[2];
          lVar31 = plVar21[3];
          *plVar26 = *plVar21;
          plVar26[1] = lVar16;
          plVar26[2] = lVar20;
          plVar26[3] = lVar31;
          lVar16 = plVar21[5];
          lVar20 = plVar21[6];
          lVar31 = plVar21[7];
          plVar26[4] = plVar21[4];
          plVar26[5] = lVar16;
          plVar26[6] = lVar20;
          plVar26[7] = lVar31;
          lVar16 = plVar21[9];
          lVar20 = plVar21[10];
          lVar31 = plVar21[0xb];
          plVar26[8] = plVar21[8];
          plVar26[9] = lVar16;
          plVar26[10] = lVar20;
          plVar26[0xb] = lVar31;
          lVar16 = plVar21[0xd];
          plVar26[0xc] = plVar21[0xc];
          plVar26[0xd] = lVar16;
          lVar16 = plVar21[0xf];
          plVar26[0xe] = plVar21[0xe];
          plVar26[0xf] = lVar16;
          lVar29 = lVar29 + -1;
          plVar17 = plVar21 + 0x10;
          plVar25 = plVar26 + 0x10;
        } while (lVar29 != 0);
        lVar16 = plVar21[0x11];
        plVar26[0x10] = plVar21[0x10];
        plVar26[0x11] = lVar16;
        plVar26[0x12] = plVar21[0x12];
      }
      *(int **)(param_1 + 0x18) = piVar14;
      FUN_18017edf0(piVar27,param_3);
      *(undefined1 *)(param_1 + 0x22) = 0;
      return 1;
    }
  }
  local_538 = (int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x20) == '\0') {
    plVar17 = (longlong *)FUN_18019a780(&local_4b8,*(undefined8 *)(param_1 + 8));
    lVar16 = 4;
    ppuVar23 = &local_298;
    do {
      puVar19 = (ulonglong *)plVar17[1];
      puVar4 = (ulonglong *)plVar17[2];
      puVar5 = (ulonglong *)plVar17[3];
      *ppuVar23 = (ulonglong *)*plVar17;
      ppuVar23[1] = puVar19;
      ppuVar23[2] = puVar4;
      ppuVar23[3] = puVar5;
      puVar19 = (ulonglong *)plVar17[5];
      puVar4 = (ulonglong *)plVar17[6];
      puVar5 = (ulonglong *)plVar17[7];
      ppuVar23[4] = (ulonglong *)plVar17[4];
      ppuVar23[5] = puVar19;
      ppuVar23[6] = puVar4;
      ppuVar23[7] = puVar5;
      puVar19 = (ulonglong *)plVar17[9];
      puVar4 = (ulonglong *)plVar17[10];
      puVar5 = (ulonglong *)plVar17[0xb];
      ppuVar23[8] = (ulonglong *)plVar17[8];
      ppuVar23[9] = puVar19;
      ppuVar23[10] = puVar4;
      ppuVar23[0xb] = puVar5;
      puVar19 = (ulonglong *)plVar17[0xd];
      ppuVar23[0xc] = (ulonglong *)plVar17[0xc];
      ppuVar23[0xd] = puVar19;
      ppuVar24 = ppuVar23 + 0x10;
      puVar19 = (ulonglong *)plVar17[0xf];
      ppuVar23[0xe] = (ulonglong *)plVar17[0xe];
      ppuVar23[0xf] = puVar19;
      plVar17 = plVar17 + 0x10;
      lVar16 = lVar16 + -1;
      ppuVar23 = ppuVar24;
    } while (lVar16 != 0);
  }
  else {
    local_4b8 = 0;
    lStack_4b0 = 0;
    FUN_18063ab10(auStack_4a8,0,0x200);
    local_2a8 = 0;
    local_2a4 = '\0';
    plVar17 = &local_4b8;
    lVar16 = 4;
    ppuVar23 = &local_298;
    do {
      puVar19 = (ulonglong *)plVar17[1];
      puVar4 = (ulonglong *)plVar17[2];
      puVar5 = (ulonglong *)plVar17[3];
      *ppuVar23 = (ulonglong *)*plVar17;
      ppuVar23[1] = puVar19;
      ppuVar23[2] = puVar4;
      ppuVar23[3] = puVar5;
      puVar19 = (ulonglong *)plVar17[5];
      puVar4 = (ulonglong *)plVar17[6];
      puVar5 = (ulonglong *)plVar17[7];
      ppuVar23[4] = (ulonglong *)plVar17[4];
      ppuVar23[5] = puVar19;
      ppuVar23[6] = puVar4;
      ppuVar23[7] = puVar5;
      puVar19 = (ulonglong *)plVar17[9];
      puVar4 = (ulonglong *)plVar17[10];
      puVar5 = (ulonglong *)plVar17[0xb];
      ppuVar23[8] = (ulonglong *)plVar17[8];
      ppuVar23[9] = puVar19;
      ppuVar23[10] = puVar4;
      ppuVar23[0xb] = puVar5;
      puVar19 = (ulonglong *)plVar17[0xd];
      ppuVar23[0xc] = (ulonglong *)plVar17[0xc];
      ppuVar23[0xd] = puVar19;
      ppuVar24 = ppuVar23 + 0x10;
      puVar19 = (ulonglong *)plVar17[0xf];
      ppuVar23[0xe] = (ulonglong *)plVar17[0xe];
      ppuVar23[0xf] = puVar19;
      plVar17 = plVar17 + 0x10;
      lVar16 = lVar16 + -1;
      ppuVar23 = ppuVar24;
    } while (lVar16 != 0);
  }
  lVar29 = 4;
  puVar19 = (ulonglong *)plVar17[1];
  *ppuVar24 = (ulonglong *)*plVar17;
  ppuVar24[1] = puVar19;
  ppuVar24[2] = (ulonglong *)plVar17[2];
  lVar16 = 4;
  ppuVar23 = &local_298;
  plVar17 = &local_4b8;
  do {
    plVar25 = plVar17;
    ppuVar24 = ppuVar23;
    puVar19 = ppuVar24[1];
    puVar4 = ppuVar24[2];
    puVar5 = ppuVar24[3];
    *plVar25 = (longlong)*ppuVar24;
    plVar25[1] = (longlong)puVar19;
    plVar25[2] = (longlong)puVar4;
    plVar25[3] = (longlong)puVar5;
    puVar19 = ppuVar24[5];
    puVar4 = ppuVar24[6];
    puVar5 = ppuVar24[7];
    plVar25[4] = (longlong)ppuVar24[4];
    plVar25[5] = (longlong)puVar19;
    plVar25[6] = (longlong)puVar4;
    plVar25[7] = (longlong)puVar5;
    puVar19 = ppuVar24[9];
    puVar4 = ppuVar24[10];
    puVar5 = ppuVar24[0xb];
    plVar25[8] = (longlong)ppuVar24[8];
    plVar25[9] = (longlong)puVar19;
    plVar25[10] = (longlong)puVar4;
    plVar25[0xb] = (longlong)puVar5;
    puVar19 = ppuVar24[0xd];
    plVar25[0xc] = (longlong)ppuVar24[0xc];
    plVar25[0xd] = (longlong)puVar19;
    puVar19 = ppuVar24[0xf];
    plVar25[0xe] = (longlong)ppuVar24[0xe];
    plVar25[0xf] = (longlong)puVar19;
    lVar16 = lVar16 + -1;
    ppuVar23 = ppuVar24 + 0x10;
    plVar17 = plVar25 + 0x10;
  } while (lVar16 != 0);
  puVar19 = ppuVar24[0x11];
  plVar25[0x10] = (longlong)ppuVar24[0x10];
  plVar25[0x11] = (longlong)puVar19;
  plVar25[0x12] = (longlong)ppuVar24[0x12];
  cVar10 = *(char *)(param_1 + 0x20);
  if (((((cVar10 != '\0') || (!bVar7)) || (cVar2 = *(char *)(param_1 + 0x32c), cVar2 == '\0')) ||
      (((local_84 == '\0' || (iVar11 = *(int *)(param_1 + 0x328), iVar11 < 1)) ||
       ((*(ulonglong **)(param_1 + 0x118) != local_298 ||
        ((*(longlong *)(param_1 + 0x120) != lStack_290 ||
         (iVar12 = memcmp((void *)(param_1 + 0x128),auStack_4a8,0x200), iVar12 != 0)))))))) ||
     ((iVar11 != local_88 || (cVar2 != local_84)))) {
    local_568[0] = '\0';
    if (cVar10 == '\0') goto LAB_18019d869;
  }
  else {
    local_568[0] = '\x01';
LAB_18019d869:
    piVar14 = (int *)FUN_180184240(local_4e8,*(undefined8 *)(param_1 + 8));
    local_4c8._1_1_ = (char)((ulonglong)*(undefined8 *)(piVar14 + 8) >> 8);
    if ((local_4c8._1_1_ == '\0') || (local_4c8 = *(undefined8 *)(piVar14 + 8), *piVar14 != 0))
    goto LAB_18019d894;
  }
  if ((*(char *)(local_530._0_8_ + 0x12) == '\0') || (*(char *)(local_530._0_8_ + 0x10) != '\0')) {
LAB_18019f147:
    *(undefined1 *)(local_530._0_8_ + 0x11) = 1;
    return 0;
  }
  if (*(ulonglong *)(local_530._0_8_ + 8) < **(ulonglong **)local_530._0_8_) goto LAB_18019f147;
  **(ulonglong **)local_530._0_8_ = *(ulonglong *)(local_530._0_8_ + 8) + 0x10;
  *(undefined1 *)(local_530._0_8_ + 0x10) = 1;
  local_518 = ZEXT816(0x1807c54c8);
  FUN_18017bf40(local_518 + 8);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = FUN_18019f170(&local_298,param_3);
  sVar9 = local_566;
  lVar16 = FUN_18021adc0(extraout_XMM0_Qa_00,local_566,uVar18);
  if ((lVar16 == 0) ||
     (cVar10 = FUN_1802224f0(*param_3,uVar13,sVar9,lVar16,CONCAT44(uVar46,*param_3),param_3 + 6),
     cVar10 == '\0')) {
    FUN_18017bf40(local_508);
    piVar14 = local_508[0];
    uVar30 = (longlong)local_508[0] - local_518._8_8_;
    puVar19 = (ulonglong *)FUN_1801b1b20();
    uVar33 = *puVar19 + 1;
    *puVar19 = uVar33;
    uVar28 = puVar19[1] + uVar30;
    puVar19[1] = uVar28;
    uVar34 = puVar19[3] + (ulonglong)(999999 < uVar30);
    puVar19[3] = uVar34;
    uVar35 = puVar19[4] + (ulonglong)(4999999 < uVar30);
    puVar19[4] = uVar35;
    uVar36 = puVar19[5] + (ulonglong)(15999999 < uVar30);
    puVar19[5] = uVar36;
    uVar32 = puVar19[2];
    if (puVar19[2] < uVar30) {
      puVar19[2] = uVar30;
      uVar32 = uVar30;
    }
    if ((piVar14 != (int *)puVar19[7]) && ((longlong)piVar14 < (longlong)puVar19[7])) {
      return 0;
    }
    dVar40 = (double)(longlong)((longlong)piVar14 - puVar19[6]) / 1000000.0;
    if ((longlong)uVar28 < 0) {
      uVar30 = (ulonglong)((uint)uVar28 & 1);
    }
    else {
      uVar30 = uVar28;
    }
    dVar39 = (double)uVar28;
    dVar45 = 0.0;
    if (0.0 < dVar40) {
      dVar45 = (dVar39 / 1000.0) / dVar40;
    }
    dVar43 = dVar39 / 1000000.0;
    if ((longlong)uVar32 < 0) {
      uVar28 = (ulonglong)((uint)uVar32 & 1);
    }
    else {
      uVar28 = uVar32;
    }
    dVar41 = (double)uVar32 / 1000.0;
    if ((longlong)uVar33 < 0) {
      uVar28 = uVar33 >> 1 | (ulonglong)((uint)uVar33 & 1);
    }
    dVar39 = (dVar39 / (double)uVar33) / 1000.0;
    uVar13 = local_518._0_8_;
    goto LAB_18019e583;
  }
  FUN_18017bf40(local_548);
  uVar13 = local_548._0_8_;
  uVar30 = local_548._0_8_ - local_518._8_8_;
  puVar19 = (ulonglong *)FUN_1801b1b20();
  uVar33 = *puVar19 + 1;
  *puVar19 = uVar33;
  uVar32 = puVar19[1];
  puVar19[1] = uVar32 + uVar30;
  uVar34 = puVar19[3] + (ulonglong)(999999 < uVar30);
  puVar19[3] = uVar34;
  uVar35 = puVar19[4] + (ulonglong)(4999999 < uVar30);
  puVar19[4] = uVar35;
  uVar36 = puVar19[5] + (ulonglong)(15999999 < uVar30);
  puVar19[5] = uVar36;
  uVar28 = puVar19[2];
  if (puVar19[2] < uVar30) {
    puVar19[2] = uVar30;
    uVar28 = uVar30;
  }
  dVar43 = 1000000.0;
  dVar45 = 0.0;
  dVar39 = 1000.0;
  if ((uVar13 == puVar19[7]) || ((longlong)puVar19[7] <= (longlong)uVar13)) {
    dVar42 = (double)(longlong)(uVar13 - puVar19[6]) / 1000000.0;
    dVar40 = (double)(uVar32 + uVar30);
    if (dVar42 <= 0.0) {
      dVar41 = 0.0;
    }
    else {
      dVar41 = (dVar40 / 1000.0) / dVar42;
    }
    dVar38 = (dVar40 / (double)uVar33) / 1000.0;
    FUN_1801af8a0(dVar40 / (double)uVar33,dVar38,local_518._0_8_,uVar34,uVar33,dVar38,
                  (double)uVar28 / 1000.0,dVar40 / 1000000.0,dVar42,dVar41,uVar34,uVar35,uVar36);
    puVar19[2] = 0;
    puVar19[1] = 0;
    *puVar19 = 0;
    puVar19[5] = 0;
    puVar19[4] = 0;
    puVar19[3] = 0;
    puVar19[6] = uVar13;
    puVar19[7] = uVar13 + 5000000000;
  }
  *(int **)(param_1 + 0x18) = local_558;
  *(undefined1 *)(param_1 + 0x21) = 0;
  iVar11 = DAT_180bb8548;
  local_548._0_2_ = sVar9;
  if ((DAT_180bb8548 == 0) && (UVar15 = GetTickCount64(), DAT_180bb8540 <= UVar15)) {
    local_558 = (int *)&DAT_1808d8720;
    iVar11 = FUN_1805f68d0(&DAT_1808d8720);
    if (iVar11 != 0) goto LAB_18019f165;
    if (DAT_1808d876c == 0x7fffffff) {
      DAT_1808d876c = 0x7ffffffe;
      goto LAB_18019f15a;
    }
    if ((DAT_180bb8548 == 0) && (DAT_180bb8540 <= UVar15)) {
      DAT_180bb8548 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
      if (DAT_180bb8548 == 0) {
        DAT_180bb8540 = UVar15 + 1000;
      }
      else {
        DAT_180bb8540 = 0xffffffffffffffff;
      }
    }
    iVar11 = DAT_180bb8548;
    FUN_1805f68fc(&DAT_1808d8720);
  }
  lVar16 = (longlong)iVar11 + *(longlong *)(param_1 + 0x10);
  cVar10 = FUN_1804513c0(lVar16,2,1);
  if (cVar10 == '\0') {
    return 0;
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  cVar10 = FUN_1801aec90(lVar16,local_548);
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  iVar12 = DAT_180bb8538;
  iVar11 = DAT_180bb8518;
  if (cVar10 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    local_568[0] = '\x01';
    if ((DAT_180bb8538 == 0) && (UVar15 = GetTickCount64(), DAT_180bb8530 <= UVar15)) {
      local_508[0] = (int *)&DAT_1808d86d0;
      iVar11 = FUN_1805f68d0(&DAT_1808d86d0);
      if (iVar11 != 0) goto LAB_18019f165;
      if (DAT_1808d871c == 0x7fffffff) {
        DAT_1808d871c = 0x7ffffffe;
        goto LAB_18019f15a;
      }
      if ((DAT_180bb8538 == 0) && (DAT_180bb8530 <= UVar15)) {
        DAT_180bb8538 = FUN_1804174b0("C_EconItemView",0x33e8ae5a);
        if (DAT_180bb8538 == 0) {
          DAT_180bb8530 = UVar15 + 1000;
        }
        else {
          DAT_180bb8530 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180bb8538;
      FUN_1805f68fc(&DAT_1808d86d0);
    }
    lVar16 = (longlong)iVar12 + *(longlong *)(param_1 + 0x10);
    cVar10 = FUN_1804513c0(lVar16,1,1);
    if (cVar10 == '\0') {
      return 0;
    }
    lVar29 = FUN_18017ea70();
    *(int *)(lVar29 + 4) = *(int *)(lVar29 + 4) + 1;
    cVar10 = FUN_1801ad7b0(lVar16,local_568);
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    if (cVar10 == '\0') {
      return 0;
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar29 = DAT_1808da460;
    lVar16 = DAT_1808d86c0;
    if ((DAT_1808d86c0 != DAT_1808da460) || (lVar20 = DAT_180bb8528, DAT_180bb8528 == 0)) {
      UVar15 = GetTickCount64();
      if ((lVar16 == lVar29) && (UVar15 < DAT_180bb8520)) {
        return 0;
      }
      local_508[0] = (int *)&DAT_1808d8670;
      iVar11 = FUN_1805f68d0(&DAT_1808d8670);
      if (iVar11 != 0) goto LAB_18019f165;
      if (DAT_1808d86bc == 0x7fffffff) {
        DAT_1808d86bc = 0x7ffffffe;
        goto LAB_18019f15a;
      }
      uVar32 = 1000;
      if (DAT_1808d86c0 == lVar29) {
        if ((DAT_180bb8528 == 0) && (DAT_180bb8520 <= UVar15)) goto LAB_18019de03;
      }
      else {
        DAT_1808d8660 = 1000;
LAB_18019de03:
        lVar16 = -1;
        do {
          local_518._8_8_ = lVar16 + 1;
          lVar20 = lVar16 + 1;
          lVar16 = local_518._8_8_;
        } while ("client.dll:40534883EC20488BD94881C108020000"[lVar20] != '\0');
        local_518._0_8_ = "client.dll:40534883EC20488BD94881C108020000";
        local_558 = (int *)0x1807c5410;
        local_550 = 0x26;
        DAT_180bb8528 = FUN_1800e5d20(&local_558,local_518);
        DAT_1808d86c0 = lVar29;
        DAT_180bb8520 = 0xffffffffffffffff;
        if (DAT_180bb8528 == 0) {
          DAT_180bb8520 = DAT_1808d8660 + UVar15;
          uVar32 = 60000;
          if (DAT_1808d8660 < 60000) {
            uVar32 = DAT_1808d8660 * 2;
          }
        }
        DAT_1808d8660 = uVar32;
      }
      lVar20 = DAT_180bb8528;
      FUN_1805f68fc(&DAT_1808d8670);
      if (lVar20 == 0) {
        return 0;
      }
    }
    auVar44 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)*param_3));
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    cVar10 = FUN_1804513c0(lVar20,1,2);
    if (cVar10 == '\0') {
      return 0;
    }
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    cVar10 = FUN_1801aebf0(lVar20,uVar13,"set item texture prefab",auVar44._0_8_);
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    if (cVar10 == '\0') {
      return 0;
    }
    auVar44 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)param_3[2]));
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    cVar10 = FUN_1804513c0(lVar20,1,2);
    if (cVar10 == '\0') {
      return 0;
    }
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    cVar10 = FUN_1801aebf0(lVar20,uVar13,"set item texture seed",auVar44._0_8_);
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    if (cVar10 == '\0') {
      return 0;
    }
    auVar44 = ZEXT464((uint)param_3[1]);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    cVar10 = FUN_1804513c0(lVar20,1,2);
    if (cVar10 == '\0') {
      return 0;
    }
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    cVar10 = FUN_1801aebf0(lVar20,uVar13,"set item texture wear",auVar44._0_8_);
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    if (cVar10 == '\0') {
      return 0;
    }
    FUN_18019c2a0(*(undefined8 *)(param_1 + 8));
    goto LAB_18019ef98;
  }
  if ((DAT_180bb8518 == 0) && (UVar15 = GetTickCount64(), DAT_180bb8510 <= UVar15)) {
    local_558 = (int *)&DAT_1808d8610;
    iVar11 = FUN_1805f68d0(&DAT_1808d8610);
    if (iVar11 != 0) goto LAB_18019f165;
    if (DAT_1808d865c == 0x7fffffff) {
      DAT_1808d865c = 0x7ffffffe;
      goto LAB_18019f15a;
    }
    if ((DAT_180bb8518 == 0) && (DAT_180bb8510 <= UVar15)) {
      DAT_180bb8518 = FUN_1804174b0("C_EconEntity",0xa12d48f);
      if (DAT_180bb8518 == 0) {
        DAT_180bb8510 = UVar15 + 1000;
      }
      else {
        DAT_180bb8510 = 0xffffffffffffffff;
      }
    }
    iVar11 = DAT_180bb8518;
    FUN_1805f68fc(&DAT_1808d8610);
  }
  lVar16 = (longlong)iVar11 + *(longlong *)(param_1 + 8);
  cVar10 = FUN_1804513c0(lVar16,4,1);
  if (cVar10 == '\0') {
    return 0;
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  cVar10 = FUN_1801ad800(lVar16,param_3);
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  iVar11 = DAT_180bb8508;
  if (cVar10 == '\0') {
    return 0;
  }
  if ((DAT_180bb8508 == 0) && (UVar15 = GetTickCount64(), DAT_180bb8500 <= UVar15)) {
    local_558 = (int *)&DAT_1808d85c0;
    iVar11 = FUN_1805f68d0(&DAT_1808d85c0);
    if (iVar11 != 0) goto LAB_18019f165;
    if (DAT_1808d860c == 0x7fffffff) {
      DAT_1808d860c = 0x7ffffffe;
      goto LAB_18019f15a;
    }
    if ((DAT_180bb8508 == 0) && (DAT_180bb8500 <= UVar15)) {
      DAT_180bb8508 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
      if (DAT_180bb8508 == 0) {
        DAT_180bb8500 = UVar15 + 1000;
      }
      else {
        DAT_180bb8500 = 0xffffffffffffffff;
      }
    }
    iVar11 = DAT_180bb8508;
    FUN_1805f68fc(&DAT_1808d85c0);
  }
  lVar16 = (longlong)iVar11 + *(longlong *)(param_1 + 8);
  cVar10 = FUN_1804513c0(lVar16,4,1);
  if (cVar10 == '\0') {
    return 0;
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  cVar10 = FUN_1801ad800(lVar16,param_3 + 2);
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  iVar11 = DAT_180bb84f8;
  if (cVar10 == '\0') {
    return 0;
  }
  if ((DAT_180bb84f8 == 0) && (UVar15 = GetTickCount64(), DAT_180bb84f0 <= UVar15)) {
    local_558 = (int *)&DAT_1808d8570;
    iVar11 = FUN_1805f68d0(&DAT_1808d8570);
    if (iVar11 != 0) goto LAB_18019f165;
    if (DAT_1808d85bc == 0x7fffffff) {
      DAT_1808d85bc = 0x7ffffffe;
      goto LAB_18019f15a;
    }
    if ((DAT_180bb84f8 == 0) && (DAT_180bb84f0 <= UVar15)) {
      DAT_180bb84f8 = FUN_1804174b0("C_EconEntity",0x86253266);
      if (DAT_180bb84f8 == 0) {
        DAT_180bb84f0 = UVar15 + 1000;
      }
      else {
        DAT_180bb84f0 = 0xffffffffffffffff;
      }
    }
    iVar11 = DAT_180bb84f8;
    FUN_1805f68fc(&DAT_1808d8570);
  }
  lVar16 = (longlong)iVar11 + *(longlong *)(param_1 + 8);
  cVar10 = FUN_1804513c0(lVar16,4,1);
  if (cVar10 == '\0') {
    return 0;
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  cVar10 = FUN_1801ad800(lVar16,param_3 + 1);
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  iVar11 = DAT_180bb84e8;
  if (cVar10 == '\0') {
    return 0;
  }
  if ((char)param_3[3] == '\0') {
    iVar12 = -1;
  }
  else {
    iVar12 = param_3[4];
  }
  local_548._0_4_ = iVar12;
  if ((DAT_180bb84e8 == 0) && (UVar15 = GetTickCount64(), DAT_180bb84e0 <= UVar15)) {
    local_558 = (int *)&DAT_1808d8520;
    iVar11 = FUN_1805f68d0(&DAT_1808d8520);
    if (iVar11 != 0) goto LAB_18019f165;
    if (DAT_1808d856c == 0x7fffffff) {
      DAT_1808d856c = 0x7ffffffe;
      goto LAB_18019f15a;
    }
    if ((DAT_180bb84e8 == 0) && (DAT_180bb84e0 <= UVar15)) {
      DAT_180bb84e8 = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
      if (DAT_180bb84e8 == 0) {
        DAT_180bb84e0 = UVar15 + 1000;
      }
      else {
        DAT_180bb84e0 = 0xffffffffffffffff;
      }
    }
    iVar11 = DAT_180bb84e8;
    FUN_1805f68fc(&DAT_1808d8520);
  }
  lVar16 = (longlong)iVar11 + *(longlong *)(param_1 + 8);
  cVar10 = FUN_1804513c0(lVar16,4,1);
  if (cVar10 == '\0') {
    return 0;
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  cVar10 = FUN_1801ad800(lVar16,local_548);
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (cVar10 == '\0') {
    return 0;
  }
  local_548 = ZEXT816(0x1807c54e8);
  FUN_18017bf40(local_548 + 8);
  cVar10 = FUN_1801846a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_566);
  if (cVar10 == '\0') {
    FUN_18017bf40(&local_558);
    piVar14 = local_558;
    uVar30 = (longlong)local_558 - local_548._8_8_;
    puVar19 = (ulonglong *)FUN_1801b1d00();
    uVar33 = *puVar19 + 1;
    *puVar19 = uVar33;
    uVar28 = puVar19[1] + uVar30;
    puVar19[1] = uVar28;
    uVar34 = puVar19[3] + (ulonglong)(999999 < uVar30);
    puVar19[3] = uVar34;
    uVar35 = puVar19[4] + (ulonglong)(4999999 < uVar30);
    puVar19[4] = uVar35;
    uVar36 = puVar19[5] + (ulonglong)(15999999 < uVar30);
    puVar19[5] = uVar36;
    uVar32 = puVar19[2];
    if (puVar19[2] < uVar30) {
      puVar19[2] = uVar30;
      uVar32 = uVar30;
    }
    if ((piVar14 != (int *)puVar19[7]) && ((longlong)piVar14 < (longlong)puVar19[7])) {
      return 0;
    }
    dVar40 = (double)(longlong)((longlong)piVar14 - puVar19[6]) / dVar43;
    if ((longlong)uVar28 < 0) {
      uVar30 = (ulonglong)((uint)uVar28 & 1);
    }
    else {
      uVar30 = uVar28;
    }
    dVar42 = (double)uVar28;
    if (dVar45 < dVar40) {
      dVar45 = (dVar42 / dVar39) / dVar40;
    }
    dVar43 = dVar42 / dVar43;
    if ((longlong)uVar32 < 0) {
      uVar28 = (ulonglong)((uint)uVar32 & 1);
    }
    else {
      uVar28 = uVar32;
    }
    dVar41 = (double)uVar32 / dVar39;
    if ((longlong)uVar33 < 0) {
      uVar28 = uVar33 >> 1 | (ulonglong)((uint)uVar33 & 1);
    }
    dVar39 = (dVar42 / (double)uVar33) / dVar39;
    uVar13 = local_548._0_8_;
    goto LAB_18019e583;
  }
  FUN_18017bf40(&local_558);
  piVar14 = local_558;
  uVar30 = (longlong)local_558 - local_548._8_8_;
  puVar19 = (ulonglong *)FUN_1801b1d00();
  uVar33 = *puVar19 + 1;
  *puVar19 = uVar33;
  uVar32 = puVar19[1];
  puVar19[1] = uVar32 + uVar30;
  uVar34 = puVar19[3] + (ulonglong)(999999 < uVar30);
  puVar19[3] = uVar34;
  uVar35 = puVar19[4] + (ulonglong)(4999999 < uVar30);
  puVar19[4] = uVar35;
  uVar36 = puVar19[5] + (ulonglong)(15999999 < uVar30);
  puVar19[5] = uVar36;
  uVar28 = puVar19[2];
  if (puVar19[2] < uVar30) {
    puVar19[2] = uVar30;
    uVar28 = uVar30;
  }
  if ((piVar14 == (int *)puVar19[7]) || ((longlong)puVar19[7] <= (longlong)piVar14)) {
    dVar42 = (double)(longlong)((longlong)piVar14 - puVar19[6]) / dVar43;
    dVar40 = (double)(uVar32 + uVar30);
    if (dVar42 <= dVar45) {
      dVar41 = 0.0;
    }
    else {
      dVar41 = (dVar40 / dVar39) / dVar42;
    }
    dVar38 = (dVar40 / (double)uVar33) / dVar39;
    FUN_1801af8a0(dVar40 / (double)uVar33,dVar38,local_548._0_8_,uVar34,uVar33,dVar38,
                  (double)uVar28 / dVar39,dVar40 / dVar43,dVar42,dVar41,uVar34,uVar35,uVar36);
    puVar19[2] = 0;
    puVar19[1] = 0;
    *puVar19 = 0;
    puVar19[5] = 0;
    puVar19[4] = 0;
    puVar19[3] = 0;
    puVar19[6] = (ulonglong)piVar14;
    puVar19[7] = (ulonglong)(piVar14 + 1250000000);
  }
  local_558 = (int *)FUN_180208890(&DAT_180cc9bb0,*param_3);
  iVar11 = DAT_180bb84d8;
  if ((DAT_180bb84d8 == 0) && (UVar15 = GetTickCount64(), DAT_180bb84d0 <= UVar15)) {
    local_548._0_8_ = &DAT_1808d84d0;
    iVar11 = FUN_1805f68d0(&DAT_1808d84d0);
    if (iVar11 != 0) goto LAB_18019f165;
    if (DAT_1808d851c == 0x7fffffff) {
      DAT_1808d851c = 0x7ffffffe;
      goto LAB_18019f15a;
    }
    if ((DAT_180bb84d8 == 0) && (DAT_180bb84d0 <= UVar15)) {
      DAT_180bb84d8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180bb84d8 == 0) {
        DAT_180bb84d0 = UVar15 + 1000;
      }
      else {
        DAT_180bb84d0 = 0xffffffffffffffff;
      }
    }
    iVar11 = DAT_180bb84d8;
    FUN_1805f68fc(&DAT_1808d84d0);
  }
  lVar20 = (longlong)iVar11 + *(longlong *)(param_1 + 8);
  lVar16 = FUN_18017ea70();
  *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
  if (lVar20 == 0) {
    bVar6 = false;
    piVar14 = local_558;
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_548._8_8_;
    local_548 = auVar8 << 0x40;
    cVar10 = FUN_1804514f0(local_548,lVar20,8);
    if (cVar10 == '\0') {
      bVar6 = false;
      piVar14 = local_558;
    }
    else {
      bVar6 = true;
      piVar14 = (int *)local_548._0_8_;
    }
  }
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (!bVar6) {
    return 0;
  }
  if (piVar14 == (int *)0x0) {
    return 0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar20 = DAT_1808da460;
  lVar16 = DAT_1808d84c0;
  if ((DAT_1808d84c0 != DAT_1808da460) || (lVar31 = DAT_180bb84c8, DAT_180bb84c8 == 0)) {
    UVar15 = GetTickCount64();
    if ((lVar16 == lVar20) && (UVar15 < DAT_180bb84c0)) {
      lVar31 = 0;
    }
    else {
      local_548._0_8_ = &DAT_1808d8470;
      iVar11 = FUN_1805f68d0(&DAT_1808d8470);
      if (iVar11 != 0) {
LAB_18019f165:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808d84bc == 0x7fffffff) {
        DAT_1808d84bc = 0x7ffffffe;
LAB_18019f15a:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar32 = 1000;
      if (DAT_1808d84c0 == lVar20) {
        if ((DAT_180bb84c8 == 0) && (DAT_180bb84c0 <= UVar15)) goto LAB_18019e978;
      }
      else {
        DAT_1808d8460 = 1000;
LAB_18019e978:
        lVar16 = -1;
        do {
          local_518._8_8_ = lVar16 + 1;
          pcVar1 = "lient.dll:48895C24??48897424??574883EC??488D99????????488B71" + lVar16;
          lVar16 = local_518._8_8_;
        } while (*pcVar1 != '\0');
        local_518._0_8_ = &DAT_1808248d8;
        local_4f8 = "patterns::weapon_set_mesh_group_mask";
        local_4f0 = 0x24;
        DAT_180bb84c8 = FUN_1800e5d20(&local_4f8,local_518);
        DAT_1808d84c0 = lVar20;
        DAT_180bb84c0 = 0xffffffffffffffff;
        if (DAT_180bb84c8 == 0) {
          DAT_180bb84c0 = UVar15 + DAT_1808d8460;
          uVar32 = 60000;
          if (DAT_1808d8460 < 60000) {
            uVar32 = DAT_1808d8460 * 2;
          }
        }
        DAT_1808d8460 = uVar32;
      }
      lVar31 = DAT_180bb84c8;
      FUN_1805f68fc(&DAT_1808d8470);
    }
  }
  uVar13 = 2;
  if ((local_558 == (int *)0x0) || ((char)local_558[0x24] == '\0')) {
    uVar13 = 1;
  }
  cVar10 = FUN_180183be0(piVar14,uVar13,lVar31);
  if (cVar10 == '\0') {
    return 0;
  }
  puVar22 = (undefined8 *)(param_1 + 8);
  if (local_568[0] == '\0') {
LAB_18019eb37:
    piVar14 = (int *)FUN_180184240(local_4e8,*puVar22);
    local_4c8._1_1_ = (char)((ulonglong)*(undefined8 *)(piVar14 + 8) >> 8);
    if ((local_4c8._1_1_ == '\0') || (*piVar14 != 0)) {
LAB_18019d894:
      *(undefined1 *)(local_530._0_8_ + 0x11) = 1;
      DAT_180bbea20 = DAT_180bbea20 + 1;
      return 0;
    }
    local_530 = ZEXT816(0x1807c5510);
    local_4c8 = *(undefined8 *)(piVar14 + 8);
    FUN_18017bf40(local_530 + 8);
    cVar10 = FUN_18022de40(*puVar22);
    if (cVar10 == '\0') {
      FUN_18017bf40(&local_558);
      piVar14 = local_558;
      uVar30 = (longlong)local_558 - local_530._8_8_;
      puVar19 = (ulonglong *)FUN_1801b1ee0();
      uVar33 = *puVar19 + 1;
      *puVar19 = uVar33;
      uVar28 = puVar19[1] + uVar30;
      puVar19[1] = uVar28;
      uVar34 = puVar19[3] + (ulonglong)(999999 < uVar30);
      puVar19[3] = uVar34;
      uVar35 = puVar19[4] + (ulonglong)(4999999 < uVar30);
      puVar19[4] = uVar35;
      uVar36 = puVar19[5] + (ulonglong)(15999999 < uVar30);
      puVar19[5] = uVar36;
      uVar32 = puVar19[2];
      if (puVar19[2] < uVar30) {
        puVar19[2] = uVar30;
        uVar32 = uVar30;
      }
      if ((piVar14 != (int *)puVar19[7]) && ((longlong)piVar14 < (longlong)puVar19[7])) {
        return 0;
      }
      dVar40 = (double)(longlong)((longlong)piVar14 - puVar19[6]) / dVar43;
      if ((longlong)uVar28 < 0) {
        uVar30 = (ulonglong)((uint)uVar28 & 1);
      }
      else {
        uVar30 = uVar28;
      }
      dVar42 = (double)uVar28;
      if (dVar45 < dVar40) {
        dVar45 = (dVar42 / dVar39) / dVar40;
      }
      dVar43 = dVar42 / dVar43;
      if ((longlong)uVar32 < 0) {
        uVar28 = (ulonglong)((uint)uVar32 & 1);
      }
      else {
        uVar28 = uVar32;
      }
      dVar41 = (double)uVar32 / dVar39;
      if ((longlong)uVar33 < 0) {
        uVar28 = uVar33 >> 1 | (ulonglong)((uint)uVar33 & 1);
      }
      dVar39 = (dVar42 / (double)uVar33) / dVar39;
      uVar13 = local_530._0_8_;
LAB_18019e583:
      FUN_1801af8a0(uVar28,uVar30,uVar13,uVar34,uVar33,dVar39,dVar41,dVar43,dVar40,dVar45,uVar34,
                    uVar35,uVar36);
      puVar19[2] = 0;
      puVar19[1] = 0;
      *puVar19 = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      puVar19[3] = 0;
      puVar19[6] = (ulonglong)piVar14;
      puVar19[7] = (ulonglong)(piVar14 + 1250000000);
      return 0;
    }
    DAT_180bbea18 = DAT_180bbea18 + 1;
    FUN_18017bf40(&local_558);
    piVar14 = local_558;
    uVar30 = (longlong)local_558 - local_530._8_8_;
    puVar19 = (ulonglong *)FUN_1801b1ee0();
    uVar33 = *puVar19 + 1;
    *puVar19 = uVar33;
    uVar32 = puVar19[1];
    puVar19[1] = uVar32 + uVar30;
    uVar34 = puVar19[3] + (ulonglong)(999999 < uVar30);
    puVar19[3] = uVar34;
    uVar35 = puVar19[4] + (ulonglong)(4999999 < uVar30);
    puVar19[4] = uVar35;
    uVar36 = puVar19[5] + (ulonglong)(15999999 < uVar30);
    puVar19[5] = uVar36;
    uVar28 = puVar19[2];
    if (puVar19[2] < uVar30) {
      puVar19[2] = uVar30;
      uVar28 = uVar30;
    }
    if ((piVar14 == (int *)puVar19[7]) || ((longlong)puVar19[7] <= (longlong)piVar14)) {
      dVar42 = (double)(longlong)((longlong)piVar14 - puVar19[6]) / dVar43;
      dVar40 = (double)(uVar32 + uVar30);
      if (dVar45 < dVar42) {
        dVar45 = (dVar40 / dVar39) / dVar42;
      }
      dVar41 = (dVar40 / (double)uVar33) / dVar39;
      FUN_1801af8a0(dVar40 / (double)uVar33,dVar41,local_530._0_8_,uVar34,uVar33,dVar41,
                    (double)uVar28 / dVar39,dVar40 / dVar43,dVar42,dVar45,uVar34,uVar35,uVar36);
      puVar19[2] = 0;
      puVar19[1] = 0;
      *puVar19 = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      puVar19[3] = 0;
      puVar19[6] = (ulonglong)piVar14;
      puVar19[7] = (ulonglong)(piVar14 + 1250000000);
    }
  }
  else {
    plVar17 = (longlong *)FUN_18019a780(&local_298,*puVar22);
    lVar16 = 4;
    plVar25 = &local_4b8;
    do {
      plVar26 = plVar25;
      plVar21 = plVar17;
      lVar20 = plVar21[1];
      lVar31 = plVar21[2];
      lVar3 = plVar21[3];
      *plVar26 = *plVar21;
      plVar26[1] = lVar20;
      plVar26[2] = lVar31;
      plVar26[3] = lVar3;
      lVar20 = plVar21[5];
      lVar31 = plVar21[6];
      lVar3 = plVar21[7];
      plVar26[4] = plVar21[4];
      plVar26[5] = lVar20;
      plVar26[6] = lVar31;
      plVar26[7] = lVar3;
      lVar20 = plVar21[9];
      lVar31 = plVar21[10];
      lVar3 = plVar21[0xb];
      plVar26[8] = plVar21[8];
      plVar26[9] = lVar20;
      plVar26[10] = lVar31;
      plVar26[0xb] = lVar3;
      lVar20 = plVar21[0xd];
      plVar26[0xc] = plVar21[0xc];
      plVar26[0xd] = lVar20;
      lVar20 = plVar21[0xf];
      plVar26[0xe] = plVar21[0xe];
      plVar26[0xf] = lVar20;
      lVar16 = lVar16 + -1;
      plVar17 = plVar21 + 0x10;
      plVar25 = plVar26 + 0x10;
    } while (lVar16 != 0);
    lVar16 = plVar21[0x11];
    plVar26[0x10] = plVar21[0x10];
    plVar26[0x11] = lVar16;
    plVar26[0x12] = plVar21[0x12];
    cVar2 = local_2a4;
    cVar10 = *(char *)(param_1 + 0x32c);
    if (((((cVar10 == '\0') || (local_2a4 == '\0')) ||
         (iVar11 = *(int *)(param_1 + 0x328), iVar11 < 1)) ||
        ((*(longlong *)(param_1 + 0x118) != local_4b8 ||
         (*(longlong *)(param_1 + 0x120) != lStack_4b0)))) ||
       ((iVar12 = memcmp((void *)(param_1 + 0x128),auStack_4a8,0x200), iVar12 != 0 ||
        ((iVar11 != local_2a8 || (cVar10 != cVar2)))))) goto LAB_18019eb37;
    DAT_180bbea10 = DAT_180bbea10 + 1;
  }
  plVar17 = (longlong *)FUN_18019a780(&local_298,*puVar22);
  lVar16 = 4;
  plVar25 = &local_4b8;
  do {
    plVar26 = plVar25;
    plVar21 = plVar17;
    lVar20 = plVar21[1];
    lVar31 = plVar21[2];
    lVar3 = plVar21[3];
    *plVar26 = *plVar21;
    plVar26[1] = lVar20;
    plVar26[2] = lVar31;
    plVar26[3] = lVar3;
    lVar20 = plVar21[5];
    lVar31 = plVar21[6];
    lVar3 = plVar21[7];
    plVar26[4] = plVar21[4];
    plVar26[5] = lVar20;
    plVar26[6] = lVar31;
    plVar26[7] = lVar3;
    lVar20 = plVar21[9];
    lVar31 = plVar21[10];
    lVar3 = plVar21[0xb];
    plVar26[8] = plVar21[8];
    plVar26[9] = lVar20;
    plVar26[10] = lVar31;
    plVar26[0xb] = lVar3;
    lVar20 = plVar21[0xd];
    plVar26[0xc] = plVar21[0xc];
    plVar26[0xd] = lVar20;
    lVar20 = plVar21[0xf];
    plVar26[0xe] = plVar21[0xe];
    plVar26[0xf] = lVar20;
    lVar16 = lVar16 + -1;
    plVar17 = plVar21 + 0x10;
    plVar25 = plVar26 + 0x10;
  } while (lVar16 != 0);
  lVar16 = plVar21[0x11];
  plVar26[0x10] = plVar21[0x10];
  plVar26[0x11] = lVar16;
  plVar26[0x12] = plVar21[0x12];
  plVar17 = &local_4b8;
  plVar25 = (longlong *)(param_1 + 0x118);
  do {
    plVar26 = plVar25;
    plVar21 = plVar17;
    lVar16 = plVar21[1];
    lVar20 = plVar21[2];
    lVar31 = plVar21[3];
    *plVar26 = *plVar21;
    plVar26[1] = lVar16;
    plVar26[2] = lVar20;
    plVar26[3] = lVar31;
    lVar16 = plVar21[5];
    lVar20 = plVar21[6];
    lVar31 = plVar21[7];
    plVar26[4] = plVar21[4];
    plVar26[5] = lVar16;
    plVar26[6] = lVar20;
    plVar26[7] = lVar31;
    lVar16 = plVar21[9];
    lVar20 = plVar21[10];
    lVar31 = plVar21[0xb];
    plVar26[8] = plVar21[8];
    plVar26[9] = lVar16;
    plVar26[10] = lVar20;
    plVar26[0xb] = lVar31;
    lVar16 = plVar21[0xd];
    plVar26[0xc] = plVar21[0xc];
    plVar26[0xd] = lVar16;
    lVar16 = plVar21[0xf];
    plVar26[0xe] = plVar21[0xe];
    plVar26[0xf] = lVar16;
    lVar29 = lVar29 + -1;
    plVar17 = plVar21 + 0x10;
    plVar25 = plVar26 + 0x10;
  } while (lVar29 != 0);
  lVar16 = plVar21[0x11];
  plVar26[0x10] = plVar21[0x10];
  plVar26[0x11] = lVar16;
  plVar26[0x12] = plVar21[0x12];
  param_3 = local_508[0];
LAB_18019ef98:
  *(short *)(param_1 + 0x24) = local_566;
  FUN_18017edf0(local_538,param_3);
  *(undefined2 *)(param_1 + 0x21) = 1;
  return 1;
}



