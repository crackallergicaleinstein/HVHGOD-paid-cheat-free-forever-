// FUN_1802f4a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f4a90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f4a90(undefined1 (*param_1) [16],int param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  undefined1 (*local_50) [16];
  undefined1 local_48 [16];
  undefined1 auStack_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  if (param_2 == 1) {
    uVar6 = (ulonglong)((uint)param_3 & 0xf);
    if (8 < uVar6) {
      uVar6 = 0x10 - uVar6;
    }
    *param_1 = (undefined1  [16])0x0;
    if (8 < uVar6) {
      uVar6 = 8;
    }
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(0,"HvH Gods",uVar6);
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    lVar5 = SUB168(ZEXT816(0x5c9882b931057263) * auVar1,8);
    uVar6 = param_3 + ((param_3 - lVar5 >> 1) + lVar5 >> 5) * -0x2f;
    if (uVar6 < 0x1e) {
      if (uVar6 < 0x18) {
        uVar6 = (uVar6 * 8) / 0x18;
        local_48 = (undefined1  [16])0x0;
        auStack_38 = (undefined1  [16])0x0;
        FUN_18015ba30(local_48,"HvH Gods",8);
        while( true ) {
          if (7 < uVar6) break;
          uVar4 = (int)uVar6 * -0x61c88647 ^ (uint)(param_3 >> 0x20) ^ (uint)param_3;
          uVar4 = (uVar4 >> 0x10 ^ uVar4) * 0x7feb352d;
          uVar4 = (uVar4 >> 0xf ^ uVar4) * -0x7b935975;
          puVar3 = local_48;
          if (0xf < (ulonglong)auStack_38._8_8_) {
            puVar3 = (undefined1 *)local_48._0_8_;
          }
          puVar3[uVar6] =
               "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789*!#@%&?+=_-"
               [(ulonglong)(uVar4 >> 0x10 ^ uVar4) % 0x49];
          uVar6 = uVar6 + 1;
        }
        *(undefined8 *)*param_1 = local_48._0_8_;
        *(undefined8 *)(*param_1 + 8) = local_48._8_8_;
        *(undefined8 *)param_1[1] = auStack_38._0_8_;
        *(undefined8 *)(param_1[1] + 8) = auStack_38._8_8_;
        auStack_38 = ZEXT816(0xf) << 0x40;
        auVar2[0xf] = 0;
        auVar2._0_15_ = local_48._1_15_;
        local_48 = auVar2 << 8;
        FUN_18015c010(local_48);
      }
      else {
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0;
        FUN_18015ba30(param_1,"HvH Gods",8);
      }
    }
    else {
      FUN_1802f4a90(param_1,1,uVar6 - 0x16);
    }
  }
}



