// FUN_18033d980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033d980 */

undefined8 *
FUN_18033d980(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 local_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
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
  
  if (((DAT_180bbec89 == '\0') && (iVar7 = FUN_180303a00(), 0x40 < iVar7)) &&
     (cVar6 = FUN_180303860(1), cVar6 != '\0')) {
    puVar8 = (undefined8 *)FUN_180419610(extraout_XMM0_Qa,local_118,param_2,param_3,param_4,param_5)
    ;
    lVar12 = 2;
    puVar10 = param_1;
    do {
      puVar11 = puVar10 + 0x10;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      uVar1 = puVar8[0xe];
      uVar2 = puVar8[0xf];
      puVar9 = puVar8 + 0x10;
      *puVar10 = *puVar8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar5 = puVar8[7];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar3 = puVar8[9];
      uVar4 = puVar8[10];
      uVar5 = puVar8[0xb];
      puVar10[8] = puVar8[8];
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      uVar3 = puVar8[0xd];
      puVar10[0xc] = puVar8[0xc];
      puVar10[0xd] = uVar3;
      puVar10[0xe] = uVar1;
      puVar10[0xf] = uVar2;
      lVar12 = lVar12 + -1;
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (lVar12 != 0);
  }
  else {
    DAT_180bbec89 = '\x01';
    local_118 = (undefined1  [16])0x0;
    local_c4 = 0;
    uStack_bc = 0;
    uStack_b4 = 0;
    uStack_ac = 0;
    local_98 = (undefined1  [16])0x0;
    local_5c = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    local_3c = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    uStack_108 = 0;
    lVar12 = 2;
    local_d0 = 0;
    local_c8 = 0;
    uStack_a4 = 0;
    local_68 = 0;
    local_60 = 0;
    local_1c = 0;
    local_70 = 0x3f80000000000000;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_78 = 0;
    local_74 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    auStack_e0 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    puVar8 = (undefined8 *)local_118;
    puVar10 = param_1;
    do {
      puVar11 = puVar10 + 0x10;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      uVar1 = puVar8[0xe];
      uVar2 = puVar8[0xf];
      puVar9 = puVar8 + 0x10;
      *puVar10 = *puVar8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar5 = puVar8[7];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar3 = puVar8[9];
      uVar4 = puVar8[10];
      uVar5 = puVar8[0xb];
      puVar10[8] = puVar8[8];
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      uVar3 = puVar8[0xd];
      puVar10[0xc] = puVar8[0xc];
      puVar10[0xd] = uVar3;
      puVar10[0xe] = uVar1;
      puVar10[0xf] = uVar2;
      lVar12 = lVar12 + -1;
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (lVar12 != 0);
  }
  *puVar11 = *puVar9;
  return param_1;
}



