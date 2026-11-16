// FUN_18030b1e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030b1e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030b1e0(int *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  param_1[3] = 0x3f800000;
  iVar8 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  lVar1 = *(longlong *)(param_2 + 0x38);
  lVar6 = *(longlong *)(param_2 + 0x30);
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (lVar6 != lVar1) {
    lVar7 = 0;
    do {
      if (1e-06 < ABS(*(float *)(lVar6 + 0x24))) {
        *param_1 = *param_1 + 1;
        param_1[1] = (int)(*(float *)(lVar6 + 0x24) + (float)param_1[1]);
      }
      if ((*(ulonglong *)(lVar6 + 8) & 0xfffffffffffff9e7) == 0) {
        param_1[2] = param_1[2] + 1;
      }
      else if (lVar7 < 7) {
        iVar8 = iVar8 + 1;
        *(undefined4 *)(local_58 + lVar7 * 4 + 0x28) = *(undefined4 *)(lVar6 + 0x14);
        lVar7 = lVar7 + 1;
      }
      lVar6 = lVar6 + 0x28;
    } while (lVar6 != lVar1);
  }
  puVar5 = (undefined8 *)FUN_18032ff40(local_58,&local_30,local_58 + (longlong)iVar8 * 4 + 0x28);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  iVar8 = *(int *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 3) = *puVar5;
  *(undefined8 *)(param_1 + 5) = uVar2;
  *(undefined8 *)(param_1 + 7) = uVar3;
  *(undefined8 *)(param_1 + 9) = uVar4;
  param_1[0xb] = iVar8;
}



