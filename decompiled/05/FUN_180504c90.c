// FUN_180504c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180504c90 */

undefined1 (*) [16] FUN_180504c90(undefined1 (*param_1) [16],longlong param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  HWND pHVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  HWND pHVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_28 [16];
  
  plVar3 = *(longlong **)(param_2 + 0xa0);
  pauVar6 = (undefined1 (*) [16])FUN_1803874e0(local_28,*plVar3);
  auVar2 = *pauVar6;
  fVar1 = *(float *)(plVar3 + 6);
  *param_1 = auVar2;
  lVar5 = DAT_180bb8ae8;
  if ((((auVar2._0_4_ != fVar1) || (*(float *)(*param_1 + 4) != *(float *)((longlong)plVar3 + 0x34))
       ) || (*(float *)(*param_1 + 8) != *(float *)(plVar3 + 7))) ||
     (*(float *)(*param_1 + 0xc) != *(float *)((longlong)plVar3 + 0x3c))) {
    iVar9 = *(int *)(DAT_180bb8ae8 + 0x1448) + -1;
    if (-1 < iVar9) {
      lVar11 = (longlong)iVar9;
      lVar10 = lVar11 * 0x1c;
      do {
        piVar8 = (int *)(*(longlong *)(lVar5 + 0x1450) + lVar10);
        if (*piVar8 - 1U < 3) {
          FUN_18063aed0(piVar8,piVar8 + 7,(*(int *)(lVar5 + 0x1448) - lVar11) * 0x1c + -0x1c);
          *(int *)(lVar5 + 0x1448) = *(int *)(lVar5 + 0x1448) + -1;
        }
        lVar11 = lVar11 + -1;
        lVar10 = lVar10 + -0x1c;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    FUN_1804affe0(param_2);
    if (*(int *)(lVar5 + 0x1574) == 1) {
      FUN_1804b7870(0,0);
    }
    pHVar4 = (HWND)*plVar3;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 0;
    pHVar7 = GetCapture();
    if (pHVar7 == pHVar4) {
      ReleaseCapture();
    }
    lVar5 = *(longlong *)(*param_1 + 8);
    plVar3[6] = *(longlong *)*param_1;
    plVar3[7] = lVar5;
  }
  return param_1;
}



