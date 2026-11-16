// FUN_180154190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154190 */

undefined1 * FUN_180154190(undefined2 *param_1,undefined8 param_2,double param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 local_88;
  undefined4 local_84 [3];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  int iStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  iVar1 = FUN_1806117a0(param_3);
  if (iVar1 != 0) {
    param_3 = -param_3;
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined2 *)((longlong)param_1 + 1);
  }
  if (param_3 == 0.0) {
    *param_1 = 0x2e30;
    puVar3 = (undefined1 *)((longlong)param_1 + 3);
    *(undefined1 *)(param_1 + 1) = 0x30;
  }
  else {
    local_84[0] = 0;
    local_88 = 0;
    uVar2 = (ulonglong)param_3 & 0xfffffffffffff;
    if ((ulonglong)param_3 >> 0x34 == 0) {
      iStack_60 = -0x432;
      local_68 = uVar2;
    }
    else {
      iStack_60 = (uint)((ulonglong)param_3 >> 0x34) - 0x433;
      local_68 = uVar2 + 0x10000000000000;
    }
    if ((uVar2 == 0) && (1 < (ulonglong)param_3 >> 0x34)) {
      iVar1 = iStack_60 + -2;
      lVar4 = local_68 * 4;
    }
    else {
      lVar4 = local_68 * 2;
      iVar1 = iStack_60 + -1;
    }
    iStack_50 = iStack_60 + -1;
    local_48 = local_68 * 2 + 1;
    do {
      iStack_50 = iStack_50 + -1;
      local_48 = local_48 * 2;
    } while (-1 < local_48);
    local_78 = lVar4 + -1 << ((ulonglong)(uint)(iVar1 - iStack_50) & 0x3f);
    do {
      iStack_60 = iStack_60 + -1;
      local_68 = local_68 * 2;
    } while (-1 < (longlong)local_68);
    uStack_5c = uStack_70._4_4_;
    uStack_4c = uStack_70._4_4_;
    uStack_3c = uStack_70._4_4_;
    uStack_30 = CONCAT44(uStack_70._4_4_,iStack_50);
    uStack_20 = CONCAT44(uStack_70._4_4_,iStack_60);
    uStack_70 = CONCAT44(uStack_70._4_4_,iStack_50);
    local_58 = local_78;
    iStack_40 = iStack_50;
    local_38 = local_48;
    local_28 = local_68;
    FUN_1800a8760(param_1,local_84,&local_88,&local_78,&local_28,&local_38);
    puVar3 = (undefined1 *)FUN_1800a89a0(param_1,local_84[0],local_88);
  }
  return puVar3;
}



