// FUN_1804f2410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2410 */

void FUN_1804f2410(undefined4 *param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  undefined4 uVar12;
  
  *(undefined1 *)((longlong)param_1 + 0x247) = 0;
  lVar2 = DAT_180bb8ae8;
  if ((*(byte *)(param_1 + 1) & 0x10) != 0) {
    return;
  }
  iVar7 = 0;
  if ((param_1[0x19] != -1) &&
     (puVar8 = (undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x27b8) + (longlong)(int)param_1[0x19]),
     puVar8 != (undefined4 *)0x0)) {
    lVar11 = DAT_180bb8ae8;
    if ((int)param_1[0x1b] <= (int)*(short *)((longlong)puVar8 + 0xe)) goto LAB_1804f2481;
    *puVar8 = 0;
  }
  puVar8 = (undefined4 *)FUN_1804f22f0(*param_1,param_1[0x1b]);
  lVar11 = DAT_180bb8ae8;
  param_1[0x19] = (int)puVar8 - *(int *)(lVar2 + 0x27b8);
LAB_1804f2481:
  pfVar10 = (float *)(puVar8 + 5);
  *(undefined2 *)(puVar8 + 3) = *(undefined2 *)(param_1 + 0x1b);
  bVar3 = false;
  *(undefined2 *)(puVar8 + 4) = *(undefined2 *)(lVar2 + 0x2778);
  lVar2 = *(longlong *)(param_1 + 6);
  puVar8[1] = 0;
  if (0 < (int)param_1[0x1b]) {
    pfVar9 = (float *)(lVar2 + 0x1c);
    bVar3 = false;
    do {
      pfVar6 = pfVar9;
      if (((uint)pfVar9[-7] & 8) == 0) {
        pfVar6 = pfVar9 + -3;
      }
      fVar1 = *pfVar6;
      pfVar10[1] = pfVar9[6];
      *pfVar10 = fVar1;
      *(short *)(pfVar10 + 2) = (short)iVar7;
      *(undefined2 *)((longlong)pfVar10 + 10) = *(undefined2 *)((longlong)pfVar9 + 0x3e);
      *(undefined2 *)(pfVar10 + 3) = *(undefined2 *)((longlong)pfVar9 + 0x46);
      bVar5 = (*(byte *)((longlong)pfVar10 + 0xe) ^ *(byte *)(pfVar9 + 0x16)) & 3 ^
              *(byte *)((longlong)pfVar10 + 0xe);
      *(byte *)((longlong)pfVar10 + 0xe) = bVar5;
      bVar4 = *(char *)((longlong)pfVar9 + 0x4f) << 2;
      bVar4 = (bVar4 ^ bVar5) & 0xf3 ^ bVar4;
      *(byte *)((longlong)pfVar10 + 0xe) = bVar4;
      *(byte *)((longlong)pfVar10 + 0xe) =
           ((char)((uint)pfVar9[-7] >> 3) << 4 ^ bVar4) & 0x10 ^ bVar4;
      if (((uint)pfVar9[-7] & 8) == 0) {
        bVar3 = true;
      }
      if (fVar1 != pfVar9[1]) {
        puVar8[1] = puVar8[1] | 1;
      }
      if (*(short *)((longlong)pfVar9 + 0x3e) != iVar7) {
        puVar8[1] = puVar8[1] | 2;
      }
      if (*(short *)((longlong)pfVar9 + 0x46) != -1) {
        puVar8[1] = puVar8[1] | 10;
      }
      if (*(byte *)((longlong)pfVar9 + 0x4f) != (~(byte)((uint)pfVar9[-7] >> 1) & 1)) {
        puVar8[1] = puVar8[1] | 4;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 0x1e;
      pfVar10 = pfVar10 + 4;
    } while (iVar7 < (int)param_1[0x1b]);
  }
  puVar8[1] = puVar8[1] & param_1[1];
  if (bVar3) {
    uVar12 = param_1[0x3a];
  }
  else {
    uVar12 = 0;
  }
  puVar8[2] = uVar12;
  if (*(float *)(lVar11 + 0x277c) <= 0.0) {
    *(undefined4 *)(lVar11 + 0x277c) = *(undefined4 *)(lVar11 + 0x44);
  }
  return;
}



