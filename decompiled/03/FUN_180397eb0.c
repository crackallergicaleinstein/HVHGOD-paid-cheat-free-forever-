// FUN_180397eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180397eb0 */

undefined8 FUN_180397eb0(longlong *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  longlong local_res8;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  lVar8 = (longlong)param_2;
  lVar7 = *(longlong *)(*param_1 + 0x10) + (lVar8 + 1) * 8;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (lVar7 == 0) {
    bVar3 = false;
  }
  else {
    local_res8 = 0;
    cVar4 = FUN_1804514f0(&local_res8,lVar7,8);
    if (cVar4 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  lVar7 = local_res8;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar3) {
    lVar7 = 0;
  }
  lVar6 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  *(longlong *)(param_1[1] + lVar8 * 8) = lVar6;
  lVar7 = *(longlong *)(param_1[1] + lVar8 * 8);
  if (lVar7 != 0) {
    lVar6 = FUN_18017ea70();
    local_54 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    local_58 = 0;
    local_34 = 0;
    cVar4 = FUN_1804514f0(&local_58,lVar7,0x28);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (cVar4 != '\0') {
      puVar2 = *(uint **)(param_1[1] + lVar8 * 8);
      fVar9 = (float)puVar2[5];
      sVar5 = thunk_FUN_180624430(fVar9);
      if ((((sVar5 < 1) && (0.0 <= fVar9)) && (fVar9 <= 1.0)) &&
         (((uVar1 = *puVar2, (uVar1 & 8) == 0 || (sVar5 = thunk_FUN_180624430(puVar2[6]), sVar5 < 1)
           ) && (((uVar1 & 0x10) == 0 || (sVar5 = thunk_FUN_180624430(puVar2[7]), sVar5 < 1)))))) {
        return 1;
      }
    }
  }
  return 0;
}



