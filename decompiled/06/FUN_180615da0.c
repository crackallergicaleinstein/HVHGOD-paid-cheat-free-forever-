// FUN_180615da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180615da0 */

void FUN_180615da0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_180bb2030 != 0) {
    FUN_180615dd0(param_1,param_2,0);
    return;
  }
  if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
    FUN_180615d10();
    return;
  }
  do {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    uVar4 = (uint)uVar2;
    param_2 = param_2 + 1;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint)uVar2;
      }
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}



