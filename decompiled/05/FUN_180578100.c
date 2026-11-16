// FUN_180578100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578100 */

byte FUN_180578100(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar1 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      uVar3 = *(uint *)(param_1 + 1) - uVar1;
      if (param_3 < uVar3) {
        uVar3 = param_3;
      }
      if (param_3 != 0) {
        FUN_18063aed0(param_2,(ulonglong)uVar1 + *param_1,uVar3);
      }
    }
    else {
      uVar3 = (*(code *)param_1[4])(param_1,(ulonglong)uVar1,param_2,param_3);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar3 + uVar1;
    bVar2 = -(uVar3 < param_3) & 0x55;
  }
  else {
    bVar2 = 0x55;
  }
  return bVar2;
}



