// FUN_180444570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180444570 */

undefined8
FUN_180444570(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             undefined1 param_5,char param_6,longlong param_7,longlong param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (-1 < param_2) {
    if (param_6 != '\0') {
      if (*(ulonglong *)(param_1 + 0x20) < *(longlong *)(param_1 + 0x18) + 1U) {
        return 0x80100009;
      }
      *(undefined2 *)(*(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x18)) = 0x2b;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    }
    uVar1 = FUN_180449d80(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
    return uVar1;
  }
  if (*(ulonglong *)(param_1 + 0x20) < *(longlong *)(param_1 + 0x18) + 1U) {
    return 0x80100009;
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x18) + -1 + *(longlong *)(param_1 + 0x38)) = 0x2d;
  lVar2 = *(longlong *)(param_1 + 0x18) + 1;
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (param_7 != 0) {
    if (*(ulonglong *)(param_1 + 0x20) < (ulonglong)(*(longlong *)(param_7 + 0x18) + -1 + lVar2)) {
      return 0x80100009;
    }
    FUN_18063aed0(lVar2 + *(longlong *)(param_1 + 0x38) + -1,*(undefined8 *)(param_7 + 0x38),
                  *(longlong *)(param_7 + 0x18) + -1);
    *(longlong *)(param_1 + 0x18) =
         *(longlong *)(param_1 + 0x18) + *(longlong *)(param_7 + 0x18) + -1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x18)) = 0;
  }
  lVar2 = -0x8000000000000000;
  if ((param_2 != -0x8000000000000000) && (lVar2 = -param_2, -param_2 < 0)) {
    lVar2 = param_2;
  }
  uVar1 = FUN_1804499d0(param_1,lVar2,param_3 & 0xff,param_4 & 0xff,param_5);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (param_8 == 0) {
    return 0x100000;
  }
  uVar1 = FUN_1804442e0(param_1);
  return uVar1;
}



