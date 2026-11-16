// FUN_180444450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180444450 */

undefined8
FUN_180444450(longlong param_1,longlong param_2,ulonglong param_3,char param_4,longlong param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 < 0) {
    if (*(ulonglong *)(param_1 + 0x20) < *(longlong *)(param_1 + 0x18) + 1U) {
      return 0x80100009;
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x18)) = 0x2d;
    lVar2 = *(longlong *)(param_1 + 0x18) + 1;
    *(longlong *)(param_1 + 0x18) = lVar2;
    if (param_5 != 0) {
      if (*(ulonglong *)(param_1 + 0x20) < (ulonglong)(*(longlong *)(param_5 + 0x18) + -1 + lVar2))
      {
        return 0x80100009;
      }
      FUN_18063aed0(lVar2 + *(longlong *)(param_1 + 0x38) + -1,*(undefined8 *)(param_5 + 0x38),
                    *(longlong *)(param_5 + 0x18) + -1);
      *(longlong *)(param_1 + 0x18) =
           *(longlong *)(param_1 + 0x18) + *(longlong *)(param_5 + 0x18) + -1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x18) + -1 + *(longlong *)(param_1 + 0x38)) = 0;
    }
    lVar2 = -0x8000000000000000;
    if ((param_2 != -0x8000000000000000) && (lVar2 = -param_2, -param_2 < 0)) {
      lVar2 = param_2;
    }
    param_5 = 0;
    param_3 = param_3 & 0xff;
    param_2 = lVar2;
  }
  else if (param_4 != '\0') {
    if (*(ulonglong *)(param_1 + 0x20) < *(longlong *)(param_1 + 0x18) + 1U) {
      return 0x80100009;
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x18)) = 0x2b;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  }
  uVar1 = FUN_180449ba0(param_1,param_2,param_3,param_5,param_6);
  return uVar1;
}



