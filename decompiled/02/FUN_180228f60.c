// FUN_180228f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180228f60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1
FUN_180228f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  FARPROC pFVar2;
  undefined1 uVar3;
  char cVar4;
  ULONGLONG UVar5;
  HMODULE hModule;
  longlong lVar6;
  undefined8 unaff_retaddr;
  undefined1 local_28 [8];
  ulonglong uStack_20;
  
  if (DAT_180bbecf0 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)DAT_180bbecf0)();
  }
  uVar1 = DAT_180c63120;
  if (DAT_180c63119 == '\0') {
    return uVar3;
  }
  if (DAT_1808e6c00 == '\0') {
    return uVar3;
  }
  UVar5 = GetTickCount64();
  if (uVar1 <= UVar5) {
    return uVar3;
  }
  if ((DAT_180cd3aa8 & 1) == 0) {
    DAT_180cd3aa8 = DAT_180cd3aa8 | 1;
    hModule = GetModuleHandleW(L"tier0.dll");
    DAT_180cd3ab0 = GetProcAddress(hModule,"Plat_FloatTime");
  }
  cVar4 = FUN_1804513c0(DAT_180cd3ab0,1,2);
  pFVar2 = DAT_180cd3ab0;
  if ((cVar4 == '\0') || (cVar4 = FUN_1804513c0(DAT_180cd3ab0,1,2), cVar4 == '\0')) {
    uStack_20 = uStack_20 & 0xffffffffffffff00;
  }
  else {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    FUN_180230020(local_28,pFVar2);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
  }
  FUN_180228a40(param_1,param_2,param_5,unaff_retaddr,local_28);
  return uVar3;
}



