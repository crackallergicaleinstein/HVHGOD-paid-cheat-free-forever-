// FUN_1805c9fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9fe0 */

undefined8
FUN_1805c9fe0(longlong param_1,longlong param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (param_4 != 0) {
    if (param_3 == 0xffffffff) {
      FUN_18063ab10(param_5,0,(ulonglong)param_4 << 2);
      return 1;
    }
    uVar5 = (ulonglong)param_4;
    do {
      uVar4 = (ulonglong)param_3;
      if (*(longlong *)(param_2 + 0x78) == 0) {
        uVar2 = 0;
      }
      else {
        uVar3 = (ulonglong)(*(uint *)(param_2 + 0x68) - 1);
        if (param_3 < *(uint *)(param_2 + 0x68)) {
          uVar3 = uVar4;
        }
        uVar4 = (ulonglong)*(uint *)(uVar3 * 4 + *(longlong *)(param_2 + 0x78));
        uVar2 = *(undefined4 *)(uVar3 * 4 + *(longlong *)(param_2 + 0x70));
      }
      uVar2 = (**(code **)(lVar1 + 0x70))(param_1,param_2 + 0x48,uVar2,uVar4);
      *param_5 = uVar2;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 1;
}



