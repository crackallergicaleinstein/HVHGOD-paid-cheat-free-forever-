// FUN_1805be0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805be0a0 */

undefined8 FUN_1805be0a0(longlong param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  uint *local_res8;
  
  local_res8 = *(uint **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar5 != 0) {
    do {
      uVar1 = *local_res8;
      if ((((param_2 < uVar1) &&
           (((byte)(0x80 >> ((byte)param_2 & 7)) &
            *(byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(local_res8 + 2))) != 0)) ||
          ((param_3 < uVar1 &&
           (((byte)(0x80 >> ((byte)param_3 & 7)) &
            *(byte *)((ulonglong)(param_3 >> 3) + *(longlong *)(local_res8 + 2))) != 0)))) ||
         ((param_4 < uVar1 &&
          (((byte)(0x80 >> ((byte)param_4 & 7)) &
           *(byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(local_res8 + 2))) != 0))))
      goto LAB_1805be190;
      local_res8 = local_res8 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = FUN_1805bf120((int *)(param_1 + 0x20),param_5,&local_res8);
  if ((int)uVar3 == 0) {
LAB_1805be190:
    puVar2 = local_res8;
    if (*local_res8 <= param_2) {
      uVar3 = FUN_1805bf090(local_res8,param_2 + 1,param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar2 = param_2 + 1;
    }
    pbVar4 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(puVar2 + 2));
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)param_2 & 7));
    if (*puVar2 <= param_3) {
      uVar3 = FUN_1805bf090(puVar2,param_3 + 1,param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar2 = param_3 + 1;
    }
    pbVar4 = (byte *)((ulonglong)(param_3 >> 3) + *(longlong *)(puVar2 + 2));
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)param_3 & 7));
    uVar3 = 0;
    if (*puVar2 <= param_4) {
      uVar3 = FUN_1805bf090(puVar2,param_4 + 1,param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar2 = param_4 + 1;
    }
    pbVar4 = (byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(puVar2 + 2));
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)param_4 & 7));
  }
  return uVar3;
}



