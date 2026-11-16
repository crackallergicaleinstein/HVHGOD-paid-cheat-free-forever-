// FUN_18061112c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061112c */

/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x16;
    FUN_18060aad4();
    iVar1 = -1;
  }
  else {
    FUN_180611584(_File);
    iVar1 = FUN_18061100c(_Ch,_File);
    FUN_180611590(_File);
  }
  return iVar1;
}



