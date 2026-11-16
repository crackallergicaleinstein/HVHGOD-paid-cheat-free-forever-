// FUN_1805fa22c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa22c */

/* Library Function - Single Match
    _Xtime_get_ticks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _Xtime_get_ticks(void)

{
  uint local_res8;
  uint local_resc;
  
  FUN_1806053ec(&local_res8);
  return ((ulonglong)local_resc << 0x20) + -0x19db1ded53e8000 + (ulonglong)local_res8;
}



