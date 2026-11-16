// FUN_180603d8c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603d8c */

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringstream<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2019 Release */

void * __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  FUN_180603824();
  *(undefined ***)this = ios_base::vftable;
  ios_base::_Ios_base_dtor((ios_base *)this);
  if ((param_1 & 1) != 0) {
    FUN_1804547d0(this + -0x98,0xf8);
  }
  return this + -0x98;
}



