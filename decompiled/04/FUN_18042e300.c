// FUN_18042e300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042e300 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18042e300(void)

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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [12];
  float fStack_9c;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  plVar1 = DAT_180bbab78;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if ((DAT_180bbaf30 != 0) && (DAT_180bbaf38 != 0)) {
    local_80 = (longlong *)0x0;
    local_78 = (longlong *)0x0;
    (**(code **)(*DAT_180bbab78 + 0x2c8))(DAT_180bbab78,1,&local_80,&local_78);
    local_68 = (undefined1  [16])0x0;
    local_58 = 0;
    local_70[0] = 1;
    (**(code **)(*plVar1 + 0x2f8))(plVar1,local_70,local_68);
    local_88 = (longlong *)0x0;
    if ((local_80 != (longlong *)0x0) &&
       ((**(code **)(*local_80 + 0x38))(local_80,&local_88), local_88 != (longlong *)0x0)) {
      local_90 = (longlong *)0x0;
      iVar3 = (**(code **)*local_88)(local_88,&DAT_180806ff8,&local_90);
      if (-1 < iVar3) {
        local_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_28 = 0;
        (**(code **)(*local_90 + 0x50))(local_90,&local_50);
        if (uStack_40._4_4_ < 2) {
          (**(code **)(*plVar1 + 0x178))(plVar1,DAT_180bbaf30,local_88);
        }
        else {
          local_d0 = DAT_180bbaf78;
          local_d8 = 0;
          (**(code **)(*plVar1 + 0x1c8))(plVar1,DAT_180bbaf30,0,local_90);
        }
        (**(code **)(*plVar1 + 0x88))(plVar1,0);
        (**(code **)(*plVar1 + 0xc0))(plVar1,4);
        (**(code **)(*plVar1 + 0x58))(plVar1,DAT_180bbaf40,0,0);
        (**(code **)(*plVar1 + 0x50))(plVar1,0,1,&DAT_180bbabd0);
        local_20 = 0;
        uStack_18 = 0;
        (**(code **)(*plVar1 + 0x118))(plVar1,DAT_180bbaf60,&local_20,0xffffffff);
        (**(code **)(*plVar1 + 0x158))(plVar1,DAT_180bbaf68);
        local_b8 = 0;
        _local_a8 = (undefined1  [16])0x0;
        local_98 = 0x3f80000000000000;
        (**(code **)(*plVar1 + 0x48))(plVar1,DAT_180bbaf48,0,0);
        iVar2 = DAT_180bbaf74;
        iVar3 = DAT_180bbaf70;
        local_b0 = DAT_180bbaf38;
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae10,0);
        local_a8._8_4_ = (float)DAT_180bbae20;
        fStack_9c = (float)DAT_180bbae24;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar11._0_4_ = (float)iVar2;
        auVar11._4_12_ = SUB1612(ZEXT816(0),4);
        auVar4._0_4_ = (float)iVar3;
        auVar4._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar4._0_8_,auVar11._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b0);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        iVar2 = DAT_180bbae24;
        iVar3 = DAT_180bbae20;
        local_b0 = DAT_180bbae18;
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae30,0);
        local_a8._8_4_ = (float)DAT_180bbae40;
        fStack_9c = (float)DAT_180bbae44;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar12._0_4_ = (float)iVar2;
        auVar12._4_12_ = SUB1612(ZEXT816(0),4);
        auVar5._0_4_ = (float)iVar3;
        auVar5._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar5._0_8_,auVar12._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b0);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        iVar2 = DAT_180bbae44;
        iVar3 = DAT_180bbae40;
        local_b0 = DAT_180bbae38;
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae50,0);
        local_a8._8_4_ = (float)DAT_180bbae60;
        fStack_9c = (float)DAT_180bbae64;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar13._0_4_ = (float)iVar2;
        auVar13._4_12_ = SUB1612(ZEXT816(0),4);
        auVar6._0_4_ = (float)iVar3;
        auVar6._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar6._0_8_,auVar13._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b0);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        iVar2 = DAT_180bbae64;
        iVar3 = DAT_180bbae60;
        local_b0 = DAT_180bbae58;
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae70,0);
        local_a8._8_4_ = (float)_DAT_180bbae80;
        fStack_9c = (float)_DAT_180bbae84;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar14._0_4_ = (float)iVar2;
        auVar14._4_12_ = SUB1612(ZEXT816(0),4);
        auVar7._0_4_ = (float)iVar3;
        auVar7._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar7._0_8_,auVar14._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b0);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        (**(code **)(*plVar1 + 0x48))(plVar1,DAT_180bbaf50,0,0);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae50,0);
        local_a8._8_4_ = (float)DAT_180bbae60;
        fStack_9c = (float)DAT_180bbae64;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar15._0_4_ = (float)_DAT_180bbae84;
        auVar15._4_12_ = SUB1612(ZEXT816(0),4);
        auVar8._0_4_ = (float)_DAT_180bbae80;
        auVar8._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar8._0_8_,auVar15._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&DAT_180bbae78);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae30,0);
        local_a8._8_4_ = (float)DAT_180bbae40;
        fStack_9c = (float)DAT_180bbae44;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar16._0_4_ = (float)DAT_180bbae64;
        auVar16._4_12_ = SUB1612(ZEXT816(0),4);
        auVar9._0_4_ = (float)DAT_180bbae60;
        auVar9._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar9._0_8_,auVar16._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&DAT_180bbae58);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&DAT_180bbae10,0);
        local_a8._8_4_ = (float)DAT_180bbae20;
        fStack_9c = (float)DAT_180bbae24;
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_a8);
        auVar17._0_4_ = (float)DAT_180bbae44;
        auVar17._4_12_ = SUB1612(ZEXT816(0),4);
        auVar10._0_4_ = (float)DAT_180bbae40;
        auVar10._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_18042e220(auVar10._0_8_,auVar17._0_8_);
        (**(code **)(*plVar1 + 0x80))(plVar1,0,1,&DAT_180bbaf58);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&DAT_180bbae38);
        (**(code **)(*plVar1 + 0x68))(plVar1,3,0);
        (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_b8);
        (**(code **)(*plVar1 + 0x108))(plVar1,1,&local_80,local_78);
        (**(code **)(*plVar1 + 0x160))(plVar1,1,local_68);
      }
      plVar1 = local_90;
      if (local_90 != (longlong *)0x0) {
        local_90 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    plVar1 = local_88;
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    plVar1 = local_78;
    if (local_78 != (longlong *)0x0) {
      local_78 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = local_80;
    if (local_80 != (longlong *)0x0) {
      local_80 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
}



