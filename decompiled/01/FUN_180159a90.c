// FUN_180159a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159a90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180159a90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *local_18;
  undefined8 local_10;
  
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar1);
  }
  return;
}



