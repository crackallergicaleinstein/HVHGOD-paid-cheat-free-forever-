// FUN_180396470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180396470 */

ulonglong FUN_180396470(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    puVar4 = (uint *)0x0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
    }
    if (puVar4 != (uint *)0x0) {
      uVar1 = puVar4[4];
      if (uVar1 < 0x21) {
        puVar3 = (uint *)0x0;
        if (*(longlong *)(puVar4 + 10) != 0) {
          puVar3 = (uint *)(*(longlong *)(puVar4 + 10) + 0x10);
        }
        uVar2 = ((((((((((*(ulonglong *)(param_1 + 0x60) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                        *(ulonglong *)(param_1 + 0x68)) * 0x100000001b3 ^
                       *(ulonglong *)(param_1 + 0x70)) * 0x100000001b3 ^
                      (longlong)*(int *)(param_1 + 0x8c)) * 0x100000001b3 ^ (ulonglong)*puVar4) *
                     0x100000001b3 ^ (longlong)(int)puVar4[0x11]) * 0x100000001b3 ^
                   (ulonglong)puVar4[0x12]) * 0x100000001b3 ^ (ulonglong)puVar4[0x13]) *
                  0x100000001b3 ^ (ulonglong)puVar4[0x14]) * 0x100000001b3 ^
                (ulonglong)(puVar3 != (uint *)0x0)) * 0x100000001b3;
        if (puVar3 != (uint *)0x0) {
          uVar2 = ((((uVar2 ^ *puVar3) * 0x100000001b3 ^ *(ulonglong *)(puVar3 + 2)) * 0x100000001b3
                   ^ *(ulonglong *)(puVar3 + 4)) * 0x100000001b3 ^ *(ulonglong *)(puVar3 + 6)) *
                  0x100000001b3;
        }
        puVar3 = (uint *)0x0;
        if (*(longlong *)(puVar4 + 0xc) != 0) {
          puVar3 = (uint *)(*(longlong *)(puVar4 + 0xc) + 0x10);
        }
        uVar2 = (puVar3 != (uint *)0x0 ^ uVar2) * 0x100000001b3;
        if (puVar3 != (uint *)0x0) {
          uVar2 = ((((uVar2 ^ *puVar3) * 0x100000001b3 ^ (ulonglong)puVar3[2]) * 0x100000001b3 ^
                   (ulonglong)puVar3[3]) * 0x100000001b3 ^ (ulonglong)puVar3[4]) * 0x100000001b3;
        }
        iVar6 = 0;
        uVar2 = ((longlong)(int)uVar1 ^ uVar2) * 0x100000001b3;
        if (0 < (int)uVar1) {
          plVar5 = *(longlong **)(puVar4 + 6);
          do {
            plVar5 = plVar5 + 1;
            puVar4 = (uint *)0x0;
            if (*plVar5 != 0) {
              puVar4 = (uint *)(*plVar5 + 0x10);
            }
            if (puVar4 == (uint *)0x0) {
              return 0;
            }
            iVar6 = iVar6 + 1;
            uVar2 = ((((((((uVar2 ^ *puVar4) * 0x100000001b3 ^ *(ulonglong *)(puVar4 + 2)) *
                          0x100000001b3 ^ (ulonglong)(byte)puVar4[4]) * 0x100000001b3 ^
                        (ulonglong)puVar4[5]) * 0x100000001b3 ^ (ulonglong)puVar4[6]) *
                       0x100000001b3 ^ (ulonglong)puVar4[7]) * 0x100000001b3 ^ (ulonglong)puVar4[8])
                     * 0x100000001b3 ^ (ulonglong)puVar4[9]) * 0x100000001b3;
          } while (iVar6 < (int)uVar1);
        }
        return uVar2;
      }
    }
  }
  return 0;
}



