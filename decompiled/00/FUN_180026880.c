// FUN_180026880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180026880 */

undefined8 FUN_180026880(char *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  if (param_2 != 0) {
    cVar1 = *param_1;
    uVar7 = (ulonglong)(cVar1 == '-');
    uVar3 = 0;
    lVar6 = param_2 - uVar7;
    if (lVar6 == 0) {
      return 0;
    }
    pbVar8 = (byte *)(param_1 + uVar7);
    bVar5 = 0;
    do {
      while( true ) {
        if (9 < (byte)(*pbVar8 - 0x30)) goto LAB_180026917;
        uVar2 = (uint)uVar3;
        if ((uVar2 < 0xccccccc) ||
           ((uint)(byte)(&DAT_1807c5b10)[*pbVar8] <= (cVar1 == '-') + 7 && uVar2 == 0xccccccc))
        break;
        bVar5 = 1;
        pbVar8 = pbVar8 + 1;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) goto LAB_180026914;
      }
      uVar3 = (ulonglong)((uint)(byte)(&DAT_1807c5b10)[*pbVar8] + uVar2 * 10);
      pbVar8 = pbVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
LAB_180026914:
    pbVar8 = (byte *)(param_1 + param_2);
LAB_180026917:
    if (!(bool)((longlong)pbVar8 - (longlong)param_1 == uVar7 | bVar5)) {
      iVar4 = -(int)uVar3;
      if (cVar1 != '-') {
        iVar4 = (int)uVar3;
      }
      *param_3 = iVar4;
      return CONCAT71((int7)(uVar3 >> 8),pbVar8 == (byte *)(param_1 + param_2));
    }
  }
  return 0;
}



