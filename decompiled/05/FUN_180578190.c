// FUN_180578190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578190 */

byte FUN_180578190(longlong *param_1,uint param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      uVar2 = *(uint *)(param_1 + 1) - param_2;
      if (param_4 < uVar2) {
        uVar2 = param_4;
      }
      if (param_4 != 0) {
        FUN_18063aed0(param_3,(ulonglong)param_2 + *param_1,uVar2);
      }
    }
    else {
      uVar2 = (*(code *)param_1[4])(param_1,(ulonglong)param_2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar2 + param_2;
    bVar1 = -(uVar2 < param_4) & 0x55;
  }
  else {
    bVar1 = 0x55;
  }
  return bVar1;
}



