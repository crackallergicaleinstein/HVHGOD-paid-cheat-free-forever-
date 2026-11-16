// FUN_1804b83b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b83b0 */

void FUN_1804b83b0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_180bb8ae8;
  FUN_1804c8a10(param_1,0);
  FUN_1804b7870(*(undefined4 *)(param_1 + 0x8c),param_1);
  if (*(char *)(lVar2 + 0x76) != '\0') {
    *(undefined1 *)(lVar2 + 0x2038) = 0;
  }
  lVar3 = DAT_180bb8ae8;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x3d8) + 0x2c);
  *(float *)(lVar2 + 0x156c) =
       *(float *)(lVar2 + 0xaf0) - *(float *)(*(longlong *)(param_1 + 0x3d8) + 0x28);
  *(float *)(lVar2 + 0x1570) = *(float *)(lVar2 + 0xaf4) - fVar1;
  *(undefined1 *)(lVar2 + 0x1560) = 1;
  *(undefined4 *)(lVar3 + 0x1e70) = 0xf;
  *(undefined1 *)(lVar3 + 0x1e74) = 1;
  *(bool *)(lVar3 + 0x20a1) = *(char *)(lVar3 + 0x20a2) != '\0';
  *(undefined2 *)(lVar3 + 0x20e0) = 0;
  if (((*(byte *)(param_1 + 0x14) & 4) == 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x3d8) + 0x14) & 4) == 0)) {
    *(longlong *)(lVar2 + 0x14f0) = param_1;
  }
  return;
}



