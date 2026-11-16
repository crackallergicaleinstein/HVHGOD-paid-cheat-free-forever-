// FUN_1804c54c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c54c0 */

void FUN_1804c54c0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  lVar9 = DAT_180bb8ae8;
  lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x2338);
  while ((lVar4 != 0 && (*(longlong *)(lVar4 + 400) == *(longlong *)(lVar9 + 0x14d0)))) {
    FUN_1804c5a40("Missing EndTable()");
    FUN_1804ee5e0();
    lVar4 = *(longlong *)(lVar9 + 0x2338);
  }
  lVar4 = *(longlong *)(lVar9 + 0x14d0);
  plVar5 = *(longlong **)(lVar9 + 0x23a0);
  while ((plVar5 != (longlong *)0x0 && (*plVar5 == lVar4))) {
    FUN_1804c5a40("Missing EndTabBar()");
    lVar6 = DAT_180bb8ae8;
    lVar11 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if (*(char *)(lVar11 + 0xd1) == '\0') {
      lVar12 = *(longlong *)(DAT_180bb8ae8 + 0x23a0);
      if (lVar12 == 0) {
        FUN_1804c5a40("Mismatched BeginTabBar()/EndTabBar()!");
      }
      else {
        if (*(char *)(lVar12 + 0x83) != '\0') {
          FUN_180502f50(lVar12);
        }
        if (((*(char *)(lVar12 + 0x84) == '\0') && (*(int *)(lVar12 + 0x2c) != 0)) &&
           (*(int *)(lVar6 + 4) <= *(int *)(lVar12 + 0x34) + 1)) {
          fVar7 = *(float *)(lVar12 + 0x50) + *(float *)(lVar12 + 0x44);
        }
        else {
          auVar8 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar11 + 0x11c) - *(float *)(lVar12 + 0x44))
                                     ),ZEXT416(*(uint *)(lVar12 + 0x4c)));
          fVar7 = auVar8._0_4_ + *(float *)(lVar12 + 0x44);
          *(float *)(lVar12 + 0x4c) = auVar8._0_4_;
        }
        *(float *)(lVar11 + 0x11c) = fVar7;
        if ('\x01' < *(char *)(lVar12 + 0x82)) {
          *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar12 + 0x98);
        }
        *(undefined2 *)(lVar12 + 0x8a) = 0xffff;
        if ((*(uint *)(lVar12 + 0x18) & 0x100000) == 0) {
          FUN_1804c29a0();
        }
        iVar3 = *(int *)(lVar6 + 0x23d0);
        iVar10 = iVar3 + -1;
        *(int *)(lVar6 + 0x23d0) = iVar10;
        if (iVar10 == 0) {
          lVar12 = 0;
        }
        else {
          lVar11 = (longlong)iVar3 + -2;
          lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0x23d8) + lVar11 * 0x10);
          if (lVar12 == 0) {
            lVar12 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x23d8) + 8 + lVar11 * 0x10) * 0xb0 +
                     *(longlong *)(DAT_180bb8ae8 + 0x23b0);
          }
        }
        *(longlong *)(lVar6 + 0x23a0) = lVar12;
      }
    }
    plVar5 = *(longlong **)(lVar9 + 0x23a0);
  }
  lVar11 = *(longlong *)(lVar9 + 0x2478);
  while ((lVar11 != 0 && (**(longlong **)(lVar11 + 0x28) == lVar4))) {
    FUN_1804c5a40("Missing EndMultiSelect()");
    FUN_180500830();
    lVar11 = *(longlong *)(lVar9 + 0x2478);
  }
  if (*(char *)(lVar4 + 0x17b) != '\0') {
    FUN_1804c5a40("Missing EndMenuBar()");
    FUN_1805017a0();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar4 + 0x1a0)) {
    do {
      FUN_1804c5a40("Missing TreePop()");
      FUN_1804ff6d0();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar4 + 0x1a0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar9 + 0x1fe8)) {
    do {
      FUN_1804c5a40("Missing EndGroup()");
      FUN_1804c6a30();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar9 + 0x1fe8));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar4 + 0x108)) {
    do {
      FUN_1804c5a40("Missing PopID()");
      FUN_1804c29a0();
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar4 + 0x108));
  }
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar9 + 0x26a8)) {
    do {
      FUN_1804c5a40("Missing EndDisabled()");
      lVar4 = DAT_180bb8ae8;
      if ((*(byte *)(lVar9 + 0x1e80) & 0x40) == 0) {
        *(short *)(DAT_180bb8ae8 + 0x26a8) = *(short *)(DAT_180bb8ae8 + 0x26a8) + -1;
        iVar3 = *(int *)(lVar4 + 0x1fd8);
        *(int *)(lVar4 + 0x1fd8) = iVar3 + -1;
        *(undefined4 *)(lVar4 + 0x1e80) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x1fe0) + -8 + (longlong)iVar3 * 4);
        *(undefined4 *)(lVar4 + 0xc84) =
             *(undefined4 *)
              ((longlong)*(int *)(lVar4 + 0x14a0) * 0x88 + -0x18 + *(longlong *)(lVar4 + 0x14a8));
        *(undefined1 *)
         ((longlong)*(int *)(lVar9 + 0x14a0) * 0x88 + -0x1a + *(longlong *)(lVar9 + 0x14a8)) = 0;
      }
      else if (*(short *)(DAT_180bb8ae8 + 0x26a8) < 1) {
        FUN_1804c5a40("Calling EndDisabled() too many times!");
      }
      else {
        uVar1 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
        *(short *)(DAT_180bb8ae8 + 0x26a8) = *(short *)(DAT_180bb8ae8 + 0x26a8) + -1;
        iVar3 = *(int *)(lVar4 + 0x1fd8);
        *(int *)(lVar4 + 0x1fd8) = iVar3 + -1;
        uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x1fe0) + -8 + (longlong)iVar3 * 4);
        *(uint *)(lVar4 + 0x1e80) = uVar2;
        if (((uVar1 & 0x40) != 0) && ((uVar2 & 0x40) == 0)) {
          *(undefined4 *)(lVar4 + 0xc84) = *(undefined4 *)(lVar4 + 0x26a4);
        }
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(lVar9 + 0x26a8));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar9 + 0x1f98)) {
    do {
      FUN_1804c5a40("Missing PopStyleColor()");
      FUN_1804b2b70(1);
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar9 + 0x1f98));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar9 + 0x1fd8)) {
    do {
      FUN_1804c5a40("Missing PopItemFlag()");
      lVar4 = DAT_180bb8ae8;
      iVar3 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
      if (iVar3 < 2) {
        FUN_1804c5a40("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar3 + -1;
        *(undefined4 *)(lVar4 + 0x1e80) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x1fe0) + -8 + (longlong)iVar3 * 4);
      }
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar9 + 0x1fd8));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar9 + 0x1fa8)) {
    do {
      FUN_1804c5a40("Missing PopStyleVar()");
      FUN_1804b2de0(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar9 + 0x1fa8));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar9 + 0x1fb8)) {
    do {
      FUN_1804c5a40("Missing PopFont()");
      lVar4 = DAT_180bb8ae8;
      lVar11 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1fb8);
      if (*(int *)(DAT_180bb8ae8 + 0x1fb8) < 1) {
        FUN_1804c5a40("Calling PopFont() too many times!");
      }
      else {
        lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x1fc0);
        FUN_1804c23b0(*(undefined8 *)(lVar6 + -0x10 + lVar11 * 0x10),
                      *(undefined4 *)(lVar6 + -8 + lVar11 * 0x10),
                      *(undefined4 *)(lVar6 + -4 + lVar11 * 0x10));
        *(int *)(lVar4 + 0x1fb8) = *(int *)(lVar4 + 0x1fb8) + -1;
      }
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar9 + 0x1fb8));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar9 + 0x1fc8)) {
    do {
      FUN_1804c5a40("Missing PopFocusScope()");
      lVar4 = DAT_180bb8ae8;
      iVar3 = *(int *)(DAT_180bb8ae8 + 0x1fc8);
      if (*(short *)(*(longlong *)(DAT_180bb8ae8 + 0x28c0) + 0xc) < iVar3) {
        *(int *)(DAT_180bb8ae8 + 0x1fc8) = iVar3 + -1;
        if (iVar3 + -1 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(*(longlong *)(lVar4 + 0x1fd0) + -0x10 + (longlong)iVar3 * 8);
        }
        *(undefined4 *)(lVar4 + 0x1e7c) = uVar13;
      }
      else {
        FUN_1804c5a40("Calling PopFocusScope() too many times!");
      }
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar9 + 0x1fc8));
  }
  return;
}



