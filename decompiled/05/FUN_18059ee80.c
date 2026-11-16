// FUN_18059ee80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059ee80 */

undefined8 FUN_18059ee80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x28) < *(longlong *)(param_1 + 0x20) + 0x28U) {
    return 0xa1;
  }
  iVar2 = FUN_1805a13c0();
  if (iVar2 - 2U < 0xf) {
    *(short *)(lVar1 + 0xac) = (short)iVar2;
    *(short *)(lVar1 + 0xae) =
         (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >>
                3) + -4;
    *(short *)(param_1 + 0x40) = (short)iVar2;
    *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(lVar1 + 0xae);
    return 0;
  }
  return 3;
}



