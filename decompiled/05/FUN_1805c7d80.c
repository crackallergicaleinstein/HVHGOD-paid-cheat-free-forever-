// FUN_1805c7d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7d80 */

undefined8
FUN_1805c7d80(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((param_4 == (undefined4 *)0x0) || (param_5 == (uint *)0x0)) {
    return 6;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0xf4);
  if (param_3 != (undefined4 *)0x0) {
    if (*(ushort *)(param_1 + 0xf4) <= param_2) {
      return 0x8e;
    }
    uVar2 = (ulonglong)param_2;
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + uVar2 * 0x10);
    *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 8 + uVar2 * 0x10);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc + uVar2 * 0x10);
  }
  *param_5 = uVar1;
  return 0;
}



