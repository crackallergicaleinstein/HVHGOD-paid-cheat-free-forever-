// FUN_180296c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180296c30 */

void FUN_180296c30(longlong *param_1,int param_2,byte param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  byte local_18 [8];
  uint local_10 [2];
  
  lVar8 = (longlong)param_2;
  plVar3 = (longlong *)*param_1;
  pcVar4 = *(char **)(*plVar3 + lVar8 * 8);
  if (*pcVar4 == '\0') {
    return;
  }
  bVar6 = pcVar4[0x78];
  if (*(char *)(plVar3[1] + 3 + lVar8 * 4) == '\0') {
    local_18[0] = 0;
    local_18[1] = 2;
    local_18[2] = 3;
    local_18[3] = 4;
    local_18[4] = 5;
    local_18[5] = 6;
    local_18[6] = 8;
    local_18[7] = 9;
    if (10 < bVar6) {
      if (0x12 < bVar6) {
        return;
      }
      bVar6 = local_18[bVar6 - 0xb];
    }
    if (bVar6 != 6) {
      return;
    }
    if (*(char *)(plVar3[2] + 3 + lVar8 * 4) == '\0') {
      return;
    }
  }
  lVar8 = *(longlong *)(*(longlong *)param_1[1] + lVar8 * 8);
  iVar2 = *(int *)(lVar8 + 0x7c);
  puVar1 = (uint *)(lVar8 + 0x7c);
  if (iVar2 < 0) {
    uVar7 = (uint)(10 < *(byte *)(lVar8 + 0x78));
  }
  else {
    local_10[0] = 2;
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    puVar5 = local_10;
    if (iVar2 < 3) {
      puVar5 = puVar1;
    }
    uVar7 = *puVar5;
  }
  if (uVar7 != 2) {
    if (iVar2 < 0) {
      uVar7 = (uint)(10 < *(byte *)(lVar8 + 0x78));
    }
    else {
      local_10[1] = 2;
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      puVar5 = local_10 + 1;
      if (iVar2 < 3) {
        puVar5 = puVar1;
      }
      uVar7 = *puVar5;
    }
    if (uVar7 != param_3) {
      return;
    }
  }
  FUN_18028e230(param_1[2],param_2,param_3,CONCAT71((int7)((ulonglong)puVar1 >> 8),param_2 == 2));
  return;
}



