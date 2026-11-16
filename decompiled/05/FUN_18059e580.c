// FUN_18059e580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e580 */

undefined8 FUN_18059e580(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    uVar2 = FUN_180573a00(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_18066f8b4);
    puVar3 = (undefined8 *)FUN_18057ae80(uVar2,"postscript-font-name",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018059e5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1);
      return uVar2;
    }
  }
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar1 + 0x5b0);
}



