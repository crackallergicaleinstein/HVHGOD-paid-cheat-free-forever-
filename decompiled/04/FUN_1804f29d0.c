// FUN_1804f29d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f29d0 */

undefined8 FUN_1804f29d0(short *param_1,short *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (uint)*(ushort *)
                 ((longlong)*param_1 * 0x78 + 0x5a +
                 *(longlong *)(*(longlong *)(param_1 + 4) + 0x18)) -
          (uint)*(ushort *)
                 ((longlong)*param_2 * 0x78 + 0x5a +
                 *(longlong *)(*(longlong *)(param_1 + 4) + 0x18));
  if (0 < iVar1) {
    return 1;
  }
  uVar2 = 0xffffffff;
  if ((-1 < iVar1) && (uVar2 = 0xffffffff, *param_2 < *param_1)) {
    uVar2 = 1;
  }
  return uVar2;
}



