// FUN_1805d6df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d6df0 */

ulonglong FUN_1805d6df0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_res20 = (undefined8 *)0x0;
  if ((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
    return 6;
  }
  lVar11 = param_1[1];
  uVar12 = 0;
  uVar18 = local_res10[0];
  while (local_res10[0] = uVar12, lVar11 != 0) {
    puVar4 = *(undefined8 **)(lVar11 + 8);
    plVar1 = (longlong *)(lVar11 + 8);
    local_res18 = (undefined8 *)0x0;
    local_res10[0] = uVar18;
    puVar14 = local_res20;
    for (; local_res20 = puVar14, puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[5]) {
      iVar2 = *(int *)(puVar4 + 4);
      if (iVar2 == 1) {
        local_res10[0] = 0;
        puVar14 = (undefined8 *)FUN_18057abe0(lVar3,0x30,local_res10);
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        uVar10 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar10;
        uVar10 = puVar4[3];
        puVar14[2] = puVar4[2];
        puVar14[3] = uVar10;
        uVar7 = *(undefined4 *)((longlong)puVar4 + 0x24);
        uVar8 = *(undefined4 *)(puVar4 + 5);
        uVar9 = *(undefined4 *)((longlong)puVar4 + 0x2c);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar4 + 4);
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar7;
        *(undefined4 *)(puVar14 + 5) = uVar8;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar9;
        puVar14[5] = local_res18;
        local_res18 = puVar14;
      }
      else {
        if (iVar2 == 2) {
          local_60 = puVar4[1];
          local_70 = *puVar4;
          local_68 = puVar4[2];
          iVar2 = (int)((ulonglong)local_68 >> 0x20);
          uVar18 = (int)local_60 + (int)local_68 * -2 + (int)local_70;
          iVar15 = (int)((ulonglong)local_70 >> 0x20);
          iVar16 = 1;
          if ((int)uVar18 < 0) {
            uVar18 = ((int)local_68 * 2 - (int)local_60) - (int)local_70;
          }
          iVar17 = (int)((ulonglong)local_60 >> 0x20);
          uVar12 = iVar15 + iVar2 * -2 + iVar17;
          if ((int)uVar12 < 0) {
            uVar12 = (iVar2 * 2 - iVar17) - iVar15;
          }
          if ((int)uVar12 <= (int)uVar18) {
            uVar12 = uVar18;
          }
          if (8 < (int)uVar12) {
            do {
              uVar12 = uVar12 >> 2;
              iVar16 = iVar16 * 2;
            } while (8 < uVar12);
          }
          uVar13 = FUN_1805d69a0(lVar3,&local_70,iVar16,&local_res18);
        }
        else {
          if (iVar2 != 3) {
            return 6;
          }
          local_70 = *puVar4;
          local_68 = puVar4[2];
          local_60 = puVar4[3];
          local_58 = puVar4[1];
          uVar13 = FUN_1805d6b80(lVar3,&local_70,0x20,&local_res18);
        }
        if ((int)uVar13 != 0) {
          return uVar13;
        }
      }
      puVar14 = local_res20;
    }
    local_res10[0] = 0;
    local_res20 = (undefined8 *)FUN_18057abe0(lVar3,0x18,local_res10);
    uVar12 = local_res10[0];
    if (local_res10[0] != 0) goto LAB_1805d70a9;
    *local_res20 = 0;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[2] = puVar14;
    local_res20[1] = local_res18;
    local_res18 = (undefined8 *)0x0;
    lVar5 = *(longlong *)(lVar11 + 0x10);
    bVar19 = lVar11 != 0;
    local_res10[0] = 0;
    lVar11 = lVar5;
    uVar18 = local_res10[0];
    if (bVar19) {
      lVar5 = *plVar1;
      while (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x28);
        FUN_18057abd0(lVar3,lVar5);
        lVar5 = lVar6;
      }
      FUN_18057abd0(lVar3);
      uVar18 = local_res10[0];
    }
  }
  param_1[1] = (longlong)local_res20;
LAB_1805d70a9:
  return (ulonglong)local_res10[0];
}



