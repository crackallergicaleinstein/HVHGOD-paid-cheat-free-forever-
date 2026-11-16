// FUN_1801ad910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad910 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ad910(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  longlong local_c8;
  undefined1 local_c0 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  lVar3 = param_2 - param_1;
  local_c8 = param_2;
  while( true ) {
    if (lVar3 < 0xa50) {
      FUN_1801b4590(param_1,param_2);
    }
    if (param_3 < 1) break;
    local_e8 = param_5;
    local_c0 = (undefined1  [16])0x0;
    FUN_1801b47d0(local_c0,param_1,param_2,param_4);
    uVar2 = local_c0._8_8_;
    lVar5 = local_c0._0_8_;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    local_e8 = param_5;
    if ((local_c0._0_8_ - param_1) / 0x50 < (param_2 - local_c0._8_8_) / 0x50) {
      FUN_1801ad910(param_1,local_c0._0_8_,param_3,param_4);
      param_1 = uVar2;
      lVar5 = param_2;
    }
    else {
      FUN_1801ad910(local_c0._8_8_,param_2,param_3,param_4);
      local_c8 = lVar5;
    }
    lVar3 = lVar5 - param_1;
    param_2 = lVar5;
  }
  lVar3 = (param_2 - param_1) / 0x50;
  lVar5 = lVar3 >> 1;
  if (0 < lVar5) {
    puVar4 = (undefined8 *)(lVar5 * 0x50 + 0x30 + param_1);
    do {
      local_d8 = param_5;
      local_a8 = puVar4[-0x10];
      uStack_a0 = puVar4[-0xf];
      uStack_98 = puVar4[-0xe];
      uStack_90 = puVar4[-0xd];
      puVar4[-0xd] = 0xf;
      *(undefined1 *)(puVar4 + -0x10) = 0;
      lVar5 = lVar5 + -1;
      puVar4[-0xe] = 0;
      local_88 = puVar4[-0xc];
      uStack_80 = puVar4[-0xb];
      uStack_78 = puVar4[-10];
      uStack_70 = puVar4[-9];
      *(undefined2 *)(puVar4 + -0xc) = 0;
      puVar4[-10] = 0;
      puVar4[-9] = 7;
      local_68 = *(undefined4 *)(puVar4 + -8);
      local_64 = *(undefined4 *)((longlong)puVar4 + -0x3c);
      local_60 = puVar4[-7];
      local_e0 = param_5;
      local_e8 = CONCAT31(local_e8._1_3_,param_4);
      FUN_1801b9490(param_1,lVar5,lVar3,&local_a8);
      FUN_18015b930(&local_88);
      FUN_18015c010(&local_a8);
      puVar4 = puVar4 + -10;
    } while (0 < lVar5);
    param_2 = local_c8;
  }
  if (lVar3 < 2) {
  }
  puVar4 = (undefined8 *)(param_2 + -0x40);
  do {
    if (0x9f < (0x40 - param_1) + (longlong)puVar4) {
      puVar1 = puVar4 + -2;
      local_a8 = *puVar1;
      uStack_a0 = puVar4[-1];
      uStack_98 = *puVar4;
      uStack_90 = puVar4[1];
      puVar4[1] = 0xf;
      *(undefined1 *)puVar1 = 0;
      *puVar4 = 0;
      local_88 = puVar4[2];
      uStack_80 = puVar4[3];
      uStack_78 = puVar4[4];
      uStack_70 = puVar4[5];
      *(undefined2 *)(puVar4 + 2) = 0;
      puVar4[4] = 0;
      puVar4[5] = 7;
      local_68 = *(undefined4 *)(puVar4 + 6);
      local_64 = *(undefined4 *)((longlong)puVar4 + 0x34);
      local_60 = puVar4[7];
      FUN_1801b9260(puVar1,param_1);
      local_d8 = param_5;
      local_e0 = param_5;
      local_e8 = CONCAT31(local_e8._1_3_,param_4);
      FUN_1801b9490(param_1,0,((-0x10 - param_1) + (longlong)puVar4) / 0x50,&local_a8);
      FUN_18015b930(&local_88);
      FUN_18015c010(&local_a8);
    }
    puVar4 = puVar4 + -10;
  } while (0x9f < (0x40 - param_1) + (longlong)puVar4);
}



