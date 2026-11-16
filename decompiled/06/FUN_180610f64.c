// FUN_180610f64 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180610f64 */

/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_180611584(_File);
      sVar2 = FUN_180610cd8(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_180611590(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_18063ab10(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
  }
  return 0;
}



