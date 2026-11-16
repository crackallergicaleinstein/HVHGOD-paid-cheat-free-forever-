// FUN_180195470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195470 */

undefined8 * FUN_180195470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  puVar1 = param_1 + 9;
  if (puVar1 != param_2 + 9) {
    FUN_1801ac870(puVar1);
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 9);
    uVar5 = param_1[10];
    param_1[10] = param_2[10];
    param_2[10] = uVar5;
    uVar5 = param_1[0xb];
    param_1[0xb] = param_2[0xb];
    param_2[0xb] = uVar5;
    uVar5 = param_1[0xc];
    param_1[0xc] = param_2[0xc];
    param_2[0xc] = uVar5;
    uVar5 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    param_2[0xd] = uVar5;
    uVar5 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    param_2[0xe] = uVar5;
    uVar5 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    param_2[0xf] = uVar5;
    uVar5 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    param_2[0x10] = uVar5;
  }
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  plVar2 = param_2 + 0x17;
  plVar3 = param_1 + 0x17;
  if (plVar3 != plVar2) {
    lVar6 = *plVar3;
    cVar4 = *(char *)((longlong)*(longlong **)(lVar6 + 8) + 0x19);
    plVar8 = *(longlong **)(lVar6 + 8);
    while (cVar4 == '\0') {
      FUN_1801b05f0(plVar3,plVar3,plVar8[2]);
      plVar7 = (longlong *)*plVar8;
      FUN_1804547d0(plVar8,0x28);
      plVar8 = plVar7;
      cVar4 = *(char *)((longlong)plVar7 + 0x19);
    }
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    param_1[0x18] = 0;
    lVar6 = *plVar3;
    *plVar3 = *plVar2;
    *plVar2 = lVar6;
    uVar5 = param_1[0x18];
    param_1[0x18] = param_2[0x18];
    param_2[0x18] = uVar5;
  }
  return param_1;
}



