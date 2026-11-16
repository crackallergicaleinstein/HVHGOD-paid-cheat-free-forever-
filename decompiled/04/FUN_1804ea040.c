// FUN_1804ea040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ea040 */

float * FUN_1804ea040(float *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                     float param_5,char *param_6,char *param_7,char *param_8,undefined8 *param_9,
                     undefined8 param_10,uint param_11)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  float fVar9;
  undefined1 in_ZMM2 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  uint local_res18 [4];
  
  auVar13 = ZEXT1664(in_ZMM2._0_16_);
  if (param_8 == (char *)0x0) {
    lVar5 = -1;
    do {
      lVar3 = lVar5 + 1;
      lVar5 = lVar5 + 1;
    } while (param_6[lVar3] != '\0');
    param_8 = param_6 + lVar5;
  }
  if (param_7 == (char *)0x0) {
    param_7 = param_8;
  }
  puVar6 = (uint *)FUN_1804e97d0(param_2,in_ZMM2._0_8_,0xbf800000);
  auVar11 = ZEXT864(0);
  auVar14 = ZEXT1664(CONCAT124(auVar13._4_12_,auVar13._0_4_ / (float)puVar6[5]));
  bVar2 = 0.0 < param_5;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  pcVar7 = (char *)0x0;
  auVar10 = ZEXT864(0);
  if (param_6 < param_7) {
    do {
      if (bVar2) {
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)FUN_1804e9df0(param_2,auVar13._0_8_,param_6,param_8,
                                         param_5 - auVar10._0_4_,param_11);
        }
        if (param_6 < pcVar7) goto LAB_1804ea1c3;
        if (*param_1 < auVar10._0_4_) {
          *param_1 = auVar10._0_4_;
        }
        param_1[1] = auVar13._0_4_ + param_1[1];
        auVar10 = ZEXT1664(auVar11._0_16_);
        if ((param_11 & 2) == 0) {
          for (; param_6 < param_8; param_6 = param_6 + 1) {
            if ((*param_6 != ' ') && (*param_6 != '\t')) goto LAB_1804ea1a5;
          }
        }
        else {
LAB_1804ea1a5:
          if ((param_6 < param_8) && (*param_6 == '\n')) {
            param_6 = param_6 + 1;
          }
        }
        if ((param_11 & 4) != 0) break;
        pcVar7 = (char *)0x0;
        pcVar8 = param_6;
      }
      else {
LAB_1804ea1c3:
        local_res18[0] = (uint)*param_6;
        if (local_res18[0] < 0x80) {
          pcVar8 = param_6 + 1;
        }
        else {
          iVar4 = FUN_1804b0e50(local_res18,param_6,param_8);
          pcVar8 = param_6 + iVar4;
        }
        if (local_res18[0] == 10) {
          auVar1 = vmaxss_avx(ZEXT416((uint)*param_1),auVar10._0_16_);
          param_1[1] = auVar13._0_4_ + param_1[1];
          *param_1 = auVar1._0_4_;
          auVar10 = ZEXT1664(auVar11._0_16_);
          param_6 = pcVar8;
          if ((param_11 & 4) != 0) break;
        }
        else if (local_res18[0] != 0xd) {
          if ((*puVar6 <= local_res18[0]) ||
             (fVar9 = *(float *)(*(longlong *)(puVar6 + 2) + (ulonglong)local_res18[0] * 4),
             fVar9 < auVar11._0_4_)) {
            fVar9 = (float)FUN_1804e8740(puVar6);
          }
          fVar9 = fVar9 * auVar14._0_4_ + auVar10._0_4_;
          if (param_4 <= fVar9) break;
          auVar10 = ZEXT464((uint)fVar9);
        }
      }
      param_6 = pcVar8;
    } while (pcVar8 < param_7);
    fVar12 = auVar13._0_4_;
    fVar9 = auVar10._0_4_;
    if (*param_1 < fVar9) {
      *param_1 = fVar9;
    }
    if (fVar9 <= auVar11._0_4_) goto LAB_1804ea298;
  }
  else {
LAB_1804ea298:
    fVar12 = auVar13._0_4_;
    if (param_1[1] != auVar11._0_4_) goto LAB_1804ea2ae;
  }
  param_1[1] = fVar12 + param_1[1];
LAB_1804ea2ae:
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = param_6;
  }
  return param_1;
}



