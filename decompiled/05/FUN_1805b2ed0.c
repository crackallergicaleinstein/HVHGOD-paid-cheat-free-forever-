// FUN_1805b2ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2ed0 */

void FUN_1805b2ed0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_res18 [2];
  
  local_res8 = param_1;
  local_res18[0] = param_3;
  FUN_18063ab10(param_3,0,0x2c8);
  FUN_18063ab10((byte *)(param_3 + 0xb8),0,0x178);
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_3 + 0xb8) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    psVar6 = (short *)(param_2 + 0xc);
    piVar5 = (int *)(param_3 + 0xbc);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2 << 0x10;
      uVar7 = uVar7 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 9);
  *(byte *)(param_3 + 0xb9) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    psVar6 = (short *)(param_2 + 0x28);
    piVar5 = (int *)(param_3 + 0xf4);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2 << 0x10;
      uVar7 = uVar7 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 10);
  *(byte *)(param_3 + 0xba) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    psVar6 = (short *)(param_2 + 0x3c);
    piVar5 = (int *)(param_3 + 0x11c);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2 << 0x10;
      uVar7 = uVar7 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 0xb);
  *(byte *)(param_3 + 0xbb) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    psVar6 = (short *)(param_2 + 0x58);
    piVar5 = (int *)(param_3 + 0x154);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2 << 0x10;
      uVar7 = uVar7 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_3 + 0x17c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_3 + 0x180) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_2 + 0x74);
  *(uint *)(param_3 + 0x188) = (uint)*(ushort *)(param_2 + 0x78);
  *(uint *)(param_3 + 0x18c) = (uint)*(ushort *)(param_2 + 0x7a);
  bVar1 = *(byte *)(param_2 + 0x7c);
  *(byte *)(param_3 + 400) = bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)(param_3 + 0x194);
    uVar7 = (ulonglong)bVar1;
    psVar6 = (short *)(param_2 + 0x80);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_2 + 0x7d);
  *(byte *)(param_3 + 0x191) = bVar1;
  if (bVar1 != 0) {
    piVar5 = (int *)(param_3 + 0x1c8);
    uVar7 = (ulonglong)bVar1;
    psVar6 = (short *)(param_2 + 0x9a);
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *piVar5 = (int)sVar2;
      piVar5 = piVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(undefined1 *)(param_3 + 0x1fc) = *(undefined1 *)(param_2 + 0x7e);
  *(undefined4 *)(param_3 + 0x204) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_3 + 0x20c) = *(undefined4 *)(param_2 + 0xb4);
  *(longlong *)(param_3 + 0x228) = local_res18[0];
  iVar3 = *(int *)(*(longlong *)(local_res8 + 0xd0) + 0x5c);
  if (iVar3 != -1) {
    *(int *)(local_res18[0] + 0x2c0) = iVar3;
    lVar8 = *(longlong *)(local_res8 + 0xd0);
    if (*(int *)(lVar8 + 0x5c) != 0) {
      do {
        uVar4 = *(int *)(lVar8 + 0x5c) << 0xd ^ *(uint *)(lVar8 + 0x5c);
        uVar4 = uVar4 >> 0x11 ^ uVar4;
        *(uint *)(lVar8 + 0x5c) = uVar4 << 5 ^ uVar4;
        lVar8 = *(longlong *)(local_res8 + 0xd0);
      } while (*(int *)(lVar8 + 0x5c) < 0);
    }
  }
  if (*(int *)(local_res18[0] + 0x2c0) == 0) {
    uVar4 = (uint)&local_res8 ^ (uint)&local_res8 ^ (uint)local_res18;
    uVar4 = (uVar4 >> 10 ^ uVar4) >> 10 ^ uVar4;
    if (uVar4 == 0) {
      uVar4 = 0x7384;
    }
    *(uint *)(local_res18[0] + 0x2c0) = uVar4;
  }
  return;
}



