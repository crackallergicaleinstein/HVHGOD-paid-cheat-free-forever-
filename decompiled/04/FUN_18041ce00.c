// FUN_18041ce00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041ce00 */

undefined8 FUN_18041ce00(undefined8 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = DAT_180c7d8b0;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if ((((((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
        (*piVar1 == -0x1f928c9d)) && ((piVar1[6] == 4 && (*(longlong *)(piVar1 + 8) == 0x1994000))))
      && ((*(longlong *)(piVar1 + 0xe) == 0 &&
          ((DAT_180c7d8b0 != (byte *)0x0 &&
           (pbVar2 = *(byte **)(piVar1 + 0xc), DAT_180c7d8b0 <= pbVar2)))))) &&
     (((ulonglong)((longlong)pbVar2 - (longlong)DAT_180c7d8b0) <= (ulonglong)DAT_180c7d8a8 - 4 &&
      ((*pbVar2 & 0x18) == 0)))) {
    piVar1[8] = 0x19930520;
    piVar1[9] = 0;
    *(byte **)(piVar1 + 0xe) = pbVar3;
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return 0;
}



