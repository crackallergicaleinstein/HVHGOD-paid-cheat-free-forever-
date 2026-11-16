// FUN_180240bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180240bb0 */

uint * FUN_180240bb0(longlong param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  if ((int)param_2[3] < 0) {
    local_c4 = param_2[1];
    local_68 = ZEXT816(0);
    local_c8 = *param_2;
    local_c0 = param_2[2];
    local_a4 = param_2[6];
    local_bc = *(undefined8 *)*param_3;
    local_b4 = *(undefined4 *)((undefined8 *)*param_3 + 1);
    local_a8 = param_2[4];
    local_ac = param_2[7];
    local_b0 = param_2[5];
    local_98 = 0;
    local_8c = 0;
    local_80 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_a0 = 0;
    local_9c = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_7c = 0;
    local_4c = 0;
    puVar6 = (uint *)FUN_1803e0120(local_ac,*(undefined8 *)param_3[1],&local_c8);
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)param_2[3] * 8);
    puVar6 = (uint *)0x0;
    if (lVar4 != 0) {
      puVar6 = (uint *)(lVar4 + 0x10);
    }
  }
  if (puVar6 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    puVar6 = (uint *)0x0;
  }
  else {
    uVar2 = *puVar6;
    *puVar6 = uVar2 | 1;
    puVar7 = (uint *)0x0;
    if (*(longlong *)(puVar6 + 2) != 0) {
      puVar7 = (uint *)(*(longlong *)(puVar6 + 2) + 0x10);
    }
    if ((puVar7 == (uint *)0x0) || (cVar5 = FUN_1802408d0(*param_4), cVar5 == '\0')) {
      *puVar6 = uVar2;
      puVar6 = (uint *)0x0;
      *(undefined4 *)(param_1 + 0x30) = uVar1;
    }
    else {
      uVar2 = *param_2;
      *puVar7 = *puVar7 | 1;
      uVar3 = *puVar7;
      puVar7[2] = uVar2;
      puVar7[3] = param_2[1];
      *puVar7 = uVar3 | 2;
      uVar2 = param_2[2];
      *puVar7 = uVar3 | 6;
      puVar7[4] = uVar2;
      uVar2 = param_2[4];
      *puVar6 = *puVar6 | 0x800;
      uVar3 = *puVar6;
      puVar6[0x16] = uVar2;
      uVar2 = param_2[6];
      *puVar6 = uVar3 | 0x1000;
      puVar6[0x17] = uVar2;
      uVar2 = param_2[5];
      *puVar6 = uVar3 | 0x1200;
      puVar6[0x14] = uVar2;
      puVar6[0x15] = param_2[7];
      *puVar6 = uVar3 | 0x1600;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x30) + -1;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40;
    }
  }
  return puVar6;
}



