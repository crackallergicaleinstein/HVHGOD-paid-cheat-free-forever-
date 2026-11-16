// FUN_1804e3db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e3db0 */

void FUN_1804e3db0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x98);
  plVar1 = plVar6 + *(int *)(param_1 + 0x90);
  if (plVar6 != plVar1) {
    fVar7 = 0.0;
    do {
      lVar2 = *plVar6;
      if (*(longlong *)(lVar2 + 0x20) == param_2) {
        *(longlong *)(lVar2 + 0x20) = param_3;
      }
      lVar2 = *(longlong *)(lVar2 + 0x70);
      if ((lVar2 != 0) &&
         (((param_2 != 0 || (*(longlong *)(lVar2 + 0x11d0) != 0)) ||
          (*(float *)(lVar2 + 0x11e4) != fVar7)))) {
        if (*(longlong *)(lVar2 + 0x68) == param_2) {
          *(longlong *)(lVar2 + 0x68) = param_3;
        }
        lVar3 = DAT_180bb8ae8;
        DAT_180bb8ae8 = lVar3;
        if (*(longlong *)(lVar2 + 0x11d0) == param_2) {
          if (lVar2 == DAT_180bb8ae8) {
            FUN_1804c23b0(param_3,*(undefined4 *)(lVar2 + 0x11e4),*(undefined4 *)(lVar2 + 0x11e0));
          }
          else {
            DAT_180bb8ae8 = lVar2;
            FUN_1804c23b0(param_3,*(undefined4 *)(lVar2 + 0x11e4),*(undefined4 *)(lVar2 + 0x11e0));
            DAT_180bb8ae8 = lVar3;
          }
        }
        plVar4 = *(longlong **)(lVar2 + 0x1fc0);
        plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x1fb8) * 2;
        for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
          if (*plVar4 == param_2) {
            *plVar4 = param_3;
          }
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



