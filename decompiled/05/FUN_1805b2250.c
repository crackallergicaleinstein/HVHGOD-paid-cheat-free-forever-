// FUN_1805b2250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2250 */

void FUN_1805b2250(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1[2];
  for (pbVar3 = (byte *)*param_1; pbVar3 < pbVar2; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
      if (bVar1 != 0x25) break;
      do {
        if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < pbVar2);
    }
  }
  *param_1 = pbVar3;
  FUN_1805bd250(param_1,pbVar2,param_2,param_3,param_4);
  return;
}



