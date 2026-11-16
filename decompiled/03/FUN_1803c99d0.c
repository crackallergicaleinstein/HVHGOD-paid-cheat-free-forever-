// FUN_1803c99d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c99d0 */

void FUN_1803c99d0(byte param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte local_18 [16];
  
  cVar4 = (char)(param_2 >> 0x18);
  if (cVar4 != '\0') {
    puVar1 = *(uint **)*param_4;
    *puVar1 = *puVar1 | 1 << (*(int *)((undefined8 *)*param_4)[1] * 3 & 0x1fU);
  }
  local_18[0] = 0;
  local_18[1] = 2;
  local_18[2] = 3;
  local_18[3] = 4;
  local_18[4] = 5;
  local_18[5] = 6;
  local_18[6] = 8;
  local_18[7] = 9;
  if (param_1 < 0xb) {
    bVar3 = param_1;
LAB_1803c9a28:
    if ((bVar3 == 6) && ((char)((ulonglong)param_3 >> 0x18) != '\0')) {
      puVar1 = *(uint **)*param_4;
      *puVar1 = *puVar1 | 1 << ((2 - (uint)(*(char *)param_4[1] != '\0')) +
                                *(int *)((undefined8 *)*param_4)[1] * 3 & 0x1f);
    }
    local_18[0] = 0;
    local_18[1] = 2;
    local_18[2] = 3;
    local_18[3] = 4;
    local_18[4] = 5;
    local_18[5] = 6;
    local_18[6] = 8;
    local_18[7] = 9;
    if (10 < param_1) {
      if (0x12 < param_1) goto LAB_1803c9a99;
      param_1 = local_18[param_1 - 0xb];
    }
    uVar5 = (uint)param_1;
    if (param_1 == 0) goto LAB_1803c9aeb;
    if ((uVar5 - 2 & 0xfd) != 0) {
      return;
    }
  }
  else {
    if (param_1 < 0x13) {
      bVar3 = local_18[param_1 - 0xb];
      goto LAB_1803c9a28;
    }
LAB_1803c9a99:
    uVar5 = 2;
  }
  if (cVar4 == '\0') {
    return;
  }
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar5),SUB6416(ZEXT464(2),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3ee66666),0),SUB6416(ZEXT464(0x3d75c28f),0),auVar2);
  cVar4 = (char)(int)((float)(param_2 >> 0x18) * auVar2._0_4_ + 0.5);
LAB_1803c9aeb:
  if (cVar4 != '\0') {
    puVar1 = *(uint **)*param_4;
    *puVar1 = *puVar1 | 1 << ((2 - (uint)(*(char *)param_4[1] != '\0')) +
                              *(int *)((undefined8 *)*param_4)[1] * 3 & 0x1f);
  }
  return;
}



