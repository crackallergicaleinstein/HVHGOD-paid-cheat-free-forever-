// FUN_1804ff3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ff3a0 */

void FUN_1804ff3a0(longlong param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar19;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined1 local_48 [12];
  float fStack_3c;
  
  fVar19 = *(float *)(param_1 + 0x20);
  auVar16 = ZEXT416((uint)fVar19);
  lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  auVar15 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x18)),ZEXT416(*(uint *)(lVar6 + 0x26c)));
  auVar18 = ZEXT1664(auVar15);
  local_res14 = auVar15._0_4_;
  if ((*(uint *)(param_1 + 4) & 0x80000) != 0) {
    fVar14 = *(float *)(lVar6 + 0x11c);
    if (*(longlong *)(DAT_180bb8ae8 + 0x2338) != 0) {
      auVar16 = vmaxss_avx(ZEXT416(*(uint *)(*(longlong *)(DAT_180bb8ae8 + 0x2338) + 0x80)),
                           ZEXT416((uint)fVar14));
      fVar14 = auVar16._0_4_;
    }
    auVar15._0_4_ =
         (float)(int)((fVar14 - *(float *)(DAT_180bb8ae8 + 0xcd8)) -
                     *(float *)(DAT_180bb8ae8 + 0x11e0) * 0.5);
    auVar15._4_12_ = SUB1612(ZEXT816(0),4);
    auVar16 = vcmpss_avx(ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0xcd8) +
                                        *(float *)(DAT_180bb8ae8 + 0xd50) + fVar19)),auVar15,1);
    auVar16 = vblendvps_avx(ZEXT416((uint)fVar19),auVar15,auVar16);
  }
  auVar16 = vminss_avx(auVar16,ZEXT416(*(uint *)(lVar6 + 0x274)));
  auVar17 = ZEXT1664(auVar16);
  local_resc = auVar16._0_4_;
  if (local_res14 < local_resc) {
    pfVar1 = (float *)(DAT_180bb8ae8 + 0xd4c);
    fVar19 = *pfVar1 * 0.5;
    fVar19 = (float)(int)(*(float *)(param_1 + 0x1c) - fVar19) + fVar19;
    if ((*(short *)(param_1 + 0x24) != -1) &&
       (lVar7 = *(longlong *)(DAT_180bb8ae8 + 0x2338), (*(uint *)(lVar7 + 4) & 0x100000) == 0)) {
      lVar8 = *(longlong *)(lVar7 + 0x18);
      lVar13 = (longlong)*(short *)(param_1 + 0x24) * 0x78;
      lVar9 = *(longlong *)(lVar6 + 0x2c8);
      puVar2 = (undefined8 *)(lVar13 + 0x24 + lVar8);
      uVar10 = puVar2[1];
      uVar11 = *(undefined4 *)(lVar13 + 0x24 + lVar8);
      uVar3 = *(undefined4 *)(lVar13 + 0x28 + lVar8);
      uVar4 = *(undefined4 *)(lVar13 + 0x2c + lVar8);
      uVar5 = *(undefined4 *)(lVar13 + 0x30 + lVar8);
      *(undefined8 *)(lVar6 + 0x268) = *puVar2;
      *(undefined8 *)(lVar6 + 0x270) = uVar10;
      *(undefined4 *)(lVar9 + 0x60) = uVar11;
      *(undefined4 *)(lVar9 + 100) = uVar3;
      *(undefined4 *)(lVar9 + 0x68) = uVar4;
      *(undefined4 *)(lVar9 + 0x6c) = uVar5;
      lVar12 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c8) + 0xa0);
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x2c8) + 0xa8);
      *(undefined4 *)(lVar9 + -0x10 + lVar12 * 0x10) = uVar11;
      *(undefined4 *)(lVar9 + -0xc + lVar12 * 0x10) = uVar3;
      *(undefined4 *)(lVar9 + -8 + lVar12 * 0x10) = uVar4;
      *(undefined4 *)(lVar9 + -4 + lVar12 * 0x10) = uVar5;
      FUN_1804e1d30(*(undefined8 *)(lVar7 + 0x1a8),*(undefined8 *)(lVar6 + 0x2c8),
                    *(undefined2 *)(lVar13 + 100 + lVar8));
      local_res14 = auVar18._0_4_;
      local_resc = auVar17._0_4_;
    }
    auVar16 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1118);
    auVar15 = vshufps_avx(auVar16,auVar16,0xff);
    local_48 = auVar16._0_12_;
    fStack_3c = auVar15._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    local_res8 = fVar19;
    local_res10 = fVar19;
    uVar11 = FUN_1804b1120(local_48);
    FUN_1804dcf10(*(undefined8 *)(lVar6 + 0x2c8),&local_res10,&local_res8,uVar11,*pfVar1);
    if (*(short *)(param_1 + 0x24) != -1) {
      lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x2338);
      if (((*(uint *)(lVar6 + 4) & 0x100000) == 0) && (*(int *)(lVar6 + 0x74) != -1)) {
        lVar7 = *(longlong *)(lVar6 + 0x18);
        lVar8 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        lVar13 = (longlong)*(int *)(lVar6 + 0x74) * 0x78;
        lVar9 = *(longlong *)(lVar8 + 0x2c8);
        puVar2 = (undefined8 *)(lVar13 + 0x24 + lVar7);
        uVar10 = puVar2[1];
        uVar11 = *(undefined4 *)(lVar13 + 0x24 + lVar7);
        uVar3 = *(undefined4 *)(lVar13 + 0x28 + lVar7);
        uVar4 = *(undefined4 *)(lVar13 + 0x2c + lVar7);
        uVar5 = *(undefined4 *)(lVar13 + 0x30 + lVar7);
        *(undefined8 *)(lVar8 + 0x268) = *puVar2;
        *(undefined8 *)(lVar8 + 0x270) = uVar10;
        *(undefined4 *)(lVar9 + 0x60) = uVar11;
        *(undefined4 *)(lVar9 + 100) = uVar3;
        *(undefined4 *)(lVar9 + 0x68) = uVar4;
        *(undefined4 *)(lVar9 + 0x6c) = uVar5;
        lVar12 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x2c8) + 0xa0);
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x2c8) + 0xa8);
        *(undefined4 *)(lVar9 + -0x10 + lVar12 * 0x10) = uVar11;
        *(undefined4 *)(lVar9 + -0xc + lVar12 * 0x10) = uVar3;
        *(undefined4 *)(lVar9 + -8 + lVar12 * 0x10) = uVar4;
        *(undefined4 *)(lVar9 + -4 + lVar12 * 0x10) = uVar5;
        FUN_1804e1d30(*(undefined8 *)(lVar6 + 0x1a8),*(undefined8 *)(lVar8 + 0x2c8),
                      *(undefined2 *)(lVar13 + 100 + lVar7));
      }
    }
  }
  return;
}



