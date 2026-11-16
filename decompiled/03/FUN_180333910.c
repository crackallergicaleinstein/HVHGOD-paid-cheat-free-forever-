// FUN_180333910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180333910 */

void FUN_180333910(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_b8;
  ulonglong *puStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88 [7];
  longlong local_50 [4];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180bbeabc != '\0') {
    local_88[6] = *param_2;
    local_88[0] = 0x3000000000000000;
    local_50[0] = *param_3;
    local_88[1] = 0x8000000000000008;
    local_50[1] = *param_4;
    local_88[2] = 0x8000000000000010;
    local_50[2] = *param_5;
    local_88[3] = 0x8000000000000018;
    local_50[3] = *param_6;
    local_88[4] = 0x8000000000000020;
    local_30 = *param_7;
    local_88[5] = 0x8000000000000028;
    local_b8 = 6;
    puStack_b0 = local_88;
    local_98 = 0;
    uStack_90 = 0xf;
    local_a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_a8._1_15_;
    local_a8 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_88[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)((longlong)local_50 + (local_88[uVar5] & 0xfffffffffffffff));
      }
      else if (bVar3 == 0xb) {
        uVar2 = uVar2 + 0x20;
      }
      else {
        uVar2 = uVar2 + 8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
    lVar4 = param_1[1] + uVar2;
    if (CARRY8(param_1[1],uVar2)) {
      lVar4 = -1;
    }
    FUN_1800f5540(local_a8,lVar4);
    local_28 = local_b8;
    puStack_20 = puStack_b0;
    local_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_1801da050(&local_b8,local_a8,&local_18,&local_28,0);
    FUN_18030e280(local_a8);
    FUN_18015c010(local_a8);
  }
  return;
}



