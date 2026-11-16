// FUN_1805a6bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6bf0 */

ulonglong FUN_1805a6bf0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint local_res8 [2];
  byte *local_res10;
  
  local_res10 = param_2 + 1;
  uVar6 = 0;
  local_res8[0] = 0;
  uVar5 = **(undefined8 **)(param_1 + 0x28);
  if ((local_res10 <= param_3) && (bVar1 = *param_2, (char)bVar1 < '\0')) {
    if ((bVar1 & 0x40) != 0) {
      uVar4 = FUN_1805a6af0(&local_res10,param_3);
      uVar6 = uVar4 & 0xffffffff;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    pbVar8 = local_res10;
    local_res8[0] = 0;
    uVar10 = *(uint *)(param_1 + 0x18);
    uVar9 = uVar10 + (bVar1 & 0x3f);
    if (*(uint *)(param_1 + 0x1c) < uVar9) {
      uVar9 = uVar9 + 3 & 0xfffffffc;
      if (0x40 < uVar9) goto LAB_1805a6e83;
      uVar5 = FUN_18057ad10(uVar5,0x18,*(uint *)(param_1 + 0x1c),uVar9,
                            *(undefined8 *)(param_1 + 0x20),local_res8);
      uVar6 = (ulonglong)local_res8[0];
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      if (local_res8[0] != 0) goto LAB_1805a6e88;
      *(uint *)(param_1 + 0x1c) = uVar9;
    }
    uVar9 = 0;
    piVar11 = (int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar10 * 0x18);
    if ((bVar1 & 0x3f) == 0) goto LAB_1805a6e88;
    while( true ) {
      uVar12 = 0;
      pbVar7 = pbVar8 + 1;
      uVar10 = 0;
      if (param_3 < pbVar7) break;
      bVar2 = *pbVar8;
      *piVar11 = 0x10000;
      if ((bVar2 & 0x10) != 0) {
        pbVar7 = pbVar8 + 3;
        if (param_3 < pbVar7) break;
        *piVar11 = ((int)(short)((ushort)pbVar8[1] << 8) | (uint)pbVar8[2]) << 4;
      }
      piVar11[1] = 0x10000;
      pbVar8 = pbVar7;
      if ((bVar2 & 0x20) != 0) {
        pbVar8 = pbVar7 + 2;
        if (param_3 < pbVar8) break;
        piVar11[1] = ((int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1]) << 4;
      }
      if ((bVar2 & 3) == 1) {
        pbVar7 = pbVar8 + 2;
        if (param_3 < pbVar7) break;
        uVar12 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
      }
      else {
        pbVar7 = pbVar8;
        if ((bVar2 & 3) == 2) {
          pbVar7 = pbVar8 + 1;
          if (param_3 < pbVar7) break;
          uVar12 = (uint)(char)*pbVar8;
        }
      }
      bVar3 = bVar2 >> 2 & 3;
      if (bVar3 == 1) {
        pbVar8 = pbVar7 + 2;
        if (param_3 < pbVar8) break;
        uVar10 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
      }
      else {
        pbVar8 = pbVar7;
        if (bVar3 == 2) {
          pbVar8 = pbVar7 + 1;
          if (param_3 < pbVar8) break;
          uVar10 = (uint)(char)*pbVar7;
        }
      }
      piVar11[2] = uVar12;
      piVar11[3] = uVar10;
      if ((bVar2 & 0x40) == 0) {
        pbVar7 = pbVar8 + 1;
        if (param_3 < pbVar7) break;
        uVar10 = (uint)*pbVar8;
      }
      else {
        pbVar7 = pbVar8 + 2;
        if (param_3 < pbVar7) break;
        uVar10 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
      }
      piVar11[5] = uVar10;
      if ((char)bVar2 < '\0') {
        pbVar8 = pbVar7 + 3;
        if (param_3 < pbVar8) break;
        uVar10 = (uint)CONCAT11(*pbVar7,pbVar7[1]);
      }
      else {
        pbVar8 = pbVar7 + 2;
        if (param_3 < pbVar8) break;
        uVar10 = (uint)*pbVar7;
      }
      uVar9 = uVar9 + 1;
      piVar11[4] = uVar10 << 8 | (uint)pbVar8[-1];
      piVar11 = piVar11 + 6;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if ((bVar1 & 0x3f) <= uVar9) {
        return (ulonglong)local_res8[0];
      }
    }
  }
LAB_1805a6e83:
  uVar6 = 8;
LAB_1805a6e88:
  return uVar6;
}



