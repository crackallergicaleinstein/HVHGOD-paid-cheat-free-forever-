// FUN_180430180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430180 */

ulonglong FUN_180430180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong in_RAX;
  longlong *plVar6;
  uint7 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_80 [104];
  
  lVar3 = *(longlong *)(param_1 + 0x98);
  local_98[0] = (undefined4)param_2;
  if ((lVar3 == 0) || (in_RAX = FUN_180574630(lVar3,param_2,0x24), (int)in_RAX != 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar4 = *(longlong *)(lVar3 + 0x78);
  iVar1 = *(int *)(lVar4 + 0x6c);
  iVar2 = *(int *)(lVar4 + 0x68);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xa0) + 1 + iVar1) {
    *(undefined4 *)(param_1 + 0xa0) = 1;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xa8) + 1;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0xa4) + 1 + iVar2) {
    fVar11 = (float)*(int *)(*(longlong *)(lVar3 + 0x78) + 0x58) * 0.015625;
    plVar6 = (longlong *)FUN_180438ea0(param_1 + 0x28,local_90,local_98);
    lVar3 = *plVar6;
    uVar7 = (uint7)((ulonglong)plVar6 >> 8);
    *(float *)(lVar3 + 0x14) = fVar11;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  else {
    iVar9 = 0;
    if (0 < iVar2) {
      do {
        iVar10 = 0;
        if (0 < iVar1) {
          do {
            lVar8 = (longlong)
                    ((*(int *)(param_1 + 0xa4) + iVar9) * *(int *)(param_1 + 0x10) +
                     *(int *)(param_1 + 0xa0) + iVar10);
            *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + lVar8 * 4) = 0xff;
            *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 1 + lVar8 * 4) = 0xff;
            *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 2 + lVar8 * 4) = 0xff;
            iVar5 = iVar9 * *(int *)(lVar4 + 0x70) + iVar10;
            iVar10 = iVar10 + 1;
            *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 3 + lVar8 * 4) =
                 *(undefined1 *)((longlong)iVar5 + *(longlong *)(lVar4 + 0x78));
          } while (iVar10 < iVar1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
    }
    lVar3 = *(longlong *)(lVar3 + 0x78);
    fVar11 = (float)*(int *)(lVar3 + 0x58) * 0.015625;
    fVar12 = (float)*(int *)(lVar3 + 0x90);
    fVar13 = (float)*(int *)(lVar3 + 0x94);
    fVar14 = (float)*(int *)(param_1 + 0xa0);
    fVar15 = (float)*(int *)(param_1 + 0xa4);
    plVar6 = (longlong *)FUN_180438ea0(param_1 + 0x28,local_80,local_98);
    lVar3 = *plVar6;
    *(float *)(lVar3 + 0x14) = fVar11;
    *(float *)(lVar3 + 0x18) = fVar12;
    *(float *)(lVar3 + 0x1c) = fVar13;
    *(float *)(lVar3 + 0x20) = (float)iVar1;
    *(float *)(lVar3 + 0x24) = (float)iVar2;
    *(float *)(lVar3 + 0x28) = fVar14;
    *(float *)(lVar3 + 0x2c) = fVar15;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1 + iVar1;
    *(undefined1 *)(param_1 + 200) = 1;
    iVar1 = *(int *)(param_1 + 0xa8);
    if (*(int *)(param_1 + 0xa8) < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0xa8) = iVar1;
    uVar7 = (uint7)(uint3)((uint)iVar1 >> 8);
  }
  return CONCAT71(uVar7,1);
}



