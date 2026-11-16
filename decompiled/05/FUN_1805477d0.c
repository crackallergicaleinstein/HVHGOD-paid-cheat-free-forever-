// FUN_1805477d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805477d0 */

undefined4 FUN_1805477d0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  byte local_res8;
  undefined1 uStackX_b;
  
  local_res8 = (byte)param_1;
  bVar2 = (byte)((uint)param_1 >> 8);
  bVar1 = (byte)((uint)param_1 >> 0x10);
  if ((((DAT_1808e4fb5 != '\0') && (local_res8 == bVar2)) && (bVar2 == bVar1)) &&
     (0xb4 < local_res8)) {
    bVar1 = 0x1e;
    bVar2 = 0x1e;
    local_res8 = 0x1e;
  }
  uStackX_b = (undefined1)((uint)param_1 >> 0x18);
  return CONCAT31(CONCAT21(CONCAT11(uStackX_b,bVar1),bVar2),local_res8);
}



