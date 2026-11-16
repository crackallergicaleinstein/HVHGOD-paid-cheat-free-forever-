// FUN_1805bd650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd650 */

undefined8 FUN_1805bd650(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*param_1 + 1);
  do {
    if (param_2 <= pbVar2) {
LAB_1805bd6c7:
      *param_1 = (longlong)(pbVar2 + 1);
      return 0;
    }
    do {
      bVar1 = *pbVar2;
      if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
        if (bVar1 != 0x25) break;
        do {
          if ((*pbVar2 == 0xd) || (*pbVar2 == 10)) break;
          pbVar2 = pbVar2 + 1;
        } while (pbVar2 < param_2);
      }
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 < param_2);
    if (param_2 <= pbVar2) goto LAB_1805bd6c7;
    bVar1 = *pbVar2;
    if ((((bVar1 < 0x30) || (0x39 < bVar1)) && (5 < (byte)(bVar1 + 0xbf))) &&
       (5 < (byte)(bVar1 + 0x9f))) {
      if (bVar1 != 0x3e) {
        *param_1 = (longlong)pbVar2;
        return 3;
      }
      goto LAB_1805bd6c7;
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
}



