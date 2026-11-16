// FUN_180218e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180218e30 */

undefined2 FUN_180218e30(undefined8 *param_1)

{
  undefined8 uVar1;
  short sVar2;
  float fVar3;
  undefined4 uStack_24;
  
  uVar1 = *param_1;
  sVar2 = thunk_FUN_180624430(uVar1);
  if (sVar2 < 1) {
    uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
    sVar2 = thunk_FUN_180624430(uStack_24);
    if (sVar2 < 1) {
      sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 1));
      if (sVar2 < 1) {
        uVar1 = *(undefined8 *)((longlong)param_1 + 0xc);
        sVar2 = thunk_FUN_180624430(uVar1);
        if (sVar2 < 1) {
          uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
          sVar2 = thunk_FUN_180624430(uStack_24);
          if (sVar2 < 1) {
            sVar2 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_1 + 0x14));
            if (sVar2 < 1) {
              fVar3 = *(float *)(param_1 + 3);
              sVar2 = thunk_FUN_180624430(fVar3);
              if (((sVar2 < 1) && (0.001 < fVar3)) && (fVar3 < 100.0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



