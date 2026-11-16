// FUN_1804ba2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba2a0 */

void FUN_1804ba2a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
  *(int *)(DAT_180bb8ae8 + 0xf4) = *(int *)(DAT_180bb8ae8 + 0xf4) + 1;
  if (1 < *(int *)(*(longlong *)(param_1 + 0x2c8) + 0x8c)) {
    FUN_1804e19a0();
  }
  FUN_1804e1e10(lVar2 + 0x60,*(undefined8 *)(lVar2 + 0xb0 + (longlong)param_2 * 8),
                *(undefined8 *)(param_1 + 0x2c8));
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  plVar1 = plVar3 + *(int *)(param_1 + 0x1b0);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if ((*(char *)(lVar2 + 0xcc) != '\0') && (*(char *)(lVar2 + 0xd4) == '\0')) {
      FUN_1804ba2a0(lVar2,param_2);
    }
  }
  return;
}



