// FUN_1805e2800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e2800 */

ulonglong FUN_1805e2800(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    return 0xffffffffffffffba;
  }
  if (param_5 == 0) {
    return 0xffffffffffffffec;
  }
  iVar1 = FUN_1805e3d50(param_3,param_5);
  if (iVar1 == 0) {
    uVar2 = FUN_1805e3160(param_1,param_4,param_5,param_6,param_7,param_8);
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    if (uVar2 < param_5) {
      uVar2 = FUN_1805de910(param_2,param_3,uVar2 + param_4,param_5 - uVar2,param_1,param_8);
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_1805e37e0();
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    if (uVar2 < param_5) {
      uVar2 = FUN_1805e0170(param_2,param_3,uVar2 + param_4,param_5 - uVar2,param_1,param_8);
      return uVar2;
    }
  }
  return 0xffffffffffffffb8;
}



