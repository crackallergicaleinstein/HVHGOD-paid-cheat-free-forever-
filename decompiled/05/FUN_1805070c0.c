// FUN_1805070c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805070c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805070c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (DAT_180bb8ae8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(DAT_180bb8ae8 + 0xd0);
  }
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x78) + 8);
  (**(code **)(*plVar1 + 0x50))(plVar1,0,1,lVar2 + 0x48);
  return;
}



