// FUN_1801fac60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fac60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801fac60(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  int local_20;
  ushort uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  char local_16;
  undefined1 local_15;
  undefined2 uStack_14;
  undefined1 uStack_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (((param_1 != 0) && (param_2 != 0)) && (cVar3 = FUN_1804513c0(param_1,1,2), cVar3 != '\0')) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_22 = 0;
    cVar3 = FUN_1804514f0(&local_30,param_1,0xf);
    local_11 = cVar3 != '\0';
    if ((bool)local_11) {
      uStack_18 = (undefined2)local_28;
      local_16 = (char)((uint)local_28 >> 0x10);
      local_15 = (undefined1)((uint)local_28 >> 0x18);
      uStack_14 = local_24;
      uStack_12 = local_22;
      local_20 = (int)local_30;
      uStack_1c = (ushort)((ulonglong)local_30 >> 0x20);
      uStack_1a = (undefined2)((ulonglong)local_30 >> 0x30);
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    local_38 = 0x48d18b48;
    local_34 = 0xc181;
    if (local_11 != '\0') {
      iVar5 = 0x48d18b48 - local_20;
      if (iVar5 == 0) {
        iVar5 = 0xc181 - (uint)uStack_1c;
      }
      if (((iVar5 == 0) && (local_16 == -0x17)) &&
         ((0 < CONCAT22(uStack_18,uStack_1a) && (CONCAT22(uStack_18,uStack_1a) == param_2)))) {
        local_88 = 0x55dc8b4c;
        param_1 = (longlong)CONCAT13(uStack_12,CONCAT21(uStack_14,local_15)) + 0xf + param_1;
        local_84 = 0x56415653;
        local_80 = 0x886b8d49;
        local_7c = 0x58ec8148;
        local_78 = 0x48000001;
        local_74 = 0xa0998b;
        local_70 = 0x8b4c0000;
        local_6c = 0xf18b48f2;
        cVar3 = FUN_1804513c0(param_1,1,2);
        if (cVar3 != '\0') {
          lVar4 = FUN_18017ea70();
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          if (param_1 == 0) {
            local_40 = 0;
            bVar1 = false;
          }
          else {
            local_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            cVar3 = FUN_1804514f0(&local_60,param_1,0x20);
            if (cVar3 == '\0') {
              bVar1 = false;
              local_40 = 0;
            }
            else {
              local_40 = 1;
              bVar1 = true;
            }
          }
          lVar4 = FUN_18017ea70();
          if (*(int *)(lVar4 + 4) != 0) {
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
          }
          if ((bVar1) && (iVar5 = memcmp(&local_60,&local_88,0x20), iVar5 == 0)) {
            lVar4 = FUN_18017ea70();
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
            if (param_1 + 0x103 != 0) {
              local_68 = 0;
              local_64 = 0;
              local_62 = 0;
              cVar3 = FUN_1804514f0(&local_68,param_1 + 0x103,7);
              uVar2 = local_30;
              if (cVar3 != '\0') {
                local_30._7_1_ = SUB81(uVar2,7);
                local_30._0_7_ = CONCAT16(local_62,CONCAT24(local_64,local_68));
              }
            }
            lVar4 = FUN_18017ea70();
            if (*(int *)(lVar4 + 4) != 0) {
              *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
            }
          }
        }
      }
    }
  }
}



