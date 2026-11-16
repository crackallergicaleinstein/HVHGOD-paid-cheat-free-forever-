// FUN_1804bc190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bc190 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bc190(undefined8 param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  undefined1 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  lVar4 = DAT_180bb8ae8;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_30 = FUN_1804b8110(0x450);
  local_28 = local_38;
  local_20 = local_30;
  if (local_30 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1804b6f90(local_30,lVar4,param_1);
  }
  *(uint *)(lVar6 + 0x14) = param_2;
  FUN_1804b17b0(lVar4 + 0x14b0,*(undefined4 *)(lVar6 + 0x10),lVar6);
  lVar8 = 0;
  if ((param_2 >> 8 & 1) == 0) {
    lVar8 = FUN_1804ce570(lVar6);
    if (lVar8 != 0) {
      *(int *)(lVar6 + 0x2c4) = (int)lVar8 - *(int *)(lVar4 + 0x27a8);
    }
  }
  lVar9 = DAT_180bb8ae8;
  fVar1 = *(float *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0xc);
  *(float *)(lVar6 + 0x28) = *(float *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 8) + 60.0;
  *(float *)(lVar6 + 0x2c) = fVar1 + 60.0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined2 *)(lVar6 + 0xf2) = 0xf0f;
  *(undefined1 *)(lVar6 + 0xf1) = 0xf;
  FUN_1804bc060(lVar6,lVar8);
  if (lVar8 != 0) {
    *(undefined2 *)(lVar8 + 0xc) = *(undefined2 *)(lVar9 + 0x2778);
  }
  piVar7 = (int *)(lVar4 + 0x1470);
  iVar2 = *piVar7;
  iVar5 = *(int *)(lVar4 + 0x1474);
  if (((param_2 >> 0xd & 1) == 0) || (iVar2 == 0)) {
    if (iVar2 == iVar5) {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      iVar3 = iVar2 + 1;
      if (iVar2 + 1 < iVar5) {
        iVar3 = iVar5;
      }
      FUN_1804d0a80(piVar7,iVar3);
    }
    *(longlong *)(*(longlong *)(lVar4 + 0x1478) + (longlong)*piVar7 * 8) = lVar6;
  }
  else {
    if (iVar2 == iVar5) {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      iVar3 = iVar2 + 1;
      if (iVar2 + 1 < iVar5) {
        iVar3 = iVar5;
      }
      FUN_1804d0a80(piVar7,iVar3);
    }
    if (0 < (longlong)*piVar7) {
      FUN_18063aed0(*(longlong *)(lVar4 + 0x1478) + 8,*(longlong *)(lVar4 + 0x1478),
                    (longlong)*piVar7 * 8);
    }
    **(longlong **)(lVar4 + 0x1478) = lVar6;
  }
  *piVar7 = *piVar7 + 1;
}



