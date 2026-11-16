// FUN_180287540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180287540 */

void FUN_180287540(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_180113860(&DAT_180b8f8b8);
  uVar1 = *param_2;
  *param_2 = DAT_180b8f8b0;
  LOCK();
  UNLOCK();
  bVar2 = (byte)DAT_180b8f8b8;
  DAT_180b8f8b0 = uVar1;
  DAT_180b8f8b8 = param_2[1];
  if ((bVar2 & 3) == 2) {
    FUN_1805fa36c(&DAT_180b8f8b8);
  }
  param_2[1] = uVar3;
  FUN_1800efed0(param_2);
  return;
}



