// FUN_1805c6c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6c00 */

int FUN_1805c6c00(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int local_res8 [2];
  uint local_res18 [2];
  undefined1 *local_res20;
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  local_res20 = (undefined1 *)0x0;
  puVar4 = (undefined2 *)0x0;
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x53564720,param_2,local_res18);
  if (local_res8[0] != 0) goto LAB_1805c6d43;
  if (0x17 < local_res18[0]) {
    local_res8[0] = FUN_180577d80(param_2,local_res18[0],&local_res20);
    if (local_res8[0] != 0) goto LAB_1805c6d43;
    puVar4 = (undefined2 *)FUN_18057aad0(uVar3,0x20,local_res8);
    if (local_res8[0] != 0) goto LAB_1805c6d43;
    *puVar4 = CONCAT11(*local_res20,local_res20[1]);
    uVar6 = CONCAT31(CONCAT21(CONCAT11(local_res20[2],local_res20[3]),local_res20[4]),local_res20[5]
                    );
    if ((9 < uVar6) && (uVar6 <= local_res18[0] - 0xe)) {
      puVar5 = local_res20 + uVar6;
      *(undefined1 **)(puVar4 + 4) = puVar5;
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      puVar4[1] = CONCAT11(uVar1,uVar2);
      if ((uint)CONCAT11(uVar1,uVar2) * 0xc + 2 + uVar6 <= local_res18[0]) {
        *(undefined1 **)(puVar4 + 8) = local_res20;
        *(uint *)(puVar4 + 0xc) = local_res18[0];
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
        *(undefined2 **)(param_1 + 0x4e8) = puVar4;
        return 0;
      }
    }
  }
  local_res8[0] = 8;
LAB_1805c6d43:
  FUN_180578860(param_2,&local_res20);
  FUN_18057abd0(uVar3,puVar4);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  return local_res8[0];
}



