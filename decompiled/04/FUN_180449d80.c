// FUN_180449d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180449d80 */

undefined8
FUN_180449d80(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,longlong param_6,longlong param_7)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
LAB_180449dfd:
    uVar1 = FUN_1804499d0(param_1,param_2,param_3,param_4,param_5);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (param_7 != 0) {
      if (*(ulonglong *)(param_1 + 0x20) <
          (ulonglong)(*(longlong *)(param_7 + 0x18) + -1 + *(longlong *)(param_1 + 0x18)))
      goto LAB_180449e91;
      FUN_18063aed0(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38) + -1,
                    *(undefined8 *)(param_7 + 0x38),*(longlong *)(param_7 + 0x18) + -1);
      *(longlong *)(param_1 + 0x18) =
           *(longlong *)(param_1 + 0x18) + *(longlong *)(param_7 + 0x18) + -1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x18)) = 0;
    }
    uVar1 = 0x100000;
  }
  else {
    if ((ulonglong)(*(longlong *)(param_6 + 0x18) + -1 + *(longlong *)(param_1 + 0x18)) <=
        *(ulonglong *)(param_1 + 0x20)) {
      FUN_18063aed0(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38) + -1,
                    *(undefined8 *)(param_6 + 0x38),*(longlong *)(param_6 + 0x18) + -1);
      *(longlong *)(param_1 + 0x18) =
           *(longlong *)(param_1 + 0x18) + *(longlong *)(param_6 + 0x18) + -1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x18)) = 0;
      goto LAB_180449dfd;
    }
LAB_180449e91:
    uVar1 = 0x80100009;
  }
  return uVar1;
}



