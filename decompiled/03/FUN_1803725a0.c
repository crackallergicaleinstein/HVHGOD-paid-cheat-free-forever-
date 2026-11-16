// FUN_1803725a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803725a0 */

void FUN_1803725a0(undefined8 param_1,undefined8 param_2,char param_3,int param_4,float param_5,
                  char param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  
  puVar2 = DAT_1808e48d8;
  if ((((param_6 != '\0') || (DAT_1808e491c != 0)) || (param_3 != DAT_1808e4910)) ||
     ((param_4 != DAT_1808e4914 || (param_5 != DAT_1808e4918)))) {
    bVar3 = 0;
    DAT_1808e491c = 0;
    for (puVar1 = (undefined8 *)*DAT_1808e48d8; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      if ((ulonglong)puVar1[2] < DAT_1808e48c0) {
        bVar4 = FUN_180372680();
        bVar3 = bVar4 ^ 1 | bVar3;
        DAT_1808e491c = bVar3;
      }
    }
  }
  DAT_1808e4918 = param_5;
  DAT_1808e4914 = param_4;
  DAT_1808e4910 = param_3;
  return;
}



