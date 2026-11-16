// FUN_180455f70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180455f70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180455f70(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  local_48 = 2;
  local_30 = param_2;
  lVar7 = FUN_1801c56a0(puVar9,param_2[2],param_3,&DAT_1807c5c68);
  if (lVar7 != -1) {
    uVar2 = param_2[2];
    uVar8 = lVar7 + 1U;
    if (uVar2 < lVar7 + 1U) {
      uVar8 = uVar2;
    }
    puVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar9 = (undefined8 *)*param_2;
    }
    FUN_18063aed0(puVar9,uVar8 + (longlong)puVar9,(uVar2 - uVar8) + 1);
    param_2[2] = uVar2 - uVar8;
  }
  uVar2 = param_2[2];
  if (4 < uVar2) {
    uVar8 = uVar2 - 4;
    if (uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_180141470();
    }
    puVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar9 = (undefined8 *)*param_2;
    }
    lVar7 = 0;
    do {
      bVar1 = *(byte *)((longlong)puVar9 + lVar7 + uVar8);
      lVar10 = lVar7 + 1;
      if (bVar1 != (&DAT_1807c5c6c)[lVar7]) {
        uVar6 = -(uint)(bVar1 < (byte)(&DAT_1807c5c6c)[lVar7]) | 1;
        goto LAB_18045604e;
      }
      lVar7 = lVar10;
    } while (lVar10 != 4);
    uVar6 = 0;
LAB_18045604e:
    if (uVar6 == 0) {
      param_2[2] = uVar8;
      puVar9 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar9 = (undefined8 *)*param_2;
      }
      *(undefined1 *)((longlong)puVar9 + uVar8) = 0;
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar3;
  *(undefined8 *)param_1[1] = uVar4;
  *(undefined8 *)(param_1[1] + 8) = uVar5;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  FUN_18015c010(param_2);
}



