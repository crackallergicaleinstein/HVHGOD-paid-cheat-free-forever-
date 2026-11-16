// FUN_180455830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180455830 */

undefined * FUN_180455830(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar4 = 0;
    ppuVar5 = &PTR_s_Bloody_Darryl_The_Strapped___The_18077e6a8;
    do {
      pcVar2 = *ppuVar5;
      if (pcVar2 != (char *)0x0) {
        cVar1 = *pcVar2;
        pcVar3 = param_1;
        while ((cVar1 != '\0' && (cVar1 = *pcVar3, cVar1 != '\0'))) {
          if ((*pcVar2 == ' ') && (cVar1 == ' ')) {
            do {
              pcVar2 = pcVar2 + 1;
            } while (*pcVar2 == ' ');
            do {
              pcVar3 = pcVar3 + 1;
            } while (*pcVar3 == ' ');
          }
          else {
            if (*pcVar2 != cVar1) goto LAB_18045589b;
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
          }
          cVar1 = *pcVar2;
        }
        if (*pcVar2 == *pcVar3) {
          return (&PTR_s_agents_models_tm_professional_tm_18077e6b8)[(longlong)iVar4 * 4];
        }
      }
LAB_18045589b:
      iVar4 = iVar4 + 1;
      ppuVar5 = ppuVar5 + 4;
    } while (iVar4 < 0x3f);
  }
  return (undefined *)0x0;
}



