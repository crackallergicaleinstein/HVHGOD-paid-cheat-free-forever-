// FUN_18016d810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016d810 */

undefined8 FUN_18016d810(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  ULONGLONG UVar5;
  undefined1 *puVar6;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_1 + 0x220) = 0;
  local_28 = (undefined1  [16])0x0;
  local_18 = (undefined1  [16])0x0;
  FUN_18015ba30(local_28,"refresh",7);
  cVar3 = FUN_18016e0a0(param_1,local_28);
  FUN_18015c010(local_28);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    local_38 = 0;
    local_30 = 0xf;
    local_48._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_48._1_15_;
    local_48 = auVar1 << 8;
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    FUN_18015ba30(local_88,"configs",7);
    local_58 = 0;
    local_50 = 0xf;
    local_68._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_68._1_15_;
    local_68 = auVar2 << 8;
    *(undefined4 *)(param_1 + 0x4a4) = 4;
    if ((undefined1 *)(param_1 + 0x4a8) != local_68) {
      FUN_180113930((undefined1 *)(param_1 + 0x4a8),local_68,0);
    }
    if ((undefined1 *)(param_1 + 0x4c8) != local_88) {
      puVar6 = local_88;
      if (0xf < local_70) {
        puVar6 = (undefined1 *)local_88._0_8_;
      }
      FUN_180113930((undefined1 *)(param_1 + 0x4c8),puVar6,local_78);
    }
    if ((undefined1 *)(param_1 + 0x4e8) != local_48) {
      FUN_180113930((undefined1 *)(param_1 + 0x4e8),local_48,0);
    }
    UVar5 = GetTickCount64();
    *(ULONGLONG *)(param_1 + 0x508) = UVar5;
    FUN_18015c010(local_68);
    FUN_18015c010(local_88);
    FUN_18015c010(local_48);
    uVar4 = 1;
  }
  return uVar4;
}



