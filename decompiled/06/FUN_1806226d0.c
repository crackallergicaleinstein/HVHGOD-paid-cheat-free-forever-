// FUN_1806226d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806226d0 */

/* WARNING: Removing unreachable block (ram,0x000180622750) */
/* WARNING: Removing unreachable block (ram,0x000180622742) */
/* WARNING: Removing unreachable block (ram,0x0001806226e7) */

undefined8 FUN_1806226d0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_180bb2128 = 0;
  DAT_180bb212c = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_180bb2128 = 1;
      DAT_180bb212c = 1;
    }
    else {
      DAT_180bb2128 = 0;
    }
  }
  if ((DAT_180bb2128 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_180bb212c = 3;
      DAT_180bb2128 = 3;
      return 0;
    }
  }
  return 0;
}



