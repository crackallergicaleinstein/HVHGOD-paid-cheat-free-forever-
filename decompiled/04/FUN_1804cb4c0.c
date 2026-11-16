// FUN_1804cb4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cb4c0 */

void FUN_1804cb4c0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 uVar10;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  lVar3 = DAT_180bb8ae8;
  uVar5 = 0;
  plVar6 = (longlong *)(DAT_180bb8ae8 + 0x2128);
  if (*(int *)(DAT_180bb8ae8 + 0x2130) == 0) {
    plVar6 = (longlong *)0x0;
    if (*(int *)(DAT_180bb8ae8 + 0x21a0) != 0) {
      plVar6 = (longlong *)(DAT_180bb8ae8 + 0x2198);
    }
  }
  uVar4 = *(uint *)(DAT_180bb8ae8 + 0x20e4);
  if (((((uVar4 & 0x400) != 0) && (plVar6 == (longlong *)0x0)) &&
      ((*(int *)(DAT_180bb8ae8 + 0x2124) == 1 || (*(int *)(DAT_180bb8ae8 + 0x2120) == 0)))) &&
     (*(int *)(DAT_180bb8ae8 + 0x21d8) != 0)) {
    plVar6 = (longlong *)(DAT_180bb8ae8 + 0x21d0);
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x20f0) == 2) || (*(int *)(DAT_180bb8ae8 + 0x20f0) == 3)) {
    pfVar8 = &local_resc;
    lVar7 = 4;
    pfVar9 = (float *)((longlong)&local_res10 + 4);
  }
  else {
    pfVar8 = &local_res8;
    lVar7 = 0;
    pfVar9 = (float *)&local_res10;
  }
  if (plVar6 == (longlong *)0x0) {
    if ((uVar4 & 0x400) != 0) {
      uVar4 = uVar4 | 0x4000;
      *(uint *)(DAT_180bb8ae8 + 0x20e4) = uVar4;
    }
    if ((*(int *)(lVar3 + 0x203c) != 0) && ((uVar4 >> 0xe & 1) == 0)) {
      FUN_1804c8df0();
    }
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar3 + 0x2040) + 0x3f0) + (longlong)*(int *)(lVar3 + 0x204c) * 8
      + 0x430 + lVar7) = 0x7f7fffff;
    if ((*(byte *)(lVar3 + 0x28cc) & 0x10) != 0) {
      FUN_1804cf3e0("[nav] NavMoveSubmitted but not led to a result!\n");
    }
  }
  else {
    if ((uVar4 & 0x20) != 0) {
      if ((*(int *)(DAT_180bb8ae8 + 0x2168) != 0) &&
         (*(int *)(DAT_180bb8ae8 + 0x2168) != *(int *)(DAT_180bb8ae8 + 0x203c))) {
        plVar6 = (longlong *)(DAT_180bb8ae8 + 0x2160);
      }
    }
    plVar1 = (longlong *)(DAT_180bb8ae8 + 0x2198);
    if (((plVar6 != plVar1) && (*(int *)(DAT_180bb8ae8 + 0x21a0) != 0)) &&
       (*(longlong *)(*plVar1 + 0x3c8) == *(longlong *)(DAT_180bb8ae8 + 0x2040))) {
      if ((*(float *)(DAT_180bb8ae8 + 0x21bc) < *(float *)((longlong)plVar6 + 0x24)) ||
         ((*(float *)(DAT_180bb8ae8 + 0x21bc) == *(float *)((longlong)plVar6 + 0x24) &&
          (*(float *)(DAT_180bb8ae8 + 0x21c0) < *(float *)(plVar6 + 5))))) {
        plVar6 = plVar1;
      }
    }
    if (*(int *)(DAT_180bb8ae8 + 0x204c) == 0) {
      lVar7 = *plVar6;
      local_38 = *(float *)(lVar7 + 0x128) + *(float *)(plVar6 + 2);
      local_34 = *(float *)(lVar7 + 300) + *(float *)((longlong)plVar6 + 0x14);
      local_30 = *(float *)(lVar7 + 0x128) + *(float *)(plVar6 + 3);
      local_2c = *(float *)(lVar7 + 300) + *(float *)((longlong)plVar6 + 0x1c);
      FUN_1804c6fe0(&local_res8,lVar7,&local_38,*(undefined4 *)(DAT_180bb8ae8 + 0x20e8));
      if ((*(byte *)(lVar3 + 0x20e4) & 0x40) != 0) {
        if (*(int *)(lVar3 + 0x20f0) == 2) {
          uVar10 = *(undefined4 *)(*plVar6 + 0xa4);
        }
        else {
          uVar10 = 0;
        }
        lVar7 = *plVar6;
        *(undefined4 *)(lVar7 + 0xac) = uVar10;
        *(undefined4 *)(lVar7 + 0xb4) = 0;
        *(undefined4 *)(lVar7 + 0xbc) = 0;
      }
    }
    if (*(longlong *)(lVar3 + 0x2040) != *plVar6) {
      if ((*(byte *)(lVar3 + 0x28cc) & 4) != 0) {
        FUN_1804cf3e0("[focus] NavMoveRequest: SetNavWindow(\"%s\")\n",*(undefined8 *)(*plVar6 + 8))
        ;
      }
      *(longlong *)(lVar3 + 0x2040) = *plVar6;
      *(undefined8 *)(lVar3 + 0x2098) = 0xffffffffffffffff;
    }
    if ((*(int *)(lVar3 + 0x1550) != (int)plVar6[1]) && ((*(uint *)(lVar3 + 0x20e4) & 0x8000) == 0))
    {
      FUN_1804b7870(0,0);
    }
    if (((*(int *)(lVar3 + 0x203c) != (int)plVar6[1]) || ((*(uint *)(lVar3 + 0x20e4) & 0x800) != 0))
       && ((*(uint *)(lVar3 + 0x20e4) >> 0xd & 1) == 0)) {
      *(undefined4 *)(lVar3 + 0x2208) = *(undefined4 *)(lVar3 + 0x2048);
      *(int *)(lVar3 + 0x220c) = (int)plVar6[1];
      *(undefined4 *)(lVar3 + 0x2210) = *(undefined4 *)((longlong)plVar6 + 0xc);
      *(undefined4 *)(lVar3 + 0x2214) = *(undefined4 *)(lVar3 + 0x20ec);
      *(undefined1 *)(lVar3 + 0x2219) = 0;
      *(byte *)(lVar3 + 0x2218) = (byte)(*(uint *)(lVar3 + 0x20e4) >> 10) & 1;
      *(byte *)(lVar3 + 0x221a) = (byte)(*(uint *)(plVar6 + 4) >> 0x15) & 1;
    }
    if ((*(byte *)(lVar3 + 0x28cc) & 0x10) != 0) {
      FUN_1804cf3e0("[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n",
                    (int)plVar6[1],*(undefined4 *)(lVar3 + 0x204c),
                    *(undefined8 *)(*(longlong *)(lVar3 + 0x2040) + 8));
    }
    local_res10 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x2040) + 0x3f0) + 0x430 +
                   (longlong)*(int *)(lVar3 + 0x204c) * 8);
    FUN_1804c8f10((int)plVar6[1],(longlong)*(int *)(lVar3 + 0x204c),
                  *(undefined4 *)((longlong)plVar6 + 0xc),plVar6 + 2);
    if (plVar6[6] != -1) {
      *(longlong *)(lVar3 + 0x2098) = plVar6[6];
    }
    if ((*(uint *)(lVar3 + 0x20e4) & 0x400) == 0) {
      iVar2 = *(int *)(lVar3 + 0x204c);
      local_res8 = (*(float *)(plVar6 + 3) + *(float *)(plVar6 + 2)) * 0.5;
      local_resc = (*(float *)((longlong)plVar6 + 0x1c) + *(float *)((longlong)plVar6 + 0x14)) * 0.5
      ;
      *pfVar9 = *pfVar8;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x2040) + 0x3f0) + 0x430 + (longlong)iVar2 * 8) =
           local_res10;
    }
    uVar4 = *(uint *)(lVar3 + 0x20e4);
    if (((uVar4 >> 10 & 1) != 0) && ((*(uint *)(plVar6 + 4) & 0x100000) == 0)) {
      uVar4 = uVar4 & 0xffffefff;
      *(uint *)(lVar3 + 0x20e4) = uVar4;
    }
    if ((uVar4 >> 0xc & 1) != 0) {
      *(int *)(lVar3 + 0x2088) = (int)plVar6[1];
      *(undefined4 *)(lVar3 + 0x208c) = 0;
      if ((uVar4 >> 9 & 1) != 0) {
        *(undefined4 *)(lVar3 + 0x208c) = 0x20;
        uVar5 = 0x20;
      }
      if ((uVar4 >> 10 & 1) != 0) {
        *(uint *)(lVar3 + 0x208c) = uVar5 | 0xd;
      }
    }
    if ((uVar4 >> 0xe & 1) == 0) {
      FUN_1804c8df0();
    }
  }
  return;
}



