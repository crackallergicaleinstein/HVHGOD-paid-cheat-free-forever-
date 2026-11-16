// FUN_18017b2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b2a0 */

undefined8 * FUN_18017b2a0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong lStack_28;
  undefined8 local_20;
  
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_48 = *param_3;
  lStack_40 = param_3[1];
  local_38 = param_3[2];
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = Concurrency::details::_Task_impl_base::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 (*) [16])(param_1 + 0xb) = (undefined1  [16])0x0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  if (lStack_40 != 0) {
    LOCK();
    *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
    UNLOCK();
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 (*) [16])(param_1 + 0x17) = (undefined1  [16])0x0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 (*) [16])(param_1 + 0x21) = (undefined1  [16])0x0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (lStack_40 != 0) {
    LOCK();
    *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
    UNLOCK();
  }
  param_1[0x24] = local_48;
  param_1[0x25] = lStack_40;
  param_1[0x26] = local_38;
  *(undefined4 *)(param_1 + 0x27) = 0;
  local_30 = local_48;
  lStack_28 = lStack_40;
  local_20 = local_38;
  FUN_1800efed0(&local_30);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = param_1;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0xf] = param_2;
  if (param_2 != 2) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  FUN_1800efed0(&local_48);
  *param_1 = Concurrency::details::_Task_impl<unsigned_char>::vftable;
  param_1[0x36] = 0;
  FUN_1800efed0(param_3);
  return param_1;
}



