// FUN_18063f6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063f6a0 */

undefined8 FUN_18063f6a0(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 100) = 0;
  pauVar1 = *(undefined1 (**) [16])(param_2 + 0x28);
  auVar2 = vinsertps_avx(*(undefined1 (*) [16])(param_2 + 0x50),ZEXT816(0),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT816(0),0x30);
  *pauVar1 = auVar2;
  *(ulonglong *)pauVar1[1] = *(ulonglong *)(param_2 + 0x60) & 0xffffffff00000000;
  return 0;
}



