// FUN_18030bef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030bef0 */

undefined8 *
FUN_18030bef0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             char *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined1 local_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  
  cVar6 = FUN_180303860(1);
  *param_5 = cVar6;
  if (cVar6 == '\0') {
    *(undefined1 *)(param_2 + 0x9c) = 1;
    uStack_108 = 0;
    local_d0 = 0;
    lVar11 = 2;
    uStack_c8 = 0;
    uStack_a4 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_1c = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_78 = 0;
    local_74 = 0;
    local_118 = (undefined1  [16])0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    auStack_e0 = (undefined1  [16])0x0;
    uStack_c4 = 0;
    uStack_bc = 0;
    uStack_b4 = 0;
    uStack_ac = 0;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_5c = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    local_3c = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    puVar7 = (undefined8 *)local_118;
    puVar9 = param_1;
    do {
      puVar10 = puVar9 + 0x10;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      uVar1 = puVar7[0xe];
      uVar2 = puVar7[0xf];
      puVar8 = puVar7 + 0x10;
      *puVar9 = *puVar7;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar3 = puVar7[5];
      uVar4 = puVar7[6];
      uVar5 = puVar7[7];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      uVar3 = puVar7[9];
      uVar4 = puVar7[10];
      uVar5 = puVar7[0xb];
      puVar9[8] = puVar7[8];
      puVar9[9] = uVar3;
      puVar9[10] = uVar4;
      puVar9[0xb] = uVar5;
      uVar3 = puVar7[0xd];
      puVar9[0xc] = puVar7[0xc];
      puVar9[0xd] = uVar3;
      puVar9[0xe] = uVar1;
      puVar9[0xf] = uVar2;
      lVar11 = lVar11 + -1;
      puVar7 = puVar8;
      puVar9 = puVar10;
    } while (lVar11 != 0);
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x48);
    *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
    local_130 = *(undefined4 *)(lVar11 + 0x20);
    local_138 = *(undefined8 *)(lVar11 + 0x18);
    local_124 = *(undefined4 *)(lVar11 + 0x2c);
    local_12c = *(undefined8 *)(lVar11 + 0x24);
    puVar7 = (undefined8 *)FUN_180419610(lVar11,local_118,param_3,param_4,&local_138,lVar11 + 0x30);
    lVar11 = 2;
    puVar9 = param_1;
    do {
      puVar10 = puVar9 + 0x10;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      uVar1 = puVar7[0xe];
      uVar2 = puVar7[0xf];
      puVar8 = puVar7 + 0x10;
      *puVar9 = *puVar7;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar3 = puVar7[5];
      uVar4 = puVar7[6];
      uVar5 = puVar7[7];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      uVar3 = puVar7[9];
      uVar4 = puVar7[10];
      uVar5 = puVar7[0xb];
      puVar9[8] = puVar7[8];
      puVar9[9] = uVar3;
      puVar9[10] = uVar4;
      puVar9[0xb] = uVar5;
      uVar3 = puVar7[0xd];
      puVar9[0xc] = puVar7[0xc];
      puVar9[0xd] = uVar3;
      puVar9[0xe] = uVar1;
      puVar9[0xf] = uVar2;
      lVar11 = lVar11 + -1;
      puVar7 = puVar8;
      puVar9 = puVar10;
    } while (lVar11 != 0);
  }
  *puVar10 = *puVar8;
  return param_1;
}



