// FUN_18059c0f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c0f0 */

int FUN_18059c0f0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [2];
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_res8[0] = 0;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_18057aad0(uVar4,0x300,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    puVar2[0xbe] = 0;
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(uint **)(param_1 + 0x2e0) = puVar2;
  }
  if (param_2 == 0) {
LAB_18059c2a9:
    if (param_3 == 0) goto LAB_18059c2c6;
    if ((puVar2[1] == 0) || (puVar2[1] == param_3)) {
      puVar2[1] = param_3;
      goto LAB_18059c2c6;
    }
  }
  else {
    if (*puVar2 == 0) {
      uVar3 = FUN_18057ad10(uVar4,0x38,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x48) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar3 = FUN_18057ad10(uVar4,0xc4,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x6a) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar4 = FUN_18057ad10(uVar4,0x10,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x8e) = uVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *(longlong *)(puVar2 + 0x46) = param_1 + 0xd8;
      *(longlong *)(puVar2 + 0x68) = param_1 + 0x114;
      *(longlong *)(puVar2 + 0x8c) = param_1 + 0x27c;
      uVar6 = 2;
      if (1 < param_2) {
        do {
          uVar1 = (int)uVar6 - 1;
          uVar5 = (int)uVar6 + 1;
          *(longlong *)(puVar2 + uVar6 * 2 + 0x46) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x46) + 0x38;
          *(longlong *)(puVar2 + uVar6 * 2 + 0x68) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x68) + 0xc4;
          *(longlong *)(puVar2 + uVar6 * 2 + 0x8c) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x8c) + 0x10;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 <= param_2);
      }
      *puVar2 = param_2;
      goto LAB_18059c2a9;
    }
    if (*puVar2 == param_2) goto LAB_18059c2a9;
  }
  local_res8[0] = 3;
LAB_18059c2c6:
  return local_res8[0];
}



