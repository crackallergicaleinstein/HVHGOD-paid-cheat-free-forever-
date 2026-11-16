// FUN_180586a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180586a30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180586a30(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  lVar16 = *(longlong *)(param_3 + 0x80);
  lVar5 = *(longlong *)(param_3 + 0x78);
  lVar14 = param_1[2];
  lVar15 = *(longlong *)(lVar16 + 0x38);
  local_58 = *(longlong **)(lVar5 + 0xf0);
  uVar17 = (int)param_5 >> 0x10 & 0xf;
  local_98 = *local_58;
  if ((*(int *)(lVar15 + 0x10) == 0) || (*(uint *)(lVar15 + 8) != uVar17)) {
    *(uint *)(lVar15 + 8) = uVar17;
    uVar9 = *(undefined4 *)(lVar16 + 0x1c);
    uVar10 = *(undefined4 *)(lVar16 + 0x20);
    uVar11 = *(undefined4 *)(lVar16 + 0x24);
    *(undefined4 *)(lVar15 + 0xc) = *(undefined4 *)(lVar16 + 0x18);
    *(undefined4 *)(lVar15 + 0x10) = uVar9;
    *(undefined4 *)(lVar15 + 0x14) = uVar10;
    *(undefined4 *)(lVar15 + 0x18) = uVar11;
    *(undefined8 *)(lVar15 + 0x1c) = *(undefined8 *)(lVar16 + 0x28);
    *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)(lVar16 + 0x30);
  }
  plVar13 = (longlong *)0x0;
  uStack_88 = *(undefined8 *)(lVar15 + 0x10);
  iVar12 = 0;
  *param_1 = param_3;
  lVar16 = *(longlong *)(param_3 + 0xb8);
  local_80 = 0;
  uStack_78 = (ulonglong)uVar17;
  param_1[1] = lVar16;
  local_b0 = lVar14;
  local_a8 = param_4;
  local_a0 = param_3;
  local_90 = param_3;
  local_60 = param_2;
  if ((lVar16 == 0) && (iVar12 = FUN_180581200(param_3,param_1 + 1,param_2), iVar12 == 0)) {
    *(longlong *)(param_3 + 0xb8) = param_1[1];
    *(code **)(param_3 + 0xc0) = FUN_180581140;
  }
  else if (iVar12 != 0) {
  }
  plVar6 = (longlong *)param_1[1];
  if (local_a8 < *(uint *)(plVar6 + 1)) {
    local_68 = (ulonglong)local_a8 * 2;
    uVar22 = (ulonglong)(*(ushort *)(plVar6[2] + local_68) & 0x1fff);
    puVar8 = (&PTR_DAT_18066d990)[uVar22];
    puVar7 = (&PTR_DAT_18066c5f0)[*(int *)(puVar8 + 4)];
    plVar13 = (longlong *)plVar6[uVar22 + 4];
    while (local_b8[0] = 0, plVar13 == (longlong *)0x0) {
      local_b8[0] = 0;
      local_70 = *(undefined8 *)(*plVar6 + 0x98);
      plVar13 = (longlong *)FUN_18057aad0(local_70,*(undefined4 *)(puVar7 + 8),local_b8);
      if (local_b8[0] != 0) break;
      *plVar13 = (longlong)puVar8;
      plVar13[6] = (longlong)plVar6;
      if ((*(code **)(puVar7 + 0x10) == (code *)0x0) ||
         (local_b8[0] = (**(code **)(puVar7 + 0x10))(plVar13,*plVar6), local_b8[0] == 0)) {
        plVar6[uVar22 + 4] = (longlong)plVar13;
        break;
      }
      if (*(code **)(puVar7 + 0x20) != (code *)0x0) {
        (**(code **)(puVar7 + 0x20))(plVar13);
      }
      FUN_18057abd0(local_70,plVar13);
      plVar13 = (longlong *)0x0;
      if (local_b8[0] != -1) break;
      uVar17 = *(ushort *)(plVar6[2] + local_68) & 0x1fff;
      uVar22 = (ulonglong)uVar17;
      puVar8 = (&PTR_DAT_18066d990)[uVar17];
      puVar7 = (&PTR_DAT_18066c5f0)[*(int *)(puVar8 + 4)];
      plVar13 = (longlong *)plVar6[(ulonglong)uVar17 + 4];
    }
    lVar14 = local_b0;
    param_3 = local_a0;
  }
  else {
    local_b8[0] = 6;
  }
  if (local_b8[0] != 0) {
  }
  puVar8 = (&PTR_DAT_18066c5f0)[*(int *)(*plVar13 + 4)];
  param_1[3] = (longlong)plVar13;
  if (*(code **)(puVar8 + 0x18) == (code *)0x0) {
    *(undefined4 *)(plVar13 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)plVar13 + 0xc) = local_90._4_4_;
    *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)plVar13 + 0x14) = uStack_88._4_4_;
    plVar13[3] = local_80;
    plVar13[4] = uStack_78;
  }
  else {
    (**(code **)(puVar8 + 0x18))(plVar13,&local_90);
  }
  if ((*(code **)(puVar8 + 0x30) != (code *)0x0) &&
     (iVar12 = (**(code **)(puVar8 + 0x30))(lVar14,plVar13), iVar12 != 0)) {
  }
  iVar12 = FUN_180574690(param_3,local_a8,param_5 & 0xfffffffb | 0x2801);
  if (iVar12 != 0) {
  }
  if (((int)uStack_78 == 1) &&
     ((cVar2 = *(char *)(*(longlong *)(param_3 + 0xd0) + 0x58), cVar2 == '\0' ||
      ((cVar2 < '\0' && (*(char *)(local_60 + 0x20) == '\0')))))) {
    FUN_180586830(param_1,param_3,plVar13);
  }
  cVar2 = *(char *)((longlong)local_58 + 0xc);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 != '\0') {
    uVar9 = *(undefined4 *)((longlong)local_58 + 0x14);
    plVar6 = (longlong *)local_58[2];
    iStack_50 = (int)local_58[3];
    iStack_4c = *(int *)((longlong)local_58 + 0x1c);
    *(int *)((longlong)param_1 + 0x24) = (int)local_58[2];
    *(undefined4 *)(param_1 + 5) = uVar9;
    *(int *)((longlong)param_1 + 0x2c) = iStack_50;
    *(int *)(param_1 + 6) = iStack_4c;
    *(longlong *)((longlong)param_1 + 0x34) = local_58[4];
    local_58 = plVar6;
    iVar12 = FUN_180575090(&local_58);
    if (iVar12 == 0) {
      FUN_180578cc0((longlong)param_1 + 0x34,&local_58);
    }
  }
  if (*(int *)(lVar5 + 0x60) == 0x6f75746c) {
    if ((char)param_1[4] != '\0') {
      FUN_180576690(lVar5 + 0x98,*(undefined4 *)((longlong)param_1 + 0x34),(int)param_1[7]);
    }
    uVar17 = *(uint *)(lVar14 + 0xc);
    puVar1 = (uint *)((longlong)param_1 + 0x3c);
    *puVar1 = uVar17;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar14 + 0x14);
    lVar16 = (longlong)*(int *)(lVar5 + 0x40) * (longlong)*(int *)(lVar14 + 8);
    *(int *)((longlong)param_1 + 0x44) =
         (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) + *(int *)(lVar14 + 0xc);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar14 + 0x14);
    if (*(short *)(lVar5 + 0x9a) != 0) {
      if (*(code **)(puVar8 + 0x38) != (code *)0x0) {
        iVar12 = (**(code **)(puVar8 + 0x38))(local_a8,lVar14,local_98 + 0x18,plVar13);
        if (iVar12 != 0) {
        }
        uVar17 = *puVar1;
      }
      if ((((int)uStack_78 == 1) || (*(uint *)(lVar14 + 0x58) < 2)) ||
         ((*(byte *)(lVar14 + 0x1178) & 4) != 0)) {
        iVar12 = *(int *)((longlong)param_1 + 0x44);
        uVar19 = uVar17 + 0x20 & 0xffffffc0;
        *puVar1 = uVar19;
        *(uint *)((longlong)param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        *(uint *)(lVar5 + 0xdc) = uVar19 - uVar17;
        iVar12 = *(int *)((longlong)param_1 + 0x44) - iVar12;
      }
      else {
        lVar15 = *(longlong *)(lVar14 + 0x60);
        lVar16 = lVar15 + (ulonglong)*(uint *)(lVar14 + 0x58) * 0x48;
        iVar21 = *(int *)((longlong)param_1 + 0x44) - *(int *)(lVar16 + -0x44);
        iVar3 = *(int *)(lVar15 + 8);
        iVar4 = *(int *)(lVar15 + 4);
        iVar12 = iVar3 - iVar4;
        iVar18 = *(int *)(lVar16 + -0x40) + iVar21;
        iVar20 = iVar12 + -8;
        if (0x17 < iVar4) {
          iVar20 = iVar12;
        }
        iVar12 = iVar18 + 8;
        if (0x17 < iVar21) {
          iVar12 = iVar18;
        }
        uVar17 = iVar20 + 0x20U & 0xffffffc0;
        *puVar1 = uVar17;
        uVar19 = iVar12 + 0x20U & 0xffffffc0;
        *(uint *)((longlong)param_1 + 0x44) = uVar19;
        if ((iVar3 <= (int)uVar17) && (0 < iVar4)) {
          uVar17 = uVar17 - 0x40;
          *puVar1 = uVar17;
        }
        if (((int)uVar19 <= *(int *)(lVar16 + -0x40)) && (0 < iVar21)) {
          *(uint *)((longlong)param_1 + 0x44) = uVar19 + 0x40;
        }
        *(uint *)(lVar5 + 0xdc) = uVar17 - iVar20;
        iVar12 = *(int *)((longlong)param_1 + 0x44) - iVar12;
      }
      *(int *)(lVar5 + 0xe0) = iVar12;
    }
  }
  lVar16 = local_98;
  lVar14 = (longlong)(*(int *)(lVar5 + 0x44) - *(int *)(lVar5 + 0x38)) * (longlong)(int)plVar13[2];
  lVar15 = (longlong)(*(int *)(lVar5 + 0x48) - *(int *)(lVar5 + 0x3c)) *
           (longlong)*(int *)((longlong)plVar13 + 0x14);
  local_b0 = CONCAT44((int)((ulonglong)(lVar15 + (lVar15 >> 0x3f) + 0x8000) >> 0x10),
                      (int)((ulonglong)(lVar14 + (lVar14 >> 0x3f) + 0x8000) >> 0x10));
  if ((char)param_1[4] != '\0') {
    FUN_1805765a0(local_98 + 0x18,(longlong)param_1 + 0x24);
    FUN_180578cc0(&local_b0,(longlong)param_1 + 0x24);
  }
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_180576690(lVar16 + 0x18,-*(int *)((longlong)param_1 + 0x3c),0);
  }
  FUN_180576310(lVar16 + 0x18,&local_58);
  local_58._0_4_ = (uint)local_58 & 0xffffffc0;
  *(uint *)(lVar5 + 0x38) = (uint)local_58;
  *(uint *)(lVar5 + 0x30) = (iStack_50 + 0x3fU & 0xffffffc0) - (uint)local_58;
  uVar17 = iStack_4c + 0x3fU & 0xffffffc0;
  *(uint *)(lVar5 + 0x3c) = uVar17;
  *(uint *)(lVar5 + 0x44) = (int)local_b0 + (uint)local_58 & 0xffffffc0;
  *(uint *)(lVar5 + 0x34) = uVar17 - (local_58._4_4_ & 0xffffffc0);
  *(uint *)(lVar5 + 0x48) = local_b0._4_4_ + uVar17 & 0xffffffc0;
  if ((int)uStack_78 == 1) {
LAB_18058703f:
    iVar12 = 0;
    if (*(int *)(lVar5 + 0x40) != 0) {
      iVar12 = *(int *)((longlong)param_1 + 0x44) - *(int *)((longlong)param_1 + 0x3c);
      *(int *)(lVar5 + 0x40) = iVar12;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(lVar5 + 8) + 8) & 4) == 0) {
      if (((*(uint *)(param_1[1] + 8) <= local_a8) ||
          (-1 < *(short *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)local_a8 * 2))) ||
         ((char)plVar13[5] == '\0')) goto LAB_18058703f;
    }
    lVar16 = (longlong)(int)plVar13[2] * (longlong)*(int *)(lVar5 + 0x40);
    iVar12 = (int)((ulonglong)((lVar16 >> 0x3f) + 0x8000 + lVar16) >> 0x10);
    *(int *)(lVar5 + 0x40) = iVar12;
    *(undefined8 *)(lVar5 + 0xdc) = 0;
  }
  lVar16 = (longlong)*(int *)((longlong)plVar13 + 0x14) * (longlong)*(int *)(lVar5 + 0x4c);
  *(undefined4 *)(lVar5 + 0x60) = 0x6f75746c;
  *(uint *)(lVar5 + 0x40) = iVar12 + 0x20U & 0xffffffc0;
  *(uint *)(lVar5 + 0x4c) =
       (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
}



