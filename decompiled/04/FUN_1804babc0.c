// FUN_1804babc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804babc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804babc0(void)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  
  lVar8 = DAT_180bb8ae8;
  if (*(int *)(DAT_180bb8ae8 + 8) == *(int *)(DAT_180bb8ae8 + 4)) {
    return;
  }
  if (*(char *)(DAT_180bb8ae8 + 1) == '\0') {
    FUN_1804c5a40("Forgot to call ImGui::NewFrame()?");
    return;
  }
  FUN_1804b6f10(DAT_180bb8ae8,2);
  lVar9 = DAT_180bb8ae8;
  if (*(char *)(lVar8 + 0xac) != '\0') {
    sVar10 = *(short *)(lVar8 + 0x28a8);
    iVar13 = *(int *)(DAT_180bb8ae8 + 0x14a0);
    if (sVar10 < iVar13) {
      do {
        if ((*(uint *)(*(longlong *)(lVar9 + 0x14d0) + 0x14) & 0x1000000) == 0) {
          FUN_1804c5a40("Missing End()");
          FUN_1804c14e0();
        }
        else if ((*(longlong *)(lVar9 + 0x2338) == 0) ||
                (*(longlong *)(*(longlong *)(lVar9 + 0x2338) + 400) != *(longlong *)(lVar9 + 0x14d0)
                )) {
          FUN_1804c5a40("Missing EndChild()");
          FUN_1804bbd00();
        }
        else {
          FUN_1804c5a40("Missing EndTable()");
          FUN_1804ee5e0();
        }
        sVar10 = *(short *)(lVar8 + 0x28a8);
        iVar13 = *(int *)(lVar9 + 0x14a0);
      } while (sVar10 < iVar13);
    }
    if (iVar13 == sVar10) {
      FUN_1804c54c0(lVar8 + 0x28a8);
    }
  }
  FUN_1804c5c40();
  plVar1 = (longlong *)(lVar8 + 0x2740);
  if ((*(longlong *)(lVar8 + 0xc20) != 0) &&
     (((*plVar1 != *(longlong *)(lVar8 + 0x2754) ||
       (*(longlong *)(lVar8 + 0x2748) != *(longlong *)(lVar8 + 0x275c))) ||
      (*(int *)(lVar8 + 0x2750) != *(int *)(lVar8 + 0x2764))))) {
    puVar4 = (undefined4 *)**(undefined8 **)(DAT_180bb8ae8 + 0x2030);
    if ((*(byte *)(lVar8 + 0x28cc) & 0x80) != 0) {
      FUN_1804cf3e0("[io] Calling Platform_SetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n"
                    ,*(undefined1 *)plVar1,(double)*(float *)(lVar8 + 0x2744),
                    (double)*(float *)(lVar8 + 0x2748),*puVar4);
    }
    (**(code **)(lVar8 + 0xc20))(lVar8,puVar4,plVar1);
  }
  iVar13 = 0;
  *(undefined1 *)(lVar8 + 2) = 0;
  *(uint *)(lVar8 + 0x2acc) = (uint)(*(char *)(lVar8 + 0x2741) != '\0');
  lVar9 = *(longlong *)(lVar8 + 0x14d0);
  if (((lVar9 != 0) && (*(char *)(lVar9 + 0xd5) != '\0')) && (*(char *)(lVar9 + 0xce) == '\0')) {
    *(undefined1 *)(lVar9 + 0xcc) = 0;
    if ((*(longlong *)(lVar8 + 0x2040) != 0) &&
       (*(longlong *)(*(longlong *)(lVar8 + 0x2040) + 0x3d8) == *(longlong *)(lVar8 + 0x14d0))) {
      FUN_1804c8a10(0,0);
    }
  }
  FUN_1804c14e0();
  lVar9 = DAT_180bb8ae8;
  if (*(longlong *)(DAT_180bb8ae8 + 0x2228) != 0) {
    FUN_1804cce80();
  }
  lVar15 = DAT_180bb8ae8;
  if (((((*(longlong *)(lVar9 + 0x2040) != 0) && (*(char *)(DAT_180bb8ae8 + 0x20e1) != '\0')) &&
       (*(int *)(DAT_180bb8ae8 + 0x2130) == 0)) &&
      ((*(int *)(DAT_180bb8ae8 + 0x21a0) == 0 &&
       (uVar2 = *(uint *)(lVar9 + 0x20e4), (uVar2 & 0xf) != 0)))) && (-1 < (char)uVar2)) {
    FUN_1804cc040();
  }
  if (*(char *)(lVar8 + 0x2268) == '\0') goto LAB_1804baef3;
  if (*(int *)(lVar8 + 0x2270) + 1 < *(int *)(lVar8 + 4)) {
    if ((*(byte *)(lVar8 + 0x226c) & 0x20) == 0) {
      iVar11 = *(int *)(lVar8 + 0x2274);
      if (((iVar11 != -1) && (*(char *)((longlong)iVar11 + 0x118 + lVar15) != '\0')) &&
         ((((iVar11 = iVar11 + 0x290, iVar11 < 0x200 || (0x29a < iVar11)) &&
           ((((iVar11 != 0x1000 && (iVar11 != 0x2000)) && (iVar11 != 0x4000)) && (iVar11 != 0x8000))
           )) || (lVar9 = FUN_1804af210(lVar15), *(char *)(lVar9 + 8) == '\0'))))
      goto LAB_1804bae98;
    }
    bVar7 = true;
  }
  else {
LAB_1804bae98:
    bVar7 = false;
  }
  if ((*(char *)(lVar8 + 0x22b2) != '\0') || (bVar7)) {
    FUN_1804cd120();
    lVar15 = DAT_180bb8ae8;
  }
  if (((*(char *)(lVar8 + 0x2268) != '\0') && (*(int *)(lVar8 + 0x2270) + 1 < *(int *)(lVar8 + 4)))
     && ((*(byte *)(lVar8 + 0x226c) & 1) == 0)) {
    *(undefined1 *)(lVar8 + 0x2269) = 1;
    FUN_1804c75b0(&DAT_1807d3edc);
    lVar15 = DAT_180bb8ae8;
    *(undefined1 *)(lVar8 + 0x2269) = 0;
  }
LAB_1804baef3:
  *(undefined4 *)(lVar8 + 8) = *(undefined4 *)(lVar8 + 4);
  *(undefined1 *)(lVar8 + 1) = 0;
  lVar9 = (longlong)*(int *)(lVar15 + 0x1fb8);
  if (*(int *)(lVar15 + 0x1fb8) < 1) {
    FUN_1804c5a40("Calling PopFont() too many times!");
  }
  else {
    lVar6 = *(longlong *)(lVar15 + 0x1fc0);
    FUN_1804c23b0(*(undefined8 *)(lVar6 + -0x10 + lVar9 * 0x10),
                  *(undefined4 *)(lVar6 + -8 + lVar9 * 0x10),
                  *(undefined4 *)(lVar6 + -4 + lVar9 * 0x10));
    *(int *)(lVar15 + 0x1fb8) = *(int *)(lVar15 + 0x1fb8) + -1;
  }
  FUN_1804b8480();
  puVar4 = (undefined4 *)(lVar8 + 0x1490);
  iVar11 = *(int *)(lVar8 + 0x1494);
  if (iVar11 < 0) {
    iVar11 = iVar11 + iVar11 / 2;
    iVar12 = 0;
    if (0 < iVar11) {
      iVar12 = iVar11;
    }
    FUN_1804d0a80(puVar4,iVar12);
  }
  *puVar4 = 0;
  FUN_1804d0a80(puVar4,*(undefined4 *)(lVar8 + 0x1470));
  plVar14 = *(longlong **)(lVar8 + 0x1478);
  plVar1 = plVar14 + *(int *)(lVar8 + 0x1470);
  for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
    if ((*(char *)(*plVar14 + 0xcc) == '\0') || ((*(uint *)(*plVar14 + 0x14) & 0x1000000) == 0)) {
      FUN_1804ba1d0(puVar4);
    }
  }
  uVar3 = *puVar4;
  *puVar4 = *(undefined4 *)(lVar8 + 0x1470);
  *(undefined4 *)(lVar8 + 0x1470) = uVar3;
  uVar3 = *(undefined4 *)(lVar8 + 0x1494);
  *(undefined4 *)(lVar8 + 0x1494) = *(undefined4 *)(lVar8 + 0x1474);
  *(undefined4 *)(lVar8 + 0x1474) = uVar3;
  uVar5 = *(undefined8 *)(lVar8 + 0x1498);
  *(undefined8 *)(lVar8 + 0x1498) = *(undefined8 *)(lVar8 + 0x1478);
  *(undefined4 *)(lVar8 + 0xf8) = *(undefined4 *)(lVar8 + 0x14c0);
  *(undefined8 *)(lVar8 + 0x1478) = uVar5;
  FUN_1804c2040();
  plVar14 = *(longlong **)(lVar8 + 0x11c8);
  plVar1 = plVar14 + *(int *)(lVar8 + 0x11c0);
  for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
    *(undefined1 *)(*plVar14 + 0x50) = 0;
  }
  *(undefined8 *)(lVar8 + 0xae8) = *(undefined8 *)(lVar8 + 0x110);
  *(undefined1 *)(lVar8 + 0xbdc) = 0;
  *(undefined8 *)(lVar8 + 0x120) = 0;
  iVar11 = *(int *)(lVar8 + 0xbe4);
  if (iVar11 < 0) {
    iVar11 = iVar11 + iVar11 / 2;
    iVar12 = 0;
    if (0 < iVar11) {
      iVar12 = iVar11;
    }
    FUN_1804d1090(lVar8 + 0xbe0,iVar12);
  }
  *(undefined4 *)(lVar8 + 0xbe0) = 0;
  lVar9 = (longlong)*(int *)(lVar8 + 0x27c0);
  if (0 < lVar9) {
    lVar15 = 0;
    do {
      lVar6 = *(longlong *)(lVar8 + 0x27c8);
      if (*(int *)(lVar15 + 4 + lVar6) == 3) {
        (**(code **)(lVar15 + 0x10 + lVar6))(lVar8,(longlong)iVar13 * 0x20 + lVar6);
      }
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



