// FUN_1804ea300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ea300 */

void FUN_1804ea300(undefined8 param_1,longlong param_2,undefined8 param_3,float *param_4,
                  uint param_5,undefined2 param_6,float *param_7)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  undefined1 in_ZMM2 [64];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  auVar7 = ZEXT1664(in_ZMM2._0_16_);
  lVar1 = FUN_1804e97d0(param_1,in_ZMM2._0_8_,0xbf800000);
  puVar2 = (uint *)FUN_1804e95f0(lVar1,param_6);
  if ((puVar2 != (uint *)0x0) && ((*puVar2 & 2) != 0)) {
    uVar3 = param_5 | 0xffffff;
    if ((*puVar2 & 1) == 0) {
      uVar3 = param_5;
    }
    if (auVar7._0_4_ < 0.0) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = auVar7._0_4_ / *(float *)(lVar1 + 0x14);
    }
    fVar4 = *param_4;
    fVar6 = param_4[1];
    if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
      fVar4 = (float)(int)fVar4;
      fVar6 = (float)(int)fVar6;
    }
    fVar9 = fVar5 * (float)puVar2[2] + fVar4;
    fVar4 = fVar5 * (float)puVar2[4] + fVar4;
    if ((param_7 == (float *)0x0) || ((fVar9 <= param_7[2] && (*param_7 <= fVar4)))) {
      fVar10 = (float)puVar2[7];
      fVar11 = (float)puVar2[6];
      fVar12 = (float)puVar2[9];
      fVar13 = (float)puVar2[8];
      fVar8 = fVar5 * (float)puVar2[3] + fVar6;
      fVar6 = fVar5 * (float)puVar2[5] + fVar6;
      if (param_7 != (float *)0x0) {
        fVar5 = *param_7;
        if (fVar9 < fVar5) {
          fVar11 = fVar11 + (1.0 - (fVar4 - fVar5) / (fVar4 - fVar9)) * (fVar13 - fVar11);
          fVar9 = fVar5;
        }
        fVar5 = param_7[1];
        if (fVar8 < fVar5) {
          fVar10 = fVar10 + (1.0 - (fVar6 - fVar5) / (fVar6 - fVar8)) * (fVar12 - fVar10);
          fVar8 = fVar5;
        }
        fVar5 = param_7[2];
        if (fVar5 < fVar4) {
          fVar13 = ((fVar5 - fVar9) / (fVar4 - fVar9)) * (fVar13 - fVar11) + fVar11;
          fVar4 = fVar5;
        }
        fVar5 = param_7[3];
        if (fVar5 < fVar6) {
          fVar12 = ((fVar5 - fVar8) / (fVar6 - fVar8)) * (fVar12 - fVar10) + fVar10;
          fVar6 = fVar5;
        }
        if (fVar6 <= fVar8) {
          return;
        }
      }
      FUN_1804d9590(param_2,6,4);
      local_a8 = fVar13;
      local_a4 = fVar12;
      local_a0 = fVar11;
      local_9c = fVar10;
      local_98 = fVar4;
      local_94 = fVar6;
      local_90 = fVar9;
      local_8c = fVar8;
      FUN_1804d97d0(param_2,&local_90,&local_98,&local_a0,&local_a8,uVar3);
    }
  }
  return;
}



