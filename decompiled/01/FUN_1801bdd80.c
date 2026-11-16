// FUN_1801bdd80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bdd80 */

void FUN_1801bdd80(void)

{
  undefined8 *puVar1;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [32];
  undefined1 local_98 [152];
  
  puVar1 = (undefined8 *)FUN_18015b6a0(local_c8);
  local_d8 = *puVar1;
  uStack_d0 = puVar1[1];
  FUN_18015bae0(local_b8,"directory_iterator::operator++");
  FUN_1801bdbe0(local_98,local_b8,&local_d8);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_98,&DAT_1808d1458);
}



