// FUN_180614d1c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180614d1c */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t *peVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_180614d39:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_180614d42:
      peVar1 = (errno_t *)FUN_18060fe00();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_18063aed0(_Dst,_Src,_MaxCount);
        goto LAB_180614d39;
      }
      FUN_18063ab10(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_180614d42;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar1 = (errno_t *)FUN_18060fe00();
      eVar2 = 0x22;
    }
    *peVar1 = eVar2;
    FUN_18060aad4();
  }
  return eVar2;
}



