// FUN_1805fb3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb3b0 */

undefined8 FUN_1805fb3b0(LPCWSTR param_1)

{
  BOOL BVar1;
  uint local_res10;
  DWORD DStackX_14;
  undefined1 local_28 [16];
  byte local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DStackX_14 = GetLastError();
    if (DStackX_14 == 0xb7) {
      DStackX_14 = FUN_1805fb620(param_1,local_28,3,0xffffffff);
      if ((DStackX_14 == 0) && ((local_18 & 0x10) == 0)) {
        DStackX_14 = 0xb7;
      }
    }
    local_res10 = local_res10 & 0xffffff00;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    DStackX_14 = 0;
  }
  return CONCAT44(DStackX_14,local_res10);
}



