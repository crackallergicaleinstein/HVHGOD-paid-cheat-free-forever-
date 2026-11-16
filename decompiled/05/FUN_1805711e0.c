// FUN_1805711e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805711e0 */

void FUN_1805711e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  if ((DAT_180ccaa20 != '\0') && (-1 < DAT_1808e4fc0)) {
    plVar2 = (longlong *)FUN_180439710();
    if (*plVar2 != plVar2[1]) {
      return;
    }
    if (DAT_180c63119 != '\0') {
      return;
    }
  }
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
  if ((lVar3 != 0) && (lVar3 == *(longlong *)(DAT_180bb8ae8 + 0x14d0))) {
    cVar4 = '\0';
    lVar5 = DAT_180bb8ae8;
    cVar1 = FUN_1804b7ab0(lVar3);
    if (((cVar1 != '\0') &&
        (((*(int *)(lVar5 + 0x1550) == 0 || (*(char *)(lVar5 + 0x155f) != cVar4)) ||
         (*(int *)(lVar5 + 0x1550) == *(int *)(lVar3 + 0x8c))))) &&
       ((cVar1 = FUN_1804c3600(param_2,param_3,1), cVar1 != '\0' &&
        (cVar1 = FUN_1804c3590(1), cVar1 != '\0')))) {
      FUN_180488320("##combat_switch");
    }
  }
  cVar1 = FUN_180488630("##combat_switch","Switch Combat Mode",0x43700000);
  if (cVar1 != '\0') {
    FUN_18050e080(&DAT_18081ea38,&DAT_180cad2e4,0xffffffff);
    cVar1 = FUN_18048b0e0("Remove Keybind",&DAT_180829a48,1);
    if (cVar1 != '\0') {
      DAT_1808e4f84 = 0xffffffff;
      DAT_180cad2e4 = 0;
      DAT_180c62f48 = 0;
      DAT_180c62fe0 = 0;
      DAT_180bbecdf = 0;
      DAT_180bbecde = 0;
      lVar3 = FUN_180439770();
      *(undefined8 *)(lVar3 + 0x420) = 0;
    }
    FUN_1804aeac0();
  }
  return;
}



