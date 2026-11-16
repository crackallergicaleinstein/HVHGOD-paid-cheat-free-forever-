// FUN_1800e3c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e3c90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 * FUN_1800e3c90(undefined4 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*local_28) [16];
  undefined8 local_20;
  undefined4 *local_18;
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0x12] = 0xffffffff;
  *param_1 = 2;
  param_1[0x13] = 0;
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x14);
  local_28 = pauVar1;
  local_18 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = (undefined1 (*) [16])0x180827288;
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  local_28 = (undefined1 (*) [16])
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x60);
  if (local_28 == (undefined1 (*) [16])0x0) {
    pauVar2 = (undefined1 (*) [16])0x0;
  }
  else {
    *local_28 = (undefined1  [16])0x0;
    *(undefined4 *)(*local_28 + 8) = 1;
    *(undefined4 *)(*local_28 + 0xc) = 1;
    *(undefined ***)*local_28 = std::_Ref_count_obj2<std::mutex>::vftable;
    *(undefined8 *)local_28[1] = 2;
    *(undefined8 *)(local_28[2] + 8) = 0;
    *(undefined8 *)local_28[3] = 0;
    *(undefined8 *)(local_28[3] + 8) = 0;
    *(undefined8 *)local_28[4] = 0;
    *(undefined1 (*) [16])(local_28[4] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(local_28[1] + 8) = 0;
    *(undefined8 *)local_28[2] = 0;
    *(undefined4 *)(local_28[5] + 8) = 0xffffffff;
    *(undefined4 *)(local_28[5] + 0xc) = 0;
    pauVar2 = local_28;
  }
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined1 (**) [16])*pauVar1 = pauVar2 + 1;
  *(undefined1 (**) [16])(param_1 + 0x16) = pauVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_18010f0f0();
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  FUN_18010f0f0();
  *(undefined1 (*) [16])(param_1 + 0x3e) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  return param_1;
}



