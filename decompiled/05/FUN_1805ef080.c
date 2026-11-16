// FUN_1805ef080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ef080 */

ulonglong FUN_1805ef080(undefined2 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,
                       undefined4 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ulonglong uVar19;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 *local_f8;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  
  if (9 < param_4) {
    uVar13 = (ulonglong)*param_3;
    uVar4 = param_3[1];
    uVar19 = (ulonglong)param_3[2];
    uVar5 = *param_5;
    puVar1 = param_5 + 1;
    lVar2 = (longlong)(param_3 + 3) + uVar13;
    local_58 = lVar2 + (ulonglong)uVar4;
    uVar11 = param_2 + 3 >> 2;
    local_110 = (undefined2 *)(uVar11 + (longlong)param_1);
    local_108 = (undefined2 *)(uVar11 + (longlong)local_110);
    puVar12 = (undefined2 *)(uVar11 + (longlong)local_108);
    uVar11 = (((param_4 - uVar19) - (ulonglong)uVar4) - uVar13) - 6;
    if (uVar11 <= param_4) {
      local_50 = local_110;
      local_48 = local_108;
      uVar13 = FUN_1805edea0(&local_d8,param_3 + 3,uVar13);
      if (0xffffffffffffff88 < uVar13) {
        return uVar13;
      }
      uVar13 = FUN_1805edea0(&local_b8,lVar2,uVar4);
      lVar2 = local_58;
      if (0xffffffffffffff88 < uVar13) {
        return uVar13;
      }
      uVar13 = FUN_1805edea0(&local_98,local_58,uVar19 & 0xffffffff);
      if (0xffffffffffffff88 < uVar13) {
        return uVar13;
      }
      uVar11 = FUN_1805edea0(&local_78,lVar2 + uVar19,uVar11);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      iVar7 = FUN_1805e9920(&local_78);
      iVar8 = FUN_1805e9920(&local_98);
      iVar9 = FUN_1805e9920(&local_b8);
      iVar10 = FUN_1805e9920(&local_d8);
      local_f8 = puVar12;
      puVar14 = local_110;
      if (((iVar7 == 0 && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) {
        puVar14 = (undefined2 *)((longlong)param_1 + (param_2 - 7));
        do {
          if (puVar14 <= local_f8) break;
          bVar15 = -(char)uVar5 & 0x3f;
          uVar11 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar15;
          *param_1 = *(undefined2 *)(puVar1 + uVar11);
          param_1 = (undefined2 *)
                    ((ulonglong)*(byte *)((longlong)puVar1 + uVar11 * 4 + 3) + (longlong)param_1);
          uVar13 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar15;
          local_d0 = (uint)*(byte *)((longlong)puVar1 + uVar11 * 4 + 2) + local_d0;
          *local_110 = *(undefined2 *)(puVar1 + uVar13);
          local_110 = (undefined2 *)
                      ((longlong)local_110 + (ulonglong)*(byte *)((longlong)puVar1 + uVar13 * 4 + 3)
                      );
          local_b0 = (uint)*(byte *)((longlong)puVar1 + uVar13 * 4 + 2) + local_b0;
          uVar11 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar15;
          bVar18 = -(char)uVar5 & 0x3f;
          *local_108 = *(undefined2 *)(puVar1 + uVar11);
          local_108 = (undefined2 *)
                      ((longlong)local_108 + (ulonglong)*(byte *)((longlong)puVar1 + uVar11 * 4 + 3)
                      );
          local_90 = (uint)*(byte *)((longlong)puVar1 + uVar11 * 4 + 2) + local_90;
          puVar3 = puVar1 + ((ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar15);
          *local_f8 = *(undefined2 *)puVar3;
          local_70 = (uint)*(byte *)((longlong)puVar3 + 2) + local_70;
          local_f8 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar3 + 3) + (longlong)local_f8)
          ;
          puVar3 = puVar1 + ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar18);
          *param_1 = *(undefined2 *)puVar3;
          local_d0 = local_d0 + (uint)*(byte *)((longlong)puVar3 + 2);
          param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)puVar3 + 3));
          puVar3 = puVar1 + ((ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar18);
          *local_110 = *(undefined2 *)puVar3;
          local_b0 = local_b0 + (uint)*(byte *)((longlong)puVar3 + 2);
          local_110 = (undefined2 *)
                      ((longlong)local_110 + (ulonglong)*(byte *)((longlong)puVar3 + 3));
          puVar3 = puVar1 + ((ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar18);
          *local_108 = *(undefined2 *)puVar3;
          local_90 = local_90 + (uint)*(byte *)((longlong)puVar3 + 2);
          local_108 = (undefined2 *)
                      ((longlong)local_108 + (ulonglong)*(byte *)((longlong)puVar3 + 3));
          puVar3 = puVar1 + ((ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar18);
          *local_f8 = *(undefined2 *)puVar3;
          local_70 = local_70 + (uint)*(byte *)((longlong)puVar3 + 2);
          local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)((longlong)puVar3 + 3))
          ;
          puVar3 = puVar1 + ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar18);
          *param_1 = *(undefined2 *)puVar3;
          local_d0 = local_d0 + (uint)*(byte *)((longlong)puVar3 + 2);
          param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)puVar3 + 3));
          puVar3 = puVar1 + ((ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar18);
          *local_110 = *(undefined2 *)puVar3;
          local_b0 = local_b0 + (uint)*(byte *)((longlong)puVar3 + 2);
          local_110 = (undefined2 *)
                      ((longlong)local_110 + (ulonglong)*(byte *)((longlong)puVar3 + 3));
          puVar3 = puVar1 + ((ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar18);
          *local_108 = *(undefined2 *)puVar3;
          local_90 = local_90 + (uint)*(byte *)((longlong)puVar3 + 2);
          local_108 = (undefined2 *)
                      ((longlong)local_108 + (ulonglong)*(byte *)((longlong)puVar3 + 3));
          puVar3 = puVar1 + ((ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar18);
          *local_f8 = *(undefined2 *)puVar3;
          local_70 = local_70 + (uint)*(byte *)((longlong)puVar3 + 2);
          local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)((longlong)puVar3 + 3))
          ;
          uVar11 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar18;
          *param_1 = *(undefined2 *)(puVar1 + uVar11);
          local_d0 = (uint)*(byte *)((longlong)param_5 + uVar11 * 4 + 6) + local_d0;
          param_1 = (undefined2 *)
                    ((ulonglong)*(byte *)((longlong)param_5 + uVar11 * 4 + 7) + (longlong)param_1);
          uVar19 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar18;
          uVar11 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar18;
          *local_110 = *(undefined2 *)(puVar1 + uVar19);
          local_b0 = (uint)*(byte *)((longlong)param_5 + uVar19 * 4 + 6) + local_b0;
          uVar13 = (ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar18;
          local_110 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)param_5 + uVar19 * 4 + 7) +
                      (longlong)local_110);
          *local_108 = *(undefined2 *)(puVar1 + uVar11);
          local_90 = (uint)*(byte *)((longlong)param_5 + uVar11 * 4 + 6) + local_90;
          local_108 = (undefined2 *)
                      ((ulonglong)*(byte *)((longlong)param_5 + uVar11 * 4 + 7) +
                      (longlong)local_108);
          *local_f8 = *(undefined2 *)(puVar1 + uVar13);
          local_70 = (uint)*(byte *)((longlong)param_5 + uVar13 * 4 + 6) + local_70;
          local_f8 = (undefined2 *)
                     ((ulonglong)*(byte *)((longlong)param_5 + uVar13 * 4 + 7) + (longlong)local_f8)
          ;
          iVar7 = FUN_1805e9920(&local_78);
          iVar8 = FUN_1805e9920(&local_98);
          iVar9 = FUN_1805e9920(&local_b8);
          iVar10 = FUN_1805e9920(&local_d8);
        } while (((iVar7 == 0 && iVar8 == 0) && iVar9 == 0) && iVar10 == 0);
        puVar14 = local_50;
      }
      puVar6 = local_48;
      if (((param_1 <= puVar14) && (local_110 <= local_48)) && (local_108 <= puVar12)) {
        FUN_1805ea8e0(param_1,&local_d8,puVar14,puVar1,uVar5);
        FUN_1805ea8e0(local_110,&local_b8,puVar6,puVar1,uVar5);
        FUN_1805ea8e0(local_108,&local_98,puVar12,puVar1,uVar5);
        FUN_1805ea8e0(local_f8);
        bVar15 = 1;
        if ((local_c8 == local_c0) && (local_d0 == 0x40)) {
          bVar18 = 1;
        }
        else {
          bVar18 = 0;
        }
        if ((local_a8 == local_a0) && (local_b0 == 0x40)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
        }
        if ((local_88 == local_80) && (local_90 == 0x40)) {
          bVar16 = 1;
        }
        else {
          bVar16 = 0;
        }
        if ((local_68 != local_60) || (local_70 != 0x40)) {
          bVar15 = 0;
        }
        if (!(bool)(bVar18 & bVar15 & bVar16 & bVar17)) {
          param_2 = 0xffffffffffffffec;
        }
        return param_2;
      }
    }
  }
  return 0xffffffffffffffec;
}



