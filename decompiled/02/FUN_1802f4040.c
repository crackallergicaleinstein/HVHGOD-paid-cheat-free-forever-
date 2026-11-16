// FUN_1802f4040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f4040 */

longlong FUN_1802f4040(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = *param_1;
  lVar5 = param_1[1];
  lVar3 = lVar5 - lVar6;
  fVar7 = 1e+09;
  fVar8 = 0.75;
  if (lVar6 != lVar5) {
    do {
      if (((*(char *)(lVar6 + 0x81) != '\0') &&
          (fVar8 < (float)(*(longlong *)*param_2 - *(longlong *)(lVar6 + 0x78)) / fVar7)) &&
         (cVar2 = FUN_1801acc90(param_2[1],lVar6), cVar2 == '\0')) break;
      lVar6 = lVar6 + 0x88;
    } while (lVar6 != lVar5);
    lVar4 = lVar6;
    if (lVar6 != lVar5) {
      while (lVar1 = lVar4 + 0x88, lVar1 != lVar5) {
        if (((*(char *)(lVar4 + 0x109) == '\0') ||
            ((float)(*(longlong *)*param_2 - *(longlong *)(lVar4 + 0x100)) / fVar7 <= fVar8)) ||
           (cVar2 = FUN_1801acc90(param_2[1],lVar1), lVar4 = lVar1, cVar2 != '\0')) {
          FUN_1802f4210(lVar6,lVar1);
          lVar6 = lVar6 + 0x88;
          lVar4 = lVar1;
        }
      }
      if (lVar6 != lVar5) {
        lVar4 = param_1[1];
        for (; lVar5 != lVar4; lVar5 = lVar5 + 0x88) {
          FUN_1802f4210(lVar6,lVar5);
          lVar6 = lVar6 + 0x88;
        }
        lVar5 = param_1[1];
        if (lVar6 != lVar5) {
          lVar4 = lVar6 + 0x20;
          do {
            FUN_1801b36e0(lVar4 + 0x18);
            FUN_1801b36e0(lVar4);
            lVar1 = lVar4 + 0x68;
            lVar4 = lVar4 + 0x88;
          } while (lVar1 != lVar5);
        }
        param_1[1] = lVar6;
      }
    }
  }
  return lVar3 / 0x88 - (param_1[1] - *param_1) / 0x88;
}



