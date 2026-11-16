// FUN_18045a540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045a540 */

void FUN_18045a540(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489fc0("Color",lVar1 + 0xd0,1,0);
  FUN_18048a250("Distance",lVar1 + 0xe4,0x42c80000,0x45fa0000,&DAT_180829c34,0x41200000,1,0);
  FUN_18048a250("Density",lVar1 + 0xec,0,0x3f800000,&DAT_1807c6e40,0x3c23d70a,1,0);
  FUN_18048a250("Falloff",lVar1 + 0xe8,0x3dcccccd,0x41000000,&DAT_180829c18,0x3dcccccd,1,0);
  FUN_180488f10();
  return;
}



