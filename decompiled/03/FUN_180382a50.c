// FUN_180382a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180382a50 */

ulonglong FUN_180382a50(longlong *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  
  puVar1 = (undefined *)FUN_180159df0(*param_1,param_1[1],0,*param_2,param_2[1]);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0xffffffffffffffff) {
LAB_180382b7b:
    return (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  if (puVar1 != (undefined *)0x0) {
    puVar2 = (undefined *)thunk_FUN_1805f7e70(&DAT_180806d98,&DAT_180806d9f,puVar1[*param_1 + -1]);
    if ((puVar2 == &DAT_180806d9f) ||
       (puVar2 = puVar2 + -0x180806d98, puVar2 == (undefined *)0xffffffffffffffff))
    goto LAB_180382b7b;
  }
  puVar1 = puVar1 + param_2[1];
  if ((undefined *)param_1[1] < puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  puVar4 = (undefined *)param_1[1] + -(longlong)puVar1;
  piVar5 = (int *)(puVar1 + *param_1);
  puVar2 = (undefined *)0xffffffffffffffff;
  if (puVar4 != (undefined *)0xffffffffffffffff) {
    puVar2 = puVar4;
  }
  if (puVar2 != (undefined *)0x0) {
    if ((undefined *)0x3 < puVar2) {
      if (((*piVar5 == 0x5f63705f) || (*piVar5 == 0x7866762e)) || (*piVar5 == 0x7363762e))
      goto LAB_180382b6b;
      if ((undefined *)0x4 < puVar2) {
        iVar3 = *piVar5 + -0x616d762e;
        if (iVar3 == 0) {
          iVar3 = *(byte *)(piVar5 + 1) - 0x74;
        }
        if (iVar3 == 0) goto LAB_180382b6b;
      }
    }
    puVar2 = (undefined *)thunk_FUN_1805f7e70(&DAT_180806d70,&DAT_180806d74,(char)*piVar5);
    if ((puVar2 == &DAT_180806d74) ||
       (puVar2 = puVar2 + -0x180806d70, puVar2 == (undefined *)0xffffffffffffffff))
    goto LAB_180382b7b;
  }
LAB_180382b6b:
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}



