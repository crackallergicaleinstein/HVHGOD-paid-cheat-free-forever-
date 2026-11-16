// FUN_18051e410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051e410 */

undefined * FUN_18051e410(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == 9) {
    puVar2 = *(undefined1 **)(param_2 + 8);
    puVar6 = &DAT_180cb31a8;
    if (((undefined1 *)0x180cb2e27 < puVar2) && (puVar2 < &DAT_180cb31a8)) {
      return &DAT_180cb2e28;
    }
    if ((((undefined1 *)0x180cb31a7 < puVar2) && (puVar2 < &DAT_180cb3528)) ||
       ((puVar6 = &DAT_180cadbf0, (undefined1 *)((longlong)&DAT_180cadbec + 3) < puVar2 &&
        (puVar2 < &DAT_180cadce0)))) {
      return puVar6;
    }
  }
  else if (iVar1 == 5) {
    puVar2 = *(undefined1 **)(param_2 + 8);
    if (((undefined1 *)0x180b0d767 < puVar2) && (puVar2 < &DAT_180b0d7e0)) {
      return &DAT_180b0d768;
    }
    if ((&DAT_180b0d6f7 < puVar2) && (puVar2 < &DAT_180b0d768)) {
      return &DAT_180b0d6f8;
    }
  }
  else if (iVar1 == 10) {
    plVar3 = (longlong *)(param_2 + 0x38);
    plVar7 = plVar3;
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar7 = (longlong *)*plVar3;
    }
    if (*(longlong *)(param_2 + 0x48) == 0x10) {
      lVar5 = *plVar7 + -0x20676f6c20746968;
      if (lVar5 == 0) {
        lVar5 = plVar7[1] + -0x6e6f697461727564;
      }
      if (lVar5 == 0) {
        return &DAT_180b0be78;
      }
    }
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar3 = (longlong *)*plVar3;
    }
    if (*(longlong *)(param_2 + 0x48) == 0x11) {
      lVar5 = *plVar3 + -0x676f6c207373696d;
      if ((lVar5 == 0) && (lVar5 = plVar3[1] + -0x6f69746172756420, lVar5 == 0)) {
        lVar5 = (ulonglong)*(byte *)(plVar3 + 2) - 0x6e;
      }
      puVar4 = (undefined1 *)0x0;
      if (lVar5 == 0) {
        puVar4 = &DAT_180b0c088;
      }
      return puVar4;
    }
  }
  return (undefined *)0x0;
}



