// FUN_18065dad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065dad0 */

/* Library Function - Single Match
    int `public: virtual int __cdecl CMFCToolBar::SetButtons(unsigned int const * __ptr64,int,int)
   __ptr64'::`1'::dtor$1
   
   Library: Visual Studio 2010 Debug */

void `public:_virtual_int___cdecl_CMFCToolBar::SetButtons(unsigned_int_const*___ptr64,int,int)___ptr64'
     ::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x110) & 1) != 0) {
    *(uint *)(param_2 + 0x110) = *(uint *)(param_2 + 0x110) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x40);
  }
  return;
}



