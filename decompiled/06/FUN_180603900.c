// FUN_180603900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603900 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: class std::ostreambuf_iterator<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(char) __ptr64
   
   Library: Visual Studio 2019 Release */

ostreambuf_iterator<char,struct_std::char_traits<char>_> * __thiscall
std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
          (ostreambuf_iterator<char,std::char_traits<char>_> *this,char param_1)

{
  longlong *plVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)param_1;
  plVar1 = *(longlong **)(this + 8);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)plVar1[8] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)plVar1[0xb];
    }
    if (iVar4 < 1) {
      uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    }
    else {
      *(int *)plVar1[0xb] = *(int *)plVar1[0xb] + -1;
      pcVar2 = *(char **)plVar1[8];
      *(char **)plVar1[8] = pcVar2 + 1;
      *pcVar2 = param_1;
    }
    if (uVar3 != 0xffffffff) {
      return (ostreambuf_iterator<char,struct_std::char_traits<char>_> *)this;
    }
  }
  *this = (ostreambuf_iterator<char,std::char_traits<char>_>)0x1;
  return (ostreambuf_iterator<char,struct_std::char_traits<char>_> *)this;
}



