// FUN_1805fae74 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fae74 */

/* Library Function - Single Match
    __std_fs_code_page
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __std_fs_code_page(void)

{
  UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}



