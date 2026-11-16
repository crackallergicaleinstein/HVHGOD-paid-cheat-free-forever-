// FUN_1805f641c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f641c */

/* WARNING: Removing unreachable block (ram,0x0001805f650d) */
/* WARNING: Removing unreachable block (ram,0x0001805f64fd) */
/* WARNING: Removing unreachable block (ram,0x0001805f64d8) */
/* WARNING: Removing unreachable block (ram,0x0001805f6456) */
/* WARNING: Removing unreachable block (ram,0x0001805f6434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1805f641c(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_1808d5f68 = 0x8000;
    DAT_1808d5f70 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180bad348 = DAT_180bad348 | 1;
    }
  }
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_180bad348 = DAT_180bad348 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar12 = *(uint *)(lVar4 + 4);
    }
  }
  DAT_1808d5f60 = 1;
  DAT_1808d5f64 = 2;
  uVar9 = DAT_1808d5f58 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1808d5f60 = 2;
    DAT_1808d5f64 = 6;
    uVar9 = DAT_1808d5f58 & 0xffffffffffffffee;
  }
  DAT_1808d5f58 = uVar9;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar9 = xinuse(0);
  uVar9 = in_XCR0 & uVar9 & 0xffffffff;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar6 = (byte)uVar9, (bVar6 & 6) != 6)) goto LAB_1805f667e;
  DAT_1808d5f60 = 3;
  uVar7 = DAT_1808d5f58;
  uVar5 = DAT_1808d5f64 | 8;
  if ((uVar8 & 0x20) == 0) {
LAB_1805f6614:
    DAT_1808d5f64 = uVar5;
    DAT_1808d5f58 = uVar7;
    uVar7 = DAT_1808d5f58;
    uVar5 = DAT_1808d5f64;
  }
  else {
    DAT_1808d5f60 = 5;
    uVar7 = DAT_1808d5f58 & 0xfffffffffffffffd;
    uVar5 = DAT_1808d5f64 | 0x28;
    if ((uVar8 & 0xd0030000) == 0xd0030000) {
      if ((bVar6 & 0xe0) != 0xe0) goto LAB_1805f6614;
      DAT_1808d5f64 = DAT_1808d5f64 | 0x68;
      DAT_1808d5f60 = 6;
      uVar7 = DAT_1808d5f58 & 0xffffffffffffffd9;
      uVar5 = DAT_1808d5f64;
    }
  }
  DAT_1808d5f64 = uVar5;
  DAT_1808d5f58 = uVar7;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_1808d5f58 = DAT_1808d5f58 & 0xfffffffffeffffff;
  }
  if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
    _DAT_180bad344 = uVar12 & 0x400ff;
    DAT_1808d5f58 = ~((ulonglong)(uVar12 >> 0x10 & 6) | 0x1000029) & DAT_1808d5f58;
    if (1 < (byte)_DAT_180bad344) {
      DAT_1808d5f58 = DAT_1808d5f58 & 0xffffffffffffffbf;
    }
  }
LAB_1805f667e:
  if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_1808d5f58 = DAT_1808d5f58 & 0xffffffffffffff7f;
  }
  return 0;
}



