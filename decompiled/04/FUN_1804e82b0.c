// FUN_1804e82b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e82b0 */

void FUN_1804e82b0(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_res10 [2];
  
  puVar1 = (uint *)(param_1 + 0x20);
  if ((int)*puVar1 < (int)param_2) {
    local_res10[0] = 0xbf800000;
    FUN_1804ebc10(0xbf800000,param_2,local_res10);
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 < (int)param_2) {
      if (iVar3 == 0) {
        uVar2 = 8;
      }
      else {
        uVar2 = iVar3 / 2 + iVar3;
      }
      uVar7 = param_2;
      if ((int)param_2 < (int)uVar2) {
        uVar7 = uVar2;
      }
      FUN_1804d1090(puVar1,uVar7);
    }
    uVar2 = *puVar1;
    uVar8 = (ulonglong)(int)uVar2;
    if ((int)uVar2 < (int)param_2) {
      uVar7 = uVar2;
      if (0xf < param_2 - uVar2) {
        puVar6 = (undefined2 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 2);
        if (((undefined2 *)(param_1 + 0x28) < puVar6) ||
           ((undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)(param_2 - 1) * 2) <
            (undefined2 *)(param_1 + 0x28))) {
          uVar5 = param_2 - uVar2 & 0x8000000f;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
          }
          do {
            uVar7 = (int)uVar8 + 0x10;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < (int)(param_2 - uVar5));
          iVar3 = ((param_2 - uVar5) - uVar2) + 0xf;
          for (lVar4 = ((longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) & 0x7ffffffffffffffU)
                       << 4; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = 0xffff;
            puVar6 = puVar6 + 1;
          }
        }
      }
      for (lVar4 = (longlong)(int)uVar7; lVar4 < (int)param_2; lVar4 = lVar4 + 1) {
        *(undefined2 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 2) = 0xffff;
      }
    }
    *puVar1 = param_2;
  }
  return;
}



