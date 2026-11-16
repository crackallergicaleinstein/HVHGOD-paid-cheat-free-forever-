// FUN_1804c8fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8fd0 */

void FUN_1804c8fd0(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  lVar7 = DAT_180bb8ae8;
  if (*(longlong *)(DAT_180bb8ae8 + 0x2040) != param_2) {
    FUN_1804c8e60(param_2);
  }
  iVar6 = *(int *)(param_2 + 0x170);
  *(int *)(lVar7 + 0x204c) = iVar6;
  *(int *)(lVar7 + 0x203c) = param_1;
  FUN_1804c1dd0(*(undefined4 *)(lVar7 + 0x1e7c));
  *(int *)(param_2 + 0x408 + (longlong)iVar6 * 4) = param_1;
  if (*(int *)(lVar7 + 0x1ec0) == param_1) {
    fVar1 = *(float *)(param_2 + 300);
    fVar2 = *(float *)(lVar7 + 0x1ee0);
    fVar3 = *(float *)(lVar7 + 0x1ee4);
    fVar4 = *(float *)(param_2 + 0x128);
    fVar5 = *(float *)(lVar7 + 0x1ee8);
    lVar9 = (longlong)iVar6 + 0x41;
    *(float *)(param_2 + lVar9 * 0x10) = *(float *)(lVar7 + 0x1edc) - *(float *)(param_2 + 0x128);
    *(float *)(param_2 + 4 + lVar9 * 0x10) = fVar2 - fVar1;
    *(float *)(param_2 + 8 + lVar9 * 0x10) = fVar3 - fVar4;
    *(float *)(param_2 + 0xc + lVar9 * 0x10) = fVar5 - fVar1;
    if (*(int *)(lVar7 + 0x1ec0) == param_1) {
      uVar8 = *(undefined4 *)(lVar7 + 0x1ec4);
      goto LAB_1804c90a1;
    }
  }
  uVar8 = 0;
LAB_1804c90a1:
  *(undefined4 *)(lVar7 + 0x2050) = uVar8;
  if (param_1 == *(int *)(lVar7 + 0x1554)) {
    *(undefined1 *)(lVar7 + 0x203b) = 1;
  }
  if ((*(int *)(lVar7 + 0x1574) == 2) || (*(int *)(lVar7 + 0x1574) == 3)) {
    *(undefined1 *)(lVar7 + 0x2039) = 1;
  }
  else if (*(char *)(lVar7 + 0x76) != '\0') {
    *(undefined1 *)(lVar7 + 0x2038) = 0;
  }
  lVar7 = DAT_180bb8ae8;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 0x3f0) + 0x430 +
   (longlong)*(int *)(DAT_180bb8ae8 + 0x204c) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar7 + 0x2040) + 0x3f0) + 0x434 +
   (longlong)*(int *)(lVar7 + 0x204c) * 8) = 0x7f7fffff;
  return;
}



