// FUN_1802cccd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cccd0 */

undefined8 FUN_1802cccd0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    plVar2 = (longlong *)*param_1;
    if (uVar1 == 7) {
      iVar4 = (int)*plVar2 + -0x6e6b6e75;
      if ((iVar4 == 0) && (iVar4 = *(ushort *)((longlong)plVar2 + 4) - 0x776f, iVar4 == 0)) {
        iVar4 = *(byte *)((longlong)plVar2 + 6) - 0x6e;
      }
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (((4 < uVar1) &&
        (lVar3 = thunk_FUN_1805f9970(plVar2,uVar1 + (longlong)plVar2,"knife",5),
        lVar3 != uVar1 + (longlong)plVar2)) && (lVar3 - (longlong)plVar2 != -1)) {
      return 0;
    }
    if (param_1[1] == 5) {
      iVar4 = (int)*plVar2 + -0x65736174;
      if (iVar4 == 0) {
        iVar4 = *(byte *)((longlong)plVar2 + 4) - 0x72;
      }
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (param_1[1] == 9) {
      lVar3 = *plVar2 + -0x64616e6572676568;
      if (lVar3 == 0) {
        lVar3 = (ulonglong)*(byte *)(plVar2 + 1) - 0x65;
      }
      if (lVar3 == 0) {
        return 0;
      }
      if (param_1[1] == 9) {
        lVar3 = *plVar2 + -0x6e61626873616c66;
        if (lVar3 == 0) {
          lVar3 = (ulonglong)*(byte *)(plVar2 + 1) - 0x67;
        }
        if (lVar3 == 0) {
          return 0;
        }
      }
    }
    if (param_1[1] == 0xc) {
      lVar3 = *plVar2 + -0x657267656b6f6d73;
      if (lVar3 == 0) {
        lVar3 = (ulonglong)*(uint *)(plVar2 + 1) - 0x6564616e;
      }
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (param_1[1] == 5) {
      iVar4 = (int)*plVar2 + -0x6f636564;
      if (iVar4 == 0) {
        iVar4 = *(byte *)((longlong)plVar2 + 4) - 0x79;
      }
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (param_1[1] == 7) {
      iVar4 = (int)*plVar2 + -0x65666e69;
      if ((iVar4 == 0) && (iVar4 = *(ushort *)((longlong)plVar2 + 4) - 0x6e72, iVar4 == 0)) {
        iVar4 = *(byte *)((longlong)plVar2 + 6) - 0x6f;
      }
      if (iVar4 == 0) {
        return 0;
      }
      if (param_1[1] == 7) {
        iVar4 = (int)*plVar2 + -0x6f6c6f6d;
        if ((iVar4 == 0) && (iVar4 = *(ushort *)((longlong)plVar2 + 4) - 0x6f74, iVar4 == 0)) {
          iVar4 = *(byte *)((longlong)plVar2 + 6) - 0x76;
        }
        if (iVar4 == 0) {
          return 0;
        }
      }
    }
    if (param_1[1] == 10) {
      lVar3 = *plVar2 + -0x616e657267636e69;
      if (lVar3 == 0) {
        lVar3 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x6564;
      }
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (param_1[1] == 5) {
      iVar4 = (int)*plVar2 + -0x6c726f77;
      if (iVar4 == 0) {
        iVar4 = *(byte *)((longlong)plVar2 + 4) - 100;
      }
      if (iVar4 == 0) {
        return 0;
      }
    }
    if ((param_1[1] != 4) || ((int)*plVar2 != 0x6c6c6166)) {
      return 1;
    }
  }
  return 0;
}



