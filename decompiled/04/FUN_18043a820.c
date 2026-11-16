// FUN_18043a820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a820 */

void FUN_18043a820(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  lVar2 = FUN_180439770();
  puVar3 = (undefined4 *)FUN_180439d10(lVar2 + 0x1b8,param_1);
  if (puVar3 != (undefined4 *)0x0) {
    uStackX_1c = *puVar3;
    puVar1 = *(undefined8 **)(lVar2 + 0x4c8);
    if (puVar1 == *(undefined8 **)(lVar2 + 0x4d0)) {
      local_res18 = param_1;
      FUN_1801b6250(lVar2 + 0x4c0,puVar1,&local_res18);
    }
    else {
      *puVar1 = CONCAT44(uStackX_1c,param_1);
      *(longlong *)(lVar2 + 0x4c8) = *(longlong *)(lVar2 + 0x4c8) + 8;
    }
    *puVar3 = param_2;
  }
  return;
}



