// FUN_1804f6d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f6d90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char FUN_1804f6d90(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar3 = DAT_180bb8ae8;
  cVar4 = FUN_1804f6880();
  if ((cVar4 != '\0') && (pcVar2 = *(code **)(lVar3 + 0xc10), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar3,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
  }
  pcVar6 = "*Missing Text*";
  if (*(char **)(DAT_180bb8ae8 + 0x2830) != (char *)0x0) {
    pcVar6 = *(char **)(DAT_180bb8ae8 + 0x2830);
  }
  FUN_1804c7660(pcVar6,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
  if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd1) == '\0') {
    uVar1 = *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0);
    cVar5 = FUN_1804c7f40();
    if (cVar5 != '\0') {
      FUN_1804c7740(uVar1,0);
    }
    cVar5 = FUN_1804c7cc0(uVar1,0x141);
    if (cVar5 != '\0') {
      pcVar6 = *(char **)(DAT_180bb8ae8 + 0x2838);
      pcVar7 = "*Missing Text*";
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6;
      }
      cVar5 = FUN_1805027a0(pcVar7,pcVar6,0,0,1);
      if (cVar5 != '\0') {
        if (*(code **)(DAT_180bb8ae8 + 0xc00) != (code *)0x0) {
          (**(code **)(DAT_180bb8ae8 + 0xc00))
                    (DAT_180bb8ae8,
                     "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
        }
      }
      FUN_1804c7e80();
    }
  }
  return cVar4;
}



