// FUN_18065e3d5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065e3d5 */

undefined8 FUN_18065e3d5(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_18045ffa0(param_2 + 0x2630);
  FUN_18063aed0(param_2 + 0x2d0,uVar5,0x11ac);
  lVar6 = *(longlong *)(param_2 + 0x70) * 0x9c;
  puVar2 = *(undefined8 **)(param_2 + 0x80);
  puVar1 = (undefined8 *)(param_2 + 0x2d0 + lVar6);
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar1 = (undefined8 *)(param_2 + 0x2f0 + lVar6);
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  puVar2[4] = *puVar1;
  puVar2[5] = uVar5;
  puVar2[6] = uVar3;
  puVar2[7] = uVar4;
  puVar1 = (undefined8 *)(param_2 + 0x310 + lVar6);
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  puVar2[8] = *puVar1;
  puVar2[9] = uVar5;
  puVar2[10] = uVar3;
  puVar2[0xb] = uVar4;
  puVar1 = (undefined8 *)(param_2 + 0x330 + lVar6);
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  puVar2[0xc] = *puVar1;
  puVar2[0xd] = uVar5;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = uVar4;
  puVar1 = (undefined8 *)(param_2 + 0x350 + lVar6);
  uVar5 = puVar1[1];
  puVar2[0x10] = *puVar1;
  puVar2[0x11] = uVar5;
  puVar2[0x12] = *(undefined8 *)(param_2 + 0x360 + lVar6);
  *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(param_2 + 0x368 + lVar6);
  return 0;
}



