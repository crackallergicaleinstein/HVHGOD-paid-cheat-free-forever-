// FUN_180282be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180282be0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180282be0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_28 [2];
  
  puVar3 = DAT_180b92f68;
  puVar5 = (undefined8 *)(param_3 + 0x50);
  if (puVar5 != DAT_180b92f68) {
    puVar6 = (undefined8 *)(param_3 + 8);
    do {
      puVar6[-1] = *puVar5;
      if (puVar6 + -1 != puVar5) {
        FUN_18015c010(puVar6);
        *puVar6 = puVar6[10];
        puVar6[1] = puVar6[0xb];
        puVar6[2] = puVar6[0xc];
        puVar6[3] = puVar6[0xd];
        puVar6[0xc] = 0;
        puVar6[0xd] = 0xf;
        *(undefined1 *)(puVar6 + 10) = 0;
      }
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar6 + 0xe);
      *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)((longlong)puVar6 + 0x74);
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar6 + 0xf);
      *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)((longlong)puVar6 + 0x7c);
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar6 + 0x10);
      puVar6[7] = puVar6[0x11];
      uVar4 = 0;
      puVar1 = puVar6 + 0x12;
      if (local_28 != puVar1) {
        uVar4 = *puVar1;
        *puVar1 = 0;
      }
      plVar2 = (longlong *)puVar6[8];
      puVar6[8] = uVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      puVar5 = puVar5 + 10;
      puVar6 = puVar6 + 10;
    } while (puVar5 != puVar3);
  }
  puVar5 = DAT_180b92f68;
  plVar2 = (longlong *)DAT_180b92f68[-1];
  if (plVar2 != (longlong *)0x0) {
    DAT_180b92f68[-1] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_18015c010(puVar5 + -9);
  DAT_180b92f68 = DAT_180b92f68 + -10;
  *param_2 = param_3;
  return param_2;
}



