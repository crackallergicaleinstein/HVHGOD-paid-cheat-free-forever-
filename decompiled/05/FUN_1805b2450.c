// FUN_1805b2450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2450 */

undefined8 FUN_1805b2450(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) ||
     (lVar1 = *(longlong *)(param_1 + 0x18),
     (uint)*(ushort *)(lVar1 + 0x1a) + (uint)*(ushort *)(lVar1 + 0x62) + param_2 <=
     *(uint *)(lVar1 + 8))) {
    return 0;
  }
  uVar2 = FUN_180573d00(lVar1,param_2,0);
  return uVar2;
}



