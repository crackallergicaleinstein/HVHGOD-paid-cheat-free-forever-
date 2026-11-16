// FUN_180365de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365de0 */

bool FUN_180365de0(int param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float local_28;
  float local_18;
  undefined4 uStack_14;
  
  if ((*param_2 != '\0') && (*param_3 != '\0')) {
    uVar1 = *(undefined8 *)(param_2 + 4);
    sVar2 = thunk_FUN_180624430(uVar1);
    if (sVar2 < 1) {
      uStack_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
      sVar2 = thunk_FUN_180624430(uStack_14);
      if (sVar2 < 1) {
        sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0xc));
        if (sVar2 < 1) {
          uVar1 = *(undefined8 *)(param_3 + 4);
          sVar2 = thunk_FUN_180624430(uVar1);
          if (sVar2 < 1) {
            uStack_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
            sVar2 = thunk_FUN_180624430(uStack_14);
            if (sVar2 < 1) {
              sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_3 + 0xc));
              if (sVar2 < 1) {
                if (param_1 == 2) {
                  return *(float *)(param_3 + 0xc) < *(float *)(param_2 + 0xc);
                }
                if (param_1 == 1) {
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = *(ulonglong *)(param_2 + 4);
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = *(ulonglong *)(param_3 + 4);
                  auVar3 = vshufps_avx(auVar3,auVar3,0x55);
                  local_28 = (float)*(ulonglong *)(param_2 + 4);
                  local_18 = (float)*(ulonglong *)(param_3 + 4);
                  auVar4 = vshufps_avx(auVar4,auVar4,0x55);
                  if (auVar4._0_4_ * auVar4._0_4_ + local_18 * local_18 <=
                      auVar3._0_4_ * auVar3._0_4_ + local_28 * local_28) {
                    return true;
                  }
                }
                return false;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



