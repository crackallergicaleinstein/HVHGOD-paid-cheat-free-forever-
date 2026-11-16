// FUN_1805eeb00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805eeb00 */

ulonglong FUN_1805eeb00(undefined1 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,
                       undefined2 *param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *local_108;
  undefined1 *local_100;
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
  longlong local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  if (9 < param_4) {
    uVar12 = (ulonglong)*param_3;
    uVar2 = param_3[1];
    uVar18 = (ulonglong)param_3[2];
    uVar3 = *param_5;
    puVar1 = param_5 + 1;
    local_58 = (longlong)(param_3 + 3) + uVar12;
    local_50 = local_58 + (ulonglong)uVar2;
    uVar10 = param_2 + 3 >> 2;
    local_108 = param_1 + uVar10;
    local_100 = local_108 + uVar10;
    puVar11 = local_100 + uVar10;
    uVar10 = (((param_4 - uVar18) - (ulonglong)uVar2) - uVar12) - 6;
    if (uVar10 <= param_4) {
      local_48 = local_108;
      local_40 = local_100;
      uVar12 = FUN_1805edea0(&local_d8,param_3 + 3,uVar12);
      if (0xffffffffffffff88 < uVar12) {
        return uVar12;
      }
      uVar12 = FUN_1805edea0(&local_b8,local_58,uVar2);
      lVar4 = local_50;
      if (0xffffffffffffff88 < uVar12) {
        return uVar12;
      }
      uVar12 = FUN_1805edea0(&local_98,local_50,uVar18 & 0xffffffff);
      if (0xffffffffffffff88 < uVar12) {
        return uVar12;
      }
      uVar10 = FUN_1805edea0(&local_78,lVar4 + uVar18,uVar10);
      if (0xffffffffffffff88 < uVar10) {
        return uVar10;
      }
      iVar6 = FUN_1805e9920(&local_78);
      iVar7 = FUN_1805e9920(&local_98);
      iVar8 = FUN_1805e9920(&local_b8);
      iVar9 = FUN_1805e9920(&local_d8);
      puVar13 = local_108;
      puVar19 = puVar11;
      if (((iVar6 == 0 && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) {
        puVar13 = param_1 + (param_2 - 7);
        do {
          if (puVar13 <= puVar19) break;
          bVar14 = -(char)uVar3 & 0x3f;
          uVar10 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar14;
          local_d0 = (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3) + local_d0;
          uVar12 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar14;
          *param_1 = *(undefined1 *)(puVar1 + uVar10);
          local_b0 = (uint)*(byte *)((longlong)param_5 + uVar12 * 2 + 3) + local_b0;
          *local_108 = *(undefined1 *)(puVar1 + uVar12);
          uVar10 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar14;
          local_90 = (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3) + local_90;
          *local_100 = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar14;
          local_70 = (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3) + local_70;
          uVar12 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar14;
          *puVar19 = *(undefined1 *)(puVar1 + uVar10);
          local_d0 = (uint)*(byte *)((longlong)param_5 + uVar12 * 2 + 3) + local_d0;
          param_1[1] = *(undefined1 *)(puVar1 + uVar12);
          uVar10 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar14;
          local_b0 = local_b0 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          local_108[1] = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar14;
          local_90 = local_90 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          local_100[1] = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar14;
          local_70 = local_70 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          puVar19[1] = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar14;
          local_d0 = local_d0 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          param_1[2] = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar14;
          local_b0 = local_b0 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          local_108[2] = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar14;
          local_90 = local_90 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          local_100[2] = *(undefined1 *)(puVar1 + uVar10);
          uVar10 = (ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar14;
          uVar12 = (ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> bVar14;
          local_70 = local_70 + (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3);
          puVar19[2] = *(undefined1 *)(puVar1 + uVar10);
          local_d0 = (uint)*(byte *)((longlong)param_5 + uVar12 * 2 + 3) + local_d0;
          param_1[3] = *(undefined1 *)(puVar1 + uVar12);
          param_1 = param_1 + 4;
          uVar10 = (ulonglong)(local_b8 << ((byte)local_b0 & 0x3f)) >> bVar14;
          local_b0 = (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3) + local_b0;
          local_108[3] = *(undefined1 *)(puVar1 + uVar10);
          local_108 = local_108 + 4;
          uVar10 = (ulonglong)(local_98 << ((byte)local_90 & 0x3f)) >> bVar14;
          local_90 = (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3) + local_90;
          local_100[3] = *(undefined1 *)(puVar1 + uVar10);
          local_100 = local_100 + 4;
          uVar10 = (ulonglong)(local_78 << ((byte)local_70 & 0x3f)) >> bVar14;
          local_70 = (uint)*(byte *)((longlong)param_5 + uVar10 * 2 + 3) + local_70;
          puVar19[3] = *(undefined1 *)(puVar1 + uVar10);
          puVar19 = puVar19 + 4;
          iVar6 = FUN_1805e9920(&local_78);
          iVar7 = FUN_1805e9920(&local_98);
          iVar8 = FUN_1805e9920(&local_b8);
          iVar9 = FUN_1805e9920(&local_d8);
        } while (((iVar6 == 0 && iVar7 == 0) && iVar8 == 0) && iVar9 == 0);
        puVar13 = local_48;
      }
      puVar5 = local_40;
      if (((param_1 <= puVar13) && (local_108 <= local_40)) && (local_100 <= puVar11)) {
        FUN_1805ea660(param_1,&local_d8,puVar13,puVar1,uVar3);
        FUN_1805ea660(local_108,&local_b8,puVar5,puVar1,uVar3);
        FUN_1805ea660(local_100,&local_98,puVar11,puVar1,uVar3);
        FUN_1805ea660(puVar19);
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



