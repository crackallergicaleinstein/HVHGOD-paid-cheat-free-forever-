// FUN_180333330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180333330 */

void FUN_180333330(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_88;
  ulonglong *puStack_80;
  ulonglong local_78 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180bbeabc != '\0') {
    local_78[3] = *param_2;
    local_78[0] = 0x3000000000000000;
    local_58 = *param_3;
    local_78[1] = 0x1000000000000008;
    local_54 = *param_4;
    local_78[2] = 0x100000000000000c;
    local_88 = 3;
    puStack_80 = local_78;
    local_40 = 0;
    uStack_38 = 0xf;
    local_50._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_50._1_15_;
    local_50 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_78[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)
                         ((longlong)local_78 + (local_78[uVar5] & 0xfffffffffffffff) + 0x20);
      }
      else if (bVar3 == 0xb) {
        uVar2 = uVar2 + 0x20;
      }
      else {
        uVar2 = uVar2 + 8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    lVar4 = param_1[1] + uVar2;
    if (CARRY8(param_1[1],uVar2)) {
      lVar4 = -1;
    }
    FUN_1800f5540(local_50,lVar4);
    local_28 = local_88;
    puStack_20 = puStack_80;
    local_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_1801da050(&local_88,local_50,&local_18,&local_28,0);
    FUN_18030e280(local_50);
    FUN_18015c010(local_50);
  }
  return;
}



