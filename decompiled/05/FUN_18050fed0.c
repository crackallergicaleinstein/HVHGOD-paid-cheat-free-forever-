// FUN_18050fed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050fed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18050fed0(longlong param_1)

{
  uint *puVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 uVar12;
  int *piVar13;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined7 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int *piVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  byte bVar26;
  bool bVar27;
  int local_res8 [2];
  int local_res10 [2];
  int local_48 [4];
  
  plVar11 = *(longlong **)(param_1 + 8);
  if (((((&DAT_180b0d6f8 <= plVar11) && (plVar11 < (longlong *)0x180b0d768)) ||
       ((&DAT_180cb2e28 <= plVar11 && (plVar11 < (longlong *)0x180cb3528)))) ||
      (plVar11 == (longlong *)&DAT_180cc8f60)) ||
     ((((&DAT_180cc91c8 <= plVar11 && (plVar11 < (longlong *)0x180cc9230)) ||
       (plVar11 == (longlong *)&DAT_180cc9230)) || (plVar11 == (longlong *)&DAT_180cc9234))))
  goto LAB_18051077a;
  plVar11 = (longlong *)(param_1 + 0x18);
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    plVar11 = (longlong *)*plVar11;
  }
  if (*(longlong *)(param_1 + 0x28) == 0xd) {
    lVar15 = *plVar11 + -0x766f2065706f6373;
    if ((lVar15 == 0) && (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x616c7265, lVar15 == 0)) {
      lVar15 = (ulonglong)*(byte *)((longlong)plVar11 + 0xc) - 0x79;
    }
    if (lVar15 == 0) {
      plVar23 = (longlong *)(param_1 + 0x38);
      plVar20 = plVar23;
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        plVar20 = (longlong *)*plVar23;
      }
      if (*(longlong *)(param_1 + 0x48) == 0xb) {
        plVar11 = (longlong *)0x6765722072756c62;
        lVar15 = *plVar20 + -0x6765722072756c62;
        if (lVar15 == 0) {
          plVar11 = (longlong *)0x6f69;
          lVar15 = (ulonglong)*(ushort *)(plVar20 + 1) - 0x6f69;
          if (lVar15 == 0) {
            plVar11 = (longlong *)0x0;
            lVar15 = (ulonglong)*(byte *)((longlong)plVar20 + 10) - 0x6e;
          }
        }
        if (lVar15 == 0) goto LAB_18051077a;
      }
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        plVar23 = (longlong *)*plVar23;
      }
      if (*(longlong *)(param_1 + 0x48) == 0xc) {
        plVar11 = (longlong *)0x6563207261656c63;
        lVar15 = *plVar23 + -0x6563207261656c63;
        if (lVar15 == 0) {
          plVar11 = (longlong *)0x7265746e;
          lVar15 = (ulonglong)*(uint *)(plVar23 + 1) - 0x7265746e;
        }
        if (lVar15 == 0) goto LAB_18051077a;
      }
    }
  }
  plVar11 = *(longlong **)(param_1 + 8);
  if (((plVar11 == (longlong *)&DAT_180b0d994) || (plVar11 == (longlong *)&DAT_180b0d98d)) ||
     (plVar11 == (longlong *)&DAT_180cc83d0)) goto LAB_18051077a;
  plVar23 = (longlong *)(param_1 + 0x18);
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    plVar23 = *(longlong **)(param_1 + 0x18);
  }
  if (10 < *(ulonglong *)(param_1 + 0x28)) {
    plVar11 = (longlong *)0x746f62746967656c;
    lVar15 = *plVar23 + -0x746f62746967656c;
    if (lVar15 == 0) {
      plVar11 = (longlong *)0x2d20;
      lVar15 = (ulonglong)*(ushort *)(plVar23 + 1) - 0x2d20;
      if (lVar15 == 0) {
        plVar11 = (longlong *)0x0;
        lVar15 = (ulonglong)*(byte *)((longlong)plVar23 + 10) - 0x20;
      }
    }
    if (lVar15 == 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x50);
      puVar17 = (undefined8 *)(param_1 + 0x38);
      lVar15 = *(longlong *)(param_1 + 0x48);
      if (uVar4 < 0x10) {
        puVar18 = puVar17;
      }
      else {
        puVar18 = (undefined8 *)*puVar17;
      }
      if (lVar15 == 0x13) {
        iVar9 = memcmp(puVar18,"trigger penetration",0x13);
        plVar11 = (longlong *)CONCAT44(extraout_var,iVar9);
        if (iVar9 == 0) goto LAB_18051077a;
      }
      plVar23 = (longlong *)(param_1 + 0x38);
      if (0xf < uVar4) {
        puVar17 = (undefined8 *)*puVar17;
      }
      if (lVar15 == 0x1a) {
        iVar9 = memcmp(puVar17,"trigger penetration damage",0x1a);
        plVar11 = (longlong *)CONCAT44(extraout_var_00,iVar9);
        if (iVar9 == 0) goto LAB_18051077a;
      }
      plVar20 = (longlong *)(param_1 + 0x38);
      if (0xf < uVar4) {
        plVar23 = (longlong *)*plVar23;
      }
      if (lVar15 == 0x11) {
        lVar16 = *plVar23 + -0x2072656767697274;
        if (lVar16 == 0) {
          plVar11 = (longlong *)0x6c6e6f2064616568;
          lVar16 = plVar23[1] + -0x6c6e6f2064616568;
          if (lVar16 == 0) {
            plVar11 = (longlong *)0x0;
            lVar16 = (ulonglong)*(byte *)(plVar23 + 2) - 0x79;
          }
        }
        if (lVar16 == 0) goto LAB_18051077a;
      }
      plVar23 = (longlong *)(param_1 + 0x38);
      if (0xf < uVar4) {
        plVar20 = (longlong *)*plVar20;
      }
      if (lVar15 == 0x18) {
        lVar15 = *plVar20 + -0x2072656767697274;
        if ((lVar15 == 0) && (lVar15 = plVar20[1] + -0x206d696120657375, lVar15 == 0)) {
          lVar15 = plVar20[2] + -0x7365786f62746968;
        }
        plVar11 = (longlong *)0x0;
        if (lVar15 == 0) goto LAB_18051077a;
      }
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        plVar23 = (longlong *)*plVar23;
      }
      if (*(longlong *)(param_1 + 0x48) == 0x18) {
        lVar15 = *plVar23 + -0x2072656767697274;
        if ((lVar15 == 0) && (lVar15 = plVar23[1] + -0x206d756d6978616d, lVar15 == 0)) {
          lVar15 = plVar23[2] + -0x7963617275636361;
        }
        plVar11 = (longlong *)0x0;
        if (lVar15 == 0) goto LAB_18051077a;
      }
    }
  }
  plVar11 = *(longlong **)(param_1 + 8);
  if ((&DAT_180b0de20 <= plVar11) && (plVar11 < (longlong *)0x180b0df40)) {
    if (DAT_180b0de18 != '\x03') goto LAB_18051077a;
    uVar4 = *(ulonglong *)(param_1 + 0x50);
    plVar11 = (longlong *)(param_1 + 0x38);
    lVar15 = *(longlong *)(param_1 + 0x48);
    if (uVar4 < 0x10) {
      plVar23 = plVar11;
    }
    else {
      plVar23 = (longlong *)*plVar11;
    }
    if ((lVar15 == 0xf) && (iVar9 = memcmp(plVar23,"logo icon color",0xf), iVar9 == 0)) {
LAB_180510392:
      return (ulonglong)DAT_180b0de28;
    }
    puVar17 = (undefined8 *)(param_1 + 0x38);
    if (0xf < uVar4) {
      plVar11 = (longlong *)*plVar11;
    }
    if (lVar15 == 0xe) {
      lVar16 = *plVar11 + -0x6e6f636920737066;
      if ((lVar16 == 0) && (lVar16 = (ulonglong)*(uint *)(plVar11 + 1) - 0x6c6f6320, lVar16 == 0)) {
        lVar16 = (ulonglong)*(ushort *)((longlong)plVar11 + 0xc) - 0x726f;
      }
      if (lVar16 == 0) goto LAB_180510392;
    }
    puVar18 = (undefined8 *)(param_1 + 0x38);
    if (0xf < uVar4) {
      puVar17 = (undefined8 *)*puVar17;
    }
    if ((lVar15 == 0xf) && (iVar9 = memcmp(puVar17,"ping icon color",0xf), iVar9 == 0))
    goto LAB_180510392;
    puVar17 = (undefined8 *)(param_1 + 0x38);
    if (0xf < uVar4) {
      puVar18 = (undefined8 *)*puVar18;
    }
    if ((lVar15 == 0xf) && (iVar9 = memcmp(puVar18,"time icon color",0xf), iVar9 == 0))
    goto LAB_180510392;
    if (0xf < *(ulonglong *)(param_1 + 0x50)) {
      puVar17 = (undefined8 *)*puVar17;
    }
    if ((*(longlong *)(param_1 + 0x48) == 0x13) &&
       (iVar9 = memcmp(puVar17,"velocity icon color",0x13), iVar9 == 0)) goto LAB_180510392;
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (puVar5 == &DAT_180cad724) {
    return CONCAT71(0x180cad7,DAT_180cad720 == '\x03');
  }
  if (puVar5 == &DAT_180cad72c) {
    return CONCAT71(0x180cad7,DAT_180cad728 == '\0');
  }
  if (puVar5 == &DAT_180cad878) {
    return (ulonglong)DAT_180cad810;
  }
  if (puVar5 == &DAT_180cadb68) {
    return (ulonglong)DAT_180cadb00;
  }
  if (puVar5 == &DAT_180cc85f8) {
    return (ulonglong)DAT_180cc8590;
  }
  if (puVar5 == &DAT_180cc8958) {
    return (ulonglong)DAT_180cc88f0;
  }
  if (puVar5 == &DAT_180cc85fc) {
    return (ulonglong)DAT_180cc84c0;
  }
  if ((puVar5 < &DAT_180b0d4c8) || ((undefined4 *)0x180b0d5ef < puVar5)) goto LAB_1805108dc;
  uVar4 = *(ulonglong *)(param_1 + 0x50);
  plVar23 = (longlong *)(param_1 + 0x38);
  lVar15 = *(longlong *)(param_1 + 0x48);
  plVar20 = plVar23;
  if (0xf < uVar4) {
    plVar20 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xd) {
    plVar11 = (longlong *)0x6f206d6f74746f62;
    lVar16 = *plVar20 + -0x6f206d6f74746f62;
    if (lVar16 == 0) {
      plVar11 = (longlong *)0x65736666;
      lVar16 = (ulonglong)*(uint *)(plVar20 + 1) - 0x65736666;
      if (lVar16 == 0) {
        plVar11 = (longlong *)0x0;
        lVar16 = (ulonglong)*(byte *)((longlong)plVar20 + 0xc) - 0x74;
      }
    }
    if (lVar16 == 0) goto LAB_18051077a;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 0x10) {
    lVar16 = *plVar11 + -0x756f72676b636162;
    if (lVar16 == 0) {
      lVar16 = plVar11[1] + -0x726f6c6f6320646e;
    }
    plVar11 = (longlong *)0x0;
    if (lVar16 == 0) goto LAB_180510554;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xc) {
    lVar16 = *plVar11 + -0x6320726564726f62;
    if (lVar16 == 0) {
      puVar1 = (uint *)(plVar11 + 1);
      plVar11 = (longlong *)0x726f6c6f;
      lVar16 = (ulonglong)*puVar1 - 0x726f6c6f;
    }
    if (lVar16 == 0) {
LAB_180510554:
      return CONCAT71((int7)((ulonglong)plVar11 >> 8),DAT_180b0d5dd == '\0');
    }
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xb) {
    lVar16 = *plVar11 + -0x6977207472616863;
    if ((lVar16 == 0) && (lVar16 = (ulonglong)*(ushort *)(plVar11 + 1) - 0x7464, lVar16 == 0)) {
      lVar16 = (ulonglong)*(byte *)((longlong)plVar11 + 10) - 0x68;
    }
    if (lVar16 == 0) goto LAB_1805106f4;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xc) {
    lVar16 = *plVar11 + -0x6568207472616863;
    if (lVar16 == 0) {
      lVar16 = (ulonglong)*(uint *)(plVar11 + 1) - 0x74686769;
    }
    if (lVar16 == 0) goto LAB_1805106f4;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 10) {
    lVar16 = *plVar11 + -0x79747320656e696c;
    if (lVar16 == 0) {
      lVar16 = (ulonglong)*(ushort *)(plVar11 + 1) - 0x656c;
    }
    if (lVar16 == 0) goto LAB_1805106f4;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 9) {
    lVar16 = *plVar11 + -0x73656e6b63696874;
    if (lVar16 == 0) {
      lVar16 = (ulonglong)*(byte *)(plVar11 + 1) - 0x73;
    }
    if (lVar16 == 0) goto LAB_1805106f4;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if ((lVar15 == 8) && (*plVar11 == 0x746e656964617267)) {
LAB_1805106f4:
    return (ulonglong)DAT_180b0d530;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x50);
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 9) {
    lVar16 = *plVar11 + -0x6c69662065646968;
    if (lVar16 == 0) {
      lVar16 = (ulonglong)*(byte *)(plVar11 + 1) - 0x6c;
    }
    if (lVar16 == 0) goto LAB_1805106f4;
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if ((lVar15 == 4) && ((int)*plVar11 == 0x776f6c67)) goto LAB_1805106f4;
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if ((lVar15 == 4) && ((int)*plVar11 == 0x64697267)) goto LAB_1805106f4;
  plVar20 = plVar23;
  if (0xf < uVar4) {
    plVar20 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xe) {
    lVar16 = *plVar20 + -0x746e656964617267;
    if (lVar16 == 0) {
      plVar11 = (longlong *)0x6c6f6320;
      lVar16 = (ulonglong)*(uint *)(plVar20 + 1) - 0x6c6f6320;
      if (lVar16 == 0) {
        plVar11 = (longlong *)0x726f;
        lVar16 = (ulonglong)*(ushort *)((longlong)plVar20 + 0xc) - 0x726f;
      }
    }
    if (lVar16 != 0) goto LAB_180510734;
LAB_180510764:
    if (DAT_180b0d530 == 0) goto LAB_18051077a;
    cVar8 = DAT_180b0d5c4;
LAB_180510774:
    if (cVar8 == '\0') goto LAB_18051077a;
    goto LAB_180510d22;
  }
LAB_180510734:
  plVar20 = plVar23;
  if (0xf < uVar4) {
    plVar20 = (longlong *)*plVar23;
  }
  if (lVar15 == 0x10) {
    plVar11 = (longlong *)(*plVar20 + -0x206574616d696e61);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)(plVar20[1] + -0x746e656964617267);
    }
    if (plVar11 == (longlong *)0x0) goto LAB_180510764;
  }
  plVar20 = plVar23;
  if (0xf < uVar4) {
    plVar20 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xe) {
    lVar16 = *plVar20 + -0x746e656964617267;
    if (lVar16 == 0) {
      plVar11 = (longlong *)0x65707320;
      lVar16 = (ulonglong)*(uint *)(plVar20 + 1) - 0x65707320;
      if (lVar16 == 0) {
        plVar11 = (longlong *)0x6465;
        lVar16 = (ulonglong)*(ushort *)((longlong)plVar20 + 0xc) - 0x6465;
      }
    }
    if (lVar16 == 0) {
      if ((DAT_180b0d530 == 0) || (DAT_180b0d5c4 == '\0')) goto LAB_18051077a;
      cVar8 = DAT_180b0d5c5;
      goto LAB_180510774;
    }
  }
  plVar20 = plVar23;
  if (0xf < uVar4) {
    plVar20 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xd) {
    lVar16 = *plVar20 + -0x72747320776f6c67;
    if (lVar16 == 0) {
      plVar11 = (longlong *)0x74676e65;
      lVar16 = (ulonglong)*(uint *)(plVar20 + 1) - 0x74676e65;
      if (lVar16 == 0) {
        plVar11 = (longlong *)0x0;
        lVar16 = (ulonglong)*(byte *)((longlong)plVar20 + 0xc) - 0x68;
      }
    }
    if (lVar16 == 0) {
      if ((DAT_180b0d530 != 0) && (DAT_180b0d5d4 != '\0')) {
        return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
      }
      goto LAB_18051077a;
    }
  }
  plVar11 = plVar23;
  if (0xf < uVar4) {
    plVar11 = (longlong *)*plVar23;
  }
  if (lVar15 == 10) {
    lVar16 = *plVar11 + -0x6c6f632064697267;
    if (lVar16 == 0) {
      puVar2 = (ushort *)(plVar11 + 1);
      plVar11 = (longlong *)0x726f;
      lVar16 = (ulonglong)*puVar2 - 0x726f;
    }
    if (lVar16 == 0) {
      if ((DAT_180b0d530 != 0) && (DAT_180b0d5dc != '\0')) {
        return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
      }
      goto LAB_18051077a;
    }
  }
  if (0xf < uVar4) {
    plVar23 = (longlong *)*plVar23;
  }
  if (lVar15 == 0xc) {
    plVar11 = (longlong *)0x61706f206c6c6966;
    lVar15 = *plVar23 + -0x61706f206c6c6966;
    if (lVar15 == 0) {
      plVar11 = (longlong *)0x79746963;
      lVar15 = (ulonglong)*(uint *)(plVar23 + 1) - 0x79746963;
    }
    if (lVar15 != 0) goto LAB_1805108dc;
    if (DAT_180b0d530 == 0) goto LAB_18051077a;
    bVar27 = DAT_180b0d5cc == '\0';
LAB_180510d1c:
    if (!bVar27) goto LAB_18051077a;
  }
  else {
LAB_1805108dc:
    plVar11 = (longlong *)(param_1 + 0x18);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      plVar11 = (longlong *)*plVar11;
    }
    if (*(longlong *)(param_1 + 0x28) == 0xd) {
      lVar15 = *plVar11 + -0x6f74617463657073;
      if ((lVar15 == 0) && (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x75682072, lVar15 == 0)) {
        lVar15 = (ulonglong)*(byte *)((longlong)plVar11 + 0xc) - 100;
      }
      if (lVar15 == 0) {
        plVar23 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar23 = (longlong *)*plVar23;
        }
        if (*(longlong *)(param_1 + 0x48) == 0xb) {
          plVar11 = (longlong *)0x6f6320746e756f63;
          lVar15 = *plVar23 + -0x6f6320746e756f63;
          if (lVar15 == 0) {
            plVar11 = (longlong *)0x6f6c;
            lVar15 = (ulonglong)*(ushort *)(plVar23 + 1) - 0x6f6c;
            if (lVar15 == 0) {
              plVar11 = (longlong *)0x0;
              lVar15 = (ulonglong)*(byte *)((longlong)plVar23 + 10) - 0x72;
            }
          }
          if (lVar15 == 0) goto LAB_18051077a;
        }
      }
    }
    puVar6 = *(undefined1 **)(param_1 + 8);
    puVar21 = &DAT_180cc76f0;
    do {
      if ((puVar21 <= puVar6) && (puVar6 < puVar21 + 0x1c8)) {
        uVar4 = *(ulonglong *)(param_1 + 0x50);
        plVar11 = (longlong *)(param_1 + 0x38);
        lVar15 = *(longlong *)(param_1 + 0x48);
        if (uVar4 < 0x10) {
          plVar23 = plVar11;
        }
        else {
          plVar23 = (longlong *)*plVar11;
        }
        if (lVar15 == 0xd) {
          lVar16 = *plVar23 + -0x72747320776f6c67;
          if ((lVar16 == 0) &&
             (lVar16 = (ulonglong)*(uint *)(plVar23 + 1) - 0x74676e65, lVar16 == 0)) {
            lVar16 = (ulonglong)*(byte *)((longlong)plVar23 + 0xc) - 0x68;
          }
          if (lVar16 == 0) {
            return (ulonglong)(byte)puVar21[0x78];
          }
        }
        plVar23 = (longlong *)(param_1 + 0x38);
        if (0xf < uVar4) {
          plVar11 = (longlong *)*plVar11;
        }
        if (lVar15 == 0xb) {
          lVar16 = *plVar11 + -0x70732065736c7570;
          if ((lVar16 == 0) && (lVar16 = (ulonglong)*(ushort *)(plVar11 + 1) - 0x6565, lVar16 == 0))
          {
            lVar16 = (ulonglong)*(byte *)((longlong)plVar11 + 10) - 100;
          }
          if (lVar16 == 0) goto LAB_180510c01;
        }
        if (0xf < uVar4) {
          plVar23 = (longlong *)*plVar23;
        }
        if (lVar15 == 0xc) {
          lVar16 = *plVar23 + -0x63207265676e6164;
          if (lVar16 == 0) {
            lVar16 = (ulonglong)*(uint *)(plVar23 + 1) - 0x726f6c6f;
          }
          if (lVar16 == 0) goto LAB_180510c01;
        }
        puVar17 = (undefined8 *)(param_1 + 0x38);
        if (0xf < uVar4) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if ((lVar15 == 0xf) && (iVar9 = memcmp(puVar17,"danger distance",0xf), iVar9 == 0)) {
LAB_180510c01:
          return (ulonglong)(byte)puVar21[0xe8];
        }
      }
      puVar21 = puVar21 + 0x1c8;
    } while (puVar21 != &DAT_180cc7c48);
    puVar6 = *(undefined1 **)(param_1 + 8);
    if ((puVar6 < &DAT_180b0bbd0) || ((undefined1 *)0x180b0bd1f < puVar6)) {
      puVar21 = &DAT_180b0b540;
      do {
        puVar3 = puVar21 + 0x150;
        if ((puVar21 <= puVar6) && (puVar6 < puVar3)) goto LAB_180510c0d;
        puVar21 = puVar3;
      } while (puVar3 != &DAT_180b0bbd0);
    }
    else {
LAB_180510c0d:
      if ((int)_DAT_180b0bd20 == 0) {
        pbVar22 = &DAT_180b0bca0;
      }
      else {
        local_res10[0] = 4;
        local_res8[0] = 0;
        piVar19 = local_res8;
        if (-1 < DAT_180c5a50c) {
          piVar19 = &DAT_180c5a50c;
        }
        piVar13 = local_res10;
        if (DAT_180c5a50c < 5) {
          piVar13 = piVar19;
        }
        pbVar22 = &DAT_180b0b610 + (longlong)*piVar13 * 0x150;
      }
      plVar23 = (longlong *)(param_1 + 0x38);
      plVar11 = plVar23;
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        plVar11 = (longlong *)*plVar23;
      }
      if (*(ulonglong *)(param_1 + 0x48) == 0xd) {
        lVar15 = *plVar11 + -0x72747320776f6c67;
        if ((lVar15 == 0) && (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x74676e65, lVar15 == 0))
        {
          lVar15 = (ulonglong)*(byte *)((longlong)plVar11 + 0xc) - 0x68;
        }
        if (lVar15 == 0) {
          return (ulonglong)*pbVar22;
        }
      }
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        plVar23 = (longlong *)*plVar23;
      }
      if (10 < *(ulonglong *)(param_1 + 0x48)) {
        plVar11 = (longlong *)0x6d6164206c6c6977;
        lVar15 = *plVar23 + -0x6d6164206c6c6977;
        if (lVar15 == 0) {
          plVar11 = (longlong *)0x6761;
          lVar15 = (ulonglong)*(ushort *)(plVar23 + 1) - 0x6761;
          if (lVar15 == 0) {
            plVar11 = (longlong *)0x0;
            lVar15 = (ulonglong)*(byte *)((longlong)plVar23 + 10) - 0x65;
          }
        }
        if (lVar15 == 0) {
          if ((int)_DAT_180b0bd20 == 0) goto LAB_180510d22;
          bVar27 = DAT_180c5a50c == 0;
          goto LAB_180510d1c;
        }
      }
    }
    piVar19 = (int *)(param_1 + 0x18);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      piVar19 = *(int **)piVar19;
    }
    if (*(longlong *)(param_1 + 0x28) == 7) {
      iVar9 = *piVar19 + -0x61706d69;
      if ((iVar9 == 0) && (iVar9 = *(ushort *)(piVar19 + 1) - 0x7463, iVar9 == 0)) {
        iVar9 = *(byte *)((longlong)piVar19 + 6) - 0x73;
      }
      if (iVar9 == 0) {
        plVar11 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar11 = *(longlong **)(param_1 + 0x38);
        }
        if (0xc < *(ulonglong *)(param_1 + 0x48)) {
          lVar15 = *plVar11 + -0x6665206874616564;
          if ((lVar15 == 0) &&
             (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x74636566, lVar15 == 0)) {
            lVar15 = (ulonglong)*(byte *)((longlong)plVar11 + 0xc) - 0x20;
          }
          if ((lVar15 == 0) &&
             (plVar11 = (longlong *)&DAT_180b0c2fc, *(undefined4 **)(param_1 + 8) != &DAT_180b0c2fc)
             ) goto LAB_18051077a;
        }
      }
    }
    if (*(undefined8 **)(param_1 + 8) == &DAT_180b0c168) {
      return CONCAT71(0x180b0c1,DAT_180b0c160 == 9);
    }
    if (*(undefined8 **)(param_1 + 8) == &DAT_180b0c1f8) {
      return CONCAT71(0x180b0c1,DAT_180b0c1f0 == 9);
    }
    plVar11 = (longlong *)(param_1 + 0x18);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      plVar11 = (longlong *)*plVar11;
    }
    if (*(longlong *)(param_1 + 0x28) == 0xd) {
      lVar15 = *plVar11 + -0x6874206874616564;
      if ((lVar15 == 0) && (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x65646e75, lVar15 == 0)) {
        lVar15 = (ulonglong)*(byte *)((longlong)plVar11 + 0xc) - 0x72;
      }
      if (lVar15 == 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x50);
        plVar11 = (longlong *)(param_1 + 0x38);
        lVar15 = *(longlong *)(param_1 + 0x48);
        if (uVar4 < 0x10) {
          plVar23 = plVar11;
        }
        else {
          plVar23 = (longlong *)*plVar11;
        }
        if (lVar15 == 0xb) {
          lVar16 = *plVar23 + -0x6461722072756c62;
          if ((lVar16 == 0) && (lVar16 = (ulonglong)*(ushort *)(plVar23 + 1) - 0x7569, lVar16 == 0))
          {
            lVar16 = (ulonglong)*(byte *)((longlong)plVar23 + 10) - 0x73;
          }
          if (lVar16 == 0) {
            return (ulonglong)DAT_180b0c3fc;
          }
        }
        plVar23 = (longlong *)(param_1 + 0x38);
        if (0xf < uVar4) {
          plVar11 = (longlong *)*plVar11;
        }
        if (lVar15 == 0xc) {
          lVar16 = *plVar11 + -0x6172206d6f6f6c62;
          if (lVar16 == 0) {
            lVar16 = (ulonglong)*(uint *)(plVar11 + 1) - 0x73756964;
          }
          if (lVar16 == 0) goto LAB_180510e88;
        }
        piVar19 = (int *)(param_1 + 0x38);
        if (0xf < uVar4) {
          plVar23 = (longlong *)*plVar23;
        }
        if (lVar15 == 0xe) {
          lVar16 = *plVar23 + -0x7473206d6f6f6c62;
          if ((lVar16 == 0) &&
             (lVar16 = (ulonglong)*(uint *)(plVar23 + 1) - 0x676e6572, lVar16 == 0)) {
            lVar16 = (ulonglong)*(ushort *)((longlong)plVar23 + 0xc) - 0x6874;
          }
          if (lVar16 == 0) {
LAB_180510e88:
            return (ulonglong)DAT_180b0c3fd;
          }
        }
        if (0xf < uVar4) {
          piVar19 = *(int **)piVar19;
        }
        if (lVar15 == 6) {
          iVar9 = *piVar19 + -0x756c6f76;
          if (iVar9 == 0) {
            iVar9 = *(ushort *)(piVar19 + 1) - 0x656d;
          }
          if (iVar9 == 0) {
            return (ulonglong)DAT_180b0c3fe;
          }
        }
      }
    }
    piVar19 = (int *)(param_1 + 0x18);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      piVar19 = *(int **)piVar19;
    }
    if (*(longlong *)(param_1 + 0x28) == 7) {
      iVar9 = *piVar19 + -0x61706d69;
      if ((iVar9 == 0) && (iVar9 = *(ushort *)(piVar19 + 1) - 0x7463, iVar9 == 0)) {
        iVar9 = *(byte *)((longlong)piVar19 + 6) - 0x73;
      }
      if (iVar9 == 0) {
        piVar19 = (int *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          piVar19 = *(int **)piVar19;
        }
        uVar4 = *(ulonglong *)(param_1 + 0x48);
        if (4 < uVar4) {
          iVar9 = *piVar19 + -0x72617073;
          if (iVar9 == 0) {
            iVar9 = *(byte *)(piVar19 + 1) - 0x6b;
          }
          if (iVar9 == 0) goto LAB_180511142;
        }
        puVar17 = (undefined8 *)(param_1 + 0x38);
        piVar19 = *(int **)(param_1 + 8);
        if (piVar19 == &DAT_180b0c634) {
LAB_180511142:
          return CONCAT71((int7)((ulonglong)piVar19 >> 8),DAT_180b0c628 != 0);
        }
        if ((piVar19 == &DAT_180b0c62c) || (piVar19 == &DAT_180b0c630)) {
          return CONCAT71((int7)((ulonglong)piVar19 >> 8),DAT_180b0c628 != 1);
        }
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if ((uVar4 == 0x1b) &&
           (iVar9 = memcmp(puVar17,"bullet tracer glow strength",0x1b), iVar9 == 0)) {
LAB_180510fe0:
          return (ulonglong)DAT_180b0c750;
        }
        puVar17 = (undefined8 *)(param_1 + 0x38);
        uVar7 = *(ulonglong *)(param_1 + 0x50);
        if (uVar7 < 0x10) {
          puVar18 = puVar17;
        }
        else {
          puVar18 = (undefined8 *)*puVar17;
        }
        if ((uVar4 == 0x19) &&
           (iVar9 = memcmp(puVar18,"bullet tracer glow radius",0x19), iVar9 == 0))
        goto LAB_180510fe0;
        puVar18 = (undefined8 *)(param_1 + 0x38);
        if (0xf < uVar7) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if ((uVar4 == 0x1c) &&
           (iVar9 = memcmp(puVar17,"bullet tracer bloom strength",0x1c), iVar9 == 0)) {
LAB_180511058:
          return (ulonglong)DAT_180b0c75c;
        }
        puVar17 = (undefined8 *)(param_1 + 0x38);
        lVar15 = *(longlong *)(param_1 + 0x48);
        if (0xf < uVar7) {
          puVar18 = (undefined8 *)*puVar18;
        }
        if ((lVar15 == 0x1a) &&
           (iVar9 = memcmp(puVar18,"bullet tracer bloom radius",0x1a), iVar9 == 0))
        goto LAB_180511058;
        puVar18 = (undefined8 *)(param_1 + 0x38);
        if (0xf < uVar7) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if ((lVar15 == 0x17) && (iVar9 = memcmp(puVar17,"bullet tracer end color",0x17), iVar9 == 0)
           ) {
          return (ulonglong)DAT_180b0c768;
        }
        plVar11 = (longlong *)(param_1 + 0x38);
        uVar4 = *(ulonglong *)(param_1 + 0x50);
        if (0xf < uVar4) {
          puVar18 = (undefined8 *)*puVar18;
        }
        if (lVar15 == 0x19) {
          iVar9 = memcmp(puVar18,"bullet tracer travel time",0x19);
          if (iVar9 == 0) {
            return CONCAT71((int7)(CONCAT44(extraout_var_01,iVar9) >> 8),DAT_180b0c738 == 1);
          }
        }
        if (0xf < uVar4) {
          plVar11 = (longlong *)*plVar11;
        }
        if (lVar15 == 0x12) {
          uVar12 = 0x742074656c6c7562;
          lVar15 = *plVar11 + -0x742074656c6c7562;
          if (lVar15 == 0) {
            uVar12 = 0x6174207265636172;
            lVar15 = plVar11[1] + -0x6174207265636172;
            if (lVar15 == 0) {
              uVar12 = 0x6c69;
              lVar15 = (ulonglong)*(ushort *)(plVar11 + 2) - 0x6c69;
            }
          }
          if (lVar15 == 0) {
            return CONCAT71((int7)((ulonglong)uVar12 >> 8),DAT_180b0c738 == 2);
          }
        }
      }
    }
    uVar4 = *(ulonglong *)(param_1 + 0x30);
    plVar11 = (longlong *)(param_1 + 0x18);
    if (0xf < uVar4) {
      plVar11 = (longlong *)*plVar11;
    }
    if (*(longlong *)(param_1 + 0x28) == 0xe) {
      lVar15 = *plVar11 + -0x692074656c6c7562;
      if ((lVar15 == 0) && (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x6361706d, lVar15 == 0)) {
        lVar15 = (ulonglong)*(ushort *)((longlong)plVar11 + 0xc) - 0x7374;
      }
      if (lVar15 == 0) {
        plVar11 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar11 = (longlong *)*plVar11;
        }
        if (*(longlong *)(param_1 + 0x48) == 0xd) {
          lVar15 = *plVar11 + -0x72747320776f6c67;
          if ((lVar15 == 0) &&
             (lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x74676e65, lVar15 == 0)) {
            lVar15 = (ulonglong)*(byte *)((longlong)plVar11 + 0xc) - 0x68;
          }
          if (lVar15 == 0) {
            return (ulonglong)DAT_180b0c658;
          }
        }
      }
    }
    plVar11 = (longlong *)(param_1 + 0x18);
    if (0xf < uVar4) {
      plVar11 = *(longlong **)(param_1 + 0x18);
    }
    uVar7 = *(ulonglong *)(param_1 + 0x28);
    if (uVar7 < 0xc) {
LAB_18051123d:
      puVar17 = (undefined8 *)(param_1 + 0x18);
      if (0xf < uVar4) {
        puVar17 = (undefined8 *)*puVar17;
      }
      if ((uVar7 == 0xf) && (iVar9 = memcmp(puVar17,"death shockwave",0xf), iVar9 == 0))
      goto LAB_18051126b;
    }
    else {
      lVar15 = *plVar11 + -0x7473206874616564;
      if (lVar15 == 0) {
        lVar15 = (ulonglong)*(uint *)(plVar11 + 1) - 0x20656c79;
      }
      if (lVar15 != 0) goto LAB_18051123d;
LAB_18051126b:
      plVar11 = (longlong *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        plVar11 = (longlong *)*plVar11;
      }
      iVar9 = (int)_DAT_180b0c2fc;
      if (0xb < uVar7) {
        lVar15 = *plVar11 + -0x7473206874616564;
        if (lVar15 == 0) {
          puVar1 = (uint *)(plVar11 + 1);
          plVar11 = (longlong *)0x20656c79;
          lVar15 = (ulonglong)*puVar1 - 0x20656c79;
        }
        if (lVar15 == 0) {
          local_48[1] = 5;
          piVar19 = local_48;
          local_48[0] = 0;
          if (-1 < iVar9) {
            piVar19 = &DAT_180b0c2fc;
          }
          piVar13 = local_48 + 1;
          if (iVar9 < 6) {
            piVar13 = piVar19;
          }
          plVar11 = (longlong *)(&DAT_180b0c410 + (longlong)*piVar13 * 0x38);
          if ((*(longlong **)(param_1 + 8) < plVar11) ||
             (plVar11 = (longlong *)(&DAT_180b0c448 + (longlong)*piVar13 * 0x38),
             plVar11 <= *(longlong **)(param_1 + 8))) goto LAB_18051077a;
        }
      }
      puVar17 = (undefined8 *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      if (uVar7 == 0xf) {
        iVar10 = memcmp(puVar17,"death shockwave",0xf);
        plVar11 = (longlong *)CONCAT44(extraout_var_02,iVar10);
        if (iVar10 == 0) {
          iVar9 = 3;
        }
      }
      uVar4 = *(ulonglong *)(param_1 + 0x50);
      piVar19 = (int *)(param_1 + 0x38);
      lVar15 = *(longlong *)(param_1 + 0x48);
      if (uVar4 < 0x10) {
        piVar13 = piVar19;
      }
      else {
        piVar13 = *(int **)piVar19;
      }
      if (lVar15 == 0xf) {
        iVar10 = memcmp(piVar13,"native material",0xf);
        plVar11 = (longlong *)CONCAT44(extraout_var_03,iVar10);
        if (iVar10 == 0) goto LAB_18051077a;
      }
      piVar13 = (int *)(param_1 + 0x38);
      if (0xf < uVar4) {
        piVar19 = *(int **)piVar19;
      }
      if (lVar15 == 7) {
        iVar10 = *piVar19 + -0x6361706f;
        if ((iVar10 == 0) && (iVar10 = *(ushort *)(piVar19 + 1) - 0x7469, iVar10 == 0)) {
          iVar10 = *(byte *)((longlong)piVar19 + 6) - 0x79;
        }
        if (iVar10 == 0) goto LAB_18051077a;
      }
      if (iVar9 == 4) {
        if (0xf < uVar4) {
          piVar13 = *(int **)piVar13;
        }
        if (lVar15 == 5) {
          iVar9 = *piVar13 + -0x6f6c6f63;
          if (iVar9 == 0) {
            iVar9 = *(byte *)(piVar13 + 1) - 0x72;
          }
          if (iVar9 == 0) goto LAB_180510d22;
        }
        plVar23 = (longlong *)(param_1 + 0x38);
        if (0xf < uVar4) {
          plVar23 = (longlong *)*plVar23;
        }
        if (lVar15 != 8) goto LAB_18051077a;
        plVar11 = (longlong *)0x6e6f697461727564;
        bVar27 = *plVar23 == 0x6e6f697461727564;
        goto LAB_180510d1c;
      }
      if (0xf < uVar4) {
        piVar13 = *(int **)piVar13;
      }
      if ((lVar15 == 4) && (*piVar13 == 0x646c6f68)) {
LAB_18051147d:
        return CONCAT71((int7)((ulonglong)(param_1 + 0x38) >> 8),iVar9 == 5);
      }
      piVar19 = (int *)(param_1 + 0x38);
      if (uVar4 < 0x10) {
        piVar13 = piVar19;
      }
      else {
        piVar13 = *(int **)piVar19;
      }
      if ((lVar15 == 4) && (*piVar13 == 0x65736972)) goto LAB_18051147d;
      piVar13 = (int *)(param_1 + 0x38);
      uVar4 = *(ulonglong *)(param_1 + 0x50);
      lVar15 = *(longlong *)(param_1 + 0x48);
      if (0xf < uVar4) {
        piVar19 = *(int **)piVar19;
      }
      if ((lVar15 == 4) && (*piVar19 == 0x6e727574)) goto LAB_18051147d;
      piVar19 = (int *)(param_1 + 0x38);
      if (0xf < uVar4) {
        piVar13 = *(int **)piVar13;
      }
      if (lVar15 == 7) {
        iVar10 = *piVar13 + -0x76617267;
        if ((iVar10 == 0) && (iVar10 = *(ushort *)(piVar13 + 1) - 0x7469, iVar10 == 0)) {
          iVar10 = *(byte *)((longlong)piVar13 + 6) - 0x79;
        }
        if (iVar10 == 0) {
          return (ulonglong)CONCAT31((int3)(iVar9 - 1U >> 8),iVar9 - 1U < 2);
        }
      }
      piVar13 = (int *)(param_1 + 0x38);
      if (0xf < uVar4) {
        piVar19 = *(int **)piVar19;
      }
      uVar14 = (undefined7)((ulonglong)(param_1 + 0x38) >> 8);
      if (lVar15 == 5) {
        iVar10 = *piVar19 + -0x65657073;
        if (iVar10 == 0) {
          iVar10 = *(byte *)(piVar19 + 1) - 100;
        }
        if (iVar10 == 0) {
          return CONCAT71(uVar14,iVar9 != 5);
        }
      }
      if (0xf < uVar4) {
        piVar13 = *(int **)piVar13;
      }
      if (lVar15 == 5) {
        iVar10 = *piVar13 + -0x6e756f63;
        if (iVar10 == 0) {
          iVar10 = *(byte *)(piVar13 + 1) - 0x74;
        }
        if (iVar10 == 0) {
          return CONCAT71(uVar14,iVar9 != 3);
        }
      }
    }
    plVar11 = *(longlong **)(param_1 + 8);
    if (plVar11 == (longlong *)&DAT_180b0c300) {
LAB_18051077a:
      return (ulonglong)plVar11 & 0xffffffffffffff00;
    }
    if (((longlong *)0x180cbf2bf < plVar11) && (plVar11 < &DAT_180cc7670)) {
      FUN_180111410();
      if (DAT_180cbf2c0 == 1) {
        plVar23 = (longlong *)(&DAT_180cbf6c8 + (longlong)DAT_180cbf2c4 * 0x288);
        plVar11 = (longlong *)(&DAT_180cbf5c0 + (longlong)DAT_180cbf2c4 * 0x288);
      }
      else if (DAT_180cbf2c0 == 2) {
        plVar23 = (longlong *)(&DAT_180cc0880 + (longlong)DAT_180cbf2c8 * 0x288);
        plVar11 = (longlong *)(&DAT_180cc0778 + (longlong)DAT_180cbf2c8 * 0x288);
      }
      else {
        plVar23 = (longlong *)&DAT_180cbf440;
        plVar11 = (longlong *)&DAT_180cbf338;
      }
      plVar20 = *(longlong **)(param_1 + 8);
      if ((plVar11 <= plVar20) && (plVar20 < plVar11 + 0x21)) {
        plVar24 = plVar11 + 0x10;
        do {
          plVar25 = plVar24;
          if (plVar25 == (longlong *)((longlong)plVar11 + 0x104)) goto LAB_18051162c;
          plVar24 = (longlong *)((longlong)plVar25 + 0xc);
        } while ((plVar20 < plVar25) || (plVar24 <= plVar20));
        plVar11 = (longlong *)FUN_18027c2a0(plVar11);
        if (plVar25 != plVar11) goto LAB_18051077a;
      }
LAB_18051162c:
      plVar11 = *(longlong **)(param_1 + 8);
      if ((plVar23 <= plVar11) && (plVar11 < plVar23 + 0x21)) {
        plVar20 = plVar23 + 0x10;
        do {
          plVar24 = plVar20;
          if (plVar24 == (longlong *)((longlong)plVar23 + 0x104)) goto LAB_18051168c;
          plVar20 = (longlong *)((longlong)plVar24 + 0xc);
        } while ((plVar11 < plVar24) || (plVar20 <= plVar11));
        plVar11 = (longlong *)FUN_18027c2a0(plVar23);
        if (plVar24 != plVar11) goto LAB_18051077a;
      }
    }
LAB_18051168c:
    plVar23 = *(longlong **)(param_1 + 8);
    plVar11 = (longlong *)&DAT_180b0d2d0;
    if ((plVar23 < &DAT_180b0d2d0) ||
       (plVar11 = (longlong *)&DAT_180b0d4c8, (longlong *)0x180b0d4c7 < plVar23))
    goto LAB_180510d22;
    piVar19 = (int *)(param_1 + 0x18);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      piVar19 = *(int **)(param_1 + 0x18);
    }
    if (5 < *(ulonglong *)(param_1 + 0x28)) {
      iVar9 = *piVar19 + -0x20746168;
      if (iVar9 == 0) {
        iVar9 = *(ushort *)(piVar19 + 1) - 0x202d;
      }
      if (iVar9 == 0) {
        bVar26 = 0;
        if (DAT_180b0d338 < 4) {
          bVar26 = DAT_180b0d338;
        }
        lVar15 = (ulonglong)bVar26 * 3 + 0x807;
        plVar11 = (longlong *)(&DAT_180b0b320 + lVar15 * 4);
        if ((plVar11 <= plVar23) &&
           (plVar11 = (longlong *)(&DAT_180b0b32c + lVar15), plVar23 < plVar11)) {
          return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        }
        goto LAB_18051077a;
      }
    }
    plVar23 = (longlong *)(param_1 + 0x38);
    plVar11 = plVar23;
    if (0xf < *(ulonglong *)(param_1 + 0x50)) {
      plVar11 = (longlong *)*plVar23;
    }
    if (*(longlong *)(param_1 + 0x48) == 9) {
      lVar15 = *plVar11 + -0x6d616562204f4655;
      if (lVar15 == 0) {
        pbVar22 = (byte *)(plVar11 + 1);
        plVar11 = (longlong *)0x0;
        lVar15 = (ulonglong)*pbVar22 - 0x73;
      }
      if (lVar15 == 0) goto LAB_1805117b0;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x50)) {
      plVar23 = (longlong *)*plVar23;
    }
    if (*(longlong *)(param_1 + 0x48) == 0xb) {
      plVar11 = (longlong *)0x6e656c206d616562;
      lVar15 = *plVar23 + -0x6e656c206d616562;
      if (lVar15 == 0) {
        plVar11 = (longlong *)0x7467;
        lVar15 = (ulonglong)*(ushort *)(plVar23 + 1) - 0x7467;
        if (lVar15 == 0) {
          plVar11 = (longlong *)0x0;
          lVar15 = (ulonglong)*(byte *)((longlong)plVar23 + 10) - 0x68;
        }
      }
      if (lVar15 == 0) {
LAB_1805117b0:
        return CONCAT71((int7)((ulonglong)plVar11 >> 8),DAT_180b0d338 == 1);
      }
    }
  }
LAB_180510d22:
  return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
}



