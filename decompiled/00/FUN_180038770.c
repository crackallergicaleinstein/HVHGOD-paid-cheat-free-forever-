// FUN_180038770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180038770 */

undefined8 FUN_180038770(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    lVar1 = param_1 + param_2;
    lVar3 = 0;
    bVar5 = false;
    uVar4 = 0;
    do {
      while( true ) {
        bVar2 = *(byte *)(param_1 + lVar3);
        if (9 < (byte)(bVar2 - 0x30)) {
          lVar3 = lVar3 + param_1;
          goto LAB_1800387e5;
        }
        if ((uVar4 < 0x1999999999999999) ||
           ((uVar4 == 0x1999999999999999 && (0xf9 < (byte)(bVar2 - 0x36))))) break;
        bVar5 = true;
        lVar3 = lVar3 + 1;
        if (param_2 == lVar3) goto LAB_1800387dd;
      }
      uVar4 = (ulonglong)(byte)(&DAT_1807c5b10)[bVar2] + uVar4 * 10;
      lVar3 = lVar3 + 1;
    } while (param_2 != lVar3);
LAB_1800387dd:
    lVar3 = lVar1;
LAB_1800387e5:
    if (lVar3 != param_1 && !bVar5) {
      *param_3 = uVar4;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar3 == lVar1);
    }
  }
  return 0;
}



