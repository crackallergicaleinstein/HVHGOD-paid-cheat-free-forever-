// FUN_1805e3130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e3130 */

ulonglong FUN_1805e3130(ulonglong *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)((longlong)param_1 + 7);
  if (bVar1 == 0) {
    return *param_1 | 1;
  }
  iVar2 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  return (*param_1 | 1) << (8U - (char)iVar2 & 0x3f);
}



