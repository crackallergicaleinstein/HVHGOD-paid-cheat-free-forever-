// FUN_18059e7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e7a0 */

undefined8 FUN_18059e7a0(longlong param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x660) == 0xffff) || (*(uint *)(lVar1 + 0x20) <= param_2)) {
      return 6;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)(*(longlong *)(lVar1 + 0x4d8) + (ulonglong)param_2 * 2);
      return 0;
    }
  }
  return 0;
}



