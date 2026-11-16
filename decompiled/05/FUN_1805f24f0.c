// FUN_1805f24f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f24f0 */

ulonglong FUN_1805f24f0(undefined2 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,
                       longlong param_5)

{
  longlong lVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulonglong uVar18;
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
  ushort *local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  
  if (9 < param_4) {
    uVar4 = param_3[1];
    uVar19 = (ulonglong)*param_3;
    uVar18 = (ulonglong)param_3[2];
    cVar3 = *(char *)(param_5 + 2);
    lVar1 = param_5 + 4;
    uVar9 = (((param_4 - uVar18) - (ulonglong)uVar4) - uVar19) - 6;
    local_58 = param_3 + 3;
    local_50 = (longlong)local_58 + uVar19;
    lVar10 = local_50 + (ulonglong)uVar4;
    uVar11 = param_2 + 3 >> 2;
    local_110 = (undefined2 *)(uVar11 + (longlong)param_1);
    local_108 = (undefined2 *)(uVar11 + (longlong)local_110);
    puVar12 = (undefined2 *)(uVar11 + (longlong)local_108);
    if (uVar9 <= param_4) {
      local_48 = local_110;
      local_40 = local_108;
      uVar11 = FUN_1805f1480(&local_d8,local_58,uVar19);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      uVar11 = FUN_1805f1480(&local_b8,local_50,uVar4);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      uVar11 = FUN_1805f1480(&local_98,lVar10,uVar18 & 0xffffffff);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      uVar9 = FUN_1805f1480(&local_78,lVar10 + uVar18,uVar9);
      if (0xffffffffffffff88 < uVar9) {
        return uVar9;
      }
      iVar5 = FUN_1805e9920(&local_78);
      iVar6 = FUN_1805e9920(&local_98);
      iVar7 = FUN_1805e9920(&local_b8);
      iVar8 = FUN_1805e9920(&local_d8);
      local_f8 = puVar12;
      puVar13 = local_110;
      if (((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) {
        puVar13 = (undefined2 *)((longlong)param_1 + (param_2 - 7));
        do {
          if (puVar13 <= local_f8) break;
          bVar14 = -cVar3 & 0x3f;
          uVar9 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar14;
          lVar10 = lVar1 + uVar9 * 4;
          *param_1 = *(undefined2 *)(lVar1 + uVar9 * 4);
          param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar10 + 3) + (longlong)param_1);
          uVar9 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar14;
          local_d0 = (uint)*(byte *)(lVar10 + 2) + local_d0;
          lVar10 = lVar1 + uVar9 * 4;
          *local_110 = *(undefined2 *)(lVar1 + uVar9 * 4);
          local_110 = (undefined2 *)((longlong)local_110 + (ulonglong)*(byte *)(lVar10 + 3));
          local_b0 = (uint)*(byte *)(lVar10 + 2) + local_b0;
          uVar9 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar14;
          bVar17 = -cVar3 & 0x3f;
          lVar10 = lVar1 + uVar9 * 4;
          *local_108 = *(undefined2 *)(lVar1 + uVar9 * 4);
          local_108 = (undefined2 *)((longlong)local_108 + (ulonglong)*(byte *)(lVar10 + 3));
          local_90 = (uint)*(byte *)(lVar10 + 2) + local_90;
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar14) * 4);
          *local_f8 = *puVar2;
          bVar14 = *(byte *)(puVar2 + 1);
          local_f8 = (undefined2 *)((ulonglong)*(byte *)((longlong)puVar2 + 3) + (longlong)local_f8)
          ;
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar17) * 4);
          *param_1 = *puVar2;
          local_d0 = local_d0 + (uint)*(byte *)(puVar2 + 1);
          param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar17) * 4);
          *local_110 = *puVar2;
          local_b0 = local_b0 + (uint)*(byte *)(puVar2 + 1);
          local_110 = (undefined2 *)
                      ((longlong)local_110 + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar17) * 4);
          *local_108 = *puVar2;
          local_90 = local_90 + (uint)*(byte *)(puVar2 + 1);
          local_108 = (undefined2 *)
                      ((longlong)local_108 + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_78 << ((byte)((uint)bVar14 + local_70) & 0x3f)) >>
                            bVar17) * 4);
          *local_f8 = *puVar2;
          local_70 = (uint)bVar14 + local_70 + (uint)*(byte *)(puVar2 + 1);
          local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)((longlong)puVar2 + 3))
          ;
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar17) * 4);
          *param_1 = *puVar2;
          local_d0 = local_d0 + (uint)*(byte *)(puVar2 + 1);
          param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar17) * 4);
          *local_110 = *puVar2;
          local_b0 = local_b0 + (uint)*(byte *)(puVar2 + 1);
          local_110 = (undefined2 *)
                      ((longlong)local_110 + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar17) * 4);
          *local_108 = *puVar2;
          local_90 = local_90 + (uint)*(byte *)(puVar2 + 1);
          local_108 = (undefined2 *)
                      ((longlong)local_108 + (ulonglong)*(byte *)((longlong)puVar2 + 3));
          puVar2 = (undefined2 *)
                   (lVar1 + ((ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar17) * 4);
          *local_f8 = *puVar2;
          local_70 = local_70 + (uint)*(byte *)(puVar2 + 1);
          local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)((longlong)puVar2 + 3))
          ;
          uVar9 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar17;
          *param_1 = *(undefined2 *)(lVar1 + uVar9 * 4);
          local_d0 = (uint)*(byte *)(param_5 + 6 + uVar9 * 4) + local_d0;
          param_1 = (undefined2 *)
                    ((ulonglong)*(byte *)(param_5 + 7 + uVar9 * 4) + (longlong)param_1);
          uVar19 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar17;
          uVar9 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar17;
          *local_110 = *(undefined2 *)(lVar1 + uVar19 * 4);
          local_b0 = (uint)*(byte *)(param_5 + 6 + uVar19 * 4) + local_b0;
          uVar11 = (ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar17;
          local_110 = (undefined2 *)
                      ((ulonglong)*(byte *)(param_5 + 7 + uVar19 * 4) + (longlong)local_110);
          *local_108 = *(undefined2 *)(lVar1 + uVar9 * 4);
          local_90 = (uint)*(byte *)(param_5 + 6 + uVar9 * 4) + local_90;
          local_108 = (undefined2 *)
                      ((ulonglong)*(byte *)(param_5 + 7 + uVar9 * 4) + (longlong)local_108);
          *local_f8 = *(undefined2 *)(lVar1 + uVar11 * 4);
          local_70 = (uint)*(byte *)(param_5 + 6 + uVar11 * 4) + local_70;
          local_f8 = (undefined2 *)
                     ((ulonglong)*(byte *)(param_5 + 7 + uVar11 * 4) + (longlong)local_f8);
          iVar5 = FUN_1805e9920(&local_78);
          iVar6 = FUN_1805e9920(&local_98);
          iVar7 = FUN_1805e9920(&local_b8);
          iVar8 = FUN_1805e9920(&local_d8);
        } while (((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) && iVar8 == 0);
        puVar13 = local_48;
      }
      puVar2 = local_40;
      if (((param_1 <= puVar13) && (local_110 <= local_40)) && (local_108 <= puVar12)) {
        FUN_1805ea8e0(param_1,&local_d8,puVar13,lVar1,cVar3);
        FUN_1805ea8e0(local_110,&local_b8,puVar2,lVar1,cVar3);
        FUN_1805ea8e0(local_108,&local_98,puVar12,lVar1,cVar3);
        FUN_1805ea8e0(local_f8);
        bVar14 = 1;
        if ((local_c8 == local_c0) && (local_d0 == 0x40)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
        }
        if ((local_a8 == local_a0) && (local_b0 == 0x40)) {
          bVar16 = 1;
        }
        else {
          bVar16 = 0;
        }
        if ((local_88 == local_80) && (local_90 == 0x40)) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        if ((local_68 != local_60) || (local_70 != 0x40)) {
          bVar14 = 0;
        }
        if (!(bool)(bVar17 & bVar14 & bVar15 & bVar16)) {
          param_2 = 0xffffffffffffffec;
        }
        return param_2;
      }
    }
  }
  return 0xffffffffffffffec;
}



