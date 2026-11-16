// FUN_180579a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579a10 */

undefined8 FUN_180579a10(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [4];
  int local_resc;
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    for (plVar9 = plVar2 + (longlong)*(int *)(param_1 + 0x38) + -1; plVar2 <= plVar9;
        plVar9 = plVar9 + -1) {
      plVar3 = (longlong *)*plVar9;
      if ((int)plVar3[1] == 0x756e6963) {
        sVar1 = *(short *)((longlong)plVar3 + 0xc);
        if (sVar1 == 3) {
          if (*(short *)((longlong)plVar3 + 0xe) != 10) goto LAB_180579a78;
LAB_180579b36:
          lVar8 = *plVar9;
          goto LAB_180579b39;
        }
        if (sVar1 == 0) {
          if (*(short *)((longlong)plVar3 + 0xe) == 4) goto LAB_180579b36;
        }
        else {
LAB_180579a78:
          if (sVar1 != 0) goto LAB_180579ace;
        }
        if (((*(short *)((longlong)plVar3 + 0xe) == 6) && (plVar3 != (longlong *)0x0)) &&
           (*plVar3 != 0)) {
          plVar4 = *(longlong **)(*plVar3 + 0x90);
          pcVar5 = *(code **)(*plVar4 + 0x30);
          if (((pcVar5 != (code *)0x0) &&
              (puVar7 = (undefined8 *)(*pcVar5)(plVar4,"tt-cmaps"), puVar7 != (undefined8 *)0x0)) &&
             ((iVar6 = (*(code *)*puVar7)(plVar3,local_res8), iVar6 == 0 && (local_resc == 0xd))))
          goto LAB_180579b36;
        }
      }
LAB_180579ace:
    }
    for (plVar9 = plVar2 + (longlong)*(int *)(param_1 + 0x38) + -1; plVar2 <= plVar9;
        plVar9 = plVar9 + -1) {
      lVar8 = *plVar9;
      if (*(int *)(lVar8 + 8) == 0x756e6963) {
LAB_180579b39:
        *(longlong *)(param_1 + 0x88) = lVar8;
        return 0;
      }
    }
  }
  return 0x26;
}



