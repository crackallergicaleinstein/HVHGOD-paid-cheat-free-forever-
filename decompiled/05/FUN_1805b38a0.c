// FUN_1805b38a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b38a0 */

undefined8 FUN_1805b38a0(undefined8 *param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int local_res8 [2];
  int local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [6];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  cVar2 = *(char *)((longlong)param_1 + 0x5c);
  local_res20[0] = 0;
  if ((cVar2 != '\0') && (param_1[0x65] == 0)) {
    return 8;
  }
  uVar8 = *param_1;
  puVar16 = *(undefined8 **)param_1[0x66];
  if (puVar16 == (undefined8 *)0x0) {
    ((undefined8 *)param_1[0x66])[1] = FUN_1805b6690;
    puVar16 = (undefined8 *)param_1[0x66];
    uVar15 = FUN_18057aad0(uVar8,0x290,local_res20);
    *puVar16 = uVar15;
    if (local_res20[0] != 0) {
      return 0x40;
    }
    puVar16 = *(undefined8 **)param_1[0x66];
    *puVar16 = uVar8;
    if (cVar2 == '\0') {
      puVar16[0x51] = *(undefined8 *)(param_1[100] + 0x10e0);
    }
    puVar16[0x18] = 0;
    puVar16[0x1a] = 0;
    puVar16[0x1c] = puVar16 + 1;
    puVar16[0x16] = FUN_1805b5810;
    puVar16[0x17] = FUN_1805b57b0;
    puVar16[0x19] = FUN_1805b5670;
    puVar16[0x1b] = uVar8;
  }
  puVar16[0x1e] = param_1;
  puVar16[0x1d] = param_1;
  lVar17 = param_1[1];
  local_58 = 0;
  lVar9 = *(longlong *)(lVar17 + 0x90);
  cVar3 = *(char *)(lVar9 + 0x3c);
  cVar4 = *(char *)(*(longlong *)(lVar17 + 0xd0) + 0x58);
  if (param_2 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = (ulonglong)param_3 + param_2;
  }
  lVar10 = param_1[2];
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  cVar5 = *(char *)(lVar10 + 0xf8);
  cVar6 = *(char *)(lVar10 + 0xf9);
  if (cVar5 == '\0') {
    local_70[0] = 0x400;
    local_70[3] = 0x400;
  }
  else {
    iVar13 = *(int *)(lVar10 + 0xfc) + 0x20;
    local_70[0] = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fU)) >> 6;
    iVar13 = *(int *)(lVar10 + 0x100) + 0x20;
    local_70[3] = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fU)) >> 6;
  }
  iVar11 = local_70[3];
  iVar13 = local_70[0];
  if (cVar2 == '\0') {
    uVar12 = *(undefined1 *)(lVar17 + 0x400);
  }
  else {
    uVar12 = 0;
  }
  *(undefined1 *)((longlong)puVar16 + 0xd) = uVar12;
  *(char *)((longlong)puVar16 + 0xc) = cVar2;
  *(undefined4 *)(puVar16 + 2) = 0;
  if (cVar5 != '\0') {
    *(undefined4 *)(puVar16 + 2) = 1;
  }
  if ((cVar6 != '\0') && ((cVar4 == '\0' || ((cVar4 < '\0' && (cVar3 == '\0')))))) {
    *(uint *)(puVar16 + 2) = cVar5 != '\0' | 2;
  }
  *(undefined4 *)((longlong)puVar16 + 0x104) = *(undefined4 *)(lVar9 + 0x40);
  *(undefined4 *)(puVar16 + 0x21) = *(undefined4 *)(lVar9 + 0x44);
  *(undefined4 *)((longlong)puVar16 + 0x10c) = *(undefined4 *)(lVar9 + 0x48);
  *(undefined4 *)(puVar16 + 0x22) = *(undefined4 *)(lVar9 + 0x4c);
  *(undefined4 *)((longlong)puVar16 + 0x114) = *(undefined4 *)(lVar9 + 0x50);
  *(undefined4 *)(puVar16 + 0x23) = *(undefined4 *)(lVar9 + 0x54);
  *(undefined4 *)((longlong)puVar16 + 0x11c) = *(undefined4 *)(lVar9 + 0x58);
  *(undefined4 *)(puVar16 + 0x24) = *(undefined4 *)(lVar9 + 0x5c);
  uVar7 = *(ushort *)(param_1[1] + 0x68);
  *(uint *)(puVar16 + 0x14) = (uint)uVar7;
  local_50 = param_2;
  local_40 = param_2;
  if (cVar6 != '\0') {
    if ((local_70[0] < 1) || (local_70[3] < 1)) {
      return 0x24;
    }
    if (((0x7fff < uVar7) ||
        (iVar14 = FUN_180573310(0x7d00000,(ulonglong)uVar7 << 0x10), iVar14 < iVar13)) ||
       (iVar14 < iVar11)) {
      return 0xa4;
    }
  }
  local_78 = local_70[4];
  local_74 = local_70[5];
  local_res8[0] = 0;
  FUN_1805b6310(puVar16,local_70);
  iVar13 = *(int *)(puVar16 + 1);
  piVar1 = (int *)(puVar16 + 1);
  if (iVar13 == 0) {
    cVar2 = *(char *)((longlong)puVar16 + 0x101);
    *(undefined1 *)((longlong)puVar16 + 0x134) = 0;
    *(undefined4 *)(puVar16 + 0x1a) = 0;
    FUN_1805743a0(*(undefined8 *)(puVar16[0x1d] + 0x18));
    FUN_1805b8500(puVar16,&local_58,puVar16 + 0x16,&local_78,0,0,0,local_res8);
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      if ((cVar2 != '\0') && (*(int *)(puVar16 + 0x1a) < 0)) {
        *(undefined1 *)((longlong)puVar16 + 0x134) = 1;
        *(undefined4 *)(puVar16 + 0x1a) = 0;
        FUN_1805743a0(*(undefined8 *)(puVar16[0x1d] + 0x18));
        FUN_1805b8500(puVar16,&local_58,puVar16 + 0x16,&local_78,0,0,0,local_res8);
        iVar13 = *piVar1;
        if (iVar13 != 0) goto LAB_1805b3c51;
      }
      lVar17 = puVar16[0x1d];
      FUN_1805b27a0(lVar17);
      FUN_180573bc0(*(undefined8 *)(lVar17 + 0x18));
      iVar13 = *piVar1;
    }
  }
LAB_1805b3c51:
  if (piVar1 == (int *)0x0) {
    if (iVar13 != 0) {
      return 3;
    }
  }
  else {
    if (iVar13 != 0) {
      return 3;
    }
    *piVar1 = 0;
  }
  if (*(char *)(puVar16[0x1d] + 0x5c) == '\0') {
    **(int **)(puVar16[0x1d] + 0x338) = (int)(short)((uint)(local_res8[0] + 0x8000) >> 0x10);
  }
  return 0;
}



