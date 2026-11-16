// FUN_1801ad0b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad0b0 */

longlong * FUN_1801ad0b0(longlong *param_1)

{
  short *psVar1;
  longlong lVar2;
  short *psVar3;
  longlong *plVar4;
  short *psVar5;
  short *psVar6;
  
  psVar6 = (short *)param_1[5];
  lVar2 = param_1[3];
  psVar5 = psVar6;
  if (7 < *(ulonglong *)(psVar6 + 0xc)) {
    psVar5 = *(short **)psVar6;
  }
  plVar4 = (longlong *)(psVar6 + 8);
  psVar1 = psVar5 + *(longlong *)(psVar6 + 8);
  psVar3 = (short *)*param_1;
  if (psVar5 == psVar3) {
    *param_1 = (longlong)(psVar3 + lVar2);
    if (7 < *(ulonglong *)(psVar6 + 0xc)) {
      psVar6 = *(short **)psVar6;
    }
    lVar2 = *plVar4;
    psVar3 = (short *)FUN_1800a7b00(psVar6,psVar6 + lVar2);
    for (psVar5 = psVar3; (psVar5 != psVar6 + lVar2 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f))));
        psVar5 = psVar5 + 1) {
    }
    if ((psVar6 != psVar3) && (psVar3 != psVar5)) {
      FUN_1800f5190(param_1 + 1,psVar3,(longlong)psVar5 - (longlong)psVar3 >> 1);
      return param_1;
    }
  }
  else {
    if (((*psVar3 == 0x5c) || (*psVar3 == 0x2f)) && (lVar2 == 0)) {
      *param_1 = (longlong)(psVar3 + 1);
      return param_1;
    }
    *param_1 = (longlong)(psVar3 + lVar2);
  }
  psVar6 = (short *)*param_1;
  if ((short *)*param_1 != psVar1) {
    do {
      psVar5 = psVar6;
      if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) {
        goto LAB_1801ad200;
      }
      psVar6 = psVar5 + 1;
      *param_1 = (longlong)psVar6;
    } while (psVar6 != psVar1);
    *param_1 = (longlong)psVar5;
  }
  plVar4 = param_1 + 1;
  param_1[3] = 0;
  if (7 < (ulonglong)param_1[4]) {
    plVar4 = (longlong *)*plVar4;
  }
  *(undefined2 *)plVar4 = 0;
  return param_1;
  while (psVar5 = psVar5 + 1, psVar5 != psVar1) {
LAB_1801ad200:
    if ((*psVar5 == 0x5c) || (*psVar5 == 0x2f)) break;
  }
  FUN_1800f5190(param_1 + 1,*param_1,(longlong)psVar5 - *param_1 >> 1);
  return param_1;
}



