// FUN_1805f4d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4d20 */

undefined1 *
thunk_FUN_1805f4d30(undefined1 *param_1,longlong param_2,longlong param_3,longlong param_4,
                   uint param_5,longlong param_6,ulonglong param_7)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined1 *puVar21;
  bool bVar22;
  int aiStackX_18 [2];
  ushort *puStackX_20;
  ulonglong in_stack_ffffffffffffff90;
  
  uVar9 = param_7;
  lVar5 = param_6;
  aiStackX_18[0] = 0xff;
  puVar1 = (ushort *)(param_6 + 0x200);
  if (param_7 < 0x200) {
    return (undefined1 *)0xffffffffffffffff;
  }
  puStackX_20 = puVar1;
  puVar7 = (undefined1 *)
           thunk_FUN_1805dd700(param_6,aiStackX_18,&param_6,param_3,param_4,
                               in_stack_ffffffffffffff90 & 0xffffffff00000000);
  if ((undefined1 *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  if (param_5 < (uint)param_6) {
    return (undefined1 *)0xffffffffffffffd4;
  }
  puVar20 = (ulonglong *)(puVar7 + param_3);
  puVar7 = (undefined1 *)(param_4 - (longlong)puVar7);
  iVar15 = 1 << ((byte)(uint)param_6 & 0x1f);
  if (uVar9 < (((ulonglong)(aiStackX_18[0] + 1) * 2 + 0xb + (1L << ((byte)(uint)param_6 & 0x3f)) >>
               2) + (longlong)(iVar15 + 2)) * 4 + 0x204) {
    return (undefined1 *)0xffffffffffffffd4;
  }
  lVar10 = (longlong)(iVar15 + 1);
  puVar8 = (undefined1 *)
           FUN_1805f4a90(puVar1,lVar5,aiStackX_18[0],(uint)param_6,lVar5 + (lVar10 + 0x80) * 4,
                         uVar9 + lVar10 * -4 + -0x200);
  if ((undefined1 *)0xffffffffffffff88 < puVar8) {
    return puVar8;
  }
  iVar15 = (int)puVar20;
  if (*(short *)(lVar5 + 0x202) == 0) {
    if (puVar7 == (undefined1 *)0x0) {
      return (undefined1 *)0xffffffffffffffb8;
    }
    puVar17 = puVar20 + 1;
    if (puVar7 < (undefined1 *)0x8) {
      uVar9 = (ulonglong)(byte)*puVar20;
      switch(puVar7) {
      case (undefined1 *)0x7:
        uVar9 = ((ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30) + uVar9;
      case (undefined1 *)0x6:
        uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
      case (undefined1 *)0x5:
        uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
      case (undefined1 *)0x4:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
      case (undefined1 *)0x3:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
      case (undefined1 *)0x2:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
      }
      bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
      if (bVar2 == 0) {
        return (undefined1 *)0xffffffffffffffec;
      }
      iVar14 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar6 = (9 - (int)puVar7) * 8;
      puVar12 = puVar20;
    }
    else {
      bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
      uVar9 = *(ulonglong *)(puVar7 + -8 + (longlong)puVar20);
      if (bVar2 == 0) {
        return (undefined1 *)0xffffffffffffffff;
      }
      iVar14 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar6 = 8;
      puVar12 = (ulonglong *)(puVar7 + -8 + (longlong)puVar20);
    }
    if ((undefined1 *)0xffffffffffffff88 < puVar7) {
      return puVar7;
    }
    uVar3 = *puVar1;
    uVar18 = (1L << ((byte)uVar3 & 0x3f)) - 1;
    uVar11 = (uint)uVar3 + (iVar6 - iVar14);
    uVar19 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
    if (uVar11 < 0x41) {
      if (puVar12 < puVar17) {
        if (puVar12 == puVar20) goto LAB_1805f54fb;
        uVar9 = (ulonglong)(uVar11 >> 3);
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar11 = uVar11 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar11 >> 3);
        uVar11 = uVar11 & 7;
      }
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    else {
      puVar12 = (ulonglong *)&DAT_1806896e0;
    }
LAB_1805f54fb:
    uVar11 = uVar11 + uVar3;
    uVar18 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
    if (0x40 < uVar11) {
      return (undefined1 *)0xffffffffffffffec;
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar9 = (ulonglong)(uVar11 >> 3);
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar11 = uVar11 + (int)uVar9 * -8;
        goto LAB_1805f5570;
      }
      if (uVar11 < 0x40) goto LAB_1805f5576;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_1805f5570:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
LAB_1805f5576:
      if (0x40 < uVar11) {
        return (undefined1 *)0xffffffffffffffec;
      }
    }
    puVar7 = param_1;
    if (puVar12 < puVar17) {
      if (puVar12 == puVar20) goto LAB_1805f55c5;
      uVar13 = uVar11 >> 3;
      uVar9 = (ulonglong)uVar13;
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar13 = (int)puVar12 - iVar15;
        uVar9 = (ulonglong)uVar13;
      }
      uVar11 = uVar11 + uVar13 * -8;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
LAB_1805f55c5:
    do {
      if (uVar11 < 0x41) {
        if (puVar12 < puVar17) {
          if (puVar12 == puVar20) {
            uVar13 = 2 - (uVar11 < 0x40);
            goto LAB_1805f5627;
          }
          uVar9 = (ulonglong)(uVar11 >> 3);
          bVar22 = (ulonglong *)((longlong)puVar12 - uVar9) < puVar20;
          if (bVar22) {
            uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
          }
          uVar13 = (uint)bVar22;
          uVar11 = uVar11 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (ulonglong)(uVar11 >> 3);
          uVar13 = 0;
          uVar11 = uVar11 & 7;
        }
        puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
        uVar9 = *puVar12;
      }
      else {
        puVar12 = (ulonglong *)&DAT_1806896e0;
        uVar13 = 3;
      }
LAB_1805f5627:
      if (uVar13 != 0 || param_1 + param_2 + -3 <= puVar7) goto LAB_1805f5745;
      uVar13 = *(uint *)(puStackX_20 + uVar19 * 2 + 2);
      *puVar7 = (char)(uVar13 >> 0x10);
      uVar4 = *(uint *)(puStackX_20 + uVar18 * 2 + 2);
      puVar7[1] = (char)(uVar4 >> 0x10);
      iVar14 = (uVar13 >> 0x18) + uVar11;
      iVar6 = iVar14 + (uVar4 >> 0x18);
      uVar11 = *(uint *)(puStackX_20 +
                        ((uVar9 >> (-(char)iVar14 & 0x3fU) &
                         (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
                        (ulonglong)(uVar13 & 0xffff)) * 2 + 2);
      iVar14 = iVar6 + (uVar11 >> 0x18);
      uVar19 = (uVar9 >> (-(char)iVar14 & 0x3fU) & (1L << ((byte)(uVar11 >> 0x18) & 0x3f)) - 1U) +
               (ulonglong)(uVar11 & 0xffff);
      puVar7[2] = (char)(uVar11 >> 0x10);
      uVar13 = *(uint *)(puStackX_20 +
                        ((uVar9 >> (-(char)iVar6 & 0x3fU) &
                         (1L << ((byte)(uVar4 >> 0x18) & 0x3f)) - 1U) + (ulonglong)(uVar4 & 0xffff))
                        * 2 + 2);
      uVar11 = (uVar13 >> 0x18) + iVar14;
      uVar18 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
               (ulonglong)(uVar13 & 0xffff);
      puVar7[3] = (char)(uVar13 >> 0x10);
      puVar7 = puVar7 + 4;
    } while( true );
  }
  if (puVar7 == (undefined1 *)0x0) {
    return (undefined1 *)0xffffffffffffffb8;
  }
  puVar17 = puVar20 + 1;
  if (puVar7 < (undefined1 *)0x8) {
    uVar9 = (ulonglong)(byte)*puVar20;
    switch(puVar7) {
    case (undefined1 *)0x7:
      uVar9 = ((ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30) + uVar9;
    case (undefined1 *)0x6:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
    case (undefined1 *)0x5:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
    case (undefined1 *)0x4:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
    case (undefined1 *)0x3:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
    case (undefined1 *)0x2:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
    }
    bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
    if (bVar2 == 0) {
      return (undefined1 *)0xffffffffffffffec;
    }
    iVar14 = 0x1f;
    if (bVar2 != 0) {
      for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = (9 - (int)puVar7) * 8;
    puVar12 = puVar20;
  }
  else {
    bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
    uVar9 = *(ulonglong *)(puVar7 + -8 + (longlong)puVar20);
    if (bVar2 == 0) {
      return (undefined1 *)0xffffffffffffffff;
    }
    iVar14 = 0x1f;
    if (bVar2 != 0) {
      for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 8;
    puVar12 = (ulonglong *)(puVar7 + -8 + (longlong)puVar20);
  }
  if ((undefined1 *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  uVar3 = *puVar1;
  uVar18 = (1L << ((byte)uVar3 & 0x3f)) - 1;
  uVar11 = (uint)uVar3 + (iVar6 - iVar14);
  uVar19 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
  if (uVar11 < 0x41) {
    if (puVar12 < puVar17) {
      if (puVar12 == puVar20) goto LAB_1805f4fe0;
      uVar9 = (ulonglong)(uVar11 >> 3);
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
      }
      uVar11 = uVar11 + (int)uVar9 * -8;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  else {
    puVar12 = (ulonglong *)&DAT_1806896e0;
  }
LAB_1805f4fe0:
  lVar10 = lVar5 + 0x204;
  uVar11 = uVar3 + uVar11;
  uVar18 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
  if (0x40 < uVar11) {
    return (undefined1 *)0xffffffffffffffec;
  }
  if (puVar12 < puVar17) {
    if (puVar12 != puVar20) {
      uVar9 = (ulonglong)(uVar11 >> 3);
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
      }
      uVar11 = uVar11 + (int)uVar9 * -8;
      goto LAB_1805f5055;
    }
    if (uVar11 < 0x40) goto LAB_1805f505a;
  }
  else {
    uVar9 = (ulonglong)(uVar11 >> 3);
    uVar11 = uVar11 & 7;
LAB_1805f5055:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
LAB_1805f505a:
    if (0x40 < uVar11) {
      return (undefined1 *)0xffffffffffffffec;
    }
  }
  puVar7 = param_1;
  if (puVar12 < puVar17) {
    if (puVar12 == puVar20) goto LAB_1805f50b0;
    uVar13 = uVar11 >> 3;
    uVar9 = (ulonglong)uVar13;
    if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
      uVar13 = (int)puVar12 - iVar15;
      uVar9 = (ulonglong)uVar13;
    }
    uVar11 = uVar11 + uVar13 * -8;
  }
  else {
    uVar9 = (ulonglong)(uVar11 >> 3);
    uVar11 = uVar11 & 7;
  }
  puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
  uVar9 = *puVar12;
LAB_1805f50b0:
  do {
    puVar17 = puVar20 + 1;
    if (uVar11 < 0x41) {
      if (puVar12 < puVar17) {
        if (puVar12 == puVar20) {
          uVar13 = 2 - (uVar11 < 0x40);
          goto LAB_1805f510c;
        }
        uVar9 = (ulonglong)(uVar11 >> 3);
        bVar22 = (ulonglong *)((longlong)puVar12 - uVar9) < puVar20;
        if (bVar22) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar13 = (uint)bVar22;
        uVar11 = uVar11 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar11 >> 3);
        uVar13 = 0;
        uVar11 = uVar11 & 7;
      }
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    else {
      puVar12 = (ulonglong *)&DAT_1806896e0;
      uVar13 = 3;
    }
LAB_1805f510c:
    if (uVar13 != 0 || param_1 + param_2 + -3 <= puVar7) goto LAB_1805f5237;
    uVar13 = *(uint *)(lVar10 + uVar19 * 4);
    *puVar7 = (char)(uVar13 >> 0x10);
    uVar4 = *(uint *)(lVar10 + uVar18 * 4);
    puVar7[1] = (char)(uVar4 >> 0x10);
    iVar14 = (uVar13 >> 0x18) + uVar11;
    iVar6 = iVar14 + (uVar4 >> 0x18);
    uVar11 = *(uint *)(lVar10 + (((uVar9 << ((byte)uVar11 & 0x3f)) >>
                                 (-(char)(uVar13 >> 0x18) & 0x3fU)) + (ulonglong)(uVar13 & 0xffff))
                                * 4);
    iVar16 = (uVar11 >> 0x18) + iVar6;
    uVar19 = ((uVar9 << ((byte)iVar6 & 0x3f)) >> (-(char)(uVar11 >> 0x18) & 0x3fU)) +
             (ulonglong)(uVar11 & 0xffff);
    puVar7[2] = (char)(uVar11 >> 0x10);
    uVar13 = *(uint *)(lVar10 + (((uVar9 << ((byte)iVar14 & 0x3f)) >>
                                 (-(char)(uVar4 >> 0x18) & 0x3fU)) + (ulonglong)(uVar4 & 0xffff)) *
                                4);
    uVar11 = iVar16 + (uVar13 >> 0x18);
    puVar7[3] = (char)(uVar13 >> 0x10);
    uVar18 = ((uVar9 << ((byte)iVar16 & 0x3f)) >> (-(char)(uVar13 >> 0x18) & 0x3fU)) +
             (ulonglong)(uVar13 & 0xffff);
    puVar7 = puVar7 + 4;
  } while( true );
LAB_1805f5745:
  puVar8 = param_1 + param_2 + -2;
  if (puVar8 < puVar7) {
    return (undefined1 *)0xffffffffffffffba;
  }
  do {
    uVar13 = *(uint *)(puStackX_20 + uVar19 * 2 + 2);
    uVar11 = uVar11 + (uVar13 >> 0x18);
    uVar19 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
             (ulonglong)(uVar13 & 0xffff);
    *puVar7 = (char)(uVar13 >> 0x10);
    puVar21 = puVar7 + 1;
    if (0x40 < uVar11) {
      *puVar21 = (char)puStackX_20[uVar18 * 2 + 3];
      return puVar21 + (1 - (longlong)param_1);
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar13 = uVar11 >> 3;
        uVar9 = (ulonglong)uVar13;
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar13 = (int)puVar12 - iVar15;
          uVar9 = (ulonglong)uVar13;
        }
        uVar11 = uVar11 + uVar13 * -8;
        goto LAB_1805f57dd;
      }
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_1805f57dd:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    if (puVar8 < puVar21) {
      return (undefined1 *)0xffffffffffffffba;
    }
    uVar13 = *(uint *)(puStackX_20 + uVar18 * 2 + 2);
    uVar11 = uVar11 + (uVar13 >> 0x18);
    uVar18 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
             (ulonglong)(uVar13 & 0xffff);
    *puVar21 = (char)(uVar13 >> 0x10);
    puVar7 = puVar7 + 2;
    if (0x40 < uVar11) {
      *puVar7 = (char)puStackX_20[uVar19 * 2 + 3];
      return puVar7 + (1 - (longlong)param_1);
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar13 = uVar11 >> 3;
        uVar9 = (ulonglong)uVar13;
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar13 = (int)puVar12 - iVar15;
          uVar9 = (ulonglong)uVar13;
        }
        uVar11 = uVar11 + uVar13 * -8;
        goto LAB_1805f586f;
      }
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_1805f586f:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    if (puVar8 < puVar7) {
      return (undefined1 *)0xffffffffffffffba;
    }
  } while( true );
LAB_1805f5237:
joined_r0x0001805f523e:
  if (param_1 + param_2 + -2 < puVar7) {
    return (undefined1 *)0xffffffffffffffba;
  }
  uVar4 = *(uint *)(lVar10 + uVar19 * 4);
  *puVar7 = (char)(uVar4 >> 0x10);
  uVar13 = (uVar4 >> 0x18) + uVar11;
  uVar19 = (ulonglong)(uVar4 & 0xffff) +
           ((uVar9 << ((byte)uVar11 & 0x3f)) >> (-(char)(uVar4 >> 0x18) & 0x3fU));
  puVar8 = puVar7 + 1;
  if (0x40 < uVar13) {
    *puVar8 = *(undefined1 *)(lVar5 + 0x206 + uVar18 * 4);
    return puVar8 + (1 - (longlong)param_1);
  }
  if (puVar12 < puVar17) {
    if (puVar12 != puVar20) {
      uVar11 = uVar13 >> 3;
      uVar9 = (ulonglong)uVar11;
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar11 = (int)puVar12 - iVar15;
        uVar9 = (ulonglong)uVar11;
      }
      uVar13 = uVar13 + uVar11 * -8;
      goto LAB_1805f52d2;
    }
  }
  else {
    uVar9 = (ulonglong)(uVar13 >> 3);
    uVar13 = uVar13 & 7;
LAB_1805f52d2:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  if (param_1 + param_2 + -2 < puVar8) {
    return (undefined1 *)0xffffffffffffffba;
  }
  uVar4 = *(uint *)(lVar10 + uVar18 * 4);
  *puVar8 = (char)(uVar4 >> 0x10);
  uVar11 = (uVar4 >> 0x18) + uVar13;
  uVar18 = (ulonglong)(uVar4 & 0xffff) +
           ((uVar9 << ((byte)uVar13 & 0x3f)) >> (-(char)(uVar4 >> 0x18) & 0x3fU));
  puVar7 = puVar7 + 2;
  if (0x40 < uVar11) {
    *puVar7 = *(undefined1 *)(lVar5 + 0x206 + uVar19 * 4);
    return puVar7 + (1 - (longlong)param_1);
  }
  if (puVar12 < puVar17) goto LAB_1805f5326;
  uVar9 = (ulonglong)(uVar11 >> 3);
  uVar11 = uVar11 & 7;
  goto LAB_1805f5358;
LAB_1805f5326:
  if (puVar12 != puVar20) {
    uVar13 = uVar11 >> 3;
    uVar9 = (ulonglong)uVar13;
    if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
      uVar13 = (int)puVar12 - iVar15;
      uVar9 = (ulonglong)uVar13;
    }
    uVar11 = uVar11 + uVar13 * -8;
LAB_1805f5358:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  goto joined_r0x0001805f523e;
}



