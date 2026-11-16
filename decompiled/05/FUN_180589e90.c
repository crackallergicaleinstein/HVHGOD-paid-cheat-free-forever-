// FUN_180589e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589e90 */

undefined8 FUN_180589e90(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (param_2 == 0) {
    return 0x24;
  }
  if (lVar1 == 0) {
    return 0x23;
  }
  if ((*(uint *)(lVar1 + 0x10) <= param_3) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0xd0) + 0x50) == 0)) {
    return 6;
  }
  uVar3 = param_4;
  if ((param_4 & 2) != 0) {
    uVar3 = param_4 & 0xfffffffd;
    if ((*(uint *)(lVar1 + 8) & 0x2000) == 0) {
      uVar3 = param_4;
    }
    if ((uVar3 >> 0xf & 1) != 0) {
      uVar3 = uVar3 | 2;
    }
  }
  if (((uVar3 & 0x401) != 0) && ((*(uint *)(lVar1 + 8) & 0x2000) == 0)) {
    uVar3 = uVar3 | 0xb;
  }
  lVar1 = 0x18;
  if ((uVar3 & 2) == 0) {
    lVar1 = 0x48;
  }
  *(longlong *)(param_2 + 0x40) = lVar1 + param_2;
  uVar2 = FUN_18058cea0(param_2,param_1);
  return uVar2;
}



