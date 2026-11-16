// FUN_1801e9fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e9fb0 */

undefined8 FUN_1801e9fb0(undefined8 *param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar1 = (short *)((longlong)puVar5 + param_1[2] * 2);
  for (psVar2 = (short *)FUN_1800a7b00(puVar5,psVar1); psVar2 != psVar1; psVar2 = psVar2 + 1) {
    if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
  }
  do {
    if (psVar2 == psVar1) {
      return 0;
    }
    psVar4 = psVar2;
    do {
      if ((*psVar4 == 0x5c) || (*psVar4 == 0x2f)) break;
      psVar4 = psVar4 + 1;
    } while (psVar4 != psVar1);
    psVar3 = (short *)FUN_1800a7b00(psVar2,psVar4);
    bVar6 = psVar3 != psVar2;
    psVar2 = psVar4;
    if (bVar6) {
      return 1;
    }
    for (; psVar2 != psVar1; psVar2 = psVar2 + 1) {
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
    }
  } while( true );
}



