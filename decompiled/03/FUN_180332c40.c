// FUN_180332c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180332c40 */

void FUN_180332c40(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_d8;
  ulonglong *puStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8 [9];
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_5b;
  undefined8 local_53;
  undefined4 local_4b;
  undefined8 local_47;
  undefined8 *local_3f;
  undefined8 local_37;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180bbeabc != '\0') {
    local_a8[8] = *param_2;
    local_a8[0] = 0x3000000000000000;
    local_60 = *param_3;
    local_a8[1] = 0x1000000000000008;
    local_5c = *param_4;
    local_a8[2] = 0x500000000000000c;
    local_5b = *param_5;
    local_a8[3] = 0x800000000000000d;
    local_53 = *param_6;
    local_a8[4] = 0x8000000000000015;
    local_4b = *param_7;
    local_a8[5] = 0x100000000000001d;
    local_47 = *param_8;
    local_a8[6] = 0xb000000000000021;
    local_3f = param_9;
    if (0xf < (ulonglong)param_9[3]) {
      local_3f = (undefined8 *)*param_9;
    }
    local_37 = param_9[2];
    local_a8[7] = 0xc000000000000029;
    local_d8 = 8;
    puStack_d0 = local_a8;
    local_b8 = 0;
    uStack_b0 = 0xf;
    local_c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_c8._1_15_;
    local_c8 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_a8[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)
                         ((longlong)local_a8 + (local_a8[uVar5] & 0xfffffffffffffff) + 0x48);
      }
      else if (bVar3 == 0xb) {
        uVar2 = uVar2 + 0x20;
      }
      else {
        uVar2 = uVar2 + 8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    lVar4 = param_1[1] + uVar2;
    if (CARRY8(param_1[1],uVar2)) {
      lVar4 = -1;
    }
    FUN_1800f5540(local_c8,lVar4);
    local_28 = local_d8;
    puStack_20 = puStack_d0;
    local_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_1801da050(&local_d8,local_c8,&local_18,&local_28,0);
    FUN_18030e280(local_c8);
    FUN_18015c010(local_c8);
  }
  return;
}



