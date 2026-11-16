// FUN_180605370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605370 */

undefined4 FUN_180605370(void)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  iVar1 = rand_s(local_res8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8dc("invalid random_device value");
  }
  return local_res8[0];
}



