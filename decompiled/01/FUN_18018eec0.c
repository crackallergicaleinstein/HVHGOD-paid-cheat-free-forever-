// FUN_18018eec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018eec0 */

void FUN_18018eec0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  local_18 = (undefined1  [16])0x0;
  FUN_18018e7b0(0,param_2,param_3,local_18,0);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar3 = *(longlong **)(param_1 + 0xb8);
    plVar2 = (longlong *)plVar3[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    while (cVar1 == '\0') {
      if ((ulonglong)plVar2[4] < param_2) {
        plVar2 = plVar2 + 2;
      }
      else {
        plVar3 = plVar2;
      }
      plVar2 = (longlong *)*plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    if ((*(char *)((longlong)plVar3 + 0x19) != '\0') || (param_2 < (ulonglong)plVar3[4])) {
      local_18 = (undefined1  [16])0x0;
      FUN_18018e7b0(param_1,param_2,param_3,local_18,1);
    }
  }
  return;
}



