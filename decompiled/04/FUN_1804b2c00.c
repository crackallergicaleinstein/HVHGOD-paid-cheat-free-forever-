// FUN_1804b2c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2c00 */

void FUN_1804b2c00(int param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  int local_28;
  undefined4 local_24;
  
  lVar1 = DAT_180bb8ae8;
  if ((&DAT_1807b8501)[(longlong)param_1 * 4] == '\b') {
    uVar2 = *(uint *)(&DAT_1807b8500 + (longlong)param_1 * 4) >> 0x10;
    if ((char)*(uint *)(&DAT_1807b8500 + (longlong)param_1 * 4) == '\x01') {
      local_24 = *(undefined4 *)((ulonglong)uVar2 + 0xc78 + DAT_180bb8ae8);
      local_28 = param_1;
      FUN_1804d06d0(DAT_180bb8ae8 + 0x1fa8,&local_28);
      *(undefined4 *)((ulonglong)uVar2 + 0xc78 + lVar1) = param_2;
      return;
    }
  }
  FUN_1804c5a40("Calling PushStyleVar() variant with wrong type!");
  return;
}



