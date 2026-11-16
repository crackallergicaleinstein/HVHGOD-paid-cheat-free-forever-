// FUN_1805fc928 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc928 */

void FUN_1805fc928(void)

{
  code *pcVar1;
  BOOL BVar2;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  return;
}



