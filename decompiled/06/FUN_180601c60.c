// FUN_180601c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601c60 */

void FUN_180601c60(undefined8 param_1,char *param_2,undefined8 param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 local_res10 [24];
  
  pcVar2 = "Evaluation of function at pole %1%";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  FUN_180601c50(param_1,pcVar2,param_3,local_res10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



