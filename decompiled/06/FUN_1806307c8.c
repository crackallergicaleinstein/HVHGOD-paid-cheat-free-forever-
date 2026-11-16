// FUN_1806307c8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806307c8 */

/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLanguage(byte *param_1)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = FUN_18061f698();
  lVar4 = -1;
  psVar3 = *(short **)(lVar2 + 0x98);
  do {
    lVar4 = lVar4 + 1;
  } while (psVar3[lVar4] != 0);
  iVar5 = 2;
  *(uint *)(lVar2 + 0xb0) = (uint)(lVar4 == 3);
  if (lVar4 != 3) {
    iVar5 = 0;
    while( true ) {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
      iVar5 = iVar5 + 1;
    }
  }
  *(int *)(lVar2 + 0xac) = iVar5;
  EnumSystemLocalesW(FUN_180630ab0,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



