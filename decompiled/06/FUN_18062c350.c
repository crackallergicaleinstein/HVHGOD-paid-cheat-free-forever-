// FUN_18062c350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c350 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_18062c350(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_18062c3a0();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



