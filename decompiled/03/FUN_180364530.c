// FUN_180364530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180364530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180364530(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  local_c8 = _DAT_180b8e110;
  uStack_c0 = DAT_180b8e118;
  uStack_b8 = _DAT_180b8e120;
  uStack_b0 = ram0x000180b8e128;
  local_a8 = _DAT_180b8e130;
  uStack_a0 = _DAT_180b8e138;
  uStack_98 = _DAT_180b8e140;
  uStack_90 = _DAT_180b8e148;
  local_88 = _DAT_180b8e150;
  uStack_80 = _DAT_180b8e158;
  uStack_78 = _DAT_180b8e160;
  uStack_70 = DAT_180b8e168;
  local_68 = _DAT_180b8e170;
  uStack_60 = ram0x000180b8e178;
  uStack_58 = _DAT_180b8e180;
  uStack_50 = _DAT_180b8e188;
  local_48 = _DAT_180b8e190;
  uStack_40 = _DAT_180b8e198;
  uStack_38 = _DAT_180b8e1a0;
  uStack_30 = _DAT_180b8e1a8;
  local_28 = _DAT_180b8e1b0;
  uStack_20 = _DAT_180b8e1b8;
  local_18 = DAT_180b8e1c0;
  puVar10 = param_1;
  if (param_2 != 1) {
    puVar10 = param_1 + 1;
  }
  FUN_18035e9f0(*puVar10,&local_c8);
  if ((local_c8._1_1_ == '\0') ||
     ((lVar14 = param_1[2], uStack_70._0_4_ = (float)uStack_70 - *(float *)(lVar14 + 0x2c),
      uStack_70._4_4_ = uStack_70._4_4_ - *(float *)(lVar14 + 0x30),
      fVar5 = (float)local_68 - *(float *)(lVar14 + 0x34),
      uStack_70._4_4_ * uStack_70._4_4_ + (float)uStack_70 * (float)uStack_70 + fVar5 * fVar5 <=
      1e-06 && (local_68._4_4_ = local_68._4_4_ - *(float *)(lVar14 + 8),
               fVar5 = (float)uStack_60 - *(float *)(lVar14 + 0xc),
               uStack_60._4_4_ = uStack_60._4_4_ - *(float *)(lVar14 + 0x10),
               fVar5 * fVar5 + local_68._4_4_ * local_68._4_4_ + uStack_60._4_4_ * uStack_60._4_4_
               <= 1e-06)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (local_c8._1_1_ != '\0') {
    piVar3 = (int *)param_1[3];
    iVar12 = piVar3[2];
    piVar3[2] = iVar12 + 1;
    if ((((bVar9) || (1 < iVar12 + 1)) && ((uStack_50 & 0x100000000) != 0)) &&
       (((-1 < *piVar3 && (-1 < piVar3[1])) &&
        ((uStack_38._4_4_ == *piVar3 && ((int)uStack_30 == piVar3[1])))))) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    pbVar1 = (byte *)(piVar3 + 3);
    *pbVar1 = *pbVar1 & bVar11;
    if (*pbVar1 != 0) {
      if (param_2 == 1) {
        iVar16 = 0;
        iVar12 = *(int *)param_1[4];
        if (0 < iVar12) {
          lVar15 = 0;
          lVar14 = 0;
          do {
            lVar14 = lVar14 + 0x28;
            lVar15 = lVar15 + 8;
            puVar10 = (undefined8 *)(param_1[6] + -0x28 + lVar14);
            uVar6 = puVar10[1];
            uVar7 = puVar10[2];
            uVar8 = puVar10[3];
            uVar2 = *(undefined8 *)(param_1[6] + -8 + lVar14);
            lVar4 = *(longlong *)(*(longlong *)(*(longlong *)param_1[5] + 0x18) + lVar15);
            puVar13 = (undefined8 *)0x0;
            if (lVar4 != 0) {
              puVar13 = (undefined8 *)(lVar4 + 0x10);
            }
            iVar16 = iVar16 + 1;
            *puVar13 = *puVar10;
            puVar13[1] = uVar6;
            puVar13[2] = uVar7;
            puVar13[3] = uVar8;
            puVar13[4] = uVar2;
            iVar12 = *(int *)param_1[4];
          } while (iVar16 < iVar12);
        }
        *(int *)(*(longlong *)param_1[7] + 8) = iVar12;
      }
      return 0;
    }
  }
  return 1;
}



