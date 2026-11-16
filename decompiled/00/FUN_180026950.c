// FUN_180026950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180026950 */

bool FUN_180026950(char *param_1,longlong param_2,ulonglong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    cVar1 = *param_1;
    uVar2 = (ulonglong)(cVar1 == '-');
    lVar4 = param_2 - uVar2;
    if (lVar4 != 0) {
      pbVar5 = (byte *)(param_1 + uVar2);
      bVar3 = 0;
      uVar6 = 0;
      do {
        while( true ) {
          if (9 < (byte)(*pbVar5 - 0x30)) goto LAB_1800269e7;
          if ((uVar6 < 0xccccccccccccccc) ||
             ((byte)(&DAT_1807c5b10)[*pbVar5] <= (byte)((cVar1 == '-') + 7U) &&
              uVar6 == 0xccccccccccccccc)) break;
          bVar3 = 1;
          pbVar5 = pbVar5 + 1;
          lVar4 = lVar4 + -1;
          if (lVar4 == 0) goto LAB_1800269e4;
        }
        uVar6 = (ulonglong)(byte)(&DAT_1807c5b10)[*pbVar5] + uVar6 * 10;
        pbVar5 = pbVar5 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
LAB_1800269e4:
      pbVar5 = (byte *)(param_1 + param_2);
LAB_1800269e7:
      if (!(bool)((longlong)pbVar5 - (longlong)param_1 == uVar2 | bVar3)) {
        uVar2 = -uVar6;
        if (cVar1 != '-') {
          uVar2 = uVar6;
        }
        *param_3 = uVar2;
        return pbVar5 == (byte *)(param_1 + param_2);
      }
    }
  }
  return false;
}



