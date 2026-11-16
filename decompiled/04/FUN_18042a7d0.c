// FUN_18042a7d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042a7d0 */

void FUN_18042a7d0(longlong param_1,uint param_2,byte *param_3,int param_4,int param_5,float param_6
                  ,float param_7,float param_8,char *param_9)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  short sVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  float fVar17;
  
  cVar1 = *param_9;
  if (cVar1 == '\x01') {
    uVar3 = *(uint *)(param_9 + 0x1c);
    if (0 < (int)param_2) {
      uVar11 = (ulonglong)param_2;
      pbVar8 = (byte *)(param_1 + 2);
      do {
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        uVar9 = ((uint)bVar2 * (uVar3 >> 0x18) + 1) * 0x101;
        uVar10 = uVar9 >> 0x10;
        iVar7 = 0xff - uVar10;
        pbVar8[-2] = (char)(((uint)pbVar8[-2] * iVar7 + 1) * 0x101 >> 0x10) +
                     (char)((uVar10 * (uVar3 & 0xff) + 1) * 0x101 >> 0x10);
        pbVar8[-1] = (char)(((uint)pbVar8[-1] * iVar7 + 1) * 0x101 >> 0x10) +
                     (char)((uVar10 * (uVar3 >> 8 & 0xff) + 1) * 0x101 >> 0x10);
        *pbVar8 = (char)(((uint)*pbVar8 * iVar7 + 1) * 0x101 >> 0x10) +
                  (char)((uVar10 * (uVar3 >> 0x10 & 0xff) + 1) * 0x101 >> 0x10);
        pbVar8[1] = (char)(((uint)pbVar8[1] * iVar7 + 1) * 0x101 >> 0x10) + (char)(uVar9 >> 0x10);
        uVar11 = uVar11 - 1;
        pbVar8 = pbVar8 + 4;
      } while (uVar11 != 0);
    }
  }
  else if (cVar1 == '\x02') {
    fVar16 = ((float)param_4 - param_6) / param_8;
    fVar17 = ((float)param_5 - param_7) / param_8;
    param_8 = 1.0 / param_8;
    if (0 < (int)param_2) {
      auVar15 = ZEXT464(0x437f0000);
      pbVar8 = (byte *)(param_1 + 2);
      uVar11 = (ulonglong)param_2;
      fVar14 = 0.0;
      do {
        fVar12 = (fVar17 * *(float *)(param_9 + 0x10) + fVar16 * *(float *)(param_9 + 8) +
                 *(float *)(param_9 + 0x18)) * auVar15._0_4_;
        auVar13 = ZEXT464((uint)fVar12);
        sVar6 = thunk_FUN_180624430(fVar12);
        fVar12 = fVar14;
        if ((sVar6 != 2) && (fVar14 <= auVar13._0_4_)) {
          auVar5 = vminss_avx(auVar15._0_16_,auVar13._0_16_);
          fVar12 = auVar5._0_4_;
        }
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        fVar16 = fVar16 + param_8;
        uVar3 = *(uint *)(param_9 + (longlong)(int)fVar12 * 4 + 0x1c);
        uVar9 = ((uVar3 >> 0x18) * (uint)bVar2 + 1) * 0x101;
        uVar10 = uVar9 >> 0x10;
        iVar7 = 0xff - uVar10;
        pbVar8[-2] = (char)(((uVar3 & 0xff) * uVar10 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)pbVar8[-2] * iVar7 + 1) * 0x101 >> 0x10);
        pbVar8[-1] = (char)(((uVar3 >> 8 & 0xff) * uVar10 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)pbVar8[-1] * iVar7 + 1) * 0x101 >> 0x10);
        *pbVar8 = (char)(((uVar3 >> 0x10 & 0xff) * uVar10 + 1) * 0x101 >> 0x10) +
                  (char)(((uint)*pbVar8 * iVar7 + 1) * 0x101 >> 0x10);
        pbVar8[1] = (char)(((uint)pbVar8[1] * iVar7 + 1) * 0x101 >> 0x10) + (char)(uVar9 >> 0x10);
        pbVar8 = pbVar8 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else if (cVar1 == '\x03') {
    fVar16 = ((float)param_4 - param_6) / param_8;
    fVar17 = ((float)param_5 - param_7) / param_8;
    param_8 = 1.0 / param_8;
    if (0 < (int)param_2) {
      auVar15 = ZEXT464(0x437f0000);
      pbVar8 = (byte *)(param_1 + 2);
      uVar11 = (ulonglong)param_2;
      fVar14 = 0.0;
      do {
        fVar12 = fVar16 * *(float *)(param_9 + 4) + fVar17 * *(float *)(param_9 + 0xc) +
                 *(float *)(param_9 + 0x14);
        fVar4 = fVar17 * *(float *)(param_9 + 0x10) + fVar16 * *(float *)(param_9 + 8) +
                *(float *)(param_9 + 0x18);
        fVar12 = fVar4 * fVar4 + fVar12 * fVar12;
        if (fVar12 < 0.0) {
          fVar12 = (float)FUN_18061e150();
        }
        else {
          fVar12 = SQRT(fVar12);
        }
        fVar12 = fVar12 * auVar15._0_4_;
        auVar13 = ZEXT464((uint)fVar12);
        sVar6 = thunk_FUN_180624430(fVar12);
        fVar12 = fVar14;
        if ((sVar6 != 2) && (fVar14 <= auVar13._0_4_)) {
          auVar5 = vminss_avx(auVar15._0_16_,auVar13._0_16_);
          fVar12 = auVar5._0_4_;
        }
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        fVar16 = fVar16 + param_8;
        uVar3 = *(uint *)(param_9 + (longlong)(int)fVar12 * 4 + 0x1c);
        uVar9 = ((uVar3 >> 0x18) * (uint)bVar2 + 1) * 0x101;
        uVar10 = uVar9 >> 0x10;
        iVar7 = 0xff - uVar10;
        pbVar8[-2] = (char)(((uVar3 & 0xff) * uVar10 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)pbVar8[-2] * iVar7 + 1) * 0x101 >> 0x10);
        pbVar8[-1] = (char)(((uVar3 >> 8 & 0xff) * uVar10 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)pbVar8[-1] * iVar7 + 1) * 0x101 >> 0x10);
        *pbVar8 = (char)(((uVar3 >> 0x10 & 0xff) * uVar10 + 1) * 0x101 >> 0x10) +
                  (char)(((uint)*pbVar8 * iVar7 + 1) * 0x101 >> 0x10);
        pbVar8[1] = (char)(((uint)pbVar8[1] * iVar7 + 1) * 0x101 >> 0x10) + (char)(uVar9 >> 0x10);
        pbVar8 = pbVar8 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  return;
}



