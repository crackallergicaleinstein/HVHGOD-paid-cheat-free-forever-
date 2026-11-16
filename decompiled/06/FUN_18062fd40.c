// FUN_18062fd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062fd40 */

/* Library Function - Single Match
    GetLocaleNameFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLanguage(undefined8 *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  
  psVar2 = (short *)*param_1;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (psVar2[lVar3] != 0);
  *(uint *)(param_1 + 3) = (uint)(lVar3 == 3);
  if (lVar3 == 3) {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
    if (psVar2 == (short *)0x0) {
      iVar4 = 0;
    }
    else {
      while( true ) {
        sVar1 = *psVar2;
        psVar2 = psVar2 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar4 = iVar4 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  FUN_180621804(FUN_1806300e0,3,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



