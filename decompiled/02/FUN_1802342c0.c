// FUN_1802342c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802342c0 */

undefined8 FUN_1802342c0(float param_1,uint param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  float fVar4;
  uint local_28 [8];
  
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    if ((int)param_3 < 1) {
      fVar4 = INFINITY;
    }
    else {
      local_28[0] = param_2;
      puVar3 = local_28;
      if ((int)param_2 < 1) {
        puVar3 = &DAT_1807ce844;
      }
      if (0x65 < (int)param_2) {
        puVar3 = &DAT_1807ce840;
      }
      uVar2 = *puVar3;
      if (uVar2 != 0x65) {
        if ((int)param_3 < (int)uVar2) {
          uVar2 = param_3;
        }
        param_3 = uVar2;
      }
      uVar2 = 0x82;
      if ((int)param_3 < 0x82) {
        uVar2 = param_3;
      }
      fVar4 = (float)(int)uVar2;
    }
    if (fVar4 <= param_1) {
      return 1;
    }
  }
  return 0;
}



