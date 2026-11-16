// FUN_1800b2db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b2db0 */

void FUN_1800b2db0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char **ppcVar5;
  int *piVar6;
  char **ppcVar7;
  char cVar8;
  char cVar9;
  float fVar10;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [16];
  char *local_38 [4];
  
  local_78[1] = 3;
  cVar8 = '\0';
  local_78[0] = 0;
  iVar1 = *(int *)(param_2 + 0x2c);
  piVar6 = local_78;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x2c);
  }
  piVar4 = local_78 + 1;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar1 = *piVar4;
  cVar9 = '\0';
  if (iVar1 != 1) {
    cVar9 = (iVar1 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,iVar1 != 0,cVar9,*(undefined4 *)(param_2 + 0x30));
  local_98 = (undefined1  [8])&DAT_1806bc7c4;
  uStack_90 = 4;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[3] = 3;
  local_78[2] = 0;
  iVar1 = *(int *)(param_2 + 0x34);
  piVar6 = local_78 + 2;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x34);
  }
  piVar4 = local_78 + 3;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  cVar9 = '\0';
  if (iVar2 != 1) {
    cVar9 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar9,
                        *(undefined4 *)(param_2 + 0x38));
  local_98 = (undefined1  [8])0x1806bc7d0;
  uStack_90 = 9;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[5] = 3;
  local_78[4] = 0;
  iVar1 = *(int *)(param_2 + 0x3c);
  piVar6 = local_78 + 4;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  piVar4 = local_78 + 5;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  cVar9 = '\0';
  if (iVar2 != 1) {
    cVar9 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar9,
                        *(undefined4 *)(param_2 + 0x40));
  local_98 = (undefined1  [8])0x1806bc7e0;
  uStack_90 = 8;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[7] = 3;
  local_78[6] = 0;
  iVar1 = *(int *)(param_2 + 0x44);
  piVar6 = local_78 + 6;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x44);
  }
  piVar4 = local_78 + 7;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  cVar9 = '\0';
  if (iVar2 != 1) {
    cVar9 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar9,
                        *(undefined4 *)(param_2 + 0x48));
  local_98 = (undefined1  [8])0x1806bc7f0;
  uStack_90 = 7;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[9] = 3;
  local_78[8] = 0;
  iVar1 = *(int *)(param_2 + 0x4c);
  piVar6 = local_78 + 8;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x4c);
  }
  piVar4 = local_78 + 9;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  cVar9 = '\0';
  if (iVar2 != 1) {
    cVar9 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar9,
                        *(undefined4 *)(param_2 + 0x50));
  local_98 = (undefined1  [8])0x1806bc7f8;
  uStack_90 = 10;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[0xb] = 3;
  local_78[10] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  piVar6 = local_78 + 10;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x54);
  }
  piVar4 = local_78 + 0xb;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  cVar9 = '\0';
  if (iVar2 != 1) {
    cVar9 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar9,
                        *(undefined4 *)(param_2 + 0x58));
  local_98 = (undefined1  [8])0x1806bc808;
  uStack_90 = 8;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[0xd] = 3;
  local_78[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x5c);
  piVar6 = local_78 + 0xc;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 0x5c);
  }
  piVar4 = local_78 + 0xd;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  cVar9 = '\0';
  if (iVar2 != 1) {
    cVar9 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar9,
                        *(undefined4 *)(param_2 + 0x60));
  local_98 = (undefined1  [8])0x1806bc818;
  uStack_90 = 8;
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_78[0xf] = 3;
  local_78[0xe] = 0;
  iVar1 = *(int *)(param_2 + 100);
  piVar6 = local_78 + 0xe;
  if (-1 < iVar1) {
    piVar6 = (int *)(param_2 + 100);
  }
  piVar4 = local_78 + 0xf;
  if (iVar1 < 4) {
    piVar4 = piVar6;
  }
  iVar2 = *piVar4;
  if (iVar2 != 1) {
    cVar8 = (iVar2 != 2) + '\x01';
  }
  uVar3 = FUN_1800afd50(&local_88,CONCAT31((int3)((uint)iVar1 >> 8),iVar2 != 0),cVar8,
                        *(undefined4 *)(param_2 + 0x68));
  uStack_90 = 7;
  local_98 = (undefined1  [8])"edgebug";
  local_a8 = "movement";
  local_a0 = 8;
  FUN_1800afbf0(param_1,&local_a8,local_98,uVar3);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,0x42c80000);
  local_38[0]._0_4_ = 0;
  fVar10 = *(float *)(param_2 + 4);
  _local_98 = ZEXT816(0);
  ppcVar7 = local_38;
  if (0.0 <= fVar10) {
    ppcVar7 = (char **)(param_2 + 4);
  }
  ppcVar5 = &local_a8;
  if (fVar10 <= 100.0) {
    ppcVar5 = ppcVar7;
  }
  fVar10 = *(float *)ppcVar5;
  FUN_1801409d0(&uStack_90,0);
  local_98[0] = 7;
  uStack_90 = (double)fVar10;
  local_a8 = "slowwalk speed";
  local_a0 = 0xe;
  local_88 = "movement";
  local_80 = 8;
  FUN_1800afbf0(param_1,&local_88,&local_a8,local_98);
  return;
}



