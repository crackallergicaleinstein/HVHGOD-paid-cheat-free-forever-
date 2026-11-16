// FUN_180422270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422270 */

void FUN_180422270(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  
  puVar11 = (undefined8 *)((longlong)*(int *)(param_1 + 0x9c00) * 0x138 + param_1);
  if ((*(longlong *)(param_1 + 0x9c18) != 0) &&
     (puVar8 = (undefined8 *)_malloc_base(0x150), puVar8 != (undefined8 *)0x0)) {
    FUN_18063ab10(puVar8,0,0x150);
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    *puVar8 = *puVar11;
    puVar8[1] = uVar5;
    puVar8[2] = uVar6;
    puVar8[3] = uVar7;
    uVar5 = puVar11[5];
    uVar6 = puVar11[6];
    uVar7 = puVar11[7];
    puVar8[4] = puVar11[4];
    puVar8[5] = uVar5;
    puVar8[6] = uVar6;
    puVar8[7] = uVar7;
    uVar5 = *(undefined8 *)((longlong)puVar11 + 0x74);
    uVar6 = *(undefined8 *)((longlong)puVar11 + 0x7c);
    uVar7 = *(undefined8 *)((longlong)puVar11 + 0x84);
    puVar8[0x15] = *(undefined8 *)((longlong)puVar11 + 0x6c);
    puVar8[0x16] = uVar5;
    puVar8[0x17] = uVar6;
    puVar8[0x18] = uVar7;
    uVar5 = *(undefined8 *)((longlong)puVar11 + 0x94);
    uVar6 = *(undefined8 *)((longlong)puVar11 + 0x9c);
    uVar7 = *(undefined8 *)((longlong)puVar11 + 0xa4);
    puVar8[0x19] = *(undefined8 *)((longlong)puVar11 + 0x8c);
    puVar8[0x1a] = uVar5;
    puVar8[0x1b] = uVar6;
    puVar8[0x1c] = uVar7;
    uVar5 = *(undefined8 *)((longlong)puVar11 + 0xb4);
    uVar6 = *(undefined8 *)((longlong)puVar11 + 0xbc);
    uVar7 = *(undefined8 *)((longlong)puVar11 + 0xc4);
    puVar8[0x1d] = *(undefined8 *)((longlong)puVar11 + 0xac);
    puVar8[0x1e] = uVar5;
    puVar8[0x1f] = uVar6;
    puVar8[0x20] = uVar7;
    uVar5 = *(undefined8 *)((longlong)puVar11 + 0xd4);
    uVar6 = *(undefined8 *)((longlong)puVar11 + 0xdc);
    uVar7 = *(undefined8 *)((longlong)puVar11 + 0xe4);
    puVar8[0x21] = *(undefined8 *)((longlong)puVar11 + 0xcc);
    puVar8[0x22] = uVar5;
    puVar8[0x23] = uVar6;
    puVar8[0x24] = uVar7;
    uVar5 = puVar11[9];
    puVar8[0x25] = puVar11[8];
    puVar8[0x26] = uVar5;
    puVar8[0x27] = puVar11[10];
    fVar12 = *(float *)((longlong)puVar11 + 0x4c);
    fVar18 = *(float *)((longlong)puVar11 + 0x44);
    fVar17 = *(float *)(puVar11 + 8) * *(float *)(puVar11 + 8) +
             *(float *)(puVar11 + 9) * *(float *)(puVar11 + 9);
    if (fVar17 < 0.0) {
      fVar17 = (float)FUN_18061e150();
    }
    else {
      fVar17 = SQRT(fVar17);
    }
    fVar12 = fVar18 * fVar18 + fVar12 * fVar12;
    if (fVar12 < 0.0) {
      fVar12 = (float)FUN_18061e150();
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    fVar12 = (fVar17 + fVar12) * 0.5;
    *(float *)((longlong)puVar8 + 100) = fVar12 * *(float *)((longlong)puVar11 + 0xec);
    *(float *)(puVar8 + 0xd) = fVar12 * *(float *)(puVar11 + 0x1e);
    iVar10 = 0;
    *(undefined1 *)((longlong)puVar8 + 0x8c) = *(undefined1 *)((longlong)puVar11 + 0x114);
    if (0 < *(int *)((longlong)puVar11 + 0x114)) {
      pfVar9 = (float *)((longlong)puVar8 + 0x6c);
      do {
        *pfVar9 = fVar12 * *(float *)((longlong)pfVar9 +
                                     (longlong)puVar11 + (0x88 - (longlong)puVar8));
        iVar10 = iVar10 + 1;
        pfVar9 = pfVar9 + 1;
      } while (iVar10 < *(int *)((longlong)puVar11 + 0x114));
    }
    *(undefined1 *)((longlong)puVar8 + 0x8d) = *(undefined1 *)(puVar11 + 0x23);
    *(undefined1 *)((longlong)puVar8 + 0x8e) = *(undefined1 *)((longlong)puVar11 + 0x119);
    *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)((longlong)puVar11 + 0x11c);
    *(undefined1 *)((longlong)puVar8 + 0x94) = *(undefined1 *)(puVar11 + 0x24);
    *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar11 + 0xc);
    *(undefined1 *)((longlong)puVar8 + 0x95) = *(undefined1 *)((longlong)puVar11 + 0x137);
    puVar8[0x28] = *(undefined8 *)(param_1 + 0x9c18);
    *(undefined8 *)(param_1 + 0x9c18) = 0;
    lVar3 = puVar8[0x28];
    auVar13 = ZEXT464(*(uint *)(lVar3 + 0x10));
    *(uint *)(puVar8 + 0x13) = *(uint *)(lVar3 + 0x10);
    auVar14 = ZEXT464(*(uint *)(lVar3 + 0x14));
    *(uint *)((longlong)puVar8 + 0x9c) = *(uint *)(lVar3 + 0x14);
    auVar15 = ZEXT464(*(uint *)(lVar3 + 0x18));
    *(uint *)(puVar8 + 0x14) = *(uint *)(lVar3 + 0x18);
    auVar16 = ZEXT464(*(uint *)(lVar3 + 0x1c));
    *(uint *)((longlong)puVar8 + 0xa4) = *(uint *)(lVar3 + 0x1c);
    for (lVar3 = *(longlong *)(lVar3 + 0x20); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      auVar4 = vminss_avx(auVar13._0_16_,ZEXT416(*(uint *)(lVar3 + 0x10)));
      auVar13 = ZEXT1664(auVar4);
      *(int *)(puVar8 + 0x13) = auVar4._0_4_;
      auVar4 = vminss_avx(auVar14._0_16_,ZEXT416(*(uint *)(lVar3 + 0x14)));
      auVar14 = ZEXT1664(auVar4);
      *(int *)((longlong)puVar8 + 0x9c) = auVar4._0_4_;
      auVar4 = vmaxss_avx(auVar15._0_16_,ZEXT416(*(uint *)(lVar3 + 0x18)));
      auVar15 = ZEXT1664(auVar4);
      *(int *)(puVar8 + 0x14) = auVar4._0_4_;
      auVar4 = vmaxss_avx(auVar16._0_16_,ZEXT416(*(uint *)(lVar3 + 0x1c)));
      auVar16 = ZEXT1664(auVar4);
      *(int *)((longlong)puVar8 + 0xa4) = auVar4._0_4_;
    }
    cVar1 = *(char *)((longlong)puVar11 + 0x134);
    if (cVar1 == '\0') {
      *(undefined1 *)(puVar8 + 8) = 0;
    }
    else if (cVar1 == '\x01') {
      *(undefined1 *)(puVar8 + 8) = 1;
      uVar2 = *(uint *)(puVar11 + 0xb);
      *(uint *)(puVar8 + 9) = uVar2;
      *(uint *)(puVar8 + 9) =
           (int)(longlong)(*(float *)((longlong)puVar11 + 100) * 255.0) << 0x18 | uVar2;
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(puVar8 + 8) = 0xff;
    }
    cVar1 = *(char *)((longlong)puVar11 + 0x135);
    if (cVar1 == '\0') {
      *(undefined1 *)(puVar8 + 10) = 0;
    }
    else if (cVar1 == '\x01') {
      *(undefined1 *)(puVar8 + 10) = 1;
      uVar2 = *(uint *)((longlong)puVar11 + 0x5c);
      *(uint *)(puVar8 + 0xb) = uVar2;
      *(uint *)(puVar8 + 0xb) = (int)(longlong)(*(float *)(puVar11 + 0xd) * 255.0) << 0x18 | uVar2;
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(puVar8 + 10) = 0xff;
    }
    *(bool *)((longlong)puVar8 + 0x96) = *(char *)((longlong)puVar11 + 0x136) != '\0';
    if (*(longlong *)(*(longlong *)(param_1 + 0x9c20) + 8) == 0) {
      *(undefined8 **)(*(longlong *)(param_1 + 0x9c20) + 8) = puVar8;
    }
    else {
      *(undefined8 **)(*(longlong *)(param_1 + 0x9c30) + 0x148) = puVar8;
    }
    *(undefined8 **)(param_1 + 0x9c30) = puVar8;
  }
  return;
}



