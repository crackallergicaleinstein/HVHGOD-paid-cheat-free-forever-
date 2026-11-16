// FUN_18044fc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044fc90 */

void FUN_18044fc90(longlong param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar2;
    puVar2 = (undefined1 *)FUN_1803b0a60();
    *puVar2 = 1;
    FUN_1800a9e50(1,param_1);
    puVar2 = (undefined1 *)FUN_1803b0a60();
    *puVar2 = uVar1;
  }
  return;
}



