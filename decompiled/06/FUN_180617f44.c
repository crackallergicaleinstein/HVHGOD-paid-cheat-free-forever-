// FUN_180617f44 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180617f44 */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_floating_point_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_1806179fc(this + 8,*(undefined8 *)(this + 0x78));
  lVar3 = *(longlong *)(this + 0x18);
  if ((lVar3 != *(longlong *)(this + 8)) && ((lVar3 != *(longlong *)(this + 0x10) || (iVar2 != -1)))
     ) {
    *(longlong *)(this + 0x18) = lVar3 + -1;
  }
  lVar3 = FUN_180617c7c(this + 0x20);
  if (lVar3 == 4) {
    uVar1 = FUN_18061752c(this);
  }
  else if (lVar3 == 8) {
    uVar1 = FUN_1806175d0(this);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



