// FUN_1803eaee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803eaee0 */

float * FUN_1803eaee0(float *param_1,longlong param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_54;
  uint local_50;
  longlong local_40;
  
  if ((((param_2 != 0) && (0xf < param_3)) && (0xf < param_4)) && (param_3 * 4 <= param_5)) {
    local_50 = 0;
    local_40 = 0;
    uVar6 = 0;
    uVar5 = 0;
    local_54 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar4 = param_3;
    uVar8 = param_4;
    do {
      uVar3 = 0;
      bVar2 = false;
      do {
        bVar1 = *(byte *)((ulonglong)(uVar3 * 4) + (ulonglong)param_5 * local_40 + 3 + param_2);
        uVar9 = uVar9 + (bVar1 < 9);
        if (0x7f < bVar1) {
          local_50 = local_50 + 1;
          if (uVar3 < uVar4) {
            uVar4 = uVar3;
          }
          bVar2 = true;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          if (uVar6 < uVar3 + 1) {
            uVar6 = uVar3 + 1;
          }
          if (uVar5 < uVar7 + 1) {
            uVar5 = uVar7 + 1;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
      if (((bVar2) && (param_4 >> 2 <= uVar7)) && (uVar7 < param_4 * 3 >> 2)) {
        local_54 = local_54 + 1;
      }
      uVar7 = uVar7 + 1;
      local_40 = local_40 + 1;
    } while (uVar7 < param_4);
    if (((((ulonglong)param_3 * (ulonglong)param_4) / 10 <= (ulonglong)uVar9) &&
        (((ulonglong)param_3 * (ulonglong)param_4) / 0x28 <= (ulonglong)local_50)) &&
       ((param_4 / 3 <= local_54 &&
        ((param_3 / 0x14 <= uVar6 - uVar4 && (param_4 >> 2 <= uVar5 - uVar8)))))) {
      uVar7 = 1;
      if (1 < param_3 >> 7) {
        uVar7 = param_3 >> 7;
      }
      uVar9 = 1;
      if (1 < param_4 >> 7) {
        uVar9 = param_4 >> 7;
      }
      uVar3 = uVar4 - uVar7;
      if (uVar4 <= uVar7) {
        uVar3 = 0;
      }
      uVar4 = uVar8 - uVar9;
      *param_1 = (float)uVar3 / (float)param_3;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
      }
      param_1[1] = (float)uVar4 / (float)param_4;
      uVar4 = param_3;
      if (uVar7 + uVar6 < param_3) {
        uVar4 = uVar7 + uVar6;
      }
      param_1[2] = (float)uVar4 / (float)param_3;
      uVar6 = param_4;
      if (uVar9 + uVar5 < param_4) {
        uVar6 = uVar9 + uVar5;
      }
      param_1[3] = (float)uVar6 / (float)param_4;
      *(undefined1 *)(param_1 + 4) = 1;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



