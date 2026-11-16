// FUN_180573920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573920 */

undefined8 FUN_180573920(longlong param_1,int param_2,undefined1 *param_3,int param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    *param_3 = 0;
    if (*(int *)(param_1 + 0x10) <= param_2) {
      return 0x10;
    }
    if (((*(uint *)(param_1 + 8) & 0x200) != 0) &&
       (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x38),
       puVar2 != (undefined8 *)0xfffffffffffffffe)) {
      if (puVar2 == (undefined8 *)0x0) {
        pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
        if (pcVar1 != (code *)0x0) {
          puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
        }
        puVar4 = (undefined8 *)0xfffffffffffffffe;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = puVar2;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x38) = puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          return 6;
        }
      }
      if ((code *)*puVar2 != (code *)0x0) {
        uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 6;
}



