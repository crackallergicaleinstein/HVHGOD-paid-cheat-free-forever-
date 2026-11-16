// FUN_18035fcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035fcb0 */

undefined8 FUN_18035fcb0(float *param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_138;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 local_118;
  char local_114;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined2 local_f8;
  undefined1 uStack_f6;
  byte bStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  ushort uStack_e2;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  
  uVar2 = uStack_bc;
  if (param_3 != (undefined8 *)0x0) {
    uStack_f4 = 0x3f800000;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    auStack_e0 = ZEXT816(0);
    local_f8 = 0;
    uStack_f6 = 0;
    uStack_e4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_bc = uStack_bc & 0xffffff00;
    *param_3 = CONCAT44(0x3f800000,(uint)bStack_f5 << 0x18);
    param_3[1] = 0;
    param_3[2] = (ulonglong)uStack_e2 << 0x30;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = uStack_c8;
    param_3[7] = CONCAT44(uVar2,uStack_c0) & 0xffffff00ffffffff;
  }
  local_138 = *(undefined8 *)param_1;
  fVar5 = 0.0;
  sVar3 = thunk_FUN_180624430();
  if (0 < sVar3) {
LAB_1803601c1:
    if (param_3 != (undefined8 *)0x0) {
      *(undefined1 *)param_3 = 9;
    }
    return 0;
  }
  sVar3 = thunk_FUN_180624430(local_138._4_4_);
  if ((0 < sVar3) || (sVar3 = thunk_FUN_180624430(param_1[2]), 0 < sVar3)) goto LAB_1803601c1;
  local_138 = *(undefined8 *)(param_1 + 3);
  sVar3 = thunk_FUN_180624430(local_138);
  if (0 < sVar3) goto LAB_1803601c1;
  sVar3 = thunk_FUN_180624430(local_138._4_4_);
  if ((0 < sVar3) || (sVar3 = thunk_FUN_180624430(param_1[5]), 0 < sVar3)) goto LAB_1803601c1;
  local_138 = *(undefined8 *)(param_1 + 6);
  sVar3 = thunk_FUN_180624430(local_138);
  if (0 < sVar3) goto LAB_1803601c1;
  sVar3 = thunk_FUN_180624430(local_138._4_4_);
  if ((0 < sVar3) || (sVar3 = thunk_FUN_180624430(param_1[8]), 0 < sVar3)) goto LAB_1803601c1;
  local_138 = *(undefined8 *)(param_1 + 9);
  sVar3 = thunk_FUN_180624430(local_138);
  if (0 < sVar3) goto LAB_1803601c1;
  sVar3 = thunk_FUN_180624430(local_138._4_4_);
  if ((((0 < sVar3) || (sVar3 = thunk_FUN_180624430(param_1[0xb]), 0 < sVar3)) ||
      (param_1[9] <= param_1[6])) || ((param_1[10] <= param_1[7] || (param_1[0xb] <= param_1[8]))))
  goto LAB_1803601c1;
  fVar4 = param_1[0xc];
  sVar3 = thunk_FUN_180624430(fVar4);
  if (0 < sVar3) goto LAB_1803601c1;
  fVar9 = param_1[0xd];
  sVar3 = thunk_FUN_180624430(fVar9);
  if (((0 < sVar3) || (fVar4 < fVar5)) || (fVar9 < fVar5)) goto LAB_1803601c1;
  fVar6 = param_1[0xe];
  sVar3 = thunk_FUN_180624430(fVar6);
  if (((0 < sVar3) || (fVar6 <= fVar5)) || (fVar8 = 1.0, 1.0 < fVar6)) goto LAB_1803601c1;
  if (fVar5 < param_1[5]) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined1 *)param_3 = 0x13;
    return 0;
  }
  fVar6 = param_1[3] * 0.015625;
  fVar12 = param_1[4] * 0.015625;
  fVar13 = 24.0;
  fVar11 = param_1[5] * 0.015625 - fVar4 * 0.5 * fVar9 * 0.015625 * 0.015625;
  fVar4 = fVar6 + *param_1 + fVar5;
  fVar1 = (fVar11 + param_1[2]) - 24.0;
  auVar10 = ZEXT464((uint)fVar1);
  fVar9 = fVar12 + param_1[1] + fVar5;
  auVar7 = ZEXT464((uint)fVar9);
  if (param_3 != (undefined8 *)0x0) {
    *(float *)(param_3 + 3) = fVar6;
    *(float *)((longlong)param_3 + 0x1c) = fVar12;
    *(float *)(param_3 + 4) = fVar11;
    *(float *)((longlong)param_3 + 0x24) = fVar4;
    *(float *)(param_3 + 5) = fVar9;
    *(float *)((longlong)param_3 + 0x2c) = fVar1;
  }
  sVar3 = thunk_FUN_180624430(fVar4);
  if (((0 < sVar3) || (sVar3 = thunk_FUN_180624430(auVar7._0_8_), 0 < sVar3)) ||
     (sVar3 = thunk_FUN_180624430(auVar10._0_8_), 0 < sVar3)) goto LAB_1803601c1;
  local_138 = *(undefined8 *)param_1;
  local_130 = param_1[2];
  local_104 = auVar7._0_4_;
  local_100 = auVar10._0_4_;
  local_108 = fVar4;
  FUN_180358500(param_2,&local_128,&local_138,&local_108);
  if (param_3 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)param_3 + 1) = 1;
    *(char *)((longlong)param_3 + 2) = local_114;
    if (local_114 == '\0') goto LAB_18036006f;
    *(ulonglong *)((longlong)param_3 + 4) = CONCAT44(fStack_124,local_128);
    *(ulonglong *)((longlong)param_3 + 0xc) = CONCAT44(fStack_11c,fStack_120);
    *(undefined4 *)((longlong)param_3 + 0x14) = local_118;
  }
  if (local_114 != '\0') {
    if ((char)local_118 != '\0') {
      if (param_3 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined1 *)param_3 = 0xb;
      return 0;
    }
    if (local_118._1_1_ != '\0') {
      if (param_3 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined1 *)param_3 = 0xc;
      return 0;
    }
    sVar3 = thunk_FUN_180624430(fStack_124);
    if (((sVar3 < 1) && (((uint)fStack_120 & 0x7f800000) != 0x7f800000)) &&
       ((((uint)fStack_11c & 0x7f800000) != 0x7f800000 &&
        (sVar3 = thunk_FUN_180624430(local_128), sVar3 < 1)))) {
      if (local_128 == fVar8) {
        if (param_3 == (undefined8 *)0x0) {
          return 0;
        }
        *(undefined1 *)param_3 = 0xd;
        return 0;
      }
      if ((fVar5 < local_128) && (local_128 < fVar8)) {
        if (param_1[0xe] <= fStack_11c) {
          if (param_3 != (undefined8 *)0x0) {
            fVar4 = -(fVar6 * fStack_124 + fVar12 * fStack_120 + fStack_11c * fVar11);
            *(undefined1 *)param_3 = 1;
            if (fVar5 < fVar4) {
              fVar4 = fVar4 / fStack_11c;
              *(float *)(param_3 + 6) = (fVar13 / fVar4 + fVar8) * local_128;
              *(float *)((longlong)param_3 + 0x34) = fVar4;
              *(float *)(param_3 + 7) = -fVar11;
              if (*(char *)((longlong)param_3 + 0x3c) == '\0') {
                *(undefined1 *)((longlong)param_3 + 0x3c) = 1;
              }
            }
          }
          return 1;
        }
        if (param_3 == (undefined8 *)0x0) {
          return 0;
        }
        *(undefined1 *)param_3 = 0xf;
        return 0;
      }
    }
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined1 *)param_3 = 0xe;
    return 0;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
LAB_18036006f:
  *(undefined1 *)param_3 = 10;
  return 0;
}



