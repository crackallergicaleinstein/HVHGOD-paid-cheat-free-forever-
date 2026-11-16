// FUN_18060aaf4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060aaf4 */

/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_28;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18060ab22;
  FUN_18060a808(2,0xc0000417);
  *(undefined8 *)(puVar3 + -8) = 0x18060ab28;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00018060ab34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}



