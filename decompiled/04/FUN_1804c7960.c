// FUN_1804c7960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7960 */

void FUN_1804c7960(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  iVar1 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
  if (iVar1 != 0) {
    iVar6 = 0;
    if ((param_1 != 0) && (0 < iVar1)) {
      lVar7 = 0;
      plVar9 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 8);
      do {
        if (*plVar9 != 0) {
          plVar4 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 8 + lVar7);
          iVar8 = iVar6;
          do {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
              lVar3 = param_1;
              if (*(longlong *)(param_1 + 0x3d8) == lVar2) break;
              do {
                if (lVar3 == lVar2) goto LAB_1804c79f3;
                lVar3 = *(longlong *)(lVar3 + 0x3d0);
              } while (lVar3 != 0);
            }
            iVar8 = iVar8 + 1;
            plVar4 = plVar4 + 7;
            if (iVar1 <= iVar8) goto LAB_1804c7a05;
          } while( true );
        }
LAB_1804c79f3:
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 0x38;
        plVar9 = plVar9 + 7;
      } while (iVar6 < iVar1);
    }
    if (iVar6 < iVar1) {
LAB_1804c7a05:
      if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 8) != 0) {
        if (param_1 == 0) {
          pcVar5 = "<NULL>";
        }
        else {
          pcVar5 = *(char **)(param_1 + 8);
        }
        FUN_1804cf3e0("[popup] ClosePopupsOverWindow(\"%s\")\n",pcVar5);
      }
      FUN_1804c7a50(iVar6,param_2);
    }
  }
  return;
}



