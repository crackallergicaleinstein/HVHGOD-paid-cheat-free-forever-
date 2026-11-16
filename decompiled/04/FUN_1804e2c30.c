// FUN_1804e2c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2c30 */

void FUN_1804e2c30(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  
  *(undefined1 *)(param_1 + 0x51) = param_3;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar18 = 0;
    do {
      lVar2 = *(longlong *)(lVar18 + *(longlong *)(param_1 + 0x48));
      cVar7 = FUN_1804e2ef0(lVar2);
      if (cVar7 != '\0') {
        FUN_1804e26d0(lVar2);
        if (lVar2 != 0) {
          FUN_1804e26d0(lVar2);
          FUN_180473ca0(lVar2 + 0x48);
          lVar6 = DAT_180bb8ae8;
          if (DAT_180bb8ae8 != 0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar12 = (int *)(DAT_180bb8ae8 + 0x2998 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
            if (*piVar12 != *piVar1) {
              iVar10 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar9;
              piVar12 = (int *)(lVar6 + 0x2998 + (longlong)sVar9 * 8);
              *piVar12 = *piVar1;
              *(undefined4 *)(lVar6 + 0x299c + (longlong)sVar9 * 8) = 0;
            }
            *(short *)((longlong)piVar12 + 6) = *(short *)((longlong)piVar12 + 6) + 1;
            *(int *)(lVar6 + 0x2990) = *(int *)(lVar6 + 0x2990) + 1;
          }
          thunk_FUN_180621380(lVar2);
        }
        lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)iVar15 * 8;
        FUN_18063aed0(lVar2,lVar2 + 8,
                      ((longlong)*(int *)(param_1 + 0x40) - (longlong)iVar15) * 8 + -8);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        iVar15 = iVar15 + -1;
        lVar18 = lVar18 + -8;
      }
      iVar15 = iVar15 + 1;
      lVar18 = lVar18 + 8;
    } while (iVar15 < *(int *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
LAB_1804e2d7d:
    if (*(char *)(param_1 + 0x52) == '\0') {
      FUN_1804c5a40(
                   "Backend does not support ImGuiBackendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                   );
      goto LAB_1804e2d8f;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x52) = 1;
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      FUN_1804e3f90(param_1);
    }
    if (*(char *)(param_1 + 0x51) == '\0') goto LAB_1804e2d7d;
LAB_1804e2d8f:
    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_1804e2db7;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0xa0) + 0xb9) != '\0') &&
     (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_1804c5a40(
                 "Called ImFontAtlas::Build() before ImGuiBackendFlags_RendererHasTextures got set! With new backends: you don\'t need to call Build()."
                 );
  }
LAB_1804e2db7:
  lVar18 = *(longlong *)(param_1 + 0xa0);
  *(undefined4 *)(lVar18 + 0xa4) = param_2;
  puVar13 = *(undefined8 **)(param_1 + 0x70);
  puVar17 = puVar13 + *(int *)(param_1 + 0x68);
  for (; puVar13 != puVar17; puVar13 = puVar13 + 1) {
    *(undefined8 *)*puVar13 = 0;
  }
  if (0 < *(int *)(lVar18 + 0xe8)) {
    uVar16 = 0;
    uVar14 = 0;
    iVar15 = *(int *)(lVar18 + 0xc0);
    if (0 < iVar15) {
      do {
        uVar11 = uVar14 & 0x1f;
        uVar8 = uVar14;
        if ((int)uVar14 < 0) {
          uVar8 = uVar14 + 0x1f;
          uVar11 = uVar11 - 0x20;
        }
        puVar17 = (undefined8 *)
                  (*(longlong *)(*(longlong *)(lVar18 + 0xd0) + (longlong)((int)uVar8 >> 5) * 8) +
                  (longlong)(int)uVar11 * 0x68);
        if ((*(uint *)((longlong)puVar17 + 0x4c) & 0x4000000) == 0) {
          uVar11 = uVar16 & 0x1f;
          uVar8 = uVar16;
          if ((int)uVar16 < 0) {
            uVar8 = uVar16 + 0x1f;
            uVar11 = uVar11 - 0x20;
          }
          puVar13 = (undefined8 *)
                    (*(longlong *)(*(longlong *)(lVar18 + 0xd0) + (longlong)((int)uVar8 >> 5) * 8) +
                    (longlong)(int)uVar11 * 0x68);
          uVar16 = uVar16 + 1;
          if (puVar13 != puVar17) {
            uVar3 = puVar17[1];
            uVar4 = puVar17[2];
            uVar5 = puVar17[3];
            *puVar13 = *puVar17;
            puVar13[1] = uVar3;
            puVar13[2] = uVar4;
            puVar13[3] = uVar5;
            uVar3 = puVar17[5];
            uVar4 = puVar17[6];
            uVar5 = puVar17[7];
            puVar13[4] = puVar17[4];
            puVar13[5] = uVar3;
            puVar13[6] = uVar4;
            puVar13[7] = uVar5;
            uVar3 = puVar17[9];
            uVar4 = puVar17[10];
            uVar5 = puVar17[0xb];
            puVar13[8] = puVar17[8];
            puVar13[9] = uVar3;
            puVar13[10] = uVar4;
            puVar13[0xb] = uVar5;
            puVar13[0xc] = puVar17[0xc];
            FUN_1804b17b0(lVar18 + 0xd8,*(undefined4 *)((longlong)puVar13 + 0x54),puVar13);
          }
        }
        uVar14 = uVar14 + 1;
        iVar15 = *(int *)(lVar18 + 0xc0);
      } while ((int)uVar14 < iVar15);
    }
    *(int *)(lVar18 + 0xc0) = iVar15 - *(int *)(lVar18 + 0xe8);
    *(undefined4 *)(lVar18 + 0xe8) = 0;
  }
  return;
}



