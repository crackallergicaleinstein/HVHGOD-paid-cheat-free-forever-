// FUN_180588160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180588160 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180588160(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8;
  byte local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8 [2];
  undefined8 local_b0;
  ulonglong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  ushort local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  ushort local_46;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  puVar19 = *(uint **)(param_1 + 0x408);
  local_b0 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(ushort *)(param_1 + 0xe);
  uVar14 = (ulonglong)uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  local_c8 = 0;
  local_c0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_c4 = 0;
  uVar13 = (uint)uVar3;
  local_bc = uVar13;
  local_70 = param_2;
  if (puVar19 == (uint *)0x0) {
    local_c8 = (**(code **)(param_1 + 0x2a0))(param_1,0x66766172,uVar1,local_78);
    if (local_c8 != 0) {
    }
    local_c0 = FUN_1805780f0(uVar1);
    local_c8 = FUN_180578280(uVar1,&DAT_18066f818,&local_68);
    if (local_c8 != 0) {
    }
    if (uVar13 < local_60 >> 0x10) {
    }
    local_c4 = (uint)local_5c == (uint)local_68._6_2_ * 4 + 6;
    puVar6 = (uint *)FUN_18057aad0(local_b0,0x98,&local_c8);
    *(uint **)(param_1 + 0x408) = puVar6;
    if (local_c8 != 0) {
    }
    uVar13 = (uint)local_68._6_2_;
    *puVar6 = (uint)local_68._6_2_;
  }
  else {
    uVar13 = *puVar19;
  }
  uVar16 = (uint)uVar3;
  local_a8 = (ulonglong)(uVar13 * uVar16);
  local_88 = uVar14 * 0x10;
  uVar17 = (ulonglong)uVar13;
  local_90 = (ulonglong)uVar13 * 0x20;
  local_98 = uVar17 * 2 + 7 & 0xfffffffffffffff8;
  local_80 = local_a8 * 4 + 7 & 0xfffffffffffffff8;
  if (puVar19 != (uint *)0x0) goto LAB_1805886aa;
  *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x20) =
       (ulonglong)(uVar13 * 5) + local_88 + local_90 + local_80 + local_98 + 0x20;
  local_a0 = (uint *)FUN_18057aad0(local_b0,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),
                                   &local_c8);
  if (local_c8 != 0) {
  }
  puVar19 = local_a0 + 8;
  *(uint **)(*(longlong *)(param_1 + 0x408) + 0x18) = local_a0;
  *local_a0 = uVar13;
  *(ulonglong *)(local_a0 + 4) = (longlong)puVar19 + local_98;
  local_a0[1] = 0xffffffff;
  local_a0[2] = uVar16;
  lVar9 = (longlong)puVar19 + local_98 + local_90 + local_88;
  *(ulonglong *)(local_a0 + 6) = (longlong)puVar19 + local_98 + local_90;
  if (uVar16 != 0) {
    lVar12 = 0;
    do {
      *(longlong *)(lVar12 + *(longlong *)(local_a0 + 6)) = lVar9;
      lVar9 = lVar9 + uVar17 * 4;
      uVar14 = uVar14 - 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar14 != 0);
  }
  lVar9 = local_80 + local_88 + *(longlong *)(local_a0 + 6);
  if (uVar13 != 0) {
    lVar12 = 0;
    do {
      *(longlong *)(lVar12 + *(longlong *)(local_a0 + 4)) = lVar9;
      lVar9 = lVar9 + 5;
      uVar17 = uVar17 - 1;
      lVar12 = lVar12 + 0x20;
    } while (uVar17 != 0);
  }
  iVar4 = FUN_1805788b0(uVar1,local_68._4_2_ + local_c0);
  if (iVar4 != 0) {
  }
  uVar16 = 0;
  plVar15 = *(longlong **)(local_a0 + 4);
  if (uVar13 != 0) {
    do {
      local_c8 = 0;
      iVar4 = FUN_180578280(uVar1,&DAT_18066f840,&local_58);
      if (iVar4 != 0) {
      }
      *(undefined4 *)(plVar15 + 1) = local_54;
      *(undefined4 *)((longlong)plVar15 + 0xc) = local_50;
      *(undefined4 *)(plVar15 + 2) = local_4c;
      *(uint *)(plVar15 + 3) = (uint)local_46;
      *(undefined4 *)((longlong)plVar15 + 0x14) = local_58;
      *(char *)*plVar15 = (char)((uint)local_58 >> 0x18);
      *(undefined1 *)(*plVar15 + 1) = *(undefined1 *)((longlong)plVar15 + 0x16);
      *(undefined1 *)(*plVar15 + 2) = *(undefined1 *)((longlong)plVar15 + 0x15);
      *(undefined1 *)(*plVar15 + 3) = *(undefined1 *)((longlong)plVar15 + 0x14);
      *(undefined1 *)(*plVar15 + 4) = 0;
      *(undefined2 *)puVar19 = local_48;
      iVar4 = *(int *)((longlong)plVar15 + 0xc);
      if ((iVar4 < (int)plVar15[1]) || ((int)plVar15[2] < iVar4)) {
        *(int *)(plVar15 + 1) = iVar4;
        *(int *)(plVar15 + 2) = iVar4;
      }
      plVar15 = plVar15 + 4;
      puVar19 = (uint *)((longlong)puVar19 + 2);
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar13);
  }
  local_c8 = 0;
  local_d0 = &local_c8;
  lVar9 = *(longlong *)(param_1 + 0x408);
  local_d8 = 0;
  uVar7 = FUN_18057ad10(local_b0,4,0,local_a8 & 0xffffffff);
  *(undefined8 *)(lVar9 + 0x28) = uVar7;
  if (local_c8 != 0) {
  }
  uVar16 = (uint)local_60._2_2_;
  if ((local_60._2_2_ != 0) && (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0')) {
    uVar5 = FUN_1805780f0(uVar1);
    FUN_180591860(param_1);
    iVar4 = FUN_1805788b0(uVar1,uVar5);
    if (iVar4 != 0) {
    }
    uVar16 = local_60 >> 0x10;
    local_c8 = 0;
  }
  local_c0 = 0;
  local_a8 = *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x28);
  puVar20 = *(undefined8 **)(local_a0 + 6);
  if ((short)uVar16 != 0) {
    local_b8[0] = ((uint)local_c4 + uVar13 * 2 + 2) * 2;
    do {
      uVar14 = (ulonglong)uVar13;
      local_c8 = FUN_180577bf0(uVar1,local_b8[0]);
      if (local_c8 != 0) {
      }
      uVar3 = FUN_180577ed0(uVar1);
      *(uint *)(puVar20 + 1) = (uint)uVar3;
      FUN_180577ed0(uVar1);
      puVar11 = (undefined4 *)*puVar20;
      if (uVar13 != 0) {
        do {
          uVar5 = FUN_180577e30(uVar1);
          *puVar11 = uVar5;
          puVar11 = puVar11 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_c4 == 0) {
        uVar16 = 0xffff;
      }
      else {
        uVar3 = FUN_180577ed0(uVar1);
        uVar16 = (uint)uVar3;
      }
      uVar14 = local_a8;
      *(uint *)((longlong)puVar20 + 0xc) = uVar16;
      FUN_1805928a0(param_1,uVar13,*puVar20,local_a8);
      local_a8 = uVar14 + (ulonglong)uVar13 * 4;
      FUN_180577d30(uVar1);
      puVar20 = puVar20 + 2;
      uVar16 = (uint)local_60._2_2_;
      local_c0 = local_c0 + 1;
    } while (local_c0 < local_60._2_2_);
  }
  puVar19 = local_a0;
  uVar14 = (ulonglong)uVar13;
  if (local_bc != uVar16) {
    lVar9 = *(longlong *)(param_1 + 0x2d0);
    uVar5 = 0x11;
    cVar2 = (**(code **)(lVar9 + 0x160))(param_1,0x11,local_b8,&local_c0);
    if (cVar2 == '\0') {
      uVar5 = 2;
      cVar2 = (**(code **)(lVar9 + 0x160))(param_1,2,local_b8,&local_c0);
      if (cVar2 == '\0') goto LAB_1805886a2;
    }
    cVar2 = (**(code **)(lVar9 + 0x160))(param_1,6,local_b8,&local_c0);
    if (cVar2 != '\0') {
      uVar17 = (ulonglong)local_60._2_2_;
      *(uint *)(param_1 + 0x424) = local_bc;
      lVar9 = *(longlong *)(puVar19 + 6);
      puVar11 = *(undefined4 **)(lVar9 + uVar17 * 0x10);
      *(undefined4 *)(lVar9 + 8 + uVar17 * 0x10) = uVar5;
      *(undefined4 *)(lVar9 + 0xc + uVar17 * 0x10) = 6;
      if (uVar13 != 0) {
        puVar10 = (undefined4 *)(*(longlong *)(puVar19 + 4) + 0xc);
        do {
          uVar5 = *puVar10;
          puVar10 = puVar10 + 8;
          *puVar11 = uVar5;
          puVar11 = puVar11 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
  }
LAB_1805886a2:
  FUN_180592140(param_1);
LAB_1805886aa:
  plVar15 = local_70;
  uVar14 = (ulonglong)uVar13;
  if ((local_70 != (longlong *)0x0) &&
     (lVar9 = FUN_18057ab40(local_b0,*(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x18),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),&local_c8),
     local_c8 == 0)) {
    lVar12 = local_98 + 0x20 + lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar12;
    lVar18 = lVar12 + local_88 + local_90;
    *(longlong *)(lVar9 + 0x18) = lVar12 + local_90;
    if (*(int *)(lVar9 + 8) != 0) {
      uVar17 = 0;
      do {
        uVar16 = (int)uVar17 + 1;
        *(longlong *)(*(longlong *)(lVar9 + 0x18) + uVar17 * 0x10) = lVar18;
        lVar18 = lVar18 + uVar14 * 4;
        uVar17 = (ulonglong)uVar16;
      } while (uVar16 < *(uint *)(lVar9 + 8));
    }
    plVar8 = *(longlong **)(lVar9 + 0x10);
    lVar12 = local_80 + local_88 + *(longlong *)(lVar9 + 0x18);
    if (uVar13 != 0) {
      do {
        iVar4 = *(int *)((longlong)plVar8 + 0x14);
        *plVar8 = lVar12;
        if (iVar4 == 0x77676874) {
          *plVar8 = (longlong)"Weight";
        }
        else if (iVar4 == 0x77647468) {
          *plVar8 = (longlong)"Width";
        }
        else if (iVar4 == 0x6f70737a) {
          *plVar8 = (longlong)"OpticalSize";
        }
        else if (iVar4 == 0x736c6e74) {
          *plVar8 = (longlong)"Slant";
        }
        else if (iVar4 == 0x6974616c) {
          *plVar8 = (longlong)"Italic";
        }
        lVar12 = lVar12 + 5;
        plVar8 = plVar8 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *plVar15 = lVar9;
  }
}



