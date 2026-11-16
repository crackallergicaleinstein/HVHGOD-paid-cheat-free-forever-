// FUN_180353e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180353e30 */

void FUN_180353e30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_188 [384];
  
  FUN_18063ab10(local_188,0,0x180);
  puVar2 = (undefined8 *)FUN_180181110(local_188);
  lVar3 = 3;
  do {
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    uVar1 = puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = uVar1;
    uVar1 = puVar2[5];
    param_1[4] = puVar2[4];
    param_1[5] = uVar1;
    uVar1 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar1;
    uVar1 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_1[10] = puVar2[10];
    param_1[0xb] = uVar1;
    uVar1 = puVar2[0xd];
    param_1[0xc] = puVar2[0xc];
    param_1[0xd] = uVar1;
    uVar1 = puVar2[0xf];
    param_1[0xe] = puVar2[0xe];
    param_1[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    param_1 = param_1 + 0x10;
  } while (lVar3 != 0);
  return;
}



