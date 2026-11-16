// FUN_180508e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180508e00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180508e00(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_154 [16];
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [36];
  undefined1 local_114;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_218;
  local_1f8 = &DAT_180c62db0;
  DAT_180c62da0 = param_1;
  DAT_180c62da8 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x60))(param_1,&DAT_18085d230,0x2cc,0);
  if (iVar2 < 0) {
LAB_180508ecd:
    bVar1 = false;
  }
  else {
    local_1f8 = &DAT_180c62db8;
    iVar2 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18085cd10,0x518,0);
    if (iVar2 < 0) goto LAB_180508ecd;
    local_1f8 = &DAT_180c62dc0;
    iVar2 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18085c660,0x6a8,0);
    if (iVar2 < 0) goto LAB_180508ecd;
    bVar1 = true;
  }
  local_170 = 0x15;
  local_160 = 0;
  local_144 = 0;
  local_164 = 3;
  local_168 = 3;
  local_16c = 3;
  local_158 = 8;
  local_154 = (undefined1  [16])0x0;
  local_140 = 0x7f7fffff;
  if ((bVar1) &&
     (iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_170,&DAT_180c62dc8), -1 < iVar2)) {
    local_1d8 = 0;
    local_1e8 = 0x10;
    local_1e4 = 2;
    local_1e0 = 4;
    local_1dc = 0x10000;
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_1e8,0,&DAT_180c62dd0);
    if (iVar2 < 0) goto LAB_180508fa9;
    bVar1 = true;
  }
  else {
    local_1d8 = 0;
    local_1e8 = 0x10;
    local_1e4 = 2;
    local_1e0 = 4;
    local_1dc = 0x10000;
LAB_180508fa9:
    bVar1 = false;
  }
  FUN_18063ab10(local_138,0,0x108);
  local_114 = 0xf;
  if ((bVar1) &&
     (iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,local_138,&DAT_180c62dd8), -1 < iVar2)) {
    local_1b4 = 0;
    local_1ac = 0;
    local_1c8 = (undefined1  [16])0x0;
    local_1d0 = 3;
    local_1cc = 1;
    local_1b8 = 1;
    iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,&local_1d0,&DAT_180c62de0);
    if (-1 < iVar2) {
      local_1a4 = 0;
      local_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      local_1a8 = 0;
      local_19c = 0;
      iVar2 = (**(code **)(*param_1 + 0xa8))(param_1,&local_1a8,&DAT_180c62de8);
      if (-1 < iVar2) {
      }
      goto LAB_1805090c5;
    }
  }
  else {
    local_1c8 = (undefined1  [16])0x0;
    local_1b4 = 0;
    local_1ac = 0;
    local_1d0 = 3;
    local_1cc = 1;
    local_1b8 = 1;
  }
  local_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_1a4 = 0;
  local_178 = 0;
  local_1a8 = 0;
  local_19c = 0;
LAB_1805090c5:
  FUN_180509100();
}



