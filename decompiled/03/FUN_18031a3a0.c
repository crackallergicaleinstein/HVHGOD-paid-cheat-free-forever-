// FUN_18031a3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031a3a0 */

void FUN_18031a3a0(undefined8 *param_1,undefined1 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)*param_1 != 0) && (lVar1 = *(longlong *)param_1[1], lVar1 != 0)) {
    *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | 1;
    lVar2 = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x40) + 0x10;
    }
    if (lVar2 != 0) {
      FUN_18030afc0(*(undefined8 *)param_1[1],lVar2,*(undefined8 *)*param_1);
    }
  }
  if (param_3 == '\0') {
    *(undefined1 *)(param_1[2] + 0x40) = 0;
    *(undefined4 *)(param_1[2] + 0x50) = 0;
    *(undefined1 *)(param_1[2] + 0xf0) = 0;
  }
  *(undefined1 *)param_1[3] = param_2;
  FUN_180319500(param_1[4],param_2);
  return;
}



