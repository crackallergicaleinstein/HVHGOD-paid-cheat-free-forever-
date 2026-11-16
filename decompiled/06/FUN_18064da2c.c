// FUN_18064da2c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064da2c */

/* Library Function - Single Match
    int `protected: void __cdecl CWinApp::UpdatePrinterSelection(int) __ptr64'::`1'::dtor$1
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void `protected:_void___cdecl_CWinApp::UpdatePrinterSelection(int)___ptr64'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 1) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffe;
    FUN_18015a070(param_2 + 0x20);
  }
  return;
}



