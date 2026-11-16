// FUN_1804e7f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e7f30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e7f30(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_94;
  int local_90;
  ushort local_88;
  ushort uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  int local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  fVar11 = 0.2;
  local_80 = *(int *)(param_1 + 8);
  iVar8 = 3;
  uVar6 = param_2;
  if ((int)param_2 <= (int)*(uint *)(lVar1 + 0xa8)) {
    uVar6 = *(uint *)(lVar1 + 0xa8);
  }
  uStack_84 = (undefined2)param_2;
  iVar10 = local_80 + param_3;
  *(uint *)(lVar1 + 0xa8) = uVar6;
  uStack_82 = (undefined2)param_3;
  uVar6 = param_3;
  if ((int)param_3 <= (int)*(uint *)(lVar1 + 0xac)) {
    uVar6 = *(uint *)(lVar1 + 0xac);
  }
  *(uint *)(lVar1 + 0xac) = uVar6;
  local_90 = local_80 + param_2;
  local_98 = param_2;
  local_94 = param_3;
  do {
    local_68 = 0;
    auVar3._4_4_ = iVar10;
    auVar3._0_4_ = local_90;
    auVar3._8_8_ = 0;
    local_78 = auVar3 << 0x20;
    FUN_1804d1cb0(lVar1,local_78);
    uVar4 = local_78._12_2_;
    uVar5 = (ushort)local_68;
    local_88 = local_78._12_2_;
    uStack_86 = (ushort)local_68;
    if (local_68._4_4_ != 0) break;
    if ((iVar8 == 0) || (*(char *)(lVar1 + 0xb8) != '\0')) {
      if (DAT_180bb8ae8 == 0) {
      }
      if ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) == 0) {
      }
      FUN_1804cf3e0("[font] Failed packing %dx%d rectangle. Returning fallback.\n",local_98,local_94
                   );
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    FUN_1804e6ae0(param_1,2);
    if ((float)*(int *)(lVar2 + 0x98) * fVar11 <= (float)*(int *)(lVar2 + 0xa0)) {
      FUN_1804e6ef0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x24),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28));
    }
    else {
      FUN_1804e74e0(param_1,0xffffffff,0xffffffff);
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  iVar8 = (local_98 & 0xffff) + local_80 + (uint)(ushort)uVar4;
  if (iVar8 <= *(int *)(lVar1 + 0xb0)) {
    iVar8 = *(int *)(lVar1 + 0xb0);
  }
  *(int *)(lVar1 + 0xb0) = iVar8;
  iVar8 = (local_94 & 0xffff) + local_80 + (uint)uVar5;
  if (iVar8 <= *(int *)(lVar1 + 0xb4)) {
    iVar8 = *(int *)(lVar1 + 0xb4);
  }
  *(int *)(lVar1 + 0x94) = *(int *)(lVar1 + 0x94) + 1;
  *(int *)(lVar1 + 0xb4) = iVar8;
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + iVar10 * local_90;
  iVar8 = *(int *)(lVar1 + 100);
  if (*(int *)(lVar1 + 0x60) == iVar8) {
    iVar10 = *(int *)(lVar1 + 0x60) + 1;
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar8 / 2 + iVar8;
    }
    if (iVar10 < iVar8) {
      iVar10 = iVar8;
    }
    FUN_1804d0a80(lVar1 + 0x60,iVar10);
  }
  *(ulonglong *)(*(longlong *)(lVar1 + 0x68) + (longlong)*(int *)(lVar1 + 0x60) * 8) =
       CONCAT26(uStack_82,CONCAT24(uStack_84,CONCAT22(uStack_86,local_88)));
  uVar6 = *(uint *)(lVar1 + 0x60);
  *(uint *)(lVar1 + 0x60) = uVar6 + 1;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (param_4 == (uint *)0x0) {
    iVar8 = *(int *)(lVar1 + 0x90);
    if (iVar8 < 0) {
      FUN_1804eb9a0(lVar1 + 0x70,*(int *)(lVar1 + 0x70) + 1);
      puVar9 = (uint *)(*(longlong *)(lVar1 + 0x78) + (longlong)(*(int *)(lVar1 + 0x70) + -1) * 4);
      uVar7 = 0;
    }
    else {
      puVar9 = (uint *)(*(longlong *)(lVar1 + 0x78) + (longlong)iVar8 * 4);
      *(int *)(lVar1 + 0x90) =
           (*(int *)(*(longlong *)(lVar1 + 0x78) + (longlong)iVar8 * 4) << 0xc) >> 0xc;
      uVar7 = *puVar9;
    }
    *puVar9 = (uVar7 ^ uVar6) & 0xfff00000 ^ uVar6 | 0x40000000;
  }
  else {
    uVar6 = *(int *)(lVar1 + 0x60) - 1;
    *param_4 = (uVar6 ^ *param_4) & 0xfff00000 ^ uVar6;
  }
}



