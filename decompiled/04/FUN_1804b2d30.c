// FUN_1804b2d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2d30 */

void FUN_1804b2d30(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = DAT_180bb8ae8;
  if (((&DAT_1807b8501)[(longlong)param_1 * 4] == '\b') &&
     (uVar2 = (ulonglong)(*(uint *)(&DAT_1807b8500 + (longlong)param_1 * 4) >> 0x10),
     (char)*(uint *)(&DAT_1807b8500 + (longlong)param_1 * 4) == '\x02')) {
    local_14 = *(undefined4 *)(uVar2 + 0xc78 + DAT_180bb8ae8);
    local_10 = *(undefined4 *)(uVar2 + 0xc7c + DAT_180bb8ae8);
    local_18 = param_1;
    FUN_1804d06d0(DAT_180bb8ae8 + 0x1fa8,&local_18);
    *(undefined8 *)(uVar2 + 0xc78 + lVar1) = *param_2;
    return;
  }
  FUN_1804c5a40("Calling PushStyleVar() variant with wrong type!");
  return;
}



