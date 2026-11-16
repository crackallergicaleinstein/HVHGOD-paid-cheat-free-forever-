// FUN_1804d27c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d27c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d27c0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  int local_a8 [4];
  ulonglong local_98;
  undefined1 local_90 [24];
  longlong local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  *(longlong *)(param_1 + 8) = param_2;
  uVar14 = (ulonglong)param_3;
  iVar15 = 0;
  *(uint *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar7 = FUN_1804d2440(param_2,param_3,&DAT_18085b404);
  iVar8 = FUN_1804d2440(param_2,uVar14,&DAT_18085b3fc);
  *(int *)(param_1 + 0x18) = iVar8;
  iVar9 = FUN_1804d2440(param_2,param_3,&DAT_1807d34d0);
  *(int *)(param_1 + 0x1c) = iVar9;
  local_a8[0] = FUN_1804d2440(param_2,param_3,&DAT_18085b3f4);
  *(int *)(param_1 + 0x20) = local_a8[0];
  local_a8[2] = FUN_1804d2440(param_2,param_3,&DAT_18085b424);
  *(int *)(param_1 + 0x24) = local_a8[2];
  local_a8[1] = FUN_1804d2440(param_2,uVar14,&DAT_18085b41c);
  *(int *)(param_1 + 0x28) = local_a8[1];
  uVar10 = FUN_1804d2440(param_2,param_3,&DAT_18085b414);
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  uVar10 = FUN_1804d2440(param_2,param_3,&DAT_18085b40c);
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  if (uVar7 == 0) {
  }
  if (iVar9 == 0) {
  }
  if (local_a8[2] == 0) {
  }
  if (local_a8[1] == 0) {
  }
  if (local_a8[0] != 0) {
    if (iVar8 == 0) {
    }
    local_98 = (ulonglong)param_3;
    goto LAB_1804d2c59;
  }
  iVar8 = 0;
  local_a8[3] = 2;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  uVar17 = (uint)CONCAT11(*(undefined1 *)(param_2 + 4 + uVar14),
                          *(undefined1 *)(param_2 + 5 + uVar14));
  if (uVar17 == 0) {
  }
  while ((((pcVar13 = (char *)((ulonglong)(iVar8 * 0x10 + param_3 + 0xc) + param_2), *pcVar13 != 'C'
           || (pcVar13[1] != 'F')) || (pcVar13[2] != 'F')) || (pcVar13[3] != ' '))) {
    iVar8 = iVar8 + 1;
    if ((int)uVar17 <= iVar8) {
    }
  }
  uVar17 = (uint)(byte)pcVar13[9] * 0x10000 + (uint)(byte)pcVar13[10] * 0x100 +
           (uint)(byte)pcVar13[8] * 0x1000000 + (uint)(byte)pcVar13[0xb];
  if (uVar17 == 0) {
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(ulonglong *)(param_1 + 0x40) = (ulonglong)uVar17 + param_2;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x20000000;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x40);
  iVar8 = auVar2._8_4_ + 2;
  uStack_6c = auVar2._12_4_;
  if ((((int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) < iVar8) || (iVar8 < 0)) ||
     ((int)uStack_6c <= iVar8)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (uint)*(byte *)((longlong)iVar8 + auVar2._0_8_);
  }
  uStack_70 = uStack_6c;
  if ((int)uVar17 <= (int)uStack_6c) {
    uStack_70 = uVar17;
  }
  local_78 = auVar2._0_8_;
  local_98 = uVar14;
  FUN_1804d1e20(&local_b8,&local_78);
  plVar11 = (longlong *)FUN_1804d1e20(&local_b8,&local_78);
  local_b8 = *plVar11;
  uStack_b0 = plVar11[1];
  plVar11 = (longlong *)FUN_1804d22e0(&local_68,&local_b8,0);
  local_68 = *plVar11;
  lStack_60 = plVar11[1];
  FUN_1804d1e20(&local_b8,&local_78);
  puVar12 = (undefined8 *)FUN_1804d1e20(&local_b8,&local_78);
  uVar6 = puVar12[1];
  *(undefined8 *)(param_1 + 0x60) = *puVar12;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  plVar11 = (longlong *)FUN_1804d2170(&local_b8,&local_68,0x11);
  lVar16 = 0;
  local_b8 = *plVar11;
  uStack_b0 = plVar11[1];
  do {
    if (uStack_b0._4_4_ <= (int)uStack_b0) break;
    iVar8 = FUN_1804d1f40(&local_b8);
    local_a8[lVar16] = iVar8;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 1);
  plVar11 = (longlong *)FUN_1804d2170(&local_b8,&local_68,0x106);
  lVar16 = 0;
  local_b8 = *plVar11;
  uStack_b0 = plVar11[1];
  do {
    if (uStack_b0._4_4_ <= (int)uStack_b0) break;
    iVar8 = FUN_1804d1f40(&local_b8);
    local_a8[lVar16 + 3] = iVar8;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 1);
  plVar11 = (longlong *)FUN_1804d2170(&local_b8,&local_68,0x124);
  lVar16 = 0;
  local_b8 = *plVar11;
  uStack_b0 = plVar11[1];
  do {
    if (uStack_b0._4_4_ <= (int)uStack_b0) break;
    iVar8 = FUN_1804d1f40(&local_b8);
    local_a8[lVar16 + 1] = iVar8;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 1);
  plVar11 = (longlong *)FUN_1804d2170(&local_b8,&local_68,0x125);
  lVar16 = 0;
  local_b8 = *plVar11;
  uStack_b0 = plVar11[1];
  do {
    if (uStack_b0._4_4_ <= (int)uStack_b0) break;
    iVar8 = FUN_1804d1f40(&local_b8);
    local_a8[lVar16 + 2] = iVar8;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 1);
  local_b8 = local_68;
  uStack_b0 = lStack_60;
  local_68 = local_78;
  lStack_60 = local_78._8_8_;
  uVar17 = uStack_6c;
  puVar12 = (undefined8 *)FUN_1804d2640(local_90,&local_68,&local_b8);
  iVar9 = local_a8[2];
  iVar8 = local_a8[0];
  uVar6 = puVar12[1];
  *(undefined8 *)(param_1 + 0x70) = *puVar12;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  if (local_a8[3] != 2) {
  }
  if (local_a8[0] == 0) {
  }
  if (local_a8[1] == 0) {
    uVar17 = uStack_6c;
  }
  else {
    lVar16 = (longlong)local_a8[2];
    if (local_a8[2] == 0) {
    }
    if ((int)uVar17 < local_a8[1]) {
LAB_1804d2bd7:
      uStack_70 = uVar17;
    }
    else {
      uStack_70 = local_a8[1];
      if (local_a8[1] < 0) goto LAB_1804d2bd7;
    }
    puVar12 = (undefined8 *)FUN_1804d1e20(local_90,&local_78);
    local_68 = 0;
    lStack_60 = 0;
    uVar6 = puVar12[1];
    *(undefined8 *)(param_1 + 0x80) = *puVar12;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    if (((-1 < iVar9) && (-1 < (int)(uStack_6c - iVar9))) && (iVar9 <= (int)uStack_6c)) {
      lStack_60 = (ulonglong)(uStack_6c - iVar9) << 0x20;
      local_68 = lVar16 + local_78;
    }
    *(longlong *)(param_1 + 0x90) = local_68;
    *(longlong *)(param_1 + 0x98) = lStack_60;
    uVar17 = uStack_6c;
  }
  if ((int)uVar17 < iVar8) {
LAB_1804d2c3c:
    uStack_70 = uVar17;
  }
  else {
    uStack_70 = iVar8;
    if (iVar8 < 0) goto LAB_1804d2c3c;
  }
  puVar12 = (undefined8 *)FUN_1804d1e20(local_90,&local_78);
  uVar6 = puVar12[1];
  *(undefined8 *)(param_1 + 0x50) = *puVar12;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
LAB_1804d2c59:
  iVar8 = 0;
  uVar17 = (uint)CONCAT11(*(undefined1 *)(local_98 + 4 + param_2),
                          *(undefined1 *)(local_98 + 5 + param_2));
  if (uVar17 != 0) {
    do {
      pcVar13 = (char *)((ulonglong)(iVar8 * 0x10 + param_3 + 0xc) + param_2);
      if ((((*pcVar13 == 'm') && (pcVar13[1] == 'a')) && (pcVar13[2] == 'x')) && (pcVar13[3] == 'p')
         ) {
        uVar17 = (uint)(byte)pcVar13[9] * 0x10000 + (uint)(byte)pcVar13[10] * 0x100 +
                 (uint)(byte)pcVar13[8] * 0x1000000 + (uint)(byte)pcVar13[0xb];
        if (uVar17 != 0) {
          uVar17 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar17 + 4 + param_2),
                                  *(undefined1 *)((ulonglong)uVar17 + 5 + param_2));
          goto LAB_1804d2ca2;
        }
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar17);
  }
  uVar17 = 0xffff;
LAB_1804d2ca2:
  *(uint *)(param_1 + 0x14) = uVar17;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  uVar3 = *(undefined1 *)((ulonglong)uVar7 + 2 + param_2);
  uVar4 = *(undefined1 *)((ulonglong)uVar7 + 3 + param_2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar17 = (uint)CONCAT11(uVar3,uVar4);
  if (uVar17 != 0) {
    do {
      uVar1 = uVar7 + 4 + iVar15 * 8;
      uVar14 = (ulonglong)uVar1;
      sVar5 = CONCAT11(*(undefined1 *)((ulonglong)uVar1 + param_2),
                       *(undefined1 *)((ulonglong)uVar1 + 1 + param_2));
      if ((sVar5 == 0) ||
         ((sVar5 == 3 &&
          ((sVar5 = CONCAT11(*(undefined1 *)(uVar14 + 2 + param_2),
                             *(undefined1 *)(uVar14 + 3 + param_2)), sVar5 == 1 || (sVar5 == 10)))))
         ) {
        *(uint *)(param_1 + 0x38) =
             (uint)*(byte *)(uVar14 + 7 + param_2) +
             (uint)CONCAT21(CONCAT11(*(undefined1 *)(uVar14 + 4 + param_2),
                                     *(undefined1 *)(uVar14 + 5 + param_2)),
                            *(undefined1 *)(uVar14 + 6 + param_2)) * 0x100 + uVar7;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)uVar17);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(uint *)(param_1 + 0x3c) =
         (uint)CONCAT11(*(undefined1 *)((longlong)*(int *)(param_1 + 0x1c) + 0x32 + param_2),
                        *(undefined1 *)((longlong)*(int *)(param_1 + 0x1c) + 0x33 + param_2));
  }
}



