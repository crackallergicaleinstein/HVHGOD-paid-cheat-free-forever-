// FUN_1801c94a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c94a0 */

undefined8 FUN_1801c94a0(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = param_1[3];
  lVar3 = param_1[2];
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 10) {
    lVar4 = *plVar2 + -0x642e746e65696c63;
    if (lVar4 == 0) {
      lVar4 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x6c6c;
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 0xb) {
    lVar4 = *plVar2 + -0x2e32656e69676e65;
    if ((lVar4 == 0) && (lVar4 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x6c64, lVar4 == 0)) {
      lVar4 = (ulonglong)*(byte *)((longlong)plVar2 + 10) - 0x6c;
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  if (0xf < uVar1) {
    param_1 = (longlong *)*param_1;
  }
  if (lVar3 == 0x10) {
    lVar3 = *param_1 + -0x7973616d65686373;
    if (lVar3 == 0) {
      lVar3 = param_1[1] + -0x6c6c642e6d657473;
    }
    if (lVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



