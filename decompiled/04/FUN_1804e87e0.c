// FUN_1804e87e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e87e0 */

ulonglong FUN_1804e87e0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  short sVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  float fVar12;
  
  lVar6 = FUN_1804b8110(0xa8);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  iVar5 = FUN_1804d24f0(uVar10,*(undefined4 *)(param_2 + 100));
  lVar4 = DAT_180bb8ae8;
  if (iVar5 < 0) {
    if (lVar6 != 0) {
      if (DAT_180bb8ae8 != 0) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar9 != *piVar1) {
          iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar8 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar8;
          piVar9 = (int *)(lVar4 + ((longlong)sVar8 + 0x533) * 8);
          *piVar9 = *piVar1;
          piVar9[1] = 0;
        }
        *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
        piVar1 = (int *)(lVar4 + 0x2990);
        *piVar1 = *piVar1 + 1;
      }
      thunk_FUN_180621380(lVar6);
    }
    uVar7 = FUN_1804c5a40(
                         "stbtt_GetFontOffsetForIndex(): FontData is incorrect, or FontNo cannot be found."
                         );
    return uVar7 & 0xffffffffffffff00;
  }
  iVar5 = FUN_1804d27c0(lVar6,uVar10,iVar5);
  lVar4 = DAT_180bb8ae8;
  if (iVar5 != 0) {
    *(longlong *)(param_2 + 0x90) = lVar6;
    fVar2 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x80) + 0x28) + 0x3c);
    if ((*(char *)(param_2 + 0x35) != '\0') && (*(float *)(param_2 + 0x3c) == 0.0)) {
      *(float *)(param_2 + 0x3c) = fVar2;
    }
    lVar11 = (longlong)*(int *)(lVar6 + 0x24);
    lVar4 = *(longlong *)(lVar6 + 8);
    cVar3 = *(char *)(lVar11 + 6 + lVar4);
    fVar12 = 1.0 / (float)((int)CONCAT11(*(undefined1 *)(lVar11 + 4 + lVar4),
                                         *(undefined1 *)(lVar11 + 5 + lVar4)) -
                          (int)CONCAT11(cVar3,*(undefined1 *)(lVar11 + 7 + lVar4)));
    *(float *)(lVar6 + 0xa0) = fVar12;
    if (((*(char *)(param_2 + 0x35) != '\0') && (*(float *)(param_2 + 0x3c) != 0.0)) &&
       (fVar2 != 0.0)) {
      fVar12 = (*(float *)(param_2 + 0x3c) / fVar2) * fVar12;
      *(float *)(lVar6 + 0xa0) = fVar12;
    }
    *(float *)(lVar6 + 0xa0) = fVar12 * *(float *)(param_2 + 0x74);
    return CONCAT71((uint7)(uint3)(int3)cVar3,1);
  }
  if (lVar6 != 0) {
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar9 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar8 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar8;
        piVar9 = (int *)(lVar4 + ((longlong)sVar8 + 0x533) * 8);
        *piVar9 = *piVar1;
        piVar9[1] = 0;
      }
      *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
      piVar1 = (int *)(lVar4 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar6);
  }
  uVar7 = FUN_1804c5a40(
                       "stbtt_InitFont(): failed to parse FontData. It is correct and complete? Check FontDataSize."
                       );
  return uVar7 & 0xffffffffffffff00;
}



