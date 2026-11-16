// FUN_1806306f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806306f8 */

/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLangCountry(uint *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = FUN_18061f698();
  lVar5 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0x98) + lVar6 * 2) != 0);
  *(uint *)(lVar3 + 0xb0) = (uint)(lVar6 == 3);
  do {
    lVar5 = lVar5 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0xa0) + lVar5 * 2) != 0);
  iVar7 = 2;
  *(uint *)(lVar3 + 0xb4) = (uint)(lVar5 == 3);
  param_1[1] = 0;
  if (*(int *)(lVar3 + 0xb0) == 0) {
    psVar4 = *(short **)(lVar3 + 0x98);
    iVar7 = 0;
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)(lVar3 + 0xac) = iVar7;
  EnumSystemLocalesW(FUN_180630860,1);
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}



