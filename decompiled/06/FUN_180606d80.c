// FUN_180606d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606d80 */

/* Library Function - Single Match
    longjmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl longjmp(_JBTYPE *_Buf,int _Value)

{
  __except_validate_jump_buffer();
  FUN_18063a9d0(_Buf,_Value);
  return;
}



