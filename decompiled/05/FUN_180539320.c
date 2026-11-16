// FUN_180539320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180539320 */

void FUN_180539320(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  cVar3 = FUN_18048b0e0("Graph Style & Size",&DAT_180859268,1);
  if (cVar3 != '\0') {
    FUN_1805303d0("##hud_graph",0x43af0000);
  }
  cVar3 = FUN_18048b0e0("Appearance",&DAT_18082a268,1);
  if (cVar3 != '\0') {
    FUN_1805303d0("##hud_appearance",0x43af0000);
  }
  lVar2 = *param_1;
  cVar3 = FUN_18048b0e0("Position & Size",&DAT_18082a298,1);
  if (cVar3 != '\0') {
    FUN_1805303d0("##hud_placement",0x43a70000);
  }
  cVar3 = FUN_180488630("##hud_placement","Position & Size",0x43a70000);
  if (cVar3 != '\0') {
    pcVar4 = "Using the default screen position.";
    if (*(char *)(lVar2 + 0x116) != '\0') {
      pcVar4 = "Using your custom position.";
    }
    FUN_1805302b0(pcVar4);
    FUN_180488c60();
    cVar3 = FUN_18048b0e0("Move / Resize on Screen",&DAT_18082a248,1);
    if (cVar3 != '\0') {
      FUN_18050c860(4);
      iVar1 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
      uVar7 = (ulonglong)iVar1;
      if (0 < iVar1) {
        plVar6 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30 + uVar7 * 0x38);
        uVar5 = uVar7;
        do {
          if ((*plVar6 == 0) || ((*(uint *)(*plVar6 + 0x14) & 0x8000000) != 0)) break;
          uVar5 = (ulonglong)((int)uVar5 - 1);
          uVar7 = uVar7 - 1;
          plVar6 = plVar6 + -7;
        } while (0 < (longlong)uVar7);
        if ((int)uVar5 < iVar1) {
          FUN_1804c7a50(uVar5 & 0xffffffff,CONCAT71((int7)(uVar7 >> 8),1));
        }
      }
    }
    FUN_18048a250("Overlay Scale",lVar2 + 0x120,0x3f0ccccd,0x40000000,"%.2fx",0x3c23d70a,1,
                  &DAT_18082a254);
    cVar3 = FUN_18048b0e0("Reset Position",&DAT_180829a4c,1);
    if (cVar3 != '\0') {
      *(undefined1 *)(lVar2 + 0x116) = 0;
    }
    FUN_180488f10();
    FUN_1805302b0("Drag to move, scroll to resize, Enter to save, Esc to cancel.");
    FUN_1804aeac0();
  }
  return;
}



