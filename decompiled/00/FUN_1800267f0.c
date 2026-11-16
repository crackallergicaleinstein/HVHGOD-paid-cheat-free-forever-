// FUN_1800267f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800267f0 */

undefined8 FUN_1800267f0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar3 = 0;
  if (param_2 != 0) {
    lVar4 = 0;
    bVar5 = false;
    do {
      while( true ) {
        bVar1 = *(byte *)(param_1 + lVar4);
        if (9 < (byte)(bVar1 - 0x30)) {
          lVar4 = lVar4 + param_1;
          goto LAB_180026854;
        }
        uVar2 = (uint)uVar3;
        if ((uVar2 < 0x19999999) || ((uVar2 == 0x19999999 && (0xf9 < (byte)(bVar1 - 0x36))))) break;
        bVar5 = true;
        lVar4 = lVar4 + 1;
        if (param_2 == lVar4) goto LAB_18002684c;
      }
      uVar3 = (ulonglong)((uint)(byte)(&DAT_1807c5b10)[bVar1] + uVar2 * 10);
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
LAB_18002684c:
    lVar4 = param_1 + param_2;
LAB_180026854:
    if (lVar4 != param_1 && !bVar5) {
      *param_3 = (int)uVar3;
      return CONCAT71((int7)(uVar3 >> 8),lVar4 == param_1 + param_2);
    }
  }
  return 0;
}



