// FUN_180610488 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180610488 */

/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x16;
    FUN_18060aad4();
    return -1;
  }
  iVar1 = FUN_180610744(_File,*_Pos,0);
  return iVar1;
}



