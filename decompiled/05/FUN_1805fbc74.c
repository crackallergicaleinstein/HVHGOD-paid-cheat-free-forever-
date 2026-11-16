// FUN_1805fbc74 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbc74 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) ||
     ((&DAT_180bb1730)[lVar1] = (&DAT_180bb1730)[lVar1] + -1, (char)(&DAT_180bb1730)[lVar1] < '\x01'
     )) {
    FUN_1805fbcec(param_1);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
      if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
        puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      FUN_1804547d0(lVar1,0x10);
    }
  }
  return;
}



