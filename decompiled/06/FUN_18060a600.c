// FUN_18060a600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a600 */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_18060a1b0(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_18060a1e0();
  FUN_18060a1b0(uVar2,*param_2,2);
  return;
}



