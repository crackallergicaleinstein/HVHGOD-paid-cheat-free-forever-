// FUN_1801cd9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cd9d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_1801cd9d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined4 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar5 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar5 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar5 == 0) {
    auVar7 = ZEXT464(0x41700000);
  }
  else {
    lVar5 = DAT_180bbade0;
    if (DAT_180bbadc8 != DAT_180bbadd0) {
      lVar5 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    auVar7 = ZEXT464(*(uint *)(lVar5 + 0x18));
  }
  local_58 = *param_5;
  uStack_50 = param_5[1];
  plVar3 = (longlong *)FUN_1801ccd40(&DAT_180b90960,&local_58,param_4,auVar7._0_8_,param_6,param_7);
  if (plVar3 == (longlong *)0x0) {
    FUN_180430680(param_1,param_2,param_3,param_4,auVar7._0_4_ + auVar7._0_4_);
    local_58 = *param_5;
    uStack_50 = param_5[1];
    FUN_1804340b0(param_1,param_2,param_3,&local_58,param_6,0);
    uVar4 = *(ulonglong *)(param_1 + 0x68);
    if (*(ulonglong *)(param_1 + 0x60) != uVar4) {
      uVar4 = uVar4 - 0x10;
      *(ulonglong *)(param_1 + 0x68) = uVar4;
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 == *(longlong **)(param_1 + 0x58)) {
      FUN_1801d4e30(param_1 + 0x48,plVar1,plVar3);
    }
    else {
      plVar2 = (longlong *)*plVar3;
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 8;
    }
    auVar6._0_4_ = (float)(int)plVar3[1];
    auVar6._4_12_ = SUB1612(ZEXT816(0),4);
    FUN_180435220(param_1,param_2,param_3,auVar6._0_8_,(float)*(int *)((longlong)plVar3 + 0xc),
                  *plVar3,0,0,0x3f800000,0x3f800000,0xffffffff);
    uVar4 = (ulonglong)*(byte *)(plVar3 + 2);
  }
  return uVar4;
}



