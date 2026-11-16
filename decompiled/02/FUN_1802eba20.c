// FUN_1802eba20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eba20 */

void FUN_1802eba20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  uVar2 = (longlong)(param_2[3] - param_2[2]) / 0xc;
  if (uVar2 != 0) {
    if (0x1555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar6 = FUN_18015bca0(uVar2 * 0xc);
    puVar1[2] = lVar6;
    puVar1[3] = lVar6;
    puVar1[4] = uVar2 * 0xc + lVar6;
    lVar6 = puVar1[2];
    lVar7 = param_2[3] - param_2[2];
    FUN_18063aed0(lVar6,param_2[2],lVar7);
    puVar1[3] = lVar6 + (lVar7 / 0xc) * 0xc;
  }
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x44);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)((longlong)puVar1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)puVar1 + 0x3c) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 0x44) = uVar4;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = uVar5;
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)puVar1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)puVar1 + 0x5c) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
  *(undefined1 *)((longlong)puVar1 + 0x6c) = *(undefined1 *)((longlong)param_2 + 0x6c);
  puVar1[0xe] = param_2[0xe];
  *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x8c);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined8 *)((longlong)puVar1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined8 *)((longlong)puVar1 + 0x84) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = uVar4;
  *(undefined8 *)((longlong)puVar1 + 0x94) = uVar5;
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined8 *)((longlong)puVar1 + 0x9c) = *(undefined8 *)((longlong)param_2 + 0x9c);
  *(undefined8 *)((longlong)puVar1 + 0xa4) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)puVar1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0xb8;
  return;
}



