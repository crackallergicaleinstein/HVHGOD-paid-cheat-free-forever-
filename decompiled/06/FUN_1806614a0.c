// FUN_1806614a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806614a0 */

void FUN_1806614a0(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_18015c010(&DAT_180bb8fd8);
  FUN_18015c010(&DAT_180bb8fb8);
  FUN_18015c010(&DAT_180bb8f98);
  FUN_18015c010(&DAT_180bb8f70);
  FUN_18015c010(&DAT_180bb8f50);
  FUN_1800e4160(&DAT_180bb8f10);
  FUN_18015c010(&DAT_180bb8ef0);
  FUN_18015c010(&DAT_180bb8ed0);
  FUN_18015c010(&DAT_180bb8eb0);
  FUN_18015c010(&DAT_180bb8e90);
  FUN_1800e40c0(&DAT_180bb8d28);
  FUN_18015c010(&DAT_180bb8cf0);
  FUN_18015c010(&DAT_180bb8cd0);
  FUN_18015c010(&DAT_180bb8cb0);
  FUN_18015c010(&DAT_180bb8c90);
  FUN_18015c010(&DAT_180bb8c70);
  FUN_180111850(&DAT_180bb8c58);
  FUN_1800e4010(&DAT_180bb8b48);
  FUN_180111850(&DAT_180bb8b30);
  FUN_180111850(&DAT_180bb8b18);
  puVar3 = DAT_180bb8af0;
  if (DAT_180bb8af0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_180bb8af0 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar4 = (undefined8 *)puVar3[0x21];
      if (puVar4 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x1;
        UNRECOVERED_JUMPTABLE = *(code **)*puVar3;
        puVar4 = puVar3;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)*puVar4;
        puVar5 = puVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar4,puVar5);
      return;
    }
  }
  return;
}



