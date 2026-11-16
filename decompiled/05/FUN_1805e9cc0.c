// FUN_1805e9cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9cc0 */

ulonglong FUN_1805e9cc0(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       ushort *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  ulonglong local_68;
  longlong local_50;
  uint local_48;
  longlong *local_40;
  longlong *local_38;
  
  puVar7 = param_5;
  puVar2 = param_1 + param_2;
  if (param_5[1] == 0) {
    uVar8 = FUN_1805e97f0(&local_50,param_3,param_4);
    if (0xffffffffffffff88 < uVar8) {
      return uVar8;
    }
    uVar3 = *param_5;
    bVar10 = ~(byte)uVar3 & 0x3f;
    param_5 = (ushort *)(((ulonglong)(local_50 << ((byte)local_48 & 0x3f)) >> 1) >> bVar10);
    local_48 = local_48 + uVar3;
    FUN_1805e9920(&local_50);
    uVar8 = ((ulonglong)(local_50 << ((byte)local_48 & 0x3f)) >> 1) >> bVar10;
    local_48 = local_48 + uVar3;
    FUN_1805e9920(&local_50);
    puVar12 = param_1;
    while (iVar14 = (int)local_38, local_48 < 0x41) {
      if (local_40 < local_38 + 1) {
        if (local_40 == local_38) break;
        uVar9 = (ulonglong)(local_48 >> 3);
        if ((longlong *)((longlong)local_40 - uVar9) < local_38) {
          uVar11 = (int)local_40 - iVar14;
          local_40 = (longlong *)((longlong)local_40 - (ulonglong)uVar11);
          local_50 = *local_40;
          local_48 = local_48 + uVar11 * -8;
          break;
        }
        local_48 = local_48 + (local_48 >> 3) * -8;
      }
      else {
        uVar9 = (ulonglong)(local_48 >> 3);
        local_48 = local_48 & 7;
      }
      local_40 = (longlong *)((longlong)local_40 - uVar9);
      local_50 = *local_40;
      if (puVar2 + -3 <= puVar12) break;
      uVar11 = *(uint *)(puVar7 + (longlong)param_5 * 2 + 2);
      *puVar12 = (char)(uVar11 >> 0x10);
      uVar4 = *(uint *)(puVar7 + uVar8 * 2 + 2);
      puVar12[1] = (char)(uVar4 >> 0x10);
      iVar14 = local_48 + (uVar11 >> 0x18);
      bVar10 = (byte)iVar14;
      bVar6 = (byte)(uVar4 >> 0x18);
      uVar11 = *(uint *)(puVar7 + ((((ulonglong)(local_50 << ((byte)local_48 & 0x3f)) >> 1) >>
                                   (~(byte)(uVar11 >> 0x18) & 0x3f)) + (ulonglong)(uVar11 & 0xffff))
                                  * 2 + 2);
      puVar12[2] = (char)(uVar11 >> 0x10);
      param_5 = (ushort *)
                ((((ulonglong)(local_50 << (bVar10 + bVar6 & 0x3f)) >> 1) >>
                 (~(byte)(uVar11 >> 0x18) & 0x3f)) + (ulonglong)(uVar11 & 0xffff));
      iVar1 = (uVar11 >> 0x18) + (uVar4 >> 0x18);
      uVar11 = *(uint *)(puVar7 + ((((ulonglong)(local_50 << (bVar10 & 0x3f)) >> 1) >>
                                   (~bVar6 & 0x3f)) + (ulonglong)(uVar4 & 0xffff)) * 2 + 2);
      puVar12[3] = (char)(uVar11 >> 0x10);
      uVar8 = (((ulonglong)(local_50 << ((char)iVar1 + bVar10 & 0x3f)) >> 1) >>
              (~(byte)(uVar11 >> 0x18) & 0x3f)) + (ulonglong)(uVar11 & 0xffff);
      puVar12 = puVar12 + 4;
      local_48 = iVar1 + iVar14 + (uVar11 >> 0x18);
    }
    do {
      puVar13 = puVar12;
      if (0x40 < local_48) goto LAB_1805ea34e;
      if (local_40 < local_38 + 1) {
        if (local_40 != local_38) {
          uVar11 = local_48 >> 3;
          uVar9 = (ulonglong)uVar11;
          if ((longlong *)((longlong)local_40 - uVar9) < local_38) {
            uVar11 = (int)local_40 - iVar14;
            uVar9 = (ulonglong)uVar11;
          }
          local_48 = local_48 + uVar11 * -8;
          goto LAB_1805ea259;
        }
      }
      else {
        uVar9 = (ulonglong)(local_48 >> 3);
        local_48 = local_48 & 7;
LAB_1805ea259:
        local_40 = (longlong *)((longlong)local_40 - uVar9);
        local_50 = *local_40;
      }
      if ((puVar12 == puVar2) ||
         (((local_40 == local_38 && (local_48 == 0x40)) && (param_5 == (ushort *)0x0))))
      goto LAB_1805ea34e;
      uVar11 = *(uint *)(puVar7 + (longlong)param_5 * 2 + 2);
      bVar10 = (byte)local_48;
      local_48 = local_48 + (uVar11 >> 0x18);
      param_5 = (ushort *)
                ((ulonglong)(uVar11 & 0xffff) +
                (((ulonglong)(local_50 << (bVar10 & 0x3f)) >> 1) >> (~(byte)(uVar11 >> 0x18) & 0x3f)
                ));
      *puVar12 = (char)(uVar11 >> 0x10);
      puVar13 = puVar12 + 1;
      if (0x40 < local_48) goto LAB_1805ea34e;
      if (local_40 < local_38 + 1) {
        if (local_40 != local_38) {
          uVar11 = local_48 >> 3;
          uVar9 = (ulonglong)uVar11;
          if ((longlong *)((longlong)local_40 - uVar9) < local_38) {
            uVar11 = (int)local_40 - iVar14;
            uVar9 = (ulonglong)uVar11;
          }
          local_48 = local_48 + uVar11 * -8;
          goto LAB_1805ea2fe;
        }
      }
      else {
        uVar9 = (ulonglong)(local_48 >> 3);
        local_48 = local_48 & 7;
LAB_1805ea2fe:
        local_40 = (longlong *)((longlong)local_40 - uVar9);
        local_50 = *local_40;
      }
      if ((puVar13 == puVar2) || (((local_40 == local_38 && (local_48 == 0x40)) && (uVar8 == 0))))
      goto LAB_1805ea34e;
      uVar11 = *(uint *)(puVar7 + uVar8 * 2 + 2);
      bVar10 = (byte)local_48;
      local_48 = local_48 + (uVar11 >> 0x18);
      uVar8 = (ulonglong)(uVar11 & 0xffff) +
              (((ulonglong)(local_50 << (bVar10 & 0x3f)) >> 1) >> (~(byte)(uVar11 >> 0x18) & 0x3f));
      *puVar13 = (char)(uVar11 >> 0x10);
      puVar12 = puVar12 + 2;
    } while( true );
  }
  uVar8 = FUN_1805e97f0(&local_50,param_3,param_4);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  uVar3 = *param_5;
  bVar10 = ~(byte)uVar3 & 0x3f;
  local_68 = ((ulonglong)(local_50 << ((byte)local_48 & 0x3f)) >> 1) >> bVar10;
  local_48 = local_48 + uVar3;
  FUN_1805e9920(&local_50);
  uVar8 = ((ulonglong)(local_50 << ((byte)local_48 & 0x3f)) >> 1) >> bVar10;
  local_48 = local_48 + uVar3;
  FUN_1805e9920(&local_50);
  puVar12 = param_1;
  while (iVar14 = (int)local_38, local_48 < 0x41) {
    if (local_40 < local_38 + 1) {
      if (local_40 == local_38) break;
      uVar9 = (ulonglong)(local_48 >> 3);
      if ((longlong *)((longlong)local_40 - uVar9) < local_38) {
        uVar11 = (int)local_40 - iVar14;
        local_40 = (longlong *)((longlong)local_40 - (ulonglong)uVar11);
        local_50 = *local_40;
        local_48 = local_48 + uVar11 * -8;
        break;
      }
      local_48 = local_48 + (local_48 >> 3) * -8;
    }
    else {
      uVar9 = (ulonglong)(local_48 >> 3);
      local_48 = local_48 & 7;
    }
    local_40 = (longlong *)((longlong)local_40 - uVar9);
    local_50 = *local_40;
    if (puVar2 + -3 <= puVar12) break;
    uVar11 = *(uint *)(param_5 + local_68 * 2 + 2);
    *puVar12 = (char)(uVar11 >> 0x10);
    uVar4 = *(uint *)(param_5 + uVar8 * 2 + 2);
    puVar12[1] = (char)(uVar4 >> 0x10);
    iVar14 = (uVar11 >> 0x18) + local_48;
    cVar5 = (char)(uVar4 >> 0x18);
    bVar10 = (byte)iVar14;
    uVar11 = *(uint *)(param_5 +
                      (((ulonglong)(local_50 << ((byte)local_48 & 0x3f)) >>
                       (-(char)(uVar11 >> 0x18) & 0x3fU)) + (ulonglong)(uVar11 & 0xffff)) * 2 + 2);
    puVar12[2] = (char)(uVar11 >> 0x10);
    local_68 = ((ulonglong)(local_50 << (cVar5 + bVar10 & 0x3f)) >>
               (-(char)(uVar11 >> 0x18) & 0x3fU)) + (ulonglong)(uVar11 & 0xffff);
    iVar1 = (uVar11 >> 0x18) + (uVar4 >> 0x18);
    uVar11 = *(uint *)(param_5 +
                      (((ulonglong)(local_50 << (bVar10 & 0x3f)) >> (-cVar5 & 0x3fU)) +
                      (ulonglong)(uVar4 & 0xffff)) * 2 + 2);
    uVar8 = ((ulonglong)(local_50 << ((char)iVar1 + bVar10 & 0x3f)) >>
            (-(char)(uVar11 >> 0x18) & 0x3fU)) + (ulonglong)(uVar11 & 0xffff);
    puVar12[3] = (char)(uVar11 >> 0x10);
    puVar12 = puVar12 + 4;
    local_48 = (uVar11 >> 0x18) + iVar1 + iVar14;
  }
  do {
    if (0x40 < local_48) goto LAB_1805e9fff;
    if (local_40 < local_38 + 1) {
      if (local_40 != local_38) {
        uVar11 = local_48 >> 3;
        uVar9 = (ulonglong)uVar11;
        if ((longlong *)((longlong)local_40 - uVar9) < local_38) {
          uVar11 = (int)local_40 - iVar14;
          uVar9 = (ulonglong)uVar11;
        }
        local_48 = local_48 + uVar11 * -8;
        goto LAB_1805e9f1d;
      }
    }
    else {
      uVar9 = (ulonglong)(local_48 >> 3);
      local_48 = local_48 & 7;
LAB_1805e9f1d:
      local_40 = (longlong *)((longlong)local_40 - uVar9);
      local_50 = *local_40;
    }
    if ((puVar12 == puVar2) || ((local_40 == local_38 && (local_48 == 0x40)))) goto LAB_1805e9fff;
    bVar10 = (byte)local_48;
    uVar11 = *(uint *)(param_5 + local_68 * 2 + 2);
    local_48 = local_48 + (uVar11 >> 0x18);
    local_68 = (ulonglong)(uVar11 & 0xffff) +
               ((ulonglong)(local_50 << (bVar10 & 0x3f)) >> (-(char)(uVar11 >> 0x18) & 0x3fU));
    *puVar12 = (char)(uVar11 >> 0x10);
    puVar13 = puVar12 + 1;
    if (0x40 < local_48) goto LAB_1805ea003;
    if (local_40 < local_38 + 1) {
      if (local_40 != local_38) {
        uVar11 = local_48 >> 3;
        uVar9 = (ulonglong)uVar11;
        if ((longlong *)((longlong)local_40 - uVar9) < local_38) {
          uVar11 = (int)local_40 - iVar14;
          uVar9 = (ulonglong)uVar11;
        }
        local_48 = local_48 + uVar11 * -8;
        goto LAB_1805e9fbb;
      }
    }
    else {
      uVar9 = (ulonglong)(local_48 >> 3);
      local_48 = local_48 & 7;
LAB_1805e9fbb:
      local_40 = (longlong *)((longlong)local_40 - uVar9);
      local_50 = *local_40;
    }
    if ((puVar13 == puVar2) || ((local_40 == local_38 && (local_48 == 0x40)))) goto LAB_1805ea003;
    uVar11 = *(uint *)(param_5 + uVar8 * 2 + 2);
    bVar10 = (byte)local_48;
    local_48 = local_48 + (uVar11 >> 0x18);
    *puVar13 = (char)(uVar11 >> 0x10);
    uVar8 = (ulonglong)(uVar11 & 0xffff) +
            ((ulonglong)(local_50 << (bVar10 & 0x3f)) >> (-(char)(uVar11 >> 0x18) & 0x3fU));
    puVar12 = puVar12 + 2;
  } while( true );
LAB_1805ea34e:
  if (((local_40 == local_38) && (local_48 == 0x40)) && ((param_5 == (ushort *)0x0 && (uVar8 == 0)))
     ) {
    return (longlong)puVar13 - (longlong)param_1;
  }
  goto LAB_1805ea36e;
LAB_1805e9fff:
  puVar13 = puVar12;
LAB_1805ea003:
  if ((local_40 == local_38) && (((local_48 == 0x40 && (local_68 == 0)) && (uVar8 == 0)))) {
    return (longlong)puVar13 - (longlong)param_1;
  }
LAB_1805ea36e:
  uVar8 = 0xffffffffffffffec;
  if (puVar13 == puVar2) {
    uVar8 = 0xffffffffffffffba;
  }
  return uVar8;
}



