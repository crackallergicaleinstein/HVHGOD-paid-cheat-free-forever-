// FUN_180605cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605cf0 */

undefined4 * FUN_180605cf0(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iVar7 = 0;
  local_58 = SUB84(param_2,0);
  uStack_54 = (undefined4)((ulonglong)param_2 >> 0x20);
  iVar11 = 0;
  local_38 = local_58;
  uStack_34 = uStack_54;
  iStack_30 = 0;
  iVar6 = 0;
  FUN_180606094(param_2,&local_38);
  iVar9 = 0;
  if (*param_2 != 0) {
    pbVar10 = *(byte **)(param_2 + 2);
    iVar6 = 0;
    do {
      if (((int)*(undefined8 *)(param_2 + 6) <= param_3) &&
         (param_3 <= (int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20))) {
        iVar11 = iVar9;
        if (iVar7 == 0) {
          iVar11 = iVar7;
        }
        iVar7 = iVar11;
        iVar6 = iVar9;
      }
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)(char)(&DAT_1806acfc0)[*pbVar10 & 0xf];
      bVar1 = (&DAT_1806acfd0)[*pbVar10 & 0xf];
      pbVar5 = pbVar10 + -lVar8;
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[6] = uVar3 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_1806acfc0)[*pbVar5 & 0xf];
      bVar1 = (&DAT_1806acfd0)[*pbVar5 & 0xf];
      pbVar5 = pbVar10 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1806acfd0)[*pbVar5 & 0xf];
      pbVar10 = pbVar10 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1806acfc0)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint *)(pbVar10 + -4);
      *(byte **)(param_2 + 2) = pbVar10;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar10;
      pbVar10 = pbVar10 + 4;
      *(byte **)(param_2 + 2) = pbVar10;
      param_2[9] = iVar4;
    } while (iVar9 != *param_2);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  iStack_30 = iVar11;
  FUN_180606094(param_2,&local_38);
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = iVar11;
  param_1[3] = uStack_4c;
  *(int **)(param_1 + 4) = param_2;
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,iVar6 + 1);
  return param_1;
}



