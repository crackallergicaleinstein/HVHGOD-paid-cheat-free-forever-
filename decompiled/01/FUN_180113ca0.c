// FUN_180113ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113ca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180113ca0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    _get_stream_buffer_pointers(param_2,&local_28,&local_20,&local_18);
    *(undefined8 *)(param_1 + 0x18) = local_28;
    *(undefined8 *)(param_1 + 0x20) = local_28;
    *(undefined8 *)(param_1 + 0x38) = local_20;
    *(undefined8 *)(param_1 + 0x40) = local_20;
    *(undefined8 *)(param_1 + 0x50) = local_18;
    *(undefined8 *)(param_1 + 0x58) = local_18;
  }
  *(undefined8 *)(param_1 + 0x74) = DAT_180bb26d8;
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
}



