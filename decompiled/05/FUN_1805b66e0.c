// FUN_1805b66e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b66e0 */

undefined8 FUN_1805b66e0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  longlong local_res20;
  
  uVar6 = (ulonglong)param_2;
  *param_3 = 0;
  param_3[1] = 0;
  lVar4 = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50) == 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    if ((*(longlong *)(lVar1 + 0x4d8) != 0) && (param_2 < 0x100)) {
      sVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x10e0))(param_2);
      uVar6 = 0;
      if (*(uint *)(lVar1 + 0x20) != 0) {
        do {
          if (*(short *)(*(longlong *)(lVar1 + 0x4d8) + uVar6 * 2) == sVar2) {
            if (-1 < (int)uVar6) goto LAB_1805b6779;
            break;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar1 + 0x20));
      }
    }
    uVar3 = 0x12;
  }
  else {
LAB_1805b6779:
    uVar3 = (**(code **)(param_1 + 0x380))
                      (*(undefined8 *)(param_1 + 8),uVar6,&local_res20,local_res8);
    if ((int)uVar3 == 0) {
      param_3[1] = local_res20;
      if (local_res20 != 0) {
        lVar4 = (ulonglong)local_res8[0] + local_res20;
      }
      param_3[2] = lVar4;
      param_3[3] = local_res20;
      return 0;
    }
  }
  return uVar3;
}



