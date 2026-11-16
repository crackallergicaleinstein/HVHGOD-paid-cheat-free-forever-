// FUN_1804ba4b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba4b0 */

void FUN_1804ba4b0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((param_2 & 0xff000000) != 0) {
    lVar5 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
    fVar12 = *(float *)(lVar5 + 8);
    fVar14 = *(float *)(lVar5 + 0xc);
    fVar15 = fVar12 + *(float *)(lVar5 + 0x10);
    fVar16 = fVar14 + *(float *)(lVar5 + 0x14);
    piVar6 = *(int **)(*(longlong *)(param_1 + 0x3d8) + 0x2c8);
    if (*piVar6 == 0) {
      FUN_1804d90c0(piVar6);
    }
    local_e8 = fVar15 + 1.0;
    local_e4 = fVar16 + 1.0;
    local_e0 = fVar12 - 1.0;
    local_dc = fVar14 - 1.0;
    FUN_1804d9420(piVar6,&local_e0,&local_e8,0);
    FUN_1804d9590(piVar6,6,4);
    sVar3 = (short)piVar6[0xd];
    uVar1 = **(undefined4 **)(piVar6 + 0xe);
    uVar2 = (*(undefined4 **)(piVar6 + 0xe))[1];
    **(short **)(piVar6 + 0x12) = sVar3;
    *(short *)(*(longlong *)(piVar6 + 0x12) + 2) = sVar3 + 1;
    *(short *)(*(longlong *)(piVar6 + 0x12) + 4) = sVar3 + 2;
    *(short *)(*(longlong *)(piVar6 + 0x12) + 6) = sVar3;
    *(short *)(*(longlong *)(piVar6 + 0x12) + 8) = sVar3 + 2;
    *(short *)(*(longlong *)(piVar6 + 0x12) + 10) = sVar3 + 3;
    pfVar7 = *(float **)(piVar6 + 0x10);
    *pfVar7 = fVar12;
    pfVar7[1] = fVar14;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(undefined4 *)(lVar5 + 8) = uVar1;
    *(undefined4 *)(lVar5 + 0xc) = uVar2;
    *(uint *)(*(longlong *)(piVar6 + 0x10) + 0x10) = param_2;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(float *)(lVar5 + 0x14) = fVar15;
    *(float *)(lVar5 + 0x18) = fVar14;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(undefined4 *)(lVar5 + 0x1c) = uVar1;
    *(undefined4 *)(lVar5 + 0x20) = uVar2;
    *(uint *)(*(longlong *)(piVar6 + 0x10) + 0x24) = param_2;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(float *)(lVar5 + 0x28) = fVar15;
    *(float *)(lVar5 + 0x2c) = fVar16;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(undefined4 *)(lVar5 + 0x30) = uVar1;
    *(undefined4 *)(lVar5 + 0x34) = uVar2;
    *(uint *)(*(longlong *)(piVar6 + 0x10) + 0x38) = param_2;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(float *)(lVar5 + 0x3c) = fVar12;
    *(float *)(lVar5 + 0x40) = fVar16;
    lVar5 = *(longlong *)(piVar6 + 0x10);
    *(undefined4 *)(lVar5 + 0x44) = uVar1;
    *(undefined4 *)(lVar5 + 0x48) = uVar2;
    *(uint *)(*(longlong *)(piVar6 + 0x10) + 0x4c) = param_2;
    *(longlong *)(piVar6 + 0x10) = *(longlong *)(piVar6 + 0x10) + 0x50;
    piVar6[0xd] = piVar6[0xd] + 4;
    *(longlong *)(piVar6 + 0x12) = *(longlong *)(piVar6 + 0x12) + 0xc;
    iVar4 = *piVar6;
    lVar11 = (longlong)iVar4;
    lVar5 = *(longlong *)(piVar6 + 2);
    puVar9 = (undefined8 *)(lVar5 + -0x48 + lVar11 * 0x48);
    local_d8 = *puVar9;
    uStack_d0 = puVar9[1];
    uStack_c8 = puVar9[2];
    uStack_c0 = puVar9[3];
    puVar9 = (undefined8 *)(lVar5 + -0x28 + lVar11 * 0x48);
    local_b8 = *puVar9;
    uStack_b0 = puVar9[1];
    uStack_a8 = puVar9[2];
    uStack_a0 = puVar9[3];
    iVar10 = iVar4 + -1;
    uVar13 = *(undefined8 *)(lVar5 + -8 + lVar11 * 0x48);
    *piVar6 = iVar10;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    uStack_68 = uStack_a8;
    uStack_60 = uStack_a0;
    local_58 = uVar13;
    if (iVar10 == 0) {
      FUN_1804d15b0(piVar6,&local_98);
    }
    else {
      iVar8 = piVar6[1];
      if (iVar10 == iVar8) {
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        if (iVar4 < iVar8) {
          iVar4 = iVar8;
        }
        FUN_1804d1630(piVar6,iVar4);
      }
      if (0 < (longlong)*piVar6) {
        FUN_18063aed0(*(longlong *)(piVar6 + 2) + 0x48,*(longlong *)(piVar6 + 2),
                      (longlong)*piVar6 * 0x48);
      }
      puVar9 = *(undefined8 **)(piVar6 + 2);
      *puVar9 = local_d8;
      puVar9[1] = uStack_d0;
      puVar9[2] = uStack_c8;
      puVar9[3] = uStack_c0;
      puVar9[4] = local_b8;
      puVar9[5] = uStack_b0;
      puVar9[6] = uStack_a8;
      puVar9[7] = uStack_a0;
      puVar9[8] = uVar13;
      *piVar6 = *piVar6 + 1;
    }
    FUN_1804d90c0(piVar6);
    iVar4 = piVar6[0x28];
    iVar10 = iVar4 + -1;
    piVar6[0x28] = iVar10;
    if (iVar10 == 0) {
      puVar9 = (undefined8 *)(*(longlong *)(piVar6 + 0xe) + 0x3c);
    }
    else {
      puVar9 = (undefined8 *)((longlong)(iVar4 + -2) * 0x10 + *(longlong *)(piVar6 + 0x2a));
    }
    uVar13 = puVar9[1];
    *(undefined8 *)(piVar6 + 0x18) = *puVar9;
    *(undefined8 *)(piVar6 + 0x1a) = uVar13;
    FUN_1804d9200(piVar6);
  }
  return;
}



