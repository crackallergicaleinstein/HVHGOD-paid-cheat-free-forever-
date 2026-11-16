// FUN_1801bdad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bdad0 */

undefined1 (*) [16] FUN_1801bdad0(undefined8 *param_1,undefined1 (*param_2) [16])

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
  psVar3 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar2 = (short *)FUN_1800a7b00(puVar5,psVar3);
  psVar4 = psVar3;
  if (psVar2 != psVar3) {
    do {
      psVar1 = psVar3;
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    do {
      psVar4 = psVar1;
      if (psVar2 == psVar4) break;
      if ((psVar4[-1] == 0x5c) || (psVar1 = psVar4 + -1, psVar4[-1] == 0x2f)) break;
    } while( true );
  }
  psVar3 = (short *)thunk_FUN_1805f7f70(psVar4,psVar3,0x3a);
  if ((psVar4 != psVar3) && (psVar2 = psVar3 + -1, psVar4 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar4 != psVar3 + -2) || (psVar3[-2] != 0x2e)) goto LAB_1801bdba2;
    }
    else {
      for (psVar2 = psVar3 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_1801bdba2;
      }
    }
  }
  psVar2 = psVar3;
LAB_1801bdba2:
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  FUN_180159e60(param_2,psVar2,(longlong)psVar3 - (longlong)psVar2 >> 1);
  return param_2;
}



