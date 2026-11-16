// FUN_1803f5070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f5070 */

undefined8 FUN_1803f5070(longlong param_1,int param_2,int param_3)

{
  ULONGLONG UVar1;
  ulonglong uVar2;
  
  UVar1 = GetTickCount64();
  if (((*(int *)(param_1 + 0x80) == param_2) && (*(int *)(param_1 + 0x84) == param_3)) &&
     (UVar1 < *(ulonglong *)(param_1 + 0xe0))) {
    if (((*(char *)(param_1 + 0x17b) == '\0') && (*(longlong *)(param_1 + 0x1a8) != 0)) &&
       (*(longlong *)(param_1 + 0x1a8) == *(longlong *)(param_1 + 400))) {
      uVar2 = 1000;
      if (*(longlong *)(param_1 + 0x120) != 0) {
        uVar2 = 0xfa;
      }
      if (UVar1 - *(longlong *)(param_1 + 0x218) < uVar2) {
        return *(undefined8 *)(param_1 + 0x2c8);
      }
    }
    if (((*(char *)(param_1 + 0x17a) != '\0') && (UVar1 < *(ulonglong *)(param_1 + 0x418))) &&
       ((UVar1 < *(ulonglong *)(param_1 + 0x238) || (UVar1 - *(longlong *)(param_1 + 0x218) < 0x2ee)
        ))) {
      return *(undefined8 *)(param_1 + 0x410);
    }
  }
  return 0;
}



