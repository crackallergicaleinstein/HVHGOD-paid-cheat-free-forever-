// FUN_18051ed80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051ed80 */

undefined1 (*) [16] FUN_18051ed80(undefined8 *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  
  iVar6 = *(int *)*param_1;
  if (iVar6 == 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x50);
    plVar10 = (longlong *)(param_3 + 0x38);
    lVar8 = *(longlong *)(param_3 + 0x48);
    plVar4 = plVar10;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*plVar10;
    }
    if (lVar8 == 0xb) {
      lVar7 = *plVar4 + -0x736e6f2065646968;
      if ((lVar7 == 0) && (lVar7 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x6f68, lVar7 == 0)) {
        lVar7 = (ulonglong)*(byte *)((longlong)plVar4 + 10) - 0x74;
      }
      if (lVar7 == 0) goto LAB_18051ee6a;
    }
    if (0xf < uVar1) {
      plVar10 = (longlong *)*plVar10;
    }
    if (lVar8 == 0xc) {
      lVar7 = *plVar10 + -0x6f68732065646968;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(uint *)(plVar10 + 1) - 0x32762074;
      }
      if (lVar7 == 0) goto LAB_18051ee6a;
    }
    plVar10 = (longlong *)(param_3 + 0x38);
    if (0xf < uVar1) {
      plVar10 = (longlong *)*plVar10;
    }
    if (lVar8 == 0xe) {
      lVar8 = *plVar10 + -0x61622064696f7661;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(plVar10 + 1) - 0x74736b63, lVar8 == 0)) {
        lVar8 = (ulonglong)*(ushort *)((longlong)plVar10 + 0xc) - 0x6261;
      }
      if (lVar8 == 0) goto LAB_18051ee6a;
    }
    puVar2 = *(undefined1 **)(param_3 + 8);
    if (((undefined1 *)0x180cad6b7 < puVar2) && (puVar2 < &DAT_180cadb70)) {
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      FUN_18015ba30(param_2,"Anti-Aim",8);
      return param_2;
    }
    if (((undefined1 *)((longlong)&DAT_180cad2e4 + 3) < puVar2) && (puVar2 < &DAT_180cad6b8)) {
LAB_18051ee6a:
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      FUN_18015ba30(param_2,"Other Features",0xe);
      return param_2;
    }
    plVar10 = (longlong *)(param_3 + 0x38);
    if (0xf < *(ulonglong *)(param_3 + 0x50)) {
      plVar10 = (longlong *)*plVar10;
    }
    if (*(longlong *)(param_3 + 0x48) == 0xe) {
      lVar8 = *plVar10 + -0x6379632065646f6d;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(plVar10 + 1) - 0x6b20656c, lVar8 == 0)) {
        lVar8 = (ulonglong)*(ushort *)((longlong)plVar10 + 0xc) - 0x7965;
      }
      if (lVar8 == 0) goto LAB_18051ee6a;
    }
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    FUN_18015ba30(param_2,"Aiming",6);
    return param_2;
  }
  if (iVar6 != 7) {
    if (iVar6 != 9) {
      if (iVar6 != 5) {
        if (iVar6 != 10) {
          FUN_18015b360(param_2,param_3 + 0x18);
          return param_2;
        }
        if ((*(undefined1 **)(param_3 + 8) < &DAT_180b0b320) ||
           (bVar3 = true,
           (undefined1 *)((longlong)&DAT_180b0b3c4 + 3) < *(undefined1 **)(param_3 + 8))) {
          bVar3 = false;
        }
        *param_2 = (undefined1  [16])0x0;
        pcVar9 = "Events";
        *(undefined8 *)param_2[1] = 0;
        if (bVar3) {
          pcVar9 = "Presentation";
        }
        *(undefined8 *)(param_2[1] + 8) = 0;
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (pcVar9[lVar8] != '\0');
        FUN_18015ba30(param_2,pcVar9,lVar8);
        return param_2;
      }
      if ((*(undefined1 **)(param_3 + 8) < &DAT_180b0be78) ||
         (&DAT_180b0c858 <= *(undefined1 **)(param_3 + 8))) {
        *param_2 = (undefined1  [16])0x0;
        *(undefined8 *)param_2[1] = 0;
        *(undefined8 *)(param_2[1] + 8) = 0;
        FUN_18015ba30(param_2,"Utility",7);
        return param_2;
      }
      puVar11 = (undefined8 *)(param_3 + 0x38);
      if (0xf < *(ulonglong *)(param_3 + 0x50)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      lVar8 = -1;
      if ((*(ulonglong *)(param_3 + 0x48) < 5) ||
         (lVar7 = *(ulonglong *)(param_3 + 0x48) + (longlong)puVar11,
         lVar5 = thunk_FUN_1805f9970(puVar11,lVar7,"sound",5), lVar5 == lVar7)) {
        lVar5 = -1;
      }
      else {
        lVar5 = lVar5 - (longlong)puVar11;
      }
      pcVar9 = "Effects";
      *param_2 = (undefined1  [16])0x0;
      if (lVar5 != -1) {
        pcVar9 = "Audio";
      }
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      do {
        lVar8 = lVar8 + 1;
      } while (pcVar9[lVar8] != '\0');
      FUN_18015ba30(param_2,pcVar9,lVar8);
      return param_2;
    }
    puVar2 = *(undefined1 **)(param_3 + 8);
    if ((((undefined1 *)((longlong)&DAT_180b0cb9c + 3) < puVar2) && (puVar2 < &DAT_180b0cd68)) ||
       (((undefined1 *)0x180b0cd67 < puVar2 && (puVar2 < &DAT_180b0cde0)))) {
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      FUN_18015ba30(param_2,"Camera",6);
      return param_2;
    }
    if ((((undefined1 *)0x180b0cddf < puVar2) && (puVar2 < &DAT_180b0d018)) ||
       ((((undefined1 *)0x180b0d017 < puVar2 && (puVar2 < &DAT_180b0d2d0)) ||
        (((undefined1 *)((longlong)&DAT_180cadbec + 3) < puVar2 && (puVar2 < &DAT_180cadce0)))))) {
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      FUN_18015ba30(param_2,"Reticles",8);
      return param_2;
    }
    if ((&DAT_180cb0ef8 <= puVar2) && (puVar2 < &DAT_180cb1278)) {
LAB_18051f258:
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      FUN_18015ba30(param_2,"Local Model",0xb);
      return param_2;
    }
    uVar1 = *(ulonglong *)(param_3 + 0x50);
    plVar10 = (longlong *)(param_3 + 0x38);
    lVar8 = *(longlong *)(param_3 + 0x48);
    plVar4 = plVar10;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*plVar10;
    }
    if (lVar8 == 0xc) {
      lVar7 = *plVar4 + -0x63206e6f70616577;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x736d6168;
      }
      if (lVar7 == 0) goto LAB_18051f258;
    }
    if (0xf < uVar1) {
      plVar10 = (longlong *)*plVar10;
    }
    if (lVar8 == 10) {
      lVar7 = *plVar10 + -0x61686320736d7261;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(ushort *)(plVar10 + 1) - 0x736d;
      }
      if (lVar7 == 0) goto LAB_18051f258;
    }
    plVar10 = (longlong *)(param_3 + 0x38);
    if (0xf < uVar1) {
      plVar10 = (longlong *)*plVar10;
    }
    if (lVar8 == 0x18) {
      lVar8 = *plVar10 + -0x6962697369766e69;
      if ((lVar8 == 0) && (lVar8 = plVar10[1] + -0x656877207974696c, lVar8 == 0)) {
        lVar8 = plVar10[2] + -0x6465706f6373206e;
      }
      if (lVar8 == 0) goto LAB_18051f258;
    }
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    FUN_18015ba30(param_2,"Scene Filters",0xd);
    return param_2;
  }
  uVar1 = *(ulonglong *)(param_3 + 0x50);
  plVar10 = (longlong *)(param_3 + 0x38);
  lVar8 = *(longlong *)(param_3 + 0x48);
  plVar4 = plVar10;
  if (0xf < uVar1) {
    plVar4 = (longlong *)*plVar10;
  }
  if (lVar8 == 7) {
    iVar6 = (int)*plVar4 + -0x65676465;
    if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)plVar4 + 4) - 0x7562, iVar6 == 0)) {
      iVar6 = *(byte *)((longlong)plVar4 + 6) - 0x67;
    }
    if (iVar6 != 0) goto LAB_18051efe4;
LAB_18051f05c:
    pcVar9 = "Surface Assists";
  }
  else {
LAB_18051efe4:
    if (0xf < uVar1) {
      plVar10 = (longlong *)*plVar10;
    }
    if (lVar8 == 10) {
      lVar7 = *plVar10 + -0x7573206c65786970;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(ushort *)(plVar10 + 1) - 0x6672;
      }
      if (lVar7 == 0) goto LAB_18051f05c;
    }
    plVar10 = (longlong *)(param_3 + 0x38);
    if (0xf < uVar1) {
      plVar10 = (longlong *)*plVar10;
    }
    if (lVar8 == 0xb) {
      lVar8 = *plVar10 + -0x2065727574786574;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(plVar10 + 1) - 0x7562, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar10 + 10) - 0x67;
      }
      if (lVar8 == 0) goto LAB_18051f05c;
    }
    pcVar9 = "Movement";
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  lVar8 = -1;
  *(undefined8 *)(param_2[1] + 8) = 0;
  do {
    lVar8 = lVar8 + 1;
  } while (pcVar9[lVar8] != '\0');
  FUN_18015ba30(param_2,pcVar9,lVar8);
  return param_2;
}



