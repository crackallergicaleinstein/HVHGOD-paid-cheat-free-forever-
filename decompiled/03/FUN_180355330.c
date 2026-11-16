// FUN_180355330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180355330 */

bool FUN_180355330(int param_1,char *param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  short sVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float extraout_XMM0_Da;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_24;
  
  if ((param_1 != 0) && (*param_2 != '\0')) {
    uVar1 = *(undefined8 *)(param_2 + 4);
    sVar4 = thunk_FUN_180624430(uVar1);
    if (sVar4 < 1) {
      uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
      sVar4 = thunk_FUN_180624430(uStack_24);
      if (sVar4 < 1) {
        sVar4 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0xc));
        if (sVar4 < 1) {
          uVar2 = *param_3;
          sVar4 = thunk_FUN_180624430(uVar2);
          if (sVar4 < 1) {
            uStack_24 = (undefined4)(uVar2 >> 0x20);
            sVar4 = thunk_FUN_180624430(uStack_24);
            if (sVar4 < 1) {
              sVar4 = thunk_FUN_180624430((int)param_3[1]);
              if (sVar4 < 1) {
                if (param_1 == 2) {
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = *(ulonglong *)(param_2 + 4);
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = *param_3;
                  auVar3 = vshufps_avx(auVar8,auVar8,0x55);
                  auVar8 = vshufps_avx(auVar8,auVar8,0x55);
                  fVar7 = (float)*(ulonglong *)(param_2 + 4);
                  fVar7 = auVar3._0_4_ * auVar8._0_4_ + fVar7 * fVar7 +
                          *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
                  auVar3 = vshufps_avx(auVar10,auVar10,0x55);
                  fVar9 = (float)*param_3;
                  auVar8 = vshufps_avx(auVar10,auVar10,0x55);
                  fVar9 = auVar3._0_4_ * auVar8._0_4_ + fVar9 * fVar9 +
                          *(float *)(param_3 + 1) * *(float *)(param_3 + 1);
                  bVar6 = fVar7 == fVar9;
                  bVar5 = fVar7 < fVar9;
                }
                else {
                  fVar7 = (float)FUN_180636420(*(undefined4 *)(param_2 + 4),
                                               *(undefined4 *)(param_2 + 8));
                  FUN_180636420((int)*param_3,*(undefined4 *)((longlong)param_3 + 4));
                  bVar6 = fVar7 == extraout_XMM0_Da + 0.01;
                  bVar5 = fVar7 < extraout_XMM0_Da + 0.01;
                }
                return !bVar5 && !bVar6;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



