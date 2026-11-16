// FUN_1804c6190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6190 */

ulonglong FUN_1804c6190(float *param_1,int param_2,float *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar6 = DAT_180bb8ae8;
  pfVar10 = param_1;
  if (param_3 != (float *)0x0) {
    pfVar10 = param_3;
  }
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  *(int *)(DAT_180bb8ae8 + 0x1ec0) = param_2;
  uVar3 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(uVar6 + 0x1ecc) = *(undefined8 *)param_1;
  *(undefined8 *)(uVar6 + 0x1ed4) = uVar3;
  uVar3 = *(undefined8 *)pfVar10;
  uVar4 = *(undefined8 *)(pfVar10 + 2);
  param_4 = *(uint *)(uVar6 + 0x1e8c) | *(uint *)(uVar6 + 0x1e80) | param_4;
  uVar11 = (ulonglong)param_4;
  *(undefined4 *)(uVar6 + 0x1ec8) = 0;
  *(uint *)(uVar6 + 0x1ec4) = param_4;
  *(undefined8 *)(uVar6 + 0x1edc) = uVar3;
  *(undefined8 *)(uVar6 + 0x1ee4) = uVar4;
  if (param_2 != 0) {
    if (*(int *)(uVar6 + 0x1550) == param_2) {
      *(int *)(uVar6 + 0x1554) = param_2;
    }
    if (*(int *)(uVar6 + 0x1584) == param_2) {
      *(undefined1 *)(uVar6 + 0x158d) = 1;
    }
    uVar12 = uVar6;
    if ((param_4 & 2) == 0) {
      uVar11 = (ulonglong)*(uint *)(lVar1 + 0x170);
      *(ushort *)(lVar1 + 0x176) =
           *(ushort *)(lVar1 + 0x176) | (ushort)(1 << (*(uint *)(lVar1 + 0x170) & 0x1f));
      if ((*(int *)(uVar6 + 0x203c) == param_2) || (*(char *)(uVar6 + 0x20a1) != '\0')) {
        lVar2 = *(longlong *)(uVar6 + 0x2040);
        uVar11 = *(ulonglong *)(lVar1 + 0x3f0);
        if ((*(ulonglong *)(lVar2 + 0x3f0) == uVar11) &&
           ((lVar1 == lVar2 ||
            (uVar9 = *(uint *)(lVar2 + 0x18) | *(uint *)(lVar1 + 0x18), uVar11 = (ulonglong)uVar9,
            (uVar9 >> 8 & 1) != 0)))) {
          uVar11 = FUN_1804c9640();
          uVar12 = DAT_180bb8ae8;
        }
      }
    }
    if (((*(byte *)(uVar6 + 0x1e88) & 4) != 0) && ((*(byte *)(uVar12 + 0x1ec4) & 0x40) == 0)) {
      if ((*(uint *)(uVar12 + 0x1ea8) >> 0x12 & 1) != 0) {
        *(uint *)(uVar12 + 0x1ec8) = *(uint *)(uVar12 + 0x1ec8) | 0x400;
        *(undefined4 *)(uVar12 + 0x1f0c) = *(undefined4 *)(uVar12 + 0x1ea4);
      }
      uVar11 = FUN_1804c5370(*(undefined4 *)(uVar12 + 0x1ea4),*(uint *)(uVar12 + 0x1ea8) & 0x3fcff,
                             param_2);
      uVar7 = DAT_180bb8ae8;
      if (((char)uVar11 != '\0') && (*(int *)(uVar12 + 0x2054) == 0)) {
        *(int *)(uVar12 + 0x2054) = param_2;
        *(undefined4 *)(uVar12 + 0x2060) = 0x11;
        *(int *)(uVar12 + 0x205c) = param_2;
        *(int *)(uVar12 + 0x2058) = param_2;
        *(int *)(uVar7 + 0x2078) = param_2;
        *(undefined4 *)(uVar7 + 0x207c) = 0x3dcccccd;
        uVar11 = uVar7;
      }
    }
  }
  *(undefined8 *)(uVar6 + 0x1e88) = 0;
  if ((((param_1[3] <= *(float *)(lVar1 + 0x26c)) || (*(float *)(lVar1 + 0x274) <= param_1[1])) ||
      (param_1[2] <= *(float *)(lVar1 + 0x268))) || (*(float *)(lVar1 + 0x270) <= *param_1)) {
    bVar5 = false;
    if ((param_2 == 0) ||
       (((param_2 != *(int *)(uVar6 + 0x1550) && (param_2 != *(int *)(uVar6 + 0x1580))) &&
        ((param_2 != *(int *)(uVar6 + 0x203c) && (param_2 != *(int *)(uVar6 + 0x2054))))))) {
      if (*(char *)(uVar6 + 0x154e) == '\0') {
        return uVar11 & 0xffffffffffffff00;
      }
      goto LAB_1804c6369;
    }
  }
  else {
    bVar5 = true;
LAB_1804c6369:
    if (param_2 == 0) goto LAB_1804c638b;
  }
  if (param_2 == *(int *)(uVar6 + 0x1e84)) {
    FUN_1804cf500();
  }
  if (*(int *)(uVar6 + 0x1584) == param_2) {
    *(undefined4 *)(uVar6 + 0x1588) = *(undefined4 *)(uVar6 + 4);
  }
LAB_1804c638b:
  if (bVar5) {
    *(uint *)(uVar6 + 0x1ec8) = *(uint *)(uVar6 + 0x1ec8) | 0x100;
  }
  uVar11 = 1;
  cVar8 = FUN_1804c3600(param_1,param_1 + 2,1);
  if (cVar8 != '\0') {
    *(uint *)(uVar6 + 0x1ec8) = *(uint *)(uVar6 + 0x1ec8) | 1;
  }
  return uVar11 & 0xff;
}



