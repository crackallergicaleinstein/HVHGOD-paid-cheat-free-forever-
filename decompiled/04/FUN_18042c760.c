// FUN_18042c760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042c760 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042c760(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0 [16];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184 [16];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined1 local_144 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103 [235];
  ulonglong local_18;
  
  lVar3 = DAT_180bbabb8;
  plVar2 = DAT_180bbab70;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_1c0 = (undefined1  [16])0x0;
  local_1a8 = 0;
  local_1c8 = 3;
  local_1c4 = 1;
  local_1ac = 1;
  local_1b0 = 1;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0xb0);
  if (DAT_180bbabb8 != 0) {
    DAT_180bbabb8 = 0;
    (**(code **)(*(longlong *)lVar3 + 0x10))();
  }
  iVar4 = (*pcVar1)(plVar2,&local_1c8,&DAT_180bbabb8);
  if (-1 < iVar4) {
    local_128 = 0;
    FUN_18063ab10(local_103,0,0xe3);
    lVar3 = DAT_180bbabc0;
    plVar2 = DAT_180bbab70;
    local_120 = 1;
    local_11c = 5;
    local_118 = 0x100000006;
    uStack_110 = 0x600000002;
    local_108 = 1;
    local_104 = 0xf;
    pcVar1 = *(code **)(*DAT_180bbab70 + 0xa0);
    if (DAT_180bbabc0 != 0) {
      DAT_180bbabc0 = 0;
      (**(code **)(*(longlong *)lVar3 + 0x10))();
    }
    iVar4 = (*pcVar1)(plVar2,&local_128,&DAT_180bbabc0);
    lVar3 = DAT_180bbabc8;
    plVar2 = DAT_180bbab70;
    if (-1 < iVar4) {
      local_164 = 0;
      uStack_15c = 0;
      uStack_154 = 0;
      uStack_14c = 0;
      local_144 = (undefined1  [16])0x0;
      local_168 = 0;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0xa8);
      if (DAT_180bbabc8 != 0) {
        DAT_180bbabc8 = 0;
        (**(code **)(*(longlong *)lVar3 + 0x10))();
      }
      iVar4 = (*pcVar1)(plVar2,&local_168,&DAT_180bbabc8);
      lVar3 = DAT_180bbabd0;
      plVar2 = DAT_180bbab70;
      if (-1 < iVar4) {
        local_190 = 0;
        local_184 = (undefined1  [16])0x0;
        local_174 = 0;
        local_1a0 = 0x300000015;
        uStack_198 = 0x300000003;
        local_188 = 8;
        local_170 = 0x7f7fffff;
        pcVar1 = *(code **)(*DAT_180bbab70 + 0xb8);
        if (DAT_180bbabd0 != 0) {
          DAT_180bbabd0 = 0;
          (**(code **)(*(longlong *)lVar3 + 0x10))();
        }
        (*pcVar1)(plVar2,&local_1a0,&DAT_180bbabd0);
      }
    }
  }
}



