// FUN_1805a6860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6860 */

int FUN_1805a6860(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int local_res18 [2];
  
  uVar3 = *param_3;
  local_res18[0] = 0;
  puVar5 = (undefined8 *)FUN_18057aad0(uVar3,0x20,local_res18);
  if (local_res18[0] == 0) {
    if (param_1 + 4 <= param_2) {
      bVar1 = *param_1;
      pbVar7 = param_1 + 4;
      *(byte *)(puVar5 + 1) = bVar1;
      iVar8 = 3;
      *(ushort *)((longlong)puVar5 + 10) = CONCAT11(param_1[1],param_1[2]);
      bVar2 = param_1[3];
      *(byte *)((longlong)puVar5 + 9) = bVar2;
      uVar9 = *(uint *)(param_3 + 1);
      lVar4 = param_3[0x1b];
      *(undefined4 *)((longlong)puVar5 + 0xc) = 3;
      puVar5[2] = pbVar7 + ((ulonglong)uVar9 - lVar4);
      if ((bVar2 & 1) != 0) {
        iVar8 = 5;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      }
      if ((bVar2 & 2) != 0) {
        iVar8 = iVar8 + 1;
        *(int *)((longlong)puVar5 + 0xc) = iVar8;
      }
      if (pbVar7 + (uint)bVar1 * iVar8 <= param_2) {
        if (bVar1 == 0) {
          FUN_18057abd0(uVar3);
          return local_res18[0];
        }
        if ((bVar2 & 1) == 0) {
          uVar6 = (ulonglong)((bVar1 - 1) * iVar8);
          *(uint *)(puVar5 + 3) = (uint)*pbVar7 << 0x10 | (uint)param_1[5];
          uVar9 = (uint)pbVar7[uVar6 + 1] | (uint)pbVar7[uVar6] << 0x10;
        }
        else {
          *(uint *)(puVar5 + 3) =
               CONCAT31(CONCAT21(CONCAT11(*pbVar7,param_1[5]),param_1[6]),param_1[7]);
          pbVar7 = pbVar7 + (bVar1 - 1) * iVar8;
          uVar9 = CONCAT31(CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]),pbVar7[3]);
        }
        *(uint *)((longlong)puVar5 + 0x1c) = uVar9;
        *puVar5 = 0;
        *(undefined8 **)param_3[0x19] = puVar5;
        param_3[0x19] = puVar5;
        *(uint *)(param_3 + 0x17) = *(int *)(param_3 + 0x17) + (uint)*(byte *)(puVar5 + 1);
        return 0;
      }
    }
    FUN_18057abd0(uVar3);
    local_res18[0] = 8;
  }
  return local_res18[0];
}



