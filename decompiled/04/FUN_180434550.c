// FUN_180434550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180434550 */

void FUN_180434550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58 [5];
  
  if ((param_4[1] != 0) && ((char)(param_5 >> 0x18) != '\0')) {
    local_98 = (int)((float)(param_5 >> 0x18) * 0.64) << 0x18;
    if (param_6 == 1) {
      puVar1 = &local_78;
      local_78 = 0xbf800000;
      uStack_70 = 0x3f800000;
      uStack_68 = 0xbf80000000000000;
      uStack_60 = 0x3f80000000000000;
      do {
        local_88 = *param_4;
        uStack_80 = param_4[1];
        FUN_1804340b0(param_1);
        puVar1 = puVar1 + 1;
      } while (puVar1 != local_58);
    }
    else if (param_6 == 2) {
      local_88 = *param_4;
      uStack_80 = param_4[1];
      FUN_1804340b0(param_1,(float)param_2 + 1.0,(float)param_3 + 1.0,&local_88,local_98,param_7);
    }
    local_88 = *param_4;
    uStack_80 = param_4[1];
    FUN_1804340b0(param_1,param_2,param_3,&local_88,param_5,param_7);
  }
  return;
}



