// FUN_1803db750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803db750 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803db750(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  uVar7 = FUN_18015b360(local_48);
  local_28 = param_3;
  uVar7 = FUN_1803dce20(uVar7,local_48);
  lVar1 = FUN_1803dcec0(extraout_XMM0_Qa,&local_98,local_48,uVar7);
  lVar4 = DAT_180cc9278;
  if (*(longlong *)(lVar1 + 8) != 0) {
    lVar4 = *(longlong *)(lVar1 + 8);
  }
  if (lVar4 == DAT_180cc9278) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    uVar6 = 0xcbf29ce484222325;
    uVar3 = 0;
    if (param_2[2] != 0) {
      do {
        uVar6 = (uVar6 ^ *(byte *)((longlong)puVar2 + uVar3)) * 0x100000001b3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulonglong)param_2[2]);
    }
    lVar1 = FUN_180177b00(&DAT_180cc92f0,local_88,param_2,uVar6);
    lVar4 = DAT_180cc92f8;
    if (*(longlong *)(lVar1 + 8) != 0) {
      lVar4 = *(longlong *)(lVar1 + 8);
    }
    if (lVar4 != DAT_180cc92f8) {
      local_70 = (longlong *)0x0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_98 = *(longlong *)(lVar4 + 0x30);
      local_90 = *(longlong *)(lVar4 + 0x38) - local_98;
      local_a0 = &uStack_68;
      local_a8 = (longlong)&local_50 + 4;
      puVar2 = (undefined8 *)FUN_180437bd0(local_88,&local_98);
      plVar5 = (longlong *)0x0;
      if (&local_78 != puVar2) {
        plVar5 = (longlong *)*puVar2;
        *puVar2 = 0;
      }
      uVar7 = extraout_XMM0_Qa_00;
      if (local_70 != (longlong *)0x0) {
        lVar4 = *local_70;
        local_70 = plVar5;
        uVar7 = (**(code **)(lVar4 + 0x10))();
        plVar5 = local_70;
      }
      local_70 = plVar5;
      plVar5 = local_88[0];
      if (local_88[0] != (longlong *)0x0) {
        local_88[0] = (longlong *)0x0;
        uVar7 = (**(code **)(*plVar5 + 0x10))();
      }
      if (local_70 != (longlong *)0x0) {
        FUN_1803dc9a0(uVar7,&local_98,local_48,&local_70);
      }
      FUN_180113710(&uStack_68);
      plVar5 = local_70;
      if (local_70 != (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  FUN_18015c010(local_48);
}



