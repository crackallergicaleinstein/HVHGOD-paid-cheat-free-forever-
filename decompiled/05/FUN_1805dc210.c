// FUN_1805dc210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dc210 */

ulonglong FUN_1805dc210(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1805dd010(param_1 + 0x74e8,param_2,param_3,*(undefined4 *)(param_1 + 0x7598));
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 != 0) {
      return 0xffffffffffffffb8;
    }
    if ((*(int *)(param_1 + 0x7610) == 1) && (*(longlong *)(param_1 + 0x7608) != 0)) {
      FUN_1805dc120(param_1);
    }
    if ((*(int *)(param_1 + 0x7504) != 0) &&
       (*(int *)(param_1 + 0x75f8) != *(int *)(param_1 + 0x7504))) {
      return 0xffffffffffffffe0;
    }
    if ((*(int *)(param_1 + 0x7508) == 0) || (*(int *)(param_1 + 0x759c) != 0)) {
      *(undefined4 *)(param_1 + 0x75a0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x75a0) = 1;
      FUN_1805e4150(param_1 + 0x7538,0);
    }
    *(longlong *)(param_1 + 0x7518) = *(longlong *)(param_1 + 0x7518) + param_3;
    uVar1 = 0;
  }
  return uVar1;
}



