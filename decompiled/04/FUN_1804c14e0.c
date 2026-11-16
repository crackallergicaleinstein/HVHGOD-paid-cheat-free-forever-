// FUN_1804c14e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c14e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804c14e0(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  
  lVar9 = DAT_180bb8ae8;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((*(int *)(DAT_180bb8ae8 + 0x14a0) < 2) && (*(char *)(DAT_180bb8ae8 + 2) != '\0')) {
    FUN_1804c5a40("Calling End() too many times!");
    return;
  }
  uVar11 = *(uint *)(lVar3 + 0x14);
  lVar15 = (longlong)*(int *)(DAT_180bb8ae8 + 0x14a0) * 0x88;
  lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14a8);
  if (((uVar11 >> 0x1a & 1) != 0) && (*(int *)(DAT_180bb8ae8 + 0x143c) != *(int *)(lVar3 + 0x10))) {
    FUN_1804c5a40("Must call EndPopup() and not End()!");
    uVar11 = *(uint *)(lVar3 + 0x14);
  }
  if (((uVar11 >> 0x18 & 1) != 0) && (*(int *)(lVar9 + 0x1438) != *(int *)(lVar3 + 0x10))) {
    FUN_1804c5a40("Must call EndChild() and not End()!");
  }
  if (*(longlong *)(lVar3 + 0x1c8) != 0) {
    FUN_1804f3a30();
  }
  if (*(char *)(lVar3 + 0xd2) == '\0') {
    FUN_1804ba3f0();
  }
  lVar5 = DAT_180bb8ae8;
  uVar13 = 0;
  iVar2 = *(int *)(DAT_180bb8ae8 + 0x1fc8);
  if (*(short *)(*(longlong *)(DAT_180bb8ae8 + 0x28c0) + 0xc) < iVar2) {
    *(int *)(DAT_180bb8ae8 + 0x1fc8) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(*(longlong *)(lVar5 + 0x1fd0) + -0x10 + (longlong)iVar2 * 8);
    }
    *(undefined4 *)(lVar5 + 0x1e7c) = uVar14;
  }
  else {
    FUN_1804c5a40("Calling PopFocusScope() too many times!");
  }
  lVar5 = DAT_180bb8ae8;
  if ((*(char *)(lVar15 + -0x1a + lVar4) != '\0') && (*(longlong *)(lVar3 + 0x3d8) == lVar3)) {
    *(short *)(DAT_180bb8ae8 + 0x26a8) = *(short *)(DAT_180bb8ae8 + 0x26a8) + -1;
    iVar2 = *(int *)(lVar5 + 0x1fd8);
    *(int *)(lVar5 + 0x1fd8) = iVar2 + -1;
    *(undefined4 *)(lVar5 + 0x1e80) =
         *(undefined4 *)(*(longlong *)(lVar5 + 0x1fe0) + -8 + (longlong)iVar2 * 4);
    *(undefined4 *)(lVar5 + 0xc84) =
         *(undefined4 *)
          ((longlong)*(int *)(lVar5 + 0x14a0) * 0x88 + -0x18 + *(longlong *)(lVar5 + 0x14a8));
  }
  if (*(char *)(lVar3 + 0xd2) != '\0') {
    *(longlong *)(lVar3 + 0x2c8) = lVar3 + 0x2d0;
  }
  lVar5 = DAT_180bb8ae8;
  if ((*(longlong *)(lVar9 + 0x2848) == lVar3) && (*(char *)(DAT_180bb8ae8 + 0x2840) != '\0')) {
    FUN_1804cda40(&DAT_18085b098);
    uVar11 = *(uint *)(lVar5 + 0x2844) & 0xf;
    if (uVar11 == 1) {
      fflush(*(FILE **)(lVar5 + 0x2850));
    }
    else if (uVar11 == 2) {
      FUN_1806116f4(*(undefined8 *)(lVar5 + 0x2850));
    }
    else if ((uVar11 == 8) && (1 < *(int *)(lVar5 + 0x2858))) {
      puVar12 = &DAT_180bb8ac1;
      if (*(undefined **)(lVar5 + 0x2860) != (undefined *)0x0) {
        puVar12 = *(undefined **)(lVar5 + 0x2860);
      }
      if (*(code **)(DAT_180bb8ae8 + 0xc00) != (code *)0x0) {
        (**(code **)(DAT_180bb8ae8 + 0xc00))(DAT_180bb8ae8,puVar12);
      }
    }
    *(undefined1 *)(lVar5 + 0x154e) = 0;
    *(undefined1 *)(lVar5 + 0x2840) = 0;
    *(undefined4 *)(lVar5 + 0x2844) = 0;
    *(undefined8 *)(lVar5 + 0x2850) = 0;
    FUN_1804aeee0(lVar5 + 0x2858);
  }
  if (*(char *)(lVar3 + 0x159) != '\0') {
    lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    *(undefined1 *)(lVar5 + 0x159) = 0;
    if (((*(float *)(lVar5 + 0x130) < *(float *)(lVar5 + 0x118)) ||
        (*(float *)(lVar5 + 0x134) < *(float *)(lVar5 + 0x11c))) &&
       (*(char *)(lVar5 + 0xd1) == '\0')) {
      FUN_1804c5a40(
                   "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                   );
    }
  }
  puVar1 = (undefined8 *)(lVar15 + -0x80 + lVar4);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  *(undefined8 *)(lVar9 + 0x1ec0) = *puVar1;
  *(undefined8 *)(lVar9 + 0x1ec8) = uVar6;
  *(undefined8 *)(lVar9 + 0x1ed0) = uVar7;
  *(undefined8 *)(lVar9 + 0x1ed8) = uVar8;
  puVar1 = (undefined8 *)(lVar15 + -0x60 + lVar4);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  *(undefined8 *)(lVar9 + 0x1ee0) = *puVar1;
  *(undefined8 *)(lVar9 + 0x1ee8) = uVar6;
  *(undefined8 *)(lVar9 + 0x1ef0) = uVar7;
  *(undefined8 *)(lVar9 + 0x1ef8) = uVar8;
  puVar1 = (undefined8 *)(lVar15 + -0x40 + lVar4);
  uVar6 = puVar1[1];
  *(undefined8 *)(lVar9 + 0x1f00) = *puVar1;
  *(undefined8 *)(lVar9 + 0x1f08) = uVar6;
  if ((*(uint *)(lVar3 + 0x14) & 0x10000000) != 0) {
    *(int *)(lVar9 + 0x2614) = *(int *)(lVar9 + 0x2614) + -1;
  }
  if ((*(uint *)(lVar3 + 0x14) & 0x4000000) != 0) {
    *(int *)(lVar9 + 0x2008) = *(int *)(lVar9 + 0x2008) + -1;
  }
  if (*(char *)(lVar9 + 0xac) != '\0') {
    FUN_1804c54c0(lVar4 + -0x30 + lVar15);
  }
  iVar2 = *(int *)(lVar9 + 0x14a0);
  iVar10 = iVar2 + -1;
  *(int *)(lVar9 + 0x14a0) = iVar10;
  if (iVar10 != 0) {
    uVar13 = *(undefined8 *)(((longlong)iVar2 + -2) * 0x88 + *(longlong *)(lVar9 + 0x14a8));
  }
  FUN_1804b75e0(uVar13);
  return;
}



