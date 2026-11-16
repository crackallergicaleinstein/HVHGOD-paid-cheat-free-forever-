// FUN_1805be3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805be3e0 */

ulonglong FUN_1805be3e0(longlong param_1,longlong param_2,ulonglong param_3,int param_4,
                       undefined4 param_5,undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int *local_res8;
  
  puVar1 = (uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) = param_5;
  }
  uVar4 = FUN_1805bf120(puVar1,param_6,&local_res8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*puVar1 == 0) {
    uVar3 = FUN_1805bf120(puVar1,param_6,&local_res8);
    if (uVar3 != 0) {
      return (ulonglong)uVar3;
    }
    piVar7 = local_res8;
  }
  else {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x18) + -0x18 + (ulonglong)*puVar1 * 0x18);
  }
  uVar3 = FUN_1805bf090(piVar7,param_4,param_6);
  if (uVar3 == 0) {
    *piVar7 = param_4;
    pbVar6 = *(byte **)(piVar7 + 2);
    iVar8 = 0x80 >> ((byte)param_3 & 7);
    pbVar9 = (byte *)(((param_3 & 0xffffffff) >> 3) + param_2);
    iVar10 = 0x80;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      bVar2 = *pbVar6 & ~(byte)iVar10;
      bVar5 = bVar2 | (byte)iVar10;
      if ((*pbVar9 & (byte)iVar8) == 0) {
        bVar5 = bVar2;
      }
      iVar8 = iVar8 >> 1;
      *pbVar6 = bVar5;
      if (iVar8 == 0) {
        iVar8 = 0x80;
        pbVar9 = pbVar9 + 1;
      }
      iVar10 = iVar10 >> 1;
      if (iVar10 == 0) {
        iVar10 = 0x80;
        pbVar6 = pbVar6 + 1;
      }
    }
  }
  return (ulonglong)uVar3;
}



