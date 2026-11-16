// FUN_1801cbb70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cbb70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801cbb70(undefined8 *param_1)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_18 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  pcVar3 = (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  local_38 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0xc] = '\0';
    pcVar3[0xd] = '\0';
    pcVar3[0xe] = '\0';
    pcVar3[0xf] = '\0';
    pcVar3[0x10] = '\0';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    pcVar3[0x18] = '\0';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
    pcVar3[0x28] = '\0';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\0';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = '\0';
    pcVar3[0x30] = '\0';
    pcVar3[0x31] = '\0';
    pcVar3[0x32] = '\0';
    pcVar3[0x33] = '\0';
    pcVar3[0x34] = '\0';
    pcVar3[0x35] = '\0';
    pcVar3[0x36] = '\0';
    pcVar3[0x37] = '\0';
    pcVar3[0x38] = '\0';
    pcVar3[0x39] = '\0';
    pcVar3[0x3a] = '\0';
    pcVar3[0x3b] = '\0';
    pcVar3[0x3c] = '\0';
    pcVar3[0x3d] = '\0';
    pcVar3[0x3e] = '\0';
    pcVar3[0x3f] = '\0';
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0xc] = '\0';
    pcVar3[0xd] = '\0';
    pcVar3[0xe] = '\0';
    pcVar3[0xf] = '\0';
    pcVar3[0x10] = '\0';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_28 = "tier0.dll:g_pMemAlloc";
      local_20 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
    }
    lVar2 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xa0);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(pcVar3 + 8) = lVar2;
    pcVar1 = pcVar3 + 0x18;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
    pcVar3[0x28] = '\0';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\0';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = '\0';
    pcVar3[0x30] = '\a';
    pcVar3[0x31] = '\0';
    pcVar3[0x32] = '\0';
    pcVar3[0x33] = '\0';
    pcVar3[0x34] = '\0';
    pcVar3[0x35] = '\0';
    pcVar3[0x36] = '\0';
    pcVar3[0x37] = '\0';
    pcVar3[0x38] = '\b';
    pcVar3[0x39] = '\0';
    pcVar3[0x3a] = '\0';
    pcVar3[0x3b] = '\0';
    pcVar3[0x3c] = '\0';
    pcVar3[0x3d] = '\0';
    pcVar3[0x3e] = '\0';
    pcVar3[0x3f] = '\0';
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = -0x80;
    pcVar3[3] = '?';
    FUN_1801406e0(pcVar1,0x10,*(undefined8 *)(pcVar3 + 8));
  }
  *param_1 = pcVar3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_38 = (char *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_180111790(param_1 + 4,&local_38);
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  return param_1;
}



