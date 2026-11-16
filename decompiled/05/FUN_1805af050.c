// FUN_1805af050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805af050 */

void FUN_1805af050(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_1[0x10];
    FUN_18057abd0(uVar2,*param_1);
    *param_1 = 0;
    if (param_1[0xe] != 0) {
      FUN_18057a400(param_1[0xe],uVar2);
      FUN_18057abd0(uVar2,param_1[0xe]);
      param_1[0xe] = 0;
    }
    FUN_18057abd0(uVar2,param_1[0xc]);
    uVar3 = 0;
    param_1[0xc] = 0;
    if (*(int *)(param_1 + 10) != 0) {
      do {
        lVar1 = (ulonglong)uVar3 * 0x18;
        if (*(int *)(param_1[0xb] + 8 + lVar1) == 1) {
          FUN_18057abd0(uVar2,*(undefined8 *)(param_1[0xb] + 0x10 + lVar1));
          *(undefined8 *)(param_1[0xb] + 0x10 + lVar1) = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 10));
    }
    FUN_18057abd0(uVar2,param_1[0xb]);
    uVar3 = 0;
    puVar4 = (undefined8 *)param_1[7];
    param_1[0xb] = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        FUN_18057abd0(uVar2,*puVar4);
        *puVar4 = 0;
        FUN_18057abd0(uVar2,puVar4[4]);
        puVar4[4] = 0;
        puVar4 = puVar4 + 6;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((longlong)param_1 + 0x34));
    }
    uVar3 = 0;
    puVar4 = (undefined8 *)param_1[9];
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      do {
        FUN_18057abd0(uVar2,*puVar4);
        *puVar4 = 0;
        FUN_18057abd0(uVar2,puVar4[4]);
        puVar4[4] = 0;
        puVar4 = puVar4 + 6;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((longlong)param_1 + 0x44));
    }
    FUN_18057abd0(uVar2,param_1[7]);
    param_1[7] = 0;
    FUN_18057abd0(uVar2,param_1[9]);
    param_1[9] = 0;
    FUN_18057a400(param_1 + 0x13,uVar2);
    uVar3 = 0;
    puVar4 = (undefined8 *)param_1[0x11];
    if (*(int *)(param_1 + 0x12) != 0) {
      do {
        FUN_18057abd0(uVar2,*puVar4);
        *puVar4 = 0;
        puVar4 = puVar4 + 3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x12));
    }
    FUN_18057abd0(uVar2,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}



