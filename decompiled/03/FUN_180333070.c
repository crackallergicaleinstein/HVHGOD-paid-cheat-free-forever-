// FUN_180333070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180333070 */

void FUN_180333070(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined8 *param_10,undefined8 *param_11,undefined4 *param_12
                  ,undefined4 *param_13,undefined4 *param_14,undefined4 *param_15,
                  undefined8 *param_16)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8 [15];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180bbeabc != '\0') {
    local_70 = DAT_180bda1b8;
    local_e8[0] = 0x1000000000000000;
    local_6c = *param_3;
    local_e8[1] = 0x1000000000000004;
    local_68 = *param_4;
    local_e8[2] = 0x1000000000000008;
    local_64 = *param_5;
    local_e8[3] = 0x100000000000000c;
    local_60 = *param_6;
    local_e8[4] = 0x1000000000000010;
    local_5c = *param_7;
    local_e8[5] = 0x1000000000000014;
    local_58 = *param_8;
    local_e8[6] = 0x1000000000000018;
    local_54 = *param_9;
    local_e8[7] = 0x100000000000001c;
    local_50 = *param_10;
    local_e8[8] = 0x8000000000000020;
    local_48 = *param_11;
    local_e8[9] = 0xb000000000000028;
    local_40 = *param_12;
    local_e8[10] = 0x1000000000000030;
    local_3c = *param_13;
    local_e8[0xb] = 0x1000000000000034;
    local_38 = *param_14;
    local_e8[0xc] = 0x1000000000000038;
    local_34 = *param_15;
    local_e8[0xd] = 0x100000000000003c;
    local_30 = *param_16;
    local_e8[0xe] = 0x8000000000000040;
    local_118 = 0xf;
    puStack_110 = local_e8;
    local_f8 = 0;
    uStack_f0 = 0xf;
    local_108._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_108._1_15_;
    local_108 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_e8[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)((longlong)&local_68 + (local_e8[uVar5] & 0xfffffffffffffff));
      }
      else if (bVar3 == 0xb) {
        uVar2 = uVar2 + 0x20;
      }
      else {
        uVar2 = uVar2 + 8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xf);
    lVar4 = param_1[1] + uVar2;
    if (CARRY8(param_1[1],uVar2)) {
      lVar4 = -1;
    }
    FUN_1800f5540(local_108,lVar4);
    local_28 = local_118;
    puStack_20 = puStack_110;
    local_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_1801da050(&local_118,local_108,&local_18,&local_28,0);
    FUN_18030e280(local_108);
    FUN_18015c010(local_108);
  }
  return;
}



