// FUN_1804d56b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d56b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d56b0(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,int *param_7,int *param_8,int *param_9,int *param_10)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar4 = FUN_1804d3150();
    if (iVar4 < 0) {
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
      }
      if (param_8 != (int *)0x0) {
        *param_8 = 0;
      }
      if (param_9 != (int *)0x0) {
        *param_9 = 0;
      }
      if (param_10 == (int *)0x0) {
      }
      *param_10 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 8);
    lVar8 = (longlong)iVar4;
    iVar4 = (int)CONCAT11(*(undefined1 *)(lVar1 + 2 + lVar8),*(undefined1 *)(lVar1 + 3 + lVar8));
    iVar6 = (int)CONCAT11(*(undefined1 *)(lVar1 + 4 + lVar8),*(undefined1 *)(lVar1 + 5 + lVar8));
    iVar7 = (int)CONCAT11(*(undefined1 *)(lVar1 + 6 + lVar8),*(undefined1 *)(lVar1 + 7 + lVar8));
    iVar5 = (int)CONCAT11(*(undefined1 *)(lVar1 + 8 + lVar8),*(undefined1 *)(lVar1 + 9 + lVar8));
  }
  else {
    local_88 = 1;
    local_80 = ZEXT816(0);
    local_60 = 0;
    local_70 = (undefined1  [16])0x0;
    local_58 = 0;
    iVar4 = FUN_1804d4550(0,0,&local_88);
    bVar9 = iVar4 != 0;
    iVar4 = 0;
    if (bVar9) {
      iVar4 = local_70._0_4_;
    }
    iVar6 = 0;
    if (bVar9) {
      iVar6 = local_70._8_4_;
    }
    iVar7 = 0;
    if (bVar9) {
      iVar7 = local_70._4_4_;
    }
    iVar5 = 0;
    if (bVar9) {
      iVar5 = local_70._12_4_;
    }
  }
  if (param_7 != (int *)0x0) {
    fVar2 = (float)iVar4 * param_3 + param_5;
    iVar4 = (int)fVar2;
    if ((fVar2 < 0.0) && ((float)iVar4 != fVar2)) {
      iVar4 = iVar4 + -1;
    }
    *param_7 = (int)(float)iVar4;
  }
  if (param_8 != (int *)0x0) {
    fVar2 = param_6 - (float)iVar5 * param_4;
    iVar4 = (int)fVar2;
    if ((fVar2 < 0.0) && ((float)iVar4 != fVar2)) {
      iVar4 = iVar4 + -1;
    }
    *param_8 = (int)(float)iVar4;
  }
  if (param_9 != (int *)0x0) {
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)iVar7 * param_3 + param_5)),2);
    *param_9 = (int)auVar3._0_4_;
  }
  if (param_10 != (int *)0x0) {
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_6 - (float)iVar6 * param_4)),2);
    *param_10 = (int)auVar3._0_4_;
  }
}



