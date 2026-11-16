// FUN_1805fc210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc210 */

void FUN_1805fc210(void)

{
  _Lockit local_res8 [32];
  
  std::_Lockit::_Lockit(local_res8,0);
  _Deletegloballocale(&DAT_180bb18e8);
  DAT_180bb18e8 = 0;
  std::_Lockit::~_Lockit(local_res8);
  return;
}



