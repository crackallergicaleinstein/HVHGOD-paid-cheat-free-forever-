// FUN_180245030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180245030 */

undefined8 FUN_180245030(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  short sVar3;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float local_88;
  float fStack_84;
  float fStack_74;
  
  if ((((*(longlong *)(param_1 + 0x58) < 0) || (*(longlong *)(param_2 + 0x58) < 0)) ||
      (*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30))) ||
     ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38) ||
      (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58))))) {
    return 0;
  }
  if (*(char *)(param_1 + 0xf0) != *(char *)(param_2 + 0xf0)) {
    return 1;
  }
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return 0;
  }
  uVar1 = *(ulonglong *)(param_2 + 100);
  uVar2 = *(undefined8 *)(param_1 + 100);
  uVar9 = uVar2;
  sVar3 = thunk_FUN_180624430(uVar2);
  fVar8 = (float)uVar9;
  uVar4 = 0x7fffffff;
  fVar5 = 0.1;
  if (((sVar3 < 1) &&
      (fStack_74 = (float)((ulonglong)uVar2 >> 0x20), ((uint)fStack_74 & 0x7f800000) != 0x7f800000))
     && (fVar7 = *(float *)(param_1 + 0x6c), ((uint)fVar7 & 0x7f800000) != 0x7f800000)) {
    local_88 = (float)uVar1;
    sVar3 = thunk_FUN_180624430(uVar1 & 0xffffffff);
    if (sVar3 < 1) {
      fStack_84 = (float)(uVar1 >> 0x20);
      sVar3 = thunk_FUN_180624430(fStack_84);
      if (sVar3 < 1) {
        fVar6 = *(float *)(param_2 + 0x6c);
        sVar3 = thunk_FUN_180624430(fVar6);
        if (sVar3 < 1) {
          if (fVar5 < (float)((uint)(fVar8 - local_88) & uVar4)) {
            return 1;
          }
          FUN_180615070(fStack_74 - fStack_84,0x43b40000);
          if (fVar5 < (float)(extraout_XMM0_Da & uVar4)) {
            return 1;
          }
          if (fVar5 < (float)((uint)(fVar7 - fVar6) & uVar4)) {
            return 1;
          }
        }
      }
    }
  }
  if ((((*(int *)(param_1 + 0xe0) == *(int *)(param_2 + 0xe0)) &&
       (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))) &&
      (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x18))) &&
     (((*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20) &&
       ((float)((uint)(*(float *)(param_1 + 0xb4) - *(float *)(param_2 + 0xb4)) & uVar4) <= 0.001))
      && ((float)((uint)(*(float *)(param_1 + 0xb8) - *(float *)(param_2 + 0xb8)) & uVar4) <= 0.001)
      ))) {
    if ((*(int *)(param_1 + 0xbc) == *(int *)(param_2 + 0xbc)) &&
       (((*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xbc) ||
         (*(int *)(param_2 + 0xc0) != *(int *)(param_2 + 0xbc))) ||
        ((*(longlong *)(param_1 + 0x28) == *(longlong *)(param_2 + 0x28) &&
         (((FUN_180615070(*(float *)(param_1 + 0x9c) - *(float *)(param_2 + 0x9c),0x43b40000),
           (float)(extraout_XMM0_Da_00 & uVar4) <= fVar5 &&
           (FUN_180615070(*(float *)(param_1 + 0xa0) - *(float *)(param_2 + 0xa0),0x43b40000),
           (float)(extraout_XMM0_Da_01 & uVar4) <= fVar5)) &&
          ((float)((uint)(*(float *)(param_1 + 0xa4) - *(float *)(param_2 + 0xa4)) & uVar4) <= fVar5
          )))))))) {
      return 0;
    }
  }
  return 1;
}



