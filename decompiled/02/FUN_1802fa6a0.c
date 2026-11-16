// FUN_1802fa6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fa6a0 */

undefined8 FUN_1802fa6a0(undefined8 *param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)*param_1 == '\0') {
    *(char *)*param_1 = '\x01';
    *(undefined4 *)param_1[2] = *(undefined4 *)param_1[1];
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(param_1[1] + 4);
    *(undefined4 *)(param_1[2] + 0x20) = *(undefined4 *)(param_1[1] + 8);
    *(undefined4 *)(param_1[2] + 0x30) = *(undefined4 *)(param_1[1] + 0xc);
    if (DAT_180c64058 != 0) {
      local_18 = param_1[2];
      local_10 = 4;
      FUN_18044c9c0(DAT_180c64058,&local_18);
    }
  }
  return *(undefined8 *)(param_1[2] + 8 + param_2 * 0x10);
}



