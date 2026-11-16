// FUN_1803d4410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d4410 */

void FUN_1803d4410(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  plVar5 = &DAT_180b0e068;
  do {
    if (*plVar5 != plVar5[1]) {
      plVar5[1] = *plVar5;
    }
    puVar4 = DAT_180b0e0e8;
    plVar5 = plVar5 + 3;
    puVar3 = DAT_180b0e0e0;
  } while ((undefined8 **)plVar5 != &DAT_180b0e0e0);
  for (; puVar3 != puVar4; puVar3 = puVar3 + 3) {
    uVar6 = (ulonglong)*(byte *)((longlong)puVar3 + 0xe);
    puVar1 = (undefined8 *)(&DAT_180b0e070)[uVar6 * 3];
    if (puVar1 == *(undefined8 **)(&DAT_180b0e078 + uVar6 * 0x18)) {
      FUN_1802eac60(&DAT_180b0e068 + uVar6 * 3,puVar1,puVar3);
    }
    else {
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      (&DAT_180b0e070)[uVar6 * 3] = (&DAT_180b0e070)[uVar6 * 3] + 0x18;
    }
  }
  return;
}



