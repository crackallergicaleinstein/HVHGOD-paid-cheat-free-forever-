// FUN_180619e24 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180619e24 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180619e24(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_180bb1c68 != '\0') {
    return;
  }
  LOCK();
  DAT_180bb1c5c = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180bb1c60 != DAT_1808d5f00) {
      bVar1 = (byte)DAT_1808d5f00 & 0x3f;
      (*(code *)((DAT_1808d5f00 ^ DAT_180bb1c60) >> bVar1 |
                (DAT_1808d5f00 ^ DAT_180bb1c60) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_180bb1d98;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_180619e93;
    puVar2 = &DAT_180bb1db0;
  }
  FUN_18061ad6c(puVar2);
LAB_180619e93:
  if (*(int *)*param_1 == 0) {
    FUN_18061afec(&DAT_180666228,&DAT_180666248);
  }
  FUN_18061afec(&DAT_180666250,&DAT_180666258);
  if (*(int *)param_1[1] == 0) {
    DAT_180bb1c68 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



