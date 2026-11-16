// FUN_180617e24 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180617e24 */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_conversion_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_conversion_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 6) {
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        lVar4 = FUN_180617c7c(this + 0x20);
        if (lVar4 != 1) {
          if (lVar4 != 2) {
            return false;
          }
          uVar6 = 0;
          goto LAB_180617e9e;
        }
        uVar6 = 0;
        goto LAB_180617ead;
      }
      if (iVar1 == 1) {
        bVar3 = process_string_specifier(this,1);
        return bVar3;
      }
      if (iVar1 == 2) {
        uVar5 = 0;
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 != 4) {
            return false;
          }
          uVar5 = 8;
          goto LAB_180617f2f;
        }
        uVar5 = 10;
      }
      bVar3 = true;
      goto LAB_180617f32;
    }
    uVar5 = 10;
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        bVar3 = process_floating_point_specifier(this);
        return bVar3;
      }
      if (iVar1 != 8) {
        if (iVar1 != 9) {
          return false;
        }
        if (this[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
        {
          uVar2 = FUN_1806187e4(this,*(longlong *)(this + 0x18) - *(longlong *)(this + 8));
          return (bool)uVar2;
        }
        return true;
      }
      lVar4 = FUN_180617c7c(this + 0x20);
      if (lVar4 != 1) {
        if (lVar4 != 2) {
          return false;
        }
        uVar6 = 8;
LAB_180617e9e:
        uVar2 = FUN_18061781c(this,uVar6,0);
        return (bool)uVar2;
      }
      uVar6 = 8;
LAB_180617ead:
      uVar2 = FUN_180617678(this,uVar6,0);
      return (bool)uVar2;
    }
    uVar5 = 0x10;
  }
LAB_180617f2f:
  bVar3 = false;
LAB_180617f32:
  bVar3 = process_integer_specifier(this,uVar5,bVar3);
  return bVar3;
}



