// FUN_18050a280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050a280 */

void * FUN_18050a280(longlong param_1,int param_2)

{
  void *_Buf2;
  bool bVar1;
  int iVar2;
  size_t sVar3;
  size_t _Size;
  
  _Buf2 = *(void **)(param_1 + 8);
  _Size = 0xffffffffffffffff;
  sVar3 = 0xffffffffffffffff;
  do {
    sVar3 = sVar3 + 1;
  } while (*(char *)((longlong)_Buf2 + sVar3) != '\0');
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)*(void **)(param_1 + 0x10) + _Size) != '\0');
  if (_Size == sVar3) {
    if (_Size != 0) {
      iVar2 = memcmp(*(void **)(param_1 + 0x10),_Buf2,_Size);
      if (iVar2 != 0) goto LAB_18050a2dd;
    }
    if (**(char **)(param_1 + 0x18) != '\0') {
      bVar1 = true;
      goto LAB_18050a2df;
    }
  }
LAB_18050a2dd:
  bVar1 = false;
LAB_18050a2df:
  if ((param_2 == 3) && (bVar1)) {
    return *(void **)(param_1 + 0x18);
  }
  return _Buf2;
}



