// FUN_1805368e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805368e0 */

undefined * FUN_1805368e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  if (param_1[1] == 7) {
    iVar4 = (int)*plVar1 + -0x65676172;
    if ((iVar4 == 0) && (iVar4 = *(ushort *)((longlong)plVar1 + 4) - 0x6f62, iVar4 == 0)) {
      iVar4 = *(byte *)((longlong)plVar1 + 6) - 0x74;
    }
    if (iVar4 == 0) {
      return &DAT_18082a244;
    }
  }
  if (param_1[1] == 8) {
    if (*plVar1 == 0x746f62746967656c) {
      return &DAT_180830b40;
    }
    if (param_1[1] == 8) {
      if (*plVar1 == 0x746e656d65766f6d) {
        return &DAT_18082a27c;
      }
      if ((param_1[1] == 8) && (*plVar1 == 0x6d69612069746e61)) {
        return &DAT_18085d594;
      }
    }
  }
  if (param_1[1] != 0xc) {
    return &DAT_180830b54;
  }
  lVar3 = *plVar1 + -0x797469636f6c6576;
  if (lVar3 == 0) {
    lVar3 = (ulonglong)*(uint *)(plVar1 + 1) - 0x64756820;
  }
  puVar2 = &DAT_180830b54;
  if (lVar3 == 0) {
    puVar2 = &DAT_18082a274;
  }
  return puVar2;
}



