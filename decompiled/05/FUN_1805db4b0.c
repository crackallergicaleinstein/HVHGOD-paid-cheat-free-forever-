// FUN_1805db4b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805db4b0 */

ulonglong FUN_1805db4b0(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar6 = 0;
  puVar1 = (uint *)(puVar2 + 0x21e);
  uVar5 = *puVar1;
  uVar4 = param_4;
  if (param_2 < uVar5) {
    if (uVar5 - param_2 <= (*(int *)(puVar2 + 0x21f) - (int)puVar2) - 0xf0U) {
      puVar2[0x21f] = puVar2[0x21f] - (ulonglong)(uVar5 - param_2);
      *puVar1 = param_2;
      goto joined_r0x0001805db55d;
    }
    iVar3 = FUN_1805788b0(*puVar2,0);
    if (iVar3 != 0) {
      return 0;
    }
    puVar2[3] = 0;
    uVar5 = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 9;
    puVar2[0x220] = puVar1;
    puVar2[0x21f] = puVar1;
    *puVar1 = 0;
  }
  if ((uVar5 < param_2) && (iVar3 = FUN_1805db020(puVar2,param_2 - uVar5), iVar3 != 0)) {
    return 0;
  }
joined_r0x0001805db55d:
  while( true ) {
    if (uVar4 == 0) {
      return uVar6;
    }
    uVar5 = param_4;
    if ((uint)(*(int *)(puVar2 + 0x220) - *(int *)(puVar2 + 0x21f)) < param_4) {
      uVar5 = *(int *)(puVar2 + 0x220) - *(int *)(puVar2 + 0x21f);
    }
    FUN_18063aed0(uVar6 + param_3,puVar2[0x21f],uVar5);
    puVar2[0x21f] = puVar2[0x21f] + (ulonglong)uVar5;
    uVar6 = (ulonglong)((int)uVar6 + uVar5);
    *puVar1 = *puVar1 + uVar5;
    param_4 = param_4 - uVar5;
    if (param_4 == 0) break;
    puVar2[0x21f] = puVar2 + 0x1e;
    uVar4 = FUN_1805db760(puVar2 + 3,puVar2 + 0x1e,0x1000);
    puVar2[0x220] = (ulonglong)uVar4 + puVar2[0x21f];
  }
  return uVar6;
}



