// FUN_18043ac50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ac50 */

void FUN_18043ac50(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  int local_38 [2];
  undefined1 local_30 [24];
  
  puVar10 = (undefined8 *)FUN_18043aae0();
  if ((puVar10[0xb] == 0) && (lVar11 = FUN_180439770(), *(longlong *)(lVar11 + 0x420) == 0)) {
    plVar15 = (longlong *)puVar10[1];
    iVar7 = local_38[0];
    for (plVar13 = (longlong *)*puVar10; plVar13 != plVar15; plVar13 = plVar13 + 1) {
      pbVar2 = (byte *)*plVar13;
      if ((pbVar2 != (byte *)0x0) && (local_38[0] = *(int *)(pbVar2 + 8), local_38[0] != 0)) {
        bVar8 = FUN_18043a1a0(param_1);
        plVar12 = (longlong *)FUN_18043f940(puVar10 + 3,local_30,local_38);
        if ((bVar8 == 0) || (*(char *)(*plVar12 + 0x14) != '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        iVar1 = *(int *)(pbVar2 + 0xc);
        if (iVar1 == 0) {
          iVar7 = local_38[0];
          if (bVar6) {
            pcVar4 = *(char **)(pbVar2 + 0x18);
            if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
              pcVar4[0x10] = '\0';
              **(undefined1 **)(pbVar2 + 0x18) = 0;
            }
            bVar8 = pbVar2[0x10];
            pbVar2[0x10] = bVar8 == 0;
            *pbVar2 = bVar8 == 0;
          }
        }
        else if (iVar1 == 1) {
          pbVar2[0x10] = bVar8;
          *pbVar2 = bVar8;
          iVar7 = local_38[0];
          if ((bVar8 != 0) && (*(longlong *)(pbVar2 + 0x18) != 0)) {
            *(undefined1 *)(*(longlong *)(pbVar2 + 0x18) + 0x10) = 0;
            **(undefined1 **)(pbVar2 + 0x18) = 0;
          }
        }
        else {
          iVar7 = local_38[0];
          if (iVar1 == 2) {
            pbVar2[0x10] = bVar8 ^ 1;
            *pbVar2 = bVar8 ^ 1;
          }
        }
      }
      local_38[0] = iVar7;
      iVar7 = local_38[0];
    }
    puVar3 = (undefined8 *)puVar10[1];
    for (puVar14 = (undefined8 *)*puVar10; puVar14 != puVar3; puVar14 = puVar14 + 1) {
      pcVar4 = (char *)*puVar14;
      if ((((pcVar4 != (char *)0x0) && (pcVar5 = *(char **)(pcVar4 + 0x18), pcVar5 != (char *)0x0))
          && (*pcVar4 != '\0')) && (*pcVar5 != '\0')) {
        *pcVar5 = '\0';
        *(undefined1 *)(*(longlong *)(pcVar4 + 0x18) + 0x10) = 0;
      }
    }
    plVar13 = (longlong *)puVar10[1];
    local_38[0] = iVar7;
    for (plVar15 = (longlong *)*puVar10; plVar15 != plVar13; plVar15 = plVar15 + 1) {
      lVar11 = *plVar15;
      if ((lVar11 != 0) && (lVar16 = lVar11 + 8, *(int *)(lVar11 + 8) != 0)) {
        uVar9 = FUN_18043a1a0(param_1);
        plVar12 = (longlong *)FUN_18043f940(puVar10 + 3,local_30,lVar16);
        *(undefined1 *)(*plVar12 + 0x14) = uVar9;
      }
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x180);
    for (puVar14 = (undefined8 *)*puVar3; puVar14 != puVar3; puVar14 = (undefined8 *)*puVar14) {
      uVar9 = *(undefined1 *)((longlong)puVar14 + 0x14);
      plVar13 = (longlong *)FUN_18043f940(puVar10 + 3,local_30,puVar14 + 2);
      *(undefined1 *)(*plVar13 + 0x14) = uVar9;
    }
    uVar9 = *(undefined1 *)(param_1 + 0x10);
    local_38[0] = 1;
    plVar13 = (longlong *)FUN_18043fb40(puVar10 + 3,local_30,local_38);
    *(undefined1 *)(*plVar13 + 0x14) = uVar9;
    uVar9 = *(undefined1 *)(param_1 + 0x14);
    local_38[0] = 2;
    plVar13 = (longlong *)FUN_18043fb40(puVar10 + 3,local_30,local_38);
    *(undefined1 *)(*plVar13 + 0x14) = uVar9;
  }
  return;
}



