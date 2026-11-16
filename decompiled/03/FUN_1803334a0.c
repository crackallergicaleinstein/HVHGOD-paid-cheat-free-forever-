// FUN_1803334a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803334a0 */

void FUN_1803334a0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_78;
  ulonglong *puStack_70;
  ulonglong local_68 [3];
  undefined4 local_50 [2];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180bbeabc != '\0') {
    local_68[2] = *param_2;
    local_68[0] = 0x3000000000000000;
    local_50[0] = *param_3;
    local_68[1] = 0x1000000000000008;
    local_78 = 2;
    puStack_70 = local_68;
    local_38 = 0;
    uStack_30 = 0xf;
    local_48._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_48._1_15_;
    local_48 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_68[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)((longlong)local_50 + (local_68[uVar5] & 0xfffffffffffffff));
      }
      else if (bVar3 == 0xb) {
        uVar2 = uVar2 + 0x20;
      }
      else {
        uVar2 = uVar2 + 8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    lVar4 = param_1[1] + uVar2;
    if (CARRY8(param_1[1],uVar2)) {
      lVar4 = -1;
    }
    FUN_1800f5540(local_48,lVar4);
    local_28 = local_78;
    puStack_20 = puStack_70;
    local_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_1801da050(&local_78,local_48,&local_18,&local_28,0);
    FUN_18030e280(local_48);
    FUN_18015c010(local_48);
  }
  return;
}



