// FUN_1805bf9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf9d0 */

int FUN_1805bf9d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  short sVar6;
  short *psVar7;
  short sVar8;
  uint uVar9;
  int local_res20 [2];
  
  puVar3 = (undefined8 *)FUN_18057abe0(param_1,0x9c8,local_res20);
  if (local_res20[0] != 0) {
    *param_3 = (longlong)puVar3;
    return local_res20[0];
  }
  psVar7 = (short *)(param_2 + 0x80);
  *puVar3 = param_1;
  *(uint *)(puVar3 + 0x1b) = (uint)*(ushort *)(param_2 + 0x78);
  piVar4 = (int *)((longlong)puVar3 + 0xe4);
  uVar9 = (uint)*(byte *)(param_2 + 0x7c);
  if (*(byte *)(param_2 + 0x7c) != 0) {
    do {
      sVar6 = *psVar7;
      psVar7 = psVar7 + 1;
      *piVar4 = (int)sVar6;
      piVar4 = piVar4 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  piVar4 = (int *)(puVar3 + 3);
  psVar7 = (short *)(param_2 + 0x9a);
  *(uint *)((longlong)puVar3 + 0xd4) = *(byte *)(param_2 + 0x7c) + 1;
  *(uint *)((longlong)puVar3 + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
  uVar9 = (uint)*(byte *)(param_2 + 0x7d);
  if (*(byte *)(param_2 + 0x7d) != 0) {
    do {
      sVar6 = *psVar7;
      psVar7 = psVar7 + 1;
      *piVar4 = (int)sVar6;
      piVar4 = piVar4 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar5 = param_2 + 0x28;
  *(uint *)(puVar3 + 1) = *(byte *)(param_2 + 0x7d) + 1;
  FUN_1805bf6b0(puVar3 + 0x34,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
                *(undefined1 *)(param_2 + 9),lVar5,*(undefined4 *)(param_2 + 0x74),0);
  lVar1 = param_2 + 0x58;
  sVar6 = 1;
  FUN_1805bf6b0(puVar3 + 0x34,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
                *(undefined1 *)(param_2 + 0xb),lVar1,*(undefined4 *)(param_2 + 0x74),1);
  uVar9 = 0;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 8) != 0) {
    do {
      sVar6 = *(short *)(param_2 + 0xc + (ulonglong)(uVar9 + 1) * 2) -
              *(short *)(param_2 + 0xc + (ulonglong)uVar9 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = uVar9 + 2;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 8));
  }
  uVar9 = 0;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 9) != 0) {
    do {
      sVar6 = *(short *)(lVar5 + (ulonglong)(uVar9 + 1) * 2) -
              *(short *)(lVar5 + (ulonglong)uVar9 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = uVar9 + 2;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 9));
  }
  uVar9 = 0;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 10) != 0) {
    do {
      sVar6 = *(short *)(param_2 + 0x3c + (ulonglong)(uVar9 + 1) * 2) -
              *(short *)(param_2 + 0x3c + (ulonglong)uVar9 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = uVar9 + 2;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 10));
  }
  uVar9 = 0;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 0xb) != 0) {
    do {
      sVar6 = *(short *)(lVar1 + (ulonglong)(uVar9 + 1) * 2) -
              *(short *)(lVar1 + (ulonglong)uVar9 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = uVar9 + 2;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 0xb));
  }
  lVar5 = (longlong)*(int *)(param_2 + 0x6c) * (longlong)sVar6;
  if ((int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) < 1000) {
    iVar2 = (*(int *)(param_2 + 0x6c) * 8) / 0x7d;
  }
  else {
    iVar2 = (int)(0x400000 / (longlong)(int)sVar6);
  }
  *(int *)(puVar3 + 0x136) = iVar2;
  *(undefined4 *)((longlong)puVar3 + 0x9b4) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)puVar3 + 0x9bc) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)((longlong)puVar3 + 0xcc) = 0;
  puVar3[0x33] = 0;
  *param_3 = (longlong)puVar3;
  return local_res20[0];
}



