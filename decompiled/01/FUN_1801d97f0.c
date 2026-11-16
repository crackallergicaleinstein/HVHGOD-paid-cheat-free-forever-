// FUN_1801d97f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d97f0 */

undefined1 (*) [16] FUN_1801d97f0(undefined1 (*param_1) [16],undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_48 [16];
  ulonglong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar4 = 0;
  uVar1 = *param_3;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *(ulonglong *)(param_3[1] + uVar6 * 8);
      bVar3 = (byte)(uVar2 >> 0x3c);
      if (bVar3 == 0xc) {
        uVar4 = uVar4 + *(longlong *)(param_3[1] + (uVar2 & 0xfffffffffffffff) + 8 + uVar1 * 8);
      }
      else if (bVar3 == 0xb) {
        uVar4 = uVar4 + 0x20;
      }
      else {
        uVar4 = uVar4 + 8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  lVar5 = uVar4 + param_2[1];
  if (CARRY8(uVar4,param_2[1])) {
    lVar5 = -1;
  }
  FUN_1800f5540(param_1,lVar5);
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_1801da050(local_48,param_1,&local_28,&local_38,0);
  return param_1;
}



