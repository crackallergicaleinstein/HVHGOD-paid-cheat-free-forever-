// FUN_1802c3730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c3730 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c3730(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  ulonglong local_30;
  
  if (param_1 == param_2) {
    return;
  }
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  auVar7 = ZEXT1664(_DAT_18086d450);
  do {
    puVar5 = param_2 + -5;
    if (param_1 == puVar5) {
    }
    local_78 = *param_1;
    uStack_70 = param_1[1];
    uStack_68 = *(ulonglong *)*(undefined1 (*) [16])(param_1 + 2);
    uStack_60 = param_1[3];
    auStack_48 = *(undefined1 (*) [16])(param_1 + 2);
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    uVar4 = param_1[4];
    auVar7 = ZEXT1664(auVar7._0_16_);
    local_58 = local_78;
    uStack_50 = uStack_70;
    local_38 = (int)uVar4;
    FUN_18015c010(param_1);
    auVar6 = auVar7._0_16_;
    uVar1 = param_2[-4];
    uVar2 = param_2[-3];
    uVar3 = param_2[-2];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_2[-3] = 0;
    param_2[-2] = 0xf;
    *(undefined1 *)puVar5 = 0;
    *(int *)(param_1 + 4) = (int)param_2[-1];
    if (puVar5 != &local_58) {
      auVar7 = ZEXT1664(auVar6);
      FUN_18015c010(puVar5);
      *puVar5 = local_78;
      param_2[-4] = uStack_70;
      param_2[-3] = uStack_68;
      param_2[-2] = uStack_60;
      auVar6 = auVar7._0_16_;
      local_58 = local_58 & 0xffffffffffffff00;
      auStack_48 = auVar6;
    }
    *(int *)(param_2 + -1) = (int)uVar4;
    auVar7 = ZEXT1664(auVar6);
    FUN_18015c010(&local_58);
    param_1 = param_1 + 5;
    param_2 = puVar5;
  } while (param_1 != puVar5);
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



