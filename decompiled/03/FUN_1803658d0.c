// FUN_1803658d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803658d0 */

void FUN_1803658d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_5 < param_4) {
    lVar6 = param_5 >> 1;
    lVar3 = param_2 + lVar6 * 0x28;
    uVar2 = (param_2 - param_1) / 0x28;
    lVar4 = param_1;
    if (0 < (longlong)uVar2) {
      do {
        uVar1 = uVar2 >> 1;
        if (*(float *)(lVar4 + 0x14 + uVar1 * 0x28) <= *(float *)(lVar3 + 0x14)) {
          lVar4 = lVar4 + uVar1 * 0x28 + 0x28;
          uVar1 = uVar2 + (-1 - uVar1);
        }
        uVar2 = uVar1;
      } while (0 < (longlong)uVar1);
    }
    lVar5 = (lVar4 - param_1) / 0x28;
  }
  else {
    lVar5 = param_4 >> 1;
    lVar4 = param_1 + lVar5 * 0x28;
    uVar2 = (param_3 - param_2) / 0x28;
    lVar3 = param_2;
    if (0 < (longlong)uVar2) {
      do {
        uVar1 = uVar2 >> 1;
        if (*(float *)(lVar3 + 0x14 + uVar1 * 0x28) < *(float *)(lVar4 + 0x14)) {
          lVar3 = lVar3 + uVar1 * 0x28 + 0x28;
          uVar1 = uVar2 + (-1 - uVar1);
        }
        uVar2 = uVar1;
      } while (0 < (longlong)uVar1);
    }
    lVar6 = (lVar3 - param_2) / 0x28;
  }
  FUN_180365a90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar4,lVar3,lVar5,
                lVar6);
  return;
}



