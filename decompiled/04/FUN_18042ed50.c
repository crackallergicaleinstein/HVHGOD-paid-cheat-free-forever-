// FUN_18042ed50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042ed50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042ed50(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_a8 [48];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [12];
  float fStack_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_40 [2];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  plVar1 = DAT_180bbab78;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  (**(code **)(*DAT_180bbab78 + 0x2c8))(DAT_180bbab78,1,&local_48,&local_50);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_40[0] = 1;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,local_40,local_38);
  (**(code **)(*plVar1 + 0x88))(plVar1,0);
  (**(code **)(*plVar1 + 0xc0))(plVar1,4);
  (**(code **)(*plVar1 + 0x58))(plVar1,DAT_180bbaf40,0,0);
  (**(code **)(*plVar1 + 0x50))(plVar1,0,1,&DAT_180bbabd0);
  local_20 = 0;
  uStack_18 = 0;
  (**(code **)(*plVar1 + 0x118))(plVar1,DAT_180bbaf60,&local_20,0xffffffff);
  (**(code **)(*plVar1 + 0x158))(plVar1,DAT_180bbaf68);
  local_78 = 0;
  _local_68 = (undefined1  [16])0x0;
  local_58 = 0x3f80000000000000;
  (**(code **)(*plVar1 + 0x48))(plVar1,DAT_180bbaf48,0,0);
  iVar3 = DAT_180bbaf74;
  iVar2 = DAT_180bbaf70;
  local_70 = DAT_180bbaf90;
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_78);
  (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae10,0);
  local_68._8_4_ = (float)DAT_180bbae20;
  fStack_5c = (float)DAT_180bbae24;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,local_68);
  auVar9._0_4_ = (float)iVar3;
  auVar9._4_12_ = SUB1612(ZEXT816(0),4);
  auVar4._0_4_ = (float)iVar2;
  auVar4._4_12_ = SUB1612(ZEXT816(0),4);
  FUN_18042e220(auVar4._0_8_,auVar9._0_8_);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_70);
  (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
  iVar3 = DAT_180bbae24;
  iVar2 = DAT_180bbae20;
  local_70 = DAT_180bbae18;
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_78);
  (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae30,0);
  local_68._8_4_ = (float)DAT_180bbae40;
  fStack_5c = (float)DAT_180bbae44;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,local_68);
  auVar10._0_4_ = (float)iVar3;
  auVar10._4_12_ = SUB1612(ZEXT816(0),4);
  auVar5._0_4_ = (float)iVar2;
  auVar5._4_12_ = SUB1612(ZEXT816(0),4);
  FUN_18042e220(auVar5._0_8_,auVar10._0_8_);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_70);
  (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
  iVar3 = DAT_180bbae44;
  iVar2 = DAT_180bbae40;
  local_70 = DAT_180bbae38;
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_78);
  (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae50,0);
  local_68._8_4_ = (float)DAT_180bbae60;
  fStack_5c = (float)DAT_180bbae64;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,local_68);
  auVar11._0_4_ = (float)iVar3;
  auVar11._4_12_ = SUB1612(ZEXT816(0),4);
  auVar6._0_4_ = (float)iVar2;
  auVar6._4_12_ = SUB1612(ZEXT816(0),4);
  FUN_18042e220(auVar6._0_8_,auVar11._0_8_);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_70);
  (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
  (**(code **)(*plVar1 + 0x48))(plVar1,DAT_180bbaf50,0,0);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_78);
  (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae30,0);
  local_68._8_4_ = (float)DAT_180bbae40;
  fStack_5c = (float)DAT_180bbae44;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,local_68);
  auVar12._0_4_ = (float)DAT_180bbae64;
  auVar12._4_12_ = SUB1612(ZEXT816(0),4);
  auVar7._0_4_ = (float)DAT_180bbae60;
  auVar7._4_12_ = SUB1612(ZEXT816(0),4);
  FUN_18042e220(auVar7._0_8_,auVar12._0_8_);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&DAT_180bbae58);
  (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_78);
  (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae10,0);
  local_68._8_4_ = (float)DAT_180bbae20;
  fStack_5c = (float)DAT_180bbae24;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,local_68);
  auVar13._0_4_ = (float)DAT_180bbae44;
  auVar13._4_12_ = SUB1612(ZEXT816(0),4);
  auVar8._0_4_ = (float)DAT_180bbae40;
  auVar8._4_12_ = SUB1612(ZEXT816(0),4);
  FUN_18042e220(auVar8._0_8_,auVar13._0_8_);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&DAT_180bbae38);
  (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_78);
  (**(code **)(*plVar1 + 0x108))(plVar1,1,&local_48,local_50);
  (**(code **)(*plVar1 + 0x160))(plVar1,1,local_38);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
}



