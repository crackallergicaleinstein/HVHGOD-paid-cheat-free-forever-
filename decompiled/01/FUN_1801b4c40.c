// FUN_1801b4c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b4c40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b4c40(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar5 & 0xffffffffffffffe0) < 0x401) {
      FUN_1801b9680(param_1,param_2);
    }
    if (param_3 < 1) break;
    FUN_1801b98e0(&local_68,param_1,param_2);
    puVar1 = puStack_60;
    puVar6 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_68 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_60 & 0xffffffffffffffe0U)) {
      FUN_1801b4c40(param_1,local_68,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar1;
    }
    else {
      FUN_1801b4c40(puStack_60,param_2,param_3,param_4);
    }
    uVar5 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  }
  lVar8 = (longlong)param_2 - (longlong)param_1 >> 5;
  lVar7 = (longlong)param_2 - (longlong)param_1 >> 6;
  if (0 < lVar7) {
    puVar6 = param_1 + lVar7 * 4;
    do {
      puVar1 = puVar6 + -4;
      local_68 = (undefined8 *)*puVar1;
      puStack_60 = (undefined8 *)puVar6[-3];
      uStack_58 = puVar6[-2];
      uStack_50 = puVar6[-1];
      *(undefined1 *)puVar1 = 0;
      lVar7 = lVar7 + -1;
      puVar6[-2] = 0;
      puVar6[-1] = 0xf;
      local_78 = param_4;
      FUN_1801bbdf0(param_1,lVar7,lVar8,&local_68);
      FUN_18015c010(&local_68);
      puVar6 = puVar1;
    } while (0 < lVar7);
  }
  if (lVar8 < 2) {
  }
  do {
    puVar6 = param_2 + -4;
    local_68 = (undefined8 *)*puVar6;
    puStack_60 = (undefined8 *)param_2[-3];
    uStack_58 = param_2[-2];
    uStack_50 = param_2[-1];
    *(undefined1 *)puVar6 = 0;
    param_2[-2] = 0;
    param_2[-1] = 0xf;
    if (puVar6 != param_1) {
      FUN_18015c010(puVar6);
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *puVar6 = *param_1;
      param_2[-3] = uVar2;
      param_2[-2] = uVar3;
      param_2[-1] = uVar4;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    local_78 = param_4;
    FUN_1801bbdf0(param_1,0,(longlong)puVar6 - (longlong)param_1 >> 5,&local_68);
    FUN_18015c010(&local_68);
    param_2 = puVar6;
  } while (0x3f < (longlong)((longlong)puVar6 - (longlong)param_1 & 0xffffffffffffffe0U));
}



