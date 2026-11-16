// FUN_1804efc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804efc80 */

void FUN_1804efc80(int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint *puVar6;
  uint *puVar7;
  undefined1 in_ZMM1 [64];
  undefined1 auVar8 [16];
  
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x2338);
  lVar4 = *(longlong *)(lVar3 + 0x18);
  fVar1 = *(float *)(lVar3 + 0xbc);
  puVar6 = (uint *)((longlong)param_1 * 0x78 + lVar4);
  auVar8 = ZEXT416((uint)fVar1);
  if (fVar1 <= in_ZMM1._0_4_) {
    auVar5 = vmaxss_avx(auVar8,ZEXT416(puVar6[6]));
    auVar5 = vminss_avx(auVar5,in_ZMM1._0_16_);
    fVar1 = auVar5._0_4_;
  }
  if (((float)puVar6[1] != fVar1) && (fVar2 = (float)puVar6[4], fVar2 != fVar1)) {
    if ((short)puVar6[0x18] == -1) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)((longlong)(short)puVar6[0x18] * 0x78 + lVar4);
    }
    if ((*puVar6 & 0x10) == 0) {
      if (puVar7 == (uint *)0x0) {
        if (*(short *)((longlong)puVar6 + 0x5e) == -1) {
          return;
        }
        puVar7 = (uint *)((longlong)*(short *)((longlong)puVar6 + 0x5e) * 0x78 + lVar4);
        if (puVar7 == (uint *)0x0) {
          return;
        }
      }
    }
    else if (((puVar7 == (uint *)0x0) || (*(short *)(lVar3 + 0x226) == -1)) ||
            (*(short *)((longlong)puVar6 + 0x5a) <=
             *(short *)((longlong)*(short *)(lVar3 + 0x226) * 0x78 + 0x5a + lVar4))) {
      puVar6[4] = (uint)fVar1;
      *(undefined1 *)(lVar3 + 0x247) = 1;
      return;
    }
    auVar8 = vmaxss_avx(ZEXT416((uint)((float)puVar7[4] - (fVar1 - fVar2))),auVar8);
    puVar6[4] = (uint)(((float)puVar7[4] + fVar2) - auVar8._0_4_);
    puVar7[4] = (uint)auVar8._0_4_;
    if (((*puVar6 | *puVar7) & 8) != 0) {
      FUN_1804efd90(lVar3);
    }
    *(undefined1 *)(lVar3 + 0x247) = 1;
  }
  return;
}



