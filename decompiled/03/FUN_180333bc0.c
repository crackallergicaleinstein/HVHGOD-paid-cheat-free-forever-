// FUN_180333bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180333bc0 */

void FUN_180333bc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_88;
  ulonglong *puStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58 [3];
  undefined8 *local_40 [4];
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180bbeabc != '\0') {
    local_58[2] = *param_2;
    local_58[0] = 0x3000000000000000;
    local_40[0] = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      local_40[0] = (undefined8 *)*param_3;
    }
    local_40[1] = (undefined8 *)param_3[2];
    local_58[1] = 0xc000000000000008;
    local_88 = 2;
    puStack_80 = local_58;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_78._1_15_;
    local_78 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_58[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)((longlong)local_40 + (local_58[uVar5] & 0xfffffffffffffff));
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
    FUN_1800f5540(local_78,lVar4);
    local_40[3] = (undefined8 *)local_88;
    puStack_20 = puStack_80;
    local_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_1801da050(&local_88,local_78,&local_18,local_40 + 3,0);
    FUN_18030e280(local_78);
    FUN_18015c010(local_78);
  }
  return;
}



