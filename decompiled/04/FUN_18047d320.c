// FUN_18047d320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047d320 */

void FUN_18047d320(longlong param_1,int param_2,float param_3,float param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar5 = (longlong)param_2 * 0x14;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar1 = *(uint *)(lVar2 + 0x10 + lVar5);
      fVar4 = ((float)(uVar1 >> 0x18) / 255.0) * param_3;
      fVar6 = 0.0;
      if (0.0 <= fVar4) {
        auVar3 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar4));
        fVar6 = auVar3._0_4_;
      }
      param_2 = param_2 + 1;
      *(float *)(lVar2 + 4 + lVar5) = param_4 + *(float *)(lVar2 + 4 + lVar5);
      *(uint *)(lVar2 + 0x10 + lVar5) =
           (int)(longlong)(fVar6 * 255.0 + 0.5) << 0x18 | uVar1 & 0xffffff;
      lVar5 = lVar5 + 0x14;
    } while (param_2 < *(int *)(param_1 + 0x20));
  }
  return;
}



