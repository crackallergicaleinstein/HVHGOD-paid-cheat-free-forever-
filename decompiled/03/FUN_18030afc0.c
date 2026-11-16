// FUN_18030afc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030afc0 */

void FUN_18030afc0(longlong param_1,uint *param_2,undefined1 (*param_3) [32])

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  
  *(undefined1 (*) [32])(param_1 + 0x58) = *param_3;
  uVar1 = *(uint *)param_3[1];
  *param_2 = *param_2 | 0x40;
  param_2[0x12] = uVar1;
  uVar1 = *(uint *)(param_3[1] + 4);
  *param_2 = *param_2 | 0x84;
  param_2[0x13] = uVar1;
  puVar5 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0xc) != 0) {
    puVar5 = (uint *)(*(longlong *)(param_2 + 0xc) + 0x10);
  }
  if (puVar5 != (uint *)0x0) {
    uVar1 = *(uint *)(param_3[1] + 8);
    *puVar5 = *puVar5 | 2;
    puVar5[3] = uVar1;
  }
  uVar1 = (uint)((*(longlong *)(param_3[1] + 0x18) - *(longlong *)(param_3[1] + 0x10)) / 0x28);
  uVar4 = param_2[4];
  if ((int)uVar1 < (int)param_2[4]) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 6) + 8 + lVar6 * 8);
      pauVar7 = (undefined1 (*) [32])0x0;
      if (lVar2 != 0) {
        pauVar7 = (undefined1 (*) [32])(lVar2 + 0x10);
      }
      if (pauVar7 != (undefined1 (*) [32])0x0) {
        lVar2 = *(longlong *)(param_3[1] + 0x10);
        *pauVar7 = *(undefined1 (*) [32])(lVar8 + lVar2);
        *(undefined8 *)pauVar7[1] = *(undefined8 *)(lVar8 + 0x20 + lVar2);
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar6 < (int)uVar4);
  }
  if (param_2 != (uint *)0xfffffffffffffff8) {
    param_2[4] = *(uint *)(param_3[1] + 0xc);
  }
  puVar5 = (uint *)0x0;
  if (*(longlong *)(param_2 + 10) != 0) {
    puVar5 = (uint *)(*(longlong *)(param_2 + 10) + 0x10);
  }
  if (puVar5 != (uint *)0x0) {
    *param_2 = *param_2 | 2;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *puVar5 = *puVar5 | 1;
    uVar1 = *puVar5;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *puVar5 = uVar1 | 2;
    *(undefined8 *)(puVar5 + 4) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *puVar5 = uVar1 | 6;
    *(undefined8 *)(puVar5 + 6) = uVar3;
  }
  return;
}



