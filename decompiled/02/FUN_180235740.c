// FUN_180235740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180235740 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180235740(void)

{
  undefined8 local_1028;
  undefined8 local_1020;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined1 local_1008 [4088];
  undefined8 uStack_10;
  
  uStack_10 = 0x18023574c;
  _DAT_180b8f808 = 0;
  DAT_180b8f80c = 0;
  DAT_180b8f7b0 = 0;
  DAT_180b8f7a8 = 0;
  DAT_180b8f80a = 0;
  DAT_180b8f818 = 0;
  FUN_180235850();
  FUN_180235960();
  _DAT_180b8e720 = 0;
  _DAT_180b8e724 = 0;
  _DAT_180b8e728 = 0;
  DAT_180b8e740 = 0xffffffffffffffff;
  DAT_180b8e748 = 0;
  local_1028 = 0;
  _DAT_180b8e74c = 0x3f000000;
  local_1020 = 0;
  local_1018 = 0;
  local_1010 = 0;
  FUN_18063ab10(local_1008,0,0x1000);
  FUN_1801a5650(local_1008);
  FUN_18063aed0(&DAT_180b8e788,&local_1028,0x1020);
  DAT_180b8f7b8 = 0;
  DAT_180b8f7b0 = 0;
  DAT_180b8f7a8 = 0;
  DAT_180b8f7d8 = 0;
  _DAT_180b8f7e0 = (undefined1  [16])0x0;
  if (DAT_180b8f7f0 != DAT_180b8f7f8) {
    DAT_180b8f7f8 = DAT_180b8f7f0;
  }
  return;
}



