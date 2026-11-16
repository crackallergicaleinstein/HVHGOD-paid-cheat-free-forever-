// FUN_1802405f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802405f0 */

undefined8
FUN_1802405f0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  
  sVar7 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0xc));
  if ((((sVar7 < 1) && (0.0 < *(float *)(param_2 + 0xc))) &&
      (sVar7 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x10)), sVar7 < 1)) &&
     (((sVar7 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x14)), sVar7 < 1 &&
       (sVar7 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x18)), sVar7 < 1)) &&
      (sVar7 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x1c)), sVar7 < 1)))) {
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    *param_3 = *param_1;
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
    param_3[4] = param_1[4];
    fVar1 = *(float *)(param_2 + 0xc);
    fVar2 = *(float *)((longlong)param_1 + 0xc);
    fVar3 = *(float *)(param_1 + 2);
    *(float *)(param_3 + 1) = fVar1 * *(float *)(param_1 + 1);
    *(float *)((longlong)param_3 + 0xc) = fVar1 * fVar2;
    *(float *)(param_3 + 2) = fVar1 * fVar3;
    fVar1 = *(float *)(param_2 + 0xc);
    fVar2 = *(float *)((longlong)param_1 + 0x1c);
    fVar3 = *(float *)(param_1 + 3);
    *(float *)((longlong)param_3 + 0x14) = fVar1 * *(float *)((longlong)param_1 + 0x14);
    *(float *)(param_3 + 3) = fVar1 * fVar3;
    *(float *)((longlong)param_3 + 0x1c) = fVar1 * fVar2;
    *(float *)(param_3 + 4) = *(float *)(param_1 + 4) * *(float *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *param_4 = *(undefined8 *)(param_2 + 0x10);
    param_4[1] = uVar4;
    if (*(char *)((longlong)param_1 + 0x25) != '\0') {
      *(undefined4 *)((longlong)param_4 + 0xc) = 0x3f800000;
      *param_4 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
    }
    return 1;
  }
  return 0;
}



