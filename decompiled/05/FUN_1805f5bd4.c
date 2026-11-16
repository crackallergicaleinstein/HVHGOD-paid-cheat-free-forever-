// FUN_1805f5bd4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5bd4 */

/* WARNING: Removing unreachable block (ram,0x0001805f5c61) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_1805f5bd4(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000230; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000348;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_1805f5c4a;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1805f5c4a:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



