// FUN_1801864b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801864b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801864b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  undefined8 *****pppppuVar5;
  undefined8 *puVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 *****local_88 [2];
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_d8[0] = param_4;
  cVar3 = FUN_1801856e0(&local_c8);
  if (cVar3 != '\0') {
    if (param_3 != param_1) {
      puVar6 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar6 = (undefined8 *)*param_1;
      }
      FUN_1800f5190(param_3,puVar6,param_1[2]);
    }
    uVar4 = FUN_180186680(local_d8,param_1);
    if ((uVar4 != 0xffffffff) && ((uVar4 >> 10 & 1) == 0)) {
      local_c8 = *param_2;
      uStack_c0 = param_2[1];
      FUN_1801b44a0(local_88,&local_c8);
      local_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_48 = (undefined1  [16])0x0;
      FUN_18017d720(local_88,&local_68);
      pppppuVar5 = local_88;
      if (7 < local_70) {
        pppppuVar5 = local_88[0];
      }
      lVar1 = (longlong)pppppuVar5 + local_78 * 2;
      uStack_a0 = 0;
      auStack_b0._2_14_ = SUB1614((undefined1  [16])0x0,2);
      auVar2._14_2_ = 0;
      auVar2._0_14_ = auStack_b0._2_14_;
      auStack_b0 = auVar2 << 0x10;
      auStack_98._8_8_ = local_88;
      auStack_98._0_8_ = 7;
      local_b8 = lVar1;
      while (local_68 != lVar1) {
        FUN_1800a7c10(param_3,&uStack_60);
        uVar4 = FUN_180186680(local_d8,param_3);
        if ((uVar4 == 0xffffffff) || ((uVar4 >> 10 & 1) != 0)) {
          FUN_18015b930(auStack_b0);
          FUN_18015b930(&uStack_60);
          FUN_18015b930(local_88);
        }
        FUN_1801ad0b0(&local_68);
      }
      FUN_18015b930(auStack_b0);
      FUN_18015b930(&uStack_60);
      FUN_18015b930(local_88);
    }
  }
}



