// FUN_1805fc124 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc124 */

/* Library Function - Single Match
    private: static class std::locale::_Locimp * __ptr64 __cdecl
   std::locale::_Locimp::_New_Locimp(bool)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(bool param_1)

{
  _Locimp *p_Var1;
  
  p_Var1 = (_Locimp *)FUN_180454770(0x38);
  if (p_Var1 == (_Locimp *)0x0) {
    p_Var1 = (_Locimp *)0x0;
  }
  else {
    *(undefined4 *)(p_Var1 + 8) = 1;
    *(undefined8 *)(p_Var1 + 0x10) = 0;
    *(undefined8 *)(p_Var1 + 0x18) = 0;
    *(undefined4 *)(p_Var1 + 0x20) = 0;
    *(undefined ***)p_Var1 = vftable;
    p_Var1[0x24] = (_Locimp)param_1;
    *(undefined8 *)(p_Var1 + 0x28) = 0;
    p_Var1[0x30] = (_Locimp)0x0;
    FUN_1805fbe64(p_Var1 + 0x28,&DAT_18081f00c);
  }
  return p_Var1;
}



