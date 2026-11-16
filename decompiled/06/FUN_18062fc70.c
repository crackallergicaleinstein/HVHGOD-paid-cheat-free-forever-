// FUN_18062fc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062fc70 */

/* Library Function - Single Match
    GetLocaleNameFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLangCountry(undefined8 *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  
  psVar4 = (short *)*param_1;
  lVar5 = -1;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (psVar4[lVar3] != 0);
  *(uint *)(param_1 + 3) = (uint)(lVar3 == 3);
  do {
    lVar5 = lVar5 + 1;
  } while (*(short *)(param_1[1] + lVar5 * 2) != 0);
  *(uint *)((longlong)param_1 + 0x1c) = (uint)(lVar5 == 3);
  if (lVar3 == 3) {
    iVar6 = 2;
  }
  else {
    iVar6 = 0;
    if (psVar4 == (short *)0x0) {
      iVar6 = 0;
    }
    else {
      while( true ) {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar6 = iVar6 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  FUN_180621804(FUN_18062fde0,3,0);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



