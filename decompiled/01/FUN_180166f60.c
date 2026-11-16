// FUN_180166f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166f60 */

undefined8 FUN_180166f60(longlong param_1,int param_2)

{
  ulonglong uVar1;
  DWORD DVar2;
  longlong lVar3;
  ULONGLONG UVar4;
  
  if (*(HANDLE *)(param_1 + 0x550) != (HANDLE)0x0) {
    DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x550),0);
    if (DVar2 == 0x102) {
      lVar3 = _Xtime_get_ticks();
      if ((((*(char *)(param_1 + 0x54c) != '\0') && (*(char *)(param_1 + 0x398) != '\0')) &&
          (param_2 != 0)) &&
         ((param_2 == *(int *)(param_1 + 0x548) &&
          (lVar3 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar3),8) + lVar3,
          (lVar3 >> 0x17) - (lVar3 >> 0x3f) < *(longlong *)(param_1 + 0x538))))) {
        uVar1 = *(ulonglong *)(param_1 + 0x540);
        UVar4 = GetTickCount64();
        if (UVar4 < uVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}



