// FUN_1805ac520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac520 */

ulonglong FUN_1805ac520(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  uint local_res10 [2];
  
  uVar4 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    piVar5 = *(int **)(param_2 + 0x140);
    do {
      if (*piVar5 == param_3) {
        uVar2 = (*(int **)(param_2 + 0x140))[uVar4 * 4 + 3];
        if ((uVar2 < *(uint *)(param_1 + 0xc)) ||
           (local_res10[0] = FUN_180578910(param_1,uVar2 - *(uint *)(param_1 + 0xc)),
           local_res10[0] != 0)) {
          return 0x53;
        }
        uVar2 = FUN_1805785e0(param_1,local_res10);
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        uVar7 = uVar2 & 0xffffff00;
        if ((uVar7 != 0) && (uVar7 != 0x100)) {
          return 0;
        }
        puVar6 = &DAT_180673a10;
        if ((uVar2 & 4) == 0) {
          puVar6 = &DAT_1806739d8;
        }
        uVar4 = FUN_180578280(param_1,puVar6,param_2 + 0x148);
        local_res10[0] = (uint)uVar4;
        if (local_res10[0] != 0) {
          return uVar4;
        }
        iVar1 = *(int *)(param_2 + 0x150);
        iVar3 = -iVar1;
        if (-iVar1 < 0) {
          iVar3 = iVar1;
        }
        if (0x7fff < iVar3) {
          *(uint *)(param_2 + 0x150) = (iVar1 >> 0x1f & 0xffff0002U) + 0x7fff;
        }
        iVar1 = *(int *)(param_2 + 0x154);
        iVar3 = -iVar1;
        if (-iVar1 < 0) {
          iVar3 = iVar1;
        }
        if (0x7fff < iVar3) {
          *(uint *)(param_2 + 0x154) = (iVar1 >> 0x1f & 0xffff0002U) + 0x7fff;
        }
        uVar2 = uVar2 & 0xff;
        uVar4 = FUN_1805acbc0(param_1,uVar2,param_2 + 0x15c);
        local_res10[0] = (uint)uVar4;
        if (local_res10[0] != 0) {
          return uVar4;
        }
        uVar4 = FUN_1805acbc0(param_1,uVar2,param_2 + 0x16c);
        local_res10[0] = (uint)uVar4;
        if (local_res10[0] != 0) {
          return uVar4;
        }
        if (uVar7 != 0x100) {
          *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x15c);
          *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x164);
          *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x16c);
          *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x174);
          return uVar4;
        }
        uVar4 = FUN_1805acbc0(param_1,uVar2,param_2 + 0x17c);
        local_res10[0] = (uint)uVar4;
        if (local_res10[0] == 0) {
          uVar4 = FUN_1805acbc0(param_1,uVar2,param_2 + 0x18c);
          return uVar4;
        }
        return uVar4;
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      piVar5 = piVar5 + 4;
    } while (uVar2 < *(uint *)(param_2 + 0x13c));
  }
  return 3;
}



