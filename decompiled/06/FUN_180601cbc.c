// FUN_180601cbc - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601cbc */

void FUN_180601cbc(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 local_res10 [24];
  
  pcVar2 = "Value %1% can not be represented in the target integer type.";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  FUN_180601cb0(param_1,pcVar2,param_3,param_4,local_res10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



