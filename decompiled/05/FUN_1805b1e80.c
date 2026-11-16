// FUN_1805b1e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b1e80 */

void FUN_1805b1e80(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  for (pbVar2 = (byte *)*param_1; pbVar2 < (byte *)param_1[2]; pbVar2 = pbVar2 + 1) {
    bVar1 = *pbVar2;
    if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
      if (bVar1 != 0x25) break;
      do {
        if ((*pbVar2 == 0xd) || (*pbVar2 == 10)) break;
        pbVar2 = pbVar2 + 1;
      } while (pbVar2 < (byte *)param_1[2]);
    }
  }
  *param_1 = pbVar2;
  FUN_1805b4660(param_1);
  return;
}



