// FUN_180167010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180167010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180167010(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = DAT_180bb8b20;
  lVar4 = DAT_180bb8b18;
  if (DAT_180bb8b18 != DAT_180bb8b20) {
    do {
      FUN_180152210(lVar4);
      lVar4 = lVar4 + 0x168;
    } while (lVar4 != lVar1);
    DAT_180bb8b20 = DAT_180bb8b18;
  }
  lVar1 = DAT_180bb8b38;
  lVar4 = DAT_180bb8b30;
  if (DAT_180bb8b30 != DAT_180bb8b38) {
    do {
      FUN_180152210(lVar4);
      lVar4 = lVar4 + 0x168;
    } while (lVar4 != lVar1);
    DAT_180bb8b38 = DAT_180bb8b30;
  }
  if (DAT_180bb8c48 != 0) {
    FUN_18015a2e0(&DAT_180bb8c50);
    FUN_18017cc60(&DAT_180bb8b98);
    FUN_18015a3e0(&DAT_180bb8c40);
  }
  iVar2 = FUN_1805f68d0(&DAT_180bb8b48);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180bb8b94 == 0x7fffffff) {
    DAT_180bb8b94 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_180111910(&DAT_180bb8bf0);
  FUN_180111a20(&DAT_180bb8c18);
  FUN_1805f68fc(&DAT_180bb8b48);
  lVar1 = DAT_180bb8c60;
  lVar4 = DAT_180bb8c58;
  if (DAT_180bb8c58 != DAT_180bb8c60) {
    do {
      FUN_180152210(lVar4);
      lVar4 = lVar4 + 0x168;
    } while (lVar4 != lVar1);
    DAT_180bb8c60 = DAT_180bb8c58;
  }
  _DAT_180bb8c80 = 0;
  puVar3 = &DAT_180bb8c70;
  if (0xf < DAT_180bb8c88) {
    puVar3 = DAT_180bb8c70;
  }
  *(undefined1 *)puVar3 = 0;
  _DAT_180bb8ca0 = 0;
  puVar3 = &DAT_180bb8c90;
  if (0xf < DAT_180bb8ca8) {
    puVar3 = DAT_180bb8c90;
  }
  *(undefined1 *)puVar3 = 0;
  DAT_180bb8cc0 = 0;
  puVar3 = &DAT_180bb8cb0;
  if (0xf < DAT_180bb8cc8) {
    puVar3 = DAT_180bb8cb0;
  }
  *(undefined1 *)puVar3 = 0;
  _DAT_180bb8ce0 = 0;
  puVar3 = &DAT_180bb8cd0;
  if (0xf < DAT_180bb8ce8) {
    puVar3 = DAT_180bb8cd0;
  }
  *(undefined1 *)puVar3 = 0;
  DAT_180bb8d00 = 0;
  puVar3 = &DAT_180bb8cf0;
  if (0xf < DAT_180bb8d08) {
    puVar3 = DAT_180bb8cf0;
  }
  *(undefined1 *)puVar3 = 0;
  _DAT_180bb8d18 = 0;
  puVar3 = &DAT_180bb8eb0;
  if (0xf < DAT_180bb8ec8) {
    puVar3 = DAT_180bb8eb0;
  }
  _DAT_180bb8d10 = 0;
  _DAT_180bb8d21 = 0;
  DAT_180bb8d20 = 0;
  DAT_180bb8d23 = 1;
  DAT_180bb8ec0 = 0;
  *(undefined1 *)puVar3 = 0;
  DAT_180bb8ee0 = 0;
  puVar3 = &DAT_180bb8ed0;
  if (0xf < DAT_180bb8ee8) {
    puVar3 = DAT_180bb8ed0;
  }
  *(undefined1 *)puVar3 = 0;
  _DAT_180bb8f00 = 0;
  puVar3 = &DAT_180bb8ef0;
  if (0xf < DAT_180bb8f08) {
    puVar3 = DAT_180bb8ef0;
  }
  *(undefined1 *)puVar3 = 0;
  FUN_180176480(&DAT_180bb8f10);
  if (DAT_180bb8dd8 != 0) {
    puVar3 = &DAT_180bb8dc8;
    if (0xf < DAT_180bb8de0) {
      puVar3 = DAT_180bb8dc8;
    }
    for (; DAT_180bb8dd8 != 0; DAT_180bb8dd8 = DAT_180bb8dd8 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
  }
  DAT_180bb8dd8 = 0;
  puVar3 = &DAT_180bb8dc8;
  if (0xf < DAT_180bb8de0) {
    puVar3 = DAT_180bb8dc8;
  }
  *(undefined1 *)puVar3 = 0;
  if (DAT_180bb8df8 != 0) {
    puVar3 = &DAT_180bb8de8;
    if (0xf < DAT_180bb8e00) {
      puVar3 = DAT_180bb8de8;
    }
    for (; DAT_180bb8df8 != 0; DAT_180bb8df8 = DAT_180bb8df8 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
  }
  DAT_180bb8df8 = 0;
  puVar3 = &DAT_180bb8de8;
  if (0xf < DAT_180bb8e00) {
    puVar3 = DAT_180bb8de8;
  }
  *(undefined1 *)puVar3 = 0;
  if (DAT_180bb8e18 != 0) {
    puVar3 = &DAT_180bb8e08;
    if (0xf < DAT_180bb8e20) {
      puVar3 = DAT_180bb8e08;
    }
    for (; DAT_180bb8e18 != 0; DAT_180bb8e18 = DAT_180bb8e18 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
  }
  DAT_180bb8e18 = 0;
  puVar3 = &DAT_180bb8e08;
  if (0xf < DAT_180bb8e20) {
    puVar3 = DAT_180bb8e08;
  }
  *(undefined1 *)puVar3 = 0;
  if (DAT_180bb8e38 != 0) {
    puVar3 = &DAT_180bb8e28;
    if (0xf < DAT_180bb8e40) {
      puVar3 = DAT_180bb8e28;
    }
    for (; DAT_180bb8e38 != 0; DAT_180bb8e38 = DAT_180bb8e38 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
  }
  DAT_180bb8e38 = 0;
  puVar3 = &DAT_180bb8e28;
  if (0xf < DAT_180bb8e40) {
    puVar3 = DAT_180bb8e28;
  }
  *(undefined1 *)puVar3 = 0;
  if (DAT_180bb8e58 != 0) {
    puVar3 = &DAT_180bb8e48;
    if (0xf < DAT_180bb8e60) {
      puVar3 = DAT_180bb8e48;
    }
    for (; DAT_180bb8e58 != 0; DAT_180bb8e58 = DAT_180bb8e58 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
  }
  DAT_180bb8e58 = 0;
  puVar3 = &DAT_180bb8e48;
  if (0xf < DAT_180bb8e60) {
    puVar3 = DAT_180bb8e48;
  }
  *(undefined1 *)puVar3 = 0;
  if (DAT_180bb8e78 != 0) {
    puVar3 = &DAT_180bb8e68;
    if (0xf < DAT_180bb8e80) {
      puVar3 = DAT_180bb8e68;
    }
    for (; DAT_180bb8e78 != 0; DAT_180bb8e78 = DAT_180bb8e78 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
  }
  DAT_180bb8e78 = 0;
  puVar3 = &DAT_180bb8e68;
  if (0xf < DAT_180bb8e80) {
    puVar3 = DAT_180bb8e68;
  }
  *(undefined1 *)puVar3 = 0;
  _DAT_180bb9028 = 0;
  _DAT_180bb9030 = 0;
  _DAT_180bb9038 = 0;
  _DAT_180bb903c = 0;
  if (DAT_180bb9040 != (HANDLE)0x0) {
    CloseHandle(DAT_180bb9040);
    DAT_180bb9040 = (HANDLE)0x0;
  }
  _DAT_180bb9018 = 0;
  puVar3 = &DAT_180bb8e90;
  if (0xf < DAT_180bb8ea8) {
    puVar3 = DAT_180bb8e90;
  }
  DAT_180bb8ea0 = 0;
  *(undefined1 *)puVar3 = 0;
  return;
}



