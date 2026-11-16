// FUN_1805c31f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c31f0 */

int FUN_1805c31f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  int local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  puVar4 = (undefined2 *)0x0;
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x67617370,param_2,0);
  if ((local_res8[0] == 0) && (local_res8[0] = FUN_180577bf0(param_2,4), local_res8[0] == 0)) {
    uVar2 = FUN_180577ed0(param_2);
    *(undefined2 *)(param_1 + 0x300) = uVar2;
    uVar3 = FUN_180577ed0(param_2);
    uVar5 = (ulonglong)uVar3;
    FUN_180577d30(param_2);
    if (*(ushort *)(param_1 + 0x300) < 2) {
      puVar4 = (undefined2 *)FUN_18057ac40(uVar1,4,0,uVar5,0,local_res8);
      if ((local_res8[0] == 0) &&
         (local_res8[0] = FUN_180577bf0(param_2,(uint)uVar3 * 4), local_res8[0] == 0)) {
        if (uVar3 != 0) {
          puVar6 = puVar4;
          do {
            uVar2 = FUN_180577ed0(param_2);
            *puVar6 = uVar2;
            uVar2 = FUN_180577ed0(param_2);
            puVar6[1] = uVar2;
            puVar6 = puVar6 + 2;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        *(undefined2 **)(param_1 + 0x308) = puVar4;
        puVar4 = (undefined2 *)0x0;
        *(ushort *)(param_1 + 0x302) = uVar3;
        FUN_180577d30(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x302) = 0;
      local_res8[0] = 8;
    }
  }
  FUN_18057abd0(uVar1,puVar4);
  return local_res8[0];
}



