// FUN_1804cc040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cc040 */

void FUN_1804cc040(void)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar8 = DAT_180bb8ae8;
  lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x2040);
  iVar11 = *(int *)(DAT_180bb8ae8 + 0x20f0);
  uVar4 = *(uint *)(DAT_180bb8ae8 + 0x20e4);
  puVar1 = (undefined8 *)(lVar5 + ((longlong)*(int *)(DAT_180bb8ae8 + 0x204c) + 0x41) * 0x10);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  if (*(int *)(DAT_180bb8ae8 + 0x204c) == 1) {
    fVar3 = *(float *)(lVar5 + 0x30);
    fVar12 = *(float *)(lVar5 + 0x34);
  }
  else {
    fVar3 = *(float *)(lVar5 + 0x58) + *(float *)(lVar5 + 0x40);
    fVar12 = *(float *)(lVar5 + 0x44) + *(float *)(lVar5 + 0x5c);
  }
  uStack_10._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  fVar10 = uStack_10._4_4_;
  local_18._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  fVar9 = local_18._4_4_;
  if (iVar11 == 0) {
    if ((uVar4 & 5) == 0) {
      return;
    }
    uStack_10 = CONCAT44(uStack_10._4_4_,fVar3);
    local_18 = CONCAT44(local_18._4_4_,fVar3);
    if ((uVar4 & 4) != 0) {
      fVar12 = uStack_10._4_4_ - local_18._4_4_;
      uStack_10 = CONCAT44(-fVar12 + uStack_10._4_4_,fVar3);
      local_18 = CONCAT44(-fVar12 + local_18._4_4_,fVar3);
      iVar11 = 2;
    }
  }
  else if (iVar11 == 1) {
    if ((uVar4 & 5) == 0) {
      return;
    }
    uStack_10 = CONCAT44(uStack_10._4_4_,*(undefined4 *)(lVar5 + 0x58)) ^ 0x80000000;
    local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)(lVar5 + 0x58)) ^ 0x80000000;
    if ((uVar4 & 4) != 0) {
      fVar3 = fVar10 - fVar9;
      uStack_10 = CONCAT44(fVar3 + fVar10,(float)uStack_10);
      local_18 = CONCAT44(fVar3 + fVar9,(float)local_18);
      iVar11 = 3;
    }
  }
  else {
    uStack_10._0_4_ = (float)uVar7;
    fVar9 = (float)uStack_10;
    local_18._0_4_ = (float)uVar6;
    fVar3 = (float)local_18;
    if (iVar11 == 2) {
      if ((uVar4 & 10) == 0) {
        return;
      }
      uStack_10 = CONCAT44(fVar12,(float)uStack_10);
      local_18 = CONCAT44(fVar12,(float)local_18);
      if ((uVar4 & 8) == 0) goto LAB_1804cc1e9;
      fVar12 = -((float)uStack_10 - (float)local_18);
      iVar11 = 0;
    }
    else {
      if (iVar11 != 3) {
        return;
      }
      if ((uVar4 & 10) == 0) {
        return;
      }
      uStack_10 = CONCAT44(*(undefined4 *)(lVar5 + 0x5c),(float)uStack_10) ^ 0x8000000000000000;
      local_18 = CONCAT44(*(undefined4 *)(lVar5 + 0x5c),(float)local_18) ^ 0x8000000000000000;
      if ((uVar4 & 8) == 0) goto LAB_1804cc1e9;
      fVar12 = fVar9 - fVar3;
      iVar11 = 1;
    }
    uStack_10 = CONCAT44(uStack_10._4_4_,fVar12 + fVar9);
    local_18 = CONCAT44(local_18._4_4_,fVar12 + fVar3);
  }
LAB_1804cc1e9:
  puVar2 = (ulonglong *)(lVar5 + ((longlong)*(int *)(DAT_180bb8ae8 + 0x204c) + 0x41) * 0x10);
  *puVar2 = local_18;
  puVar2[1] = uStack_10;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar8 + 0x2040) + 0x3f0) + 0x430 +
   (longlong)*(int *)(lVar8 + 0x204c) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar8 + 0x2040) + 0x3f0) + 0x434 +
   (longlong)*(int *)(lVar8 + 0x204c) * 8) = 0x7f7fffff;
  *(undefined2 *)(lVar8 + 0x20e0) = 0;
  *(uint *)(lVar8 + 0x20e4) = uVar4 | 0x80;
  *(bool *)(lVar8 + 0x20a1) = *(char *)(lVar8 + 0x20a2) != '\0';
  *(undefined1 *)(lVar8 + 0x20e2) = 1;
  *(undefined4 *)(lVar8 + 0x20f0) = *(undefined4 *)(lVar8 + 0x20f0);
  *(int *)(lVar8 + 0x20f8) = iVar11;
  *(undefined4 *)(lVar8 + 0x20e8) = *(undefined4 *)(lVar8 + 0x20e8);
  return;
}



