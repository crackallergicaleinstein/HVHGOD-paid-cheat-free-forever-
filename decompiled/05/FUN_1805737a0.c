// FUN_1805737a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805737a0 */

undefined8 FUN_1805737a0(longlong param_1,ulonglong param_2,uint param_3,int *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else if (param_4 == (int *)0x0) {
    uVar2 = 6;
  }
  else if ((uint)param_2 < *(uint *)(param_1 + 0x10)) {
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x90);
    if ((pcVar1 != (code *)0x0) && (((param_3 & 3) != 0 || ((param_3 & 0xf0000) == 0x10000)))) {
      uVar2 = (*pcVar1)(param_1,param_2,1,param_3,param_4);
      if ((int)uVar2 == 0) {
        if ((param_3 & 1) == 0) {
          if (*(longlong *)(param_1 + 0x80) == 0) {
            return 0x24;
          }
          lVar3 = 0x20;
          if ((param_3 & 0x10) == 0) {
            lVar3 = 0x1c;
          }
          lVar3 = (longlong)*(int *)(lVar3 + *(longlong *)(param_1 + 0x80)) *
                  (longlong)(*param_4 << 10);
          *param_4 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
        }
        return 0;
      }
      if ((char)uVar2 != '\a') {
        return uVar2;
      }
    }
    if ((param_3 >> 0x1d & 1) == 0) {
      uVar2 = FUN_18057a660(param_1,param_2 & 0xffffffff,1,param_3,param_4);
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



