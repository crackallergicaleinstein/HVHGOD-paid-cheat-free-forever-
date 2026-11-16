// FUN_18060a508 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a508 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18060a2e0(3,"FlsSetValue",&DAT_1806adfd0,"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*pcVar1)();
  }
  return;
}



