// FUN_18015c130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c130 */

undefined1 (*) [16] FUN_18015c130(undefined8 *param_1,undefined1 (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar3 = (short *)FUN_1800a7b00(puVar5,psVar4);
  if (psVar3 != psVar4) {
    do {
      psVar1 = psVar4;
      if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
      psVar3 = psVar3 + 1;
    } while (psVar3 != psVar4);
    do {
      psVar4 = psVar1;
      if (psVar3 == psVar4) goto LAB_18015c1dc;
      psVar2 = psVar4;
    } while ((psVar4[-1] != 0x5c) && (psVar1 = psVar4 + -1, psVar4[-1] != 0x2f));
    do {
      psVar4 = psVar2;
      if (psVar3 == psVar4) break;
      psVar2 = psVar4 + -1;
    } while ((psVar4[-1] == 0x5c) || (psVar4[-1] == 0x2f));
  }
LAB_18015c1dc:
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  FUN_180159e60(param_2,puVar5,(longlong)psVar4 - (longlong)puVar5 >> 1);
  return param_2;
}



