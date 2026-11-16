// FUN_1802ff9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff9f0 */

bool FUN_1802ff9f0(void)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180cc8280 != '\0') {
    uVar3 = 0x811c9dc5;
    local_28 = 0xdb35e39b27e1c185;
    uStack_20 = 0xa05181ee77d57a06;
    local_48 = 0x746e6175715f7673;
    local_18 = 0x929654b1461b7377;
    uStack_10 = 0xa5cea54bfef7110;
    pbVar1 = (byte *)&local_48;
    local_38 = 0x706e695f746e656d;
    uStack_30 = 0x7475;
    uStack_40 = 0x65766f6d5f657a69;
    uVar4 = local_48;
    do {
      pbVar1 = pbVar1 + 1;
      uVar3 = ((int)(char)uVar4 ^ uVar3) * 0x1000193;
      uVar4 = (ulonglong)*pbVar1;
    } while (*pbVar1 != 0);
    lVar2 = FUN_1802fbb20(&DAT_180c6f180,uVar3);
    if (lVar2 != 0) {
      return *(char *)(lVar2 + 0x58) != '\0';
    }
  }
  return false;
}



