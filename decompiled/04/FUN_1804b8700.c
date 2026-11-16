// FUN_1804b8700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b8700 */

void FUN_1804b8700(void)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  undefined1 uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  
  lVar14 = DAT_180bb8ae8;
  bVar20 = false;
  puVar1 = (uint *)(DAT_180bb8ae8 + 0xcec);
  auVar9 = vmaxss_avx(ZEXT416(*puVar1),ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xcf0)));
  auVar10 = vmaxss_avx(auVar9,ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xc9c)));
  lVar2 = DAT_180bb8ae8 + 0x14e0;
  lVar18 = DAT_180bb8ae8 + 0x14d8;
  *(int *)(DAT_180bb8ae8 + 0x14c4) = auVar10._0_4_;
  FUN_1804bb690(*puVar1,auVar9._0_8_,lVar18,lVar2);
  lVar2 = *(longlong *)(lVar14 + 0x14d8);
  *(longlong *)(lVar14 + 0x14e8) = lVar2;
  iVar8 = *(int *)(lVar14 + 0x1ff8);
  if (-1 < iVar8 + -1) {
    lVar18 = (longlong)(iVar8 + -1);
    plVar19 = (longlong *)(lVar18 * 0x38 + *(longlong *)(lVar14 + 0x2000) + 8);
    do {
      lVar16 = *plVar19;
      if ((lVar16 != 0) && ((*(uint *)(lVar16 + 0x14) & 0x8000000) != 0)) {
        if ((lVar2 == 0) ||
           (lVar18 = *(longlong *)(lVar2 + 0x3d8), *(longlong *)(lVar18 + 0x3d8) == lVar16))
        goto LAB_1804b87a2;
        goto LAB_1804b87f0;
      }
      plVar19 = plVar19 + -7;
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  lVar16 = 0;
  goto LAB_1804b87a2;
  while (lVar18 = *(longlong *)(lVar18 + 0x3d0), lVar18 != 0) {
LAB_1804b87f0:
    if (lVar18 == lVar16) goto LAB_1804b87a2;
  }
  bVar20 = true;
LAB_1804b87a2:
  bVar11 = true;
  lVar18 = -1;
  if ((*(byte *)(lVar14 + 0x28) & 0x10) != 0) {
    bVar20 = true;
  }
  iVar17 = -1;
  if (*(char *)(lVar14 + 0xb40) != '\0') {
    if ((lVar2 == 0) && (iVar8 < 1)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb90) = uVar15;
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (lVar16 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb95) = uVar15;
  }
  cVar3 = *(char *)(lVar14 + 0x118);
  if ((cVar3 != '\0') || (*(char *)(lVar14 + 0xb5e) != '\0')) {
    iVar17 = 0;
  }
  if (*(char *)(lVar14 + 0xb41) != '\0') {
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (iVar8 < 1)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb91) = uVar15;
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (lVar16 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb96) = uVar15;
  }
  cVar4 = *(char *)(lVar14 + 0x119);
  if (((cVar4 != '\0') || (*(char *)(lVar14 + 0xb5f) != '\0')) &&
     ((iVar17 == -1 ||
      (*(double *)(lVar14 + 0xb20) < *(double *)(lVar14 + 0xb18 + (longlong)iVar17 * 8))))) {
    iVar17 = 1;
  }
  if (*(char *)(lVar14 + 0xb42) != '\0') {
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (iVar8 < 1)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb92) = uVar15;
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (lVar16 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb97) = uVar15;
  }
  cVar5 = *(char *)(lVar14 + 0x11a);
  if (((cVar5 != '\0') || (*(char *)(lVar14 + 0xb60) != '\0')) &&
     ((iVar17 == -1 ||
      (*(double *)(lVar14 + 0xb28) < *(double *)(lVar14 + 0xb18 + (longlong)iVar17 * 8))))) {
    iVar17 = 2;
  }
  if (*(char *)(lVar14 + 0xb43) != '\0') {
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (iVar8 < 1)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb93) = uVar15;
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (lVar16 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb98) = uVar15;
  }
  cVar6 = *(char *)(lVar14 + 0x11b);
  if (((cVar6 != '\0') || (*(char *)(lVar14 + 0xb61) != '\0')) &&
     ((iVar17 == -1 ||
      (*(double *)(lVar14 + 0xb30) < *(double *)(lVar14 + 0xb18 + (longlong)iVar17 * 8))))) {
    iVar17 = 3;
  }
  if (*(char *)(lVar14 + 0xb44) != '\0') {
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (iVar8 < 1)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb94) = uVar15;
    if ((*(longlong *)(lVar14 + 0x14d8) == 0) && (lVar16 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb99) = uVar15;
  }
  cVar7 = *(char *)(lVar14 + 0x11c);
  if ((cVar7 == '\0') && (*(char *)(lVar14 + 0xb62) == '\0')) {
    if (iVar17 == -1) goto LAB_1804b8a36;
  }
  else if ((iVar17 == -1) ||
          (*(double *)(lVar14 + 0xb38) < *(double *)(lVar14 + 0xb18 + (longlong)iVar17 * 8))) {
    iVar17 = 4;
  }
  lVar18 = (longlong)iVar17;
  if (*(char *)(lVar18 + 0xb90 + lVar14) == '\0') {
    bVar11 = false;
  }
LAB_1804b8a36:
  if ((iVar17 == -1) || (*(char *)(lVar18 + 0xb95 + lVar14) != '\0')) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if ((*(char *)(lVar14 + 0x2268) == '\0') || ((*(byte *)(lVar14 + 0x226c) & 0x10) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((!bVar11) && (!bVar12)) || (bVar20)) {
    *(undefined8 *)(lVar14 + 0x14e0) = 0;
    *(undefined8 *)(lVar14 + 0x14d8) = 0;
  }
  if (*(int *)(lVar14 + 0x2ac4) == -1) {
    if (((bVar11) &&
        ((*(longlong *)(lVar14 + 0x14d8) != 0 ||
         ((((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') || cVar6 != '\0') || cVar7 != '\0')))
        ) || (0 < iVar8)) {
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
    }
    *(undefined1 *)(lVar14 + 0xe0) = uVar15;
    if (((bVar13) &&
        ((*(longlong *)(lVar14 + 0x14d8) != 0 ||
         ((((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') || cVar6 != '\0') || cVar7 != '\0')))
        ) || (lVar16 != 0)) {
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
  }
  else {
    bVar20 = *(int *)(lVar14 + 0x2ac4) != 0;
    *(bool *)(lVar14 + 0xe0) = bVar20;
  }
  *(bool *)(lVar14 + 0xae4) = bVar20;
  *(undefined1 *)(lVar14 + 0xe1) = 0;
  if (((*(uint *)(lVar14 + 0x28) & 0x40) == 0) &&
     (((*(int *)(lVar14 + 0x1550) != 0 || (lVar16 != 0)) ||
      ((*(char *)(lVar14 + 0xe5) != '\0' &&
       (((*(uint *)(lVar14 + 0x28) & 1) != 0 && (*(char *)(lVar14 + 0x73) != '\0')))))))) {
    *(undefined1 *)(lVar14 + 0xe1) = 1;
  }
  if (*(int *)(lVar14 + 0x2ac8) != -1) {
    *(bool *)(lVar14 + 0xe1) = *(int *)(lVar14 + 0x2ac8) != 0;
  }
  *(bool *)(lVar14 + 0xe2) = *(int *)(lVar14 + 0x2acc) != -1 && *(int *)(lVar14 + 0x2acc) != 0;
  return;
}



