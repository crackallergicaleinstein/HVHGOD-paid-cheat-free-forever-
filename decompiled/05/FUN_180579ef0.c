// FUN_180579ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579ef0 */

undefined8 FUN_180579ef0(longlong *param_1,int param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar16 = 0;
  uVar9 = 0;
  iVar6 = (int)param_1[0xc];
  if (iVar6 == 0x53564720) {
    lVar4 = *param_1;
    plVar15 = (longlong *)0x0;
    if (lVar4 != 0) {
      puVar13 = (undefined8 *)(lVar4 + 0x18);
      puVar1 = puVar13 + *(uint *)(lVar4 + 0x14);
      for (; plVar15 = (longlong *)0x0, puVar13 < puVar1; puVar13 = puVar13 + 1) {
        plVar15 = (longlong *)*puVar13;
        iVar6 = strcmp(*(char **)(*plVar15 + 8),"ot-svg");
        if (iVar6 == 0) break;
      }
    }
    uVar10 = (*(code *)**(undefined8 **)(*plVar15 + 0x18))(plVar15,param_1,0);
    return uVar10;
  }
  if (iVar6 != 0x6f75746c) {
    return CONCAT71((uint7)(uint3)((ulonglong)param_1[0xc] >> 8),1);
  }
  if (param_3 != (uint *)0x0) {
    uVar16 = *param_3;
    uVar9 = param_3[1];
  }
  if (param_1 != (longlong *)0xffffffffffffff68) {
    if (*(ushort *)((longlong)param_1 + 0x9a) == 0) {
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_38 = 0;
    }
    else {
      puVar5 = (uint *)param_1[0x14];
      puVar2 = puVar5 + (ulonglong)*(ushort *)((longlong)param_1 + 0x9a) * 2;
      local_38 = *puVar5;
      local_30 = *puVar5;
      local_34 = puVar5[1];
      uVar3 = puVar5[1];
      while( true ) {
        local_2c = uVar3;
        puVar5 = puVar5 + 2;
        if (puVar2 <= puVar5) break;
        uVar7 = *puVar5;
        uVar3 = puVar5[1];
        uVar12 = uVar7;
        if ((int)local_38 <= (int)uVar7) {
          uVar12 = local_38;
        }
        if ((int)uVar7 <= (int)local_30) {
          uVar7 = local_30;
        }
        uVar8 = uVar3;
        if ((int)local_34 <= (int)uVar3) {
          uVar8 = local_34;
        }
        local_38 = uVar12;
        local_30 = uVar7;
        local_34 = uVar8;
        if ((int)uVar3 <= (int)local_2c) {
          uVar3 = local_2c;
        }
      }
    }
  }
  iVar14 = ((int)local_38 >> 6) + ((int)uVar16 >> 6);
  iVar19 = ((int)local_30 >> 6) + ((int)uVar16 >> 6);
  iVar6 = ((int)local_2c >> 6) + ((int)uVar9 >> 6);
  local_38 = (local_38 & 0x3f) + (uVar16 & 0x3f);
  iVar18 = ((int)local_34 >> 6) + ((int)uVar9 >> 6);
  local_30 = (local_30 & 0x3f) + (uVar16 & 0x3f);
  local_34 = (local_34 & 0x3f) + (uVar9 & 0x3f);
  local_2c = (local_2c & 0x3f) + (uVar9 & 0x3f);
  if ((param_2 == 0) || (param_2 == 1)) {
LAB_18057a166:
    cVar11 = '\x02';
LAB_18057a16b:
    iVar19 = ((int)(local_30 + 0x3f) >> 6) + iVar19;
    iVar14 = ((int)local_38 >> 6) + iVar14;
    iVar18 = ((int)local_34 >> 6) + iVar18;
    iVar6 = ((int)(local_2c + 0x3f) >> 6) + iVar6;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        cVar11 = '\x05';
        FUN_18057a570(&local_38,param_1,3);
      }
      else {
        if (param_2 != 4) goto LAB_18057a166;
        cVar11 = '\x06';
        FUN_18057a570(&local_38,param_1,4);
      }
      goto LAB_18057a16b;
    }
    iVar19 = (local_30 + 0x20 >> 6) + iVar19;
    iVar14 = (local_38 + 0x1f >> 6) + iVar14;
    cVar11 = '\x01';
    if (iVar14 == iVar19) {
      if ((local_30 - 0x20 & 0x3f) + (local_38 + 0x1f & 0x3f) < 0x3f) {
        iVar14 = iVar14 + -1;
      }
      else {
        iVar19 = iVar19 + 1;
      }
    }
    iVar6 = (local_2c + 0x20 >> 6) + iVar6;
    iVar18 = (local_34 + 0x1f >> 6) + iVar18;
    if (iVar18 == iVar6) {
      if ((local_2c - 0x20 & 0x3f) + (local_34 + 0x1f & 0x3f) < 0x3f) {
        iVar18 = iVar18 + -1;
      }
      else {
        iVar6 = iVar6 + 1;
      }
    }
  }
  uVar16 = iVar19 - iVar14;
  iVar17 = iVar6 - iVar18;
  if (((((((int)uVar16 < 0x10000) && (iVar17 < 0x10000)) && (-0x1000001 < iVar14)) &&
       ((iVar19 < 0x1000000 && (-0x1000001 < iVar18)))) && (iVar6 < 0x1000000)) &&
     ((param_1[1] == 0 ||
      ((lVar4 = *(longlong *)(param_1[1] + 0x80),
       (int)uVar16 <= (int)((uint)*(ushort *)(lVar4 + 0x18) * 10) &&
       (iVar17 <= (int)((uint)*(ushort *)(lVar4 + 0x1a) * 10))))))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if (cVar11 == '\x01') {
    uVar9 = (int)(uVar16 + 0xf) >> 3 & 0xfffffffe;
  }
  else {
    if (cVar11 != '\x02') {
      if (cVar11 == '\x05') {
        uVar16 = uVar16 * 3;
        uVar9 = uVar16 + 3 & 0xfffffffc;
        goto LAB_18057a252;
      }
      if (cVar11 == '\x06') {
        iVar17 = iVar17 * 3;
      }
    }
    uVar9 = uVar16;
  }
LAB_18057a252:
  *(int *)(param_1 + 0x12) = iVar14;
  *(int *)((longlong)param_1 + 0x94) = iVar6;
  *(uint *)(param_1 + 0xe) = uVar9;
  *(char *)((longlong)param_1 + 0x82) = cVar11;
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  *(uint *)((longlong)param_1 + 0x6c) = uVar16;
  *(int *)(param_1 + 0xd) = iVar17;
  return uVar10;
}



