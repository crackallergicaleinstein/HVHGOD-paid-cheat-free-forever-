// FUN_1805c6160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6160 */

ulonglong FUN_1805c6160(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  longlong lVar20;
  uint local_54;
  uint local_4c;
  ulonglong local_48;
  longlong local_40;
  
  iVar16 = *(int *)(param_4 + 0x90);
  if (*(longlong *)(param_3 + 0x78) == 0) {
    *(int *)(param_3 + 0x90) = iVar16;
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_4 + 0x94);
    iVar16 = *(int *)(param_4 + 0x6c);
    *(int *)(param_3 + 0x6c) = iVar16;
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_4 + 0x68);
    *(undefined1 *)(param_3 + 0x82) = 7;
    *(int *)(param_3 + 0x70) = iVar16 * 4;
    *(undefined2 *)(param_3 + 0x80) = 0x100;
    uVar5 = FUN_180579c50(param_3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    iVar2 = *(int *)(param_3 + 0x90);
    iVar3 = *(int *)(param_3 + 0x94);
    iVar8 = iVar2;
    if (iVar16 <= iVar2) {
      iVar8 = iVar16;
    }
    iVar16 = iVar16 + *(int *)(param_4 + 0x6c);
    iVar15 = *(int *)(param_3 + 0x6c) + iVar2;
    iVar17 = iVar15;
    if (iVar15 <= iVar16) {
      iVar17 = iVar16;
    }
    iVar16 = *(int *)(param_4 + 0x94);
    iVar11 = iVar3 - *(int *)(param_3 + 0x68);
    iVar4 = iVar16 - *(int *)(param_4 + 0x68);
    iVar13 = iVar11;
    if (iVar4 <= iVar11) {
      iVar13 = iVar4;
    }
    iVar4 = iVar3;
    if (iVar3 <= iVar16) {
      iVar4 = iVar16;
    }
    if ((((iVar8 != iVar2) || (iVar17 != iVar15)) || (iVar13 != iVar11)) || (iVar4 != iVar3)) {
      iVar17 = iVar17 - iVar8;
      local_40 = FUN_18057ad10(*(undefined8 *)(param_1 + 0x98),iVar17 * 4,0,iVar4 - iVar13,0,
                               &local_4c);
      if (local_4c != 0) {
        return (ulonglong)local_4c;
      }
      lVar20 = *(longlong *)(param_3 + 0x78);
      uVar9 = 0;
      lVar7 = (longlong)((*(int *)(param_3 + 0x90) - iVar8) * 4) +
              local_40 + (iVar4 - *(int *)(param_3 + 0x94)) * iVar17 * 4;
      if (*(int *)(param_3 + 0x68) != 0) {
        local_48 = (ulonglong)(uint)(iVar17 * 4);
        do {
          FUN_18063aed0(lVar7,lVar20);
          lVar7 = lVar7 + (ulonglong)(uint)(iVar17 * 4);
          lVar20 = lVar20 + *(int *)(param_3 + 0x70);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_3 + 0x68));
      }
      FUN_18057a2a0(param_3);
      *(int *)(param_3 + 0x90) = iVar8;
      *(int *)(param_3 + 0x68) = iVar4 - iVar13;
      *(int *)(param_3 + 0x70) = iVar17 * 4;
      *(int *)(param_3 + 0x94) = iVar4;
      *(int *)(param_3 + 0x6c) = iVar17;
      puVar1 = (uint *)(*(longlong *)(param_3 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(param_3 + 0x60) = 0x62697473;
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if ((*(longlong *)(param_1 + 0x380) == 0) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x380) + (ulonglong)*(ushort *)(param_1 + 0x398) * 2) &
          2) == 0)) {
        bVar19 = 0;
        bVar6 = 0;
        bVar10 = 0;
        bVar12 = 0xff;
      }
      else {
        bVar19 = 0xff;
        bVar6 = 0xff;
        bVar10 = 0xff;
        bVar12 = 0xff;
      }
    }
    else {
      bVar19 = *(byte *)(param_1 + 0x3a9);
      bVar6 = *(byte *)(param_1 + 0x3aa);
      bVar10 = *(byte *)(param_1 + 0x3ab);
      bVar12 = *(byte *)(param_1 + 0x3ac);
    }
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x3a0);
    uVar5 = (ulonglong)param_2;
    bVar19 = *(byte *)(lVar20 + uVar5 * 4);
    bVar6 = *(byte *)(lVar20 + 1 + uVar5 * 4);
    bVar10 = *(byte *)(lVar20 + 2 + uVar5 * 4);
    bVar12 = *(byte *)(lVar20 + 3 + uVar5 * 4);
  }
  lVar20 = *(longlong *)(param_4 + 0x78);
  local_54 = 0;
  lVar7 = (longlong)
          ((*(int *)(param_3 + 0x94) - *(int *)(param_4 + 0x94)) * *(int *)(param_3 + 0x70)) +
          (longlong)((*(int *)(param_4 + 0x90) - *(int *)(param_3 + 0x90)) * 4) +
          *(longlong *)(param_3 + 0x78);
  if (*(int *)(param_4 + 0x68) != 0) {
    uVar9 = *(uint *)(param_4 + 0x6c);
    do {
      uVar5 = 0;
      if (uVar9 != 0) {
        do {
          uVar14 = (int)uVar5 * 4;
          uVar9 = ((uint)*(byte *)(uVar5 + lVar20) * (uint)bVar12) / 0xff;
          iVar16 = 0xff - uVar9;
          *(char *)((ulonglong)uVar14 + lVar7) =
               (char)((int)((uint)*(byte *)((ulonglong)uVar14 + lVar7) * iVar16) / 0xff) +
               (char)((bVar19 * uVar9) / 0xff);
          *(char *)((ulonglong)(uVar14 + 1) + lVar7) =
               (char)((int)((uint)*(byte *)((ulonglong)(uVar14 + 1) + lVar7) * iVar16) / 0xff) +
               (char)((bVar6 * uVar9) / 0xff);
          *(char *)((ulonglong)(uVar14 + 2) + lVar7) =
               (char)((int)((uint)*(byte *)((ulonglong)(uVar14 + 2) + lVar7) * iVar16) / 0xff) +
               (char)((bVar10 * uVar9) / 0xff);
          iVar16 = (uint)*(byte *)((ulonglong)(uVar14 + 3) + lVar7) * iVar16;
          uVar18 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar18;
          *(char *)((ulonglong)(uVar14 + 3) + lVar7) =
               (((char)(iVar16 / 0xff) + (char)(iVar16 >> 0x1f)) -
               (char)((longlong)iVar16 * 0x80808081 >> 0x3f)) + (char)uVar9;
          uVar9 = *(uint *)(param_4 + 0x6c);
        } while (uVar18 < uVar9);
      }
      local_54 = local_54 + 1;
      lVar20 = lVar20 + *(int *)(param_4 + 0x70);
      lVar7 = lVar7 + *(int *)(param_3 + 0x70);
    } while (local_54 < *(uint *)(param_4 + 0x68));
  }
  return 0;
}



