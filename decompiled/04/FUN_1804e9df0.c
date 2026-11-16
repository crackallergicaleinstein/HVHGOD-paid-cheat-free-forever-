// FUN_1804e9df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e9df0 */

char * FUN_1804e9df0(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,float param_5
                    ,uint param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  float fVar11;
  undefined1 in_ZMM1 [64];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  
  auVar13 = ZEXT1664(in_ZMM1._0_16_);
  puVar4 = (uint *)FUN_1804e97d0(param_1,param_2,0xbf800000);
  uVar7 = 2;
  uVar9 = param_6 & 2;
  fVar17 = param_5 / (auVar13._0_4_ / (float)puVar4[5]);
  auVar13 = ZEXT864(0);
  fVar15 = 0.0;
  auVar16 = ZEXT864(0);
  auVar14 = ZEXT864(0);
  pcVar8 = param_3;
  pcVar10 = param_3;
  if (param_3 < param_4) {
    do {
      param_5 = (float)(int)*pcVar8;
      if ((uint)param_5 < 0x80) {
        lVar5 = 1;
      }
      else {
        iVar3 = FUN_1804b0e50(&param_5,pcVar8,param_4);
        lVar5 = (longlong)iVar3;
      }
      uVar2 = (uint)param_5;
      pcVar1 = pcVar8 + lVar5;
      if ((uint)param_5 < 0x20) {
        if (param_5 == 1.4013e-44) {
          return pcVar8;
        }
        if (param_5 != 1.82169e-44) goto LAB_1804e9ee0;
      }
      else {
LAB_1804e9ee0:
        if ((*puVar4 <= (uint)param_5) ||
           (fVar11 = *(float *)(*(longlong *)(puVar4 + 2) + (ulonglong)(uint)param_5 * 4),
           fVar11 < auVar13._0_4_)) {
          fVar11 = (float)FUN_1804e8740(puVar4,(uint)param_5 & 0xffff);
        }
        fVar12 = auVar14._0_4_;
        if (uVar2 < 0x80) {
          uVar6 = (uint)(&DAT_180c62d70)[uVar2 >> 4] >> (uVar2 & 0xf) * 2;
LAB_1804e9f44:
          uVar6 = uVar6 & 3;
          if (uVar6 != 0) goto LAB_1804e9f6b;
          if ((uVar7 != 0) && (uVar9 == 0)) {
            fVar15 = fVar15 + fVar12;
            auVar14 = ZEXT1664(auVar13._0_16_);
            pcVar10 = pcVar8;
          }
          auVar16 = ZEXT464((uint)(auVar16._0_4_ + fVar11));
        }
        else {
          if (uVar2 - 0x3000 < 0x10) {
            uVar6 = DAT_180bda4d8 >> (uVar2 & 0xf) * 2;
            goto LAB_1804e9f44;
          }
          uVar6 = 2;
LAB_1804e9f6b:
          if (uVar7 == 1) {
            if ((uVar6 != 1) && (9 < uVar2 - 0x30)) {
LAB_1804e9f87:
              fVar15 = fVar15 + fVar12 + auVar16._0_4_;
              fVar12 = auVar13._0_4_;
              auVar16 = ZEXT1664(auVar13._0_16_);
              pcVar10 = pcVar8;
            }
          }
          else if ((uVar7 == 0) && (uVar9 != 0)) goto LAB_1804e9f87;
          auVar14 = ZEXT464((uint)(fVar12 + fVar11));
        }
        fVar11 = auVar14._0_4_ + auVar16._0_4_;
        if (fVar17 < fVar11 + fVar15) {
          if (fVar11 <= fVar17) {
            return pcVar10;
          }
          break;
        }
        uVar7 = uVar6;
      }
      pcVar8 = pcVar1;
    } while (pcVar1 < param_4);
    if (pcVar8 == param_3) {
      param_5 = 0.0;
      iVar3 = FUN_1804b0e50(&param_5,pcVar8,param_4);
      return pcVar8 + iVar3;
    }
  }
  return pcVar8;
}



