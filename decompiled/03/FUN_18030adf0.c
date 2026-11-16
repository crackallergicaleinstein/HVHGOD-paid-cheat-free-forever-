// FUN_18030adf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030adf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030adf0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [48];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined8 *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_5c = 0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined8 *)0x0;
  local_88 = *(undefined8 *)(param_2 + 0x58);
  uStack_80 = *(undefined8 *)(param_2 + 0x60);
  uStack_78 = *(undefined8 *)(param_2 + 0x68);
  uStack_70 = *(undefined8 *)(param_2 + 0x70);
  local_68 = *(undefined4 *)(param_3 + 0x48);
  local_64 = *(undefined4 *)(param_3 + 0x4c);
  lVar6 = *(longlong *)(param_3 + 0x30);
  if ((lVar6 == 0) || (lVar6 == -0x10)) {
    local_60 = DAT_180b0dfc8._4_4_;
  }
  else {
    local_60 = *(undefined4 *)(lVar6 + 0x1c);
  }
  if (param_3 != -8) {
    local_5c = *(undefined4 *)(param_3 + 0x10);
  }
  local_98 = param_1;
  FUN_180334790(local_58,(longlong)*(int *)(param_3 + 0x10));
  iVar5 = 0;
  puVar8 = (undefined8 *)local_58._8_8_;
  if (0 < *(int *)(param_3 + 0x10)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 8 + lVar6);
      puVar7 = (undefined8 *)0x0;
      if (lVar1 != 0) {
        puVar7 = (undefined8 *)(lVar1 + 0x10);
      }
      if (puVar7 != (undefined8 *)0x0) {
        if (puVar8 == local_48) {
          FUN_180338630(local_58,puVar8);
          puVar8 = (undefined8 *)local_58._8_8_;
        }
        else {
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          *puVar8 = *puVar7;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          puVar8[4] = puVar7[4];
          puVar8 = (undefined8 *)(local_58._8_8_ + 0x28);
          local_58._8_8_ = puVar8;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_3 + 0x10));
  }
  puVar7 = local_48;
  uVar2 = local_58._0_8_;
  *param_1 = local_88;
  param_1[1] = uStack_80;
  param_1[2] = uStack_78;
  param_1[3] = uStack_70;
  *(undefined4 *)(param_1 + 4) = local_68;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_64;
  *(undefined4 *)(param_1 + 5) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_5c;
  local_48 = (undefined8 *)0x0;
  local_58 = ZEXT816(0);
  param_1[6] = uVar2;
  param_1[7] = puVar8;
  param_1[8] = puVar7;
  FUN_1801b3590(local_58);
}



