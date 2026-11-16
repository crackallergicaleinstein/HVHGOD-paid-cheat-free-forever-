// FUN_1805f1ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f1ee0 */

ulonglong FUN_1805f1ee0(undefined1 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,
                       longlong param_5)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *local_118;
  undefined1 *local_110;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  ushort *local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  if (9 < param_4) {
    uVar3 = param_3[1];
    uVar18 = (ulonglong)*param_3;
    uVar19 = (ulonglong)param_3[2];
    cVar2 = *(char *)(param_5 + 2);
    lVar1 = param_5 + 4;
    uVar9 = (((param_4 - uVar19) - (ulonglong)uVar3) - uVar18) - 6;
    local_60 = param_3 + 3;
    local_58 = (longlong)local_60 + uVar18;
    lVar10 = local_58 + (ulonglong)uVar3;
    uVar11 = param_2 + 3 >> 2;
    local_118 = param_1 + uVar11;
    local_110 = local_118 + uVar11;
    puVar12 = local_110 + uVar11;
    if (uVar9 <= param_4) {
      local_50 = local_118;
      local_48 = local_110;
      uVar11 = FUN_1805f1480(&local_e0,local_60,uVar18);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      uVar11 = FUN_1805f1480(&local_c0,local_58,uVar3);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      uVar11 = FUN_1805f1480(&local_a0,lVar10,uVar19 & 0xffffffff);
      if (0xffffffffffffff88 < uVar11) {
        return uVar11;
      }
      uVar9 = FUN_1805f1480(&local_80,lVar10 + uVar19,uVar9);
      if (0xffffffffffffff88 < uVar9) {
        return uVar9;
      }
      iVar5 = FUN_1805e9920(&local_80);
      iVar6 = FUN_1805e9920(&local_a0);
      iVar7 = FUN_1805e9920(&local_c0);
      iVar8 = FUN_1805e9920(&local_e0);
      puVar13 = local_118;
      puVar20 = puVar12;
      if (((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) {
        puVar13 = param_1 + (param_2 - 7);
        do {
          if (puVar13 <= puVar20) break;
          bVar14 = -cVar2 & 0x3f;
          uVar9 = (ulonglong)(local_e0 << ((byte)local_d8 & 0x3f)) >> bVar14;
          local_d8 = (uint)*(byte *)(param_5 + 5 + uVar9 * 2) + local_d8;
          uVar11 = (ulonglong)(local_c0 << ((byte)local_b8 & 0x3f)) >> bVar14;
          *param_1 = *(undefined1 *)(lVar1 + uVar9 * 2);
          local_b8 = (uint)*(byte *)(param_5 + 5 + uVar11 * 2) + local_b8;
          *local_118 = *(undefined1 *)(lVar1 + uVar11 * 2);
          uVar9 = (ulonglong)(local_a0 << ((byte)local_98 & 0x3f)) >> bVar14;
          local_98 = (uint)*(byte *)(param_5 + 5 + uVar9 * 2) + local_98;
          *local_110 = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> bVar14;
          local_78 = (uint)*(byte *)(param_5 + 5 + uVar9 * 2) + local_78;
          uVar11 = (ulonglong)(local_e0 << ((byte)local_d8 & 0x3f)) >> bVar14;
          *puVar20 = *(undefined1 *)(lVar1 + uVar9 * 2);
          local_d8 = (uint)*(byte *)(param_5 + 5 + uVar11 * 2) + local_d8;
          param_1[1] = *(undefined1 *)(lVar1 + uVar11 * 2);
          uVar9 = (ulonglong)(local_c0 << ((byte)local_b8 & 0x3f)) >> bVar14;
          local_b8 = local_b8 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          local_118[1] = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_a0 << ((byte)local_98 & 0x3f)) >> bVar14;
          local_98 = local_98 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          local_110[1] = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> bVar14;
          local_78 = local_78 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          puVar20[1] = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_e0 << ((byte)local_d8 & 0x3f)) >> bVar14;
          local_d8 = local_d8 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          param_1[2] = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_c0 << ((byte)local_b8 & 0x3f)) >> bVar14;
          local_b8 = local_b8 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          local_118[2] = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_a0 << ((byte)local_98 & 0x3f)) >> bVar14;
          local_98 = local_98 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          local_110[2] = *(undefined1 *)(lVar1 + uVar9 * 2);
          uVar9 = (ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> bVar14;
          uVar11 = (ulonglong)(local_e0 << ((byte)local_d8 & 0x3f)) >> bVar14;
          local_78 = local_78 + (uint)*(byte *)(param_5 + 5 + uVar9 * 2);
          puVar20[2] = *(undefined1 *)(lVar1 + uVar9 * 2);
          local_d8 = (uint)*(byte *)(param_5 + 5 + uVar11 * 2) + local_d8;
          param_1[3] = *(undefined1 *)(lVar1 + uVar11 * 2);
          param_1 = param_1 + 4;
          uVar9 = (ulonglong)(local_c0 << ((byte)local_b8 & 0x3f)) >> bVar14;
          local_b8 = (uint)*(byte *)(param_5 + 5 + uVar9 * 2) + local_b8;
          local_118[3] = *(undefined1 *)(lVar1 + uVar9 * 2);
          local_118 = local_118 + 4;
          uVar9 = (ulonglong)(local_a0 << ((byte)local_98 & 0x3f)) >> bVar14;
          local_98 = (uint)*(byte *)(param_5 + 5 + uVar9 * 2) + local_98;
          local_110[3] = *(undefined1 *)(lVar1 + uVar9 * 2);
          local_110 = local_110 + 4;
          uVar9 = (ulonglong)(local_80 << ((byte)local_78 & 0x3f)) >> bVar14;
          local_78 = (uint)*(byte *)(param_5 + 5 + uVar9 * 2) + local_78;
          puVar20[3] = *(undefined1 *)(lVar1 + uVar9 * 2);
          puVar20 = puVar20 + 4;
          iVar5 = FUN_1805e9920(&local_80);
          iVar6 = FUN_1805e9920(&local_a0);
          iVar7 = FUN_1805e9920(&local_c0);
          iVar8 = FUN_1805e9920(&local_e0);
        } while (((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) && iVar8 == 0);
        puVar13 = local_50;
      }
      puVar4 = local_48;
      if (((param_1 <= puVar13) && (local_118 <= local_48)) && (local_110 <= puVar12)) {
        FUN_1805ea660(param_1,&local_e0,puVar13,lVar1,cVar2);
        FUN_1805ea660(local_118,&local_c0,puVar4,lVar1,cVar2);
        FUN_1805ea660(local_110,&local_a0,puVar12,lVar1,cVar2);
        FUN_1805ea660(puVar20);
        bVar14 = 1;
        if ((local_d0 == local_c8) && (local_d8 == 0x40)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
        }
        if ((local_b0 == local_a8) && (local_b8 == 0x40)) {
          bVar16 = 1;
        }
        else {
          bVar16 = 0;
        }
        if ((local_90 == local_88) && (local_98 == 0x40)) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        if ((local_70 != local_68) || (local_78 != 0x40)) {
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



