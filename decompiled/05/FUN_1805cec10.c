// FUN_1805cec10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cec10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cec10(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int *local_b0;
  int local_a8 [2];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [4];
  int local_74;
  uint local_70;
  ushort local_6c;
  uint local_68;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  iVar18 = 0;
  local_a8[0] = 0;
  lVar6 = 0;
  local_90 = 0;
  plVar15 = (longlong *)0x0;
  local_88 = uVar14;
  local_80 = param_2;
  local_a8[0] = FUN_180578280(param_1,&DAT_1806852d8,local_78);
  if (local_a8[0] != 0) {
  }
  if (local_74 == 0x774f4646) {
  }
  if (local_74 == 0x74746366) {
  }
  if (local_70 != *(uint *)(param_1 + 8)) {
  }
  if (0xffe < (ushort)(local_6c - 1)) {
  }
  if (local_70 <= (uint)local_6c * 0x14 + 0x2c) {
  }
  if (local_68 <= (uint)local_6c * 0x10 + 0xc) {
  }
  if ((local_68 & 3) != 0) {
  }
  if (local_60 == 0) {
    if (local_5c != 0) {
    }
    if (local_58 != 0) {
    }
  }
  else if ((local_5c != 0) && (local_58 == 0)) {
  }
  if ((local_54 == 0) && (local_50 != 0)) {
  }
  puVar5 = (undefined1 *)FUN_18057abe0(uVar14,0xc,local_a8);
  if ((local_a8[0] != 0) ||
     (lVar6 = FUN_18057aad0(uVar14,0x48,local_a8), local_98 = lVar6, local_a8[0] != 0))
  goto LAB_1805cf20c;
  *puVar5 = (char)((uint)local_74 >> 0x18);
  puVar5[1] = (char)((uint)local_74 >> 0x10);
  puVar5[2] = (char)((uint)local_74 >> 8);
  puVar5[3] = (undefined1)local_74;
  puVar5[4] = (char)(local_6c >> 8);
  puVar5[5] = (undefined1)local_6c;
  iVar16 = 0x1f;
  if (local_6c != 0) {
    for (; local_6c >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  puVar5[9] = (byte)iVar16;
  iVar8 = 0x10 << ((byte)iVar16 & 0x1f);
  iVar12 = (uint)local_6c * 0x10 - iVar8;
  puVar5[7] = (char)iVar8;
  puVar5[0xb] = (char)iVar12;
  puVar5[6] = (char)((uint)iVar8 >> 8);
  puVar5[8] = (char)((uint)iVar16 >> 8);
  puVar5[10] = (char)((uint)iVar12 >> 8);
  local_b0 = local_a8;
  local_b8 = (undefined1 *)0x0;
  local_90 = FUN_18057ac40(uVar14,0x18,0,local_6c);
  if (local_a8[0] != 0) goto LAB_1805cf20c;
  local_b0 = local_a8;
  local_b8 = (undefined1 *)0x0;
  plVar7 = (longlong *)FUN_18057ac40(uVar14,8,0,local_6c);
  local_a0 = plVar7;
  if (local_a8[0] != 0) {
    plVar15 = plVar7;
    goto LAB_1805cf20c;
  }
  local_a8[0] = FUN_180577bf0(param_1,(uint)local_6c * 0x14);
  if (local_a8[0] != 0) {
    plVar15 = plVar7;
    goto LAB_1805cf20c;
  }
  iVar16 = 0;
  if (local_6c != 0) {
    puVar10 = (undefined4 *)(local_90 + 8);
    do {
      uVar4 = FUN_180577e30(param_1);
      puVar10[-2] = uVar4;
      uVar4 = FUN_180577e30(param_1);
      puVar10[-1] = uVar4;
      uVar4 = FUN_180577e30(param_1);
      *puVar10 = uVar4;
      uVar4 = FUN_180577e30(param_1);
      puVar10[1] = uVar4;
      uVar4 = FUN_180577e30(param_1);
      puVar10[2] = uVar4;
      if ((uint)puVar10[-2] <= (uint)plVar15) {
        FUN_180577d30(param_1);
        local_a8[0] = 8;
        plVar15 = local_a0;
        lVar6 = local_98;
        goto LAB_1805cf20c;
      }
      plVar15 = (longlong *)(ulonglong)(uint)puVar10[-2];
      puVar10 = puVar10 + 6;
      lVar6 = (longlong)iVar16;
      iVar16 = iVar16 + 1;
      *plVar7 = local_90 + lVar6 * 0x18;
      plVar7 = plVar7 + 1;
    } while (iVar16 < (int)(uint)local_6c);
    plVar7 = local_a0;
    uVar14 = local_88;
  }
  FUN_180577d30(param_1);
  FUN_1806192c0(plVar7,local_6c,8,FUN_1805c9d00);
  plVar15 = local_a0;
  iVar16 = 0;
  uVar13 = (uint)local_6c * 0x10 + 0xc;
  uVar9 = (uint)local_6c * 0x14 + 0x2c;
  if (local_6c != 0) {
    plVar7 = local_a0;
    do {
      lVar6 = *plVar7;
      if (((((*(uint *)(lVar6 + 4) != uVar9) || (uVar1 = *(uint *)(lVar6 + 8), local_70 < uVar1)) ||
           (local_70 - uVar1 < *(uint *)(lVar6 + 4))) ||
          ((uVar2 = *(uint *)(lVar6 + 0xc), local_68 < uVar2 || (local_68 - uVar2 < uVar13)))) ||
         (uVar2 < uVar1)) goto LAB_1805cf12b;
      *(uint *)(lVar6 + 0x14) = uVar13;
      iVar16 = iVar16 + 1;
      uVar9 = uVar9 + (uVar1 + 3 & 0xfffffffc);
      plVar7 = plVar7 + 1;
      uVar13 = uVar13 + (uVar2 + 3 & 0xfffffffc);
    } while (iVar16 < (int)(uint)local_6c);
  }
  if (local_60 == 0) {
LAB_1805cefb5:
    if (local_54 != 0) {
      uVar9 = uVar9 + 3 & 0xfffffffc;
      if ((local_54 != uVar9) || (local_70 < local_54 + local_50)) goto LAB_1805cf12b;
      uVar9 = uVar9 + local_50;
    }
    if ((uVar13 != local_68) || (uVar9 != local_70)) goto LAB_1805cf12b;
    local_b0 = local_a8;
    local_b8 = puVar5;
    puVar5 = (undefined1 *)FUN_18057ac40(uVar14,1,0xc,local_68);
    if (local_a8[0] == 0) {
      if (local_6c != 0) {
        puVar11 = (uint *)(local_90 + 0x14);
        puVar17 = puVar5 + 0xc;
        do {
          *puVar17 = *(undefined1 *)((longlong)puVar11 + -0x11);
          puVar17[1] = *(undefined1 *)((longlong)puVar11 + -0x12);
          puVar17[2] = (char)(puVar11[-5] >> 8);
          puVar17[3] = (char)puVar11[-5];
          puVar17[4] = *(undefined1 *)((longlong)puVar11 + -1);
          puVar17[5] = *(undefined1 *)((longlong)puVar11 + -2);
          puVar17[6] = (char)(puVar11[-1] >> 8);
          puVar17[7] = (char)puVar11[-1];
          puVar17[8] = *(undefined1 *)((longlong)puVar11 + 3);
          puVar17[9] = *(undefined1 *)((longlong)puVar11 + 2);
          puVar17[10] = (char)(*puVar11 >> 8);
          puVar17[0xb] = (char)*puVar11;
          puVar17[0xc] = *(undefined1 *)((longlong)puVar11 + -5);
          puVar17[0xd] = *(undefined1 *)((longlong)puVar11 + -6);
          puVar17[0xe] = (char)(puVar11[-2] >> 8);
          puVar17[0xf] = (char)puVar11[-2];
          local_a8[0] = FUN_1805788b0(param_1,puVar11[-4]);
          if ((local_a8[0] != 0) ||
             (local_a8[0] = FUN_180577bf0(param_1,puVar11[-3]), local_a8[0] != 0))
          goto LAB_1805cf132;
          uVar9 = puVar11[-2];
          if (puVar11[-3] != uVar9) {
            local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,puVar11[-3]);
            local_a0 = (longlong *)CONCAT44(local_a0._4_4_,uVar9);
            local_a8[0] = FUN_1805d7720(uVar14,puVar5 + *puVar11,&local_a0);
            if (local_a8[0] == 0) {
              if ((uint)local_a0 == puVar11[-2]) goto LAB_1805cf16a;
              local_a8[0] = 8;
            }
            FUN_180577d30(param_1);
            lVar6 = local_98;
            goto LAB_1805cf20c;
          }
          FUN_18063aed0(puVar5 + *puVar11,*(undefined8 *)(param_1 + 0x38),uVar9);
LAB_1805cf16a:
          FUN_180577d30(param_1);
          for (uVar9 = puVar11[-2] + *puVar11; (uVar9 & 3) != 0; uVar9 = uVar9 + 1) {
            puVar5[uVar9] = 0;
          }
          iVar18 = iVar18 + 1;
          puVar11 = puVar11 + 6;
          puVar17 = puVar17 + 0x10;
        } while (iVar18 < (int)(uint)local_6c);
      }
      lVar6 = local_98;
      FUN_1805780d0(local_98,puVar5,local_68);
      lVar3 = local_80;
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_1 + 0x30);
      *(code **)(lVar6 + 0x28) = FUN_1805cc3d0;
      FUN_180577dc0(*(undefined8 *)(local_80 + 0xa0),*(uint *)(local_80 + 8) >> 10 & 1);
      puVar11 = (uint *)(lVar3 + 8);
      *puVar11 = *puVar11 & 0xfffffbff;
      *(longlong *)(lVar3 + 0xa0) = lVar6;
      goto LAB_1805cf20c;
    }
  }
  else {
    if ((local_60 == uVar9) && (local_60 + local_5c <= local_70)) {
      uVar9 = uVar9 + local_5c;
      goto LAB_1805cefb5;
    }
LAB_1805cf12b:
    local_a8[0] = 8;
  }
LAB_1805cf132:
  lVar6 = local_98;
LAB_1805cf20c:
  uVar14 = local_88;
  FUN_18057abd0(local_88,local_90);
  FUN_18057abd0(uVar14,plVar15);
  if (local_a8[0] != 0) {
    FUN_18057abd0(uVar14,puVar5);
    FUN_180577bd0(lVar6);
    FUN_18057abd0(uVar14,lVar6);
  }
}



