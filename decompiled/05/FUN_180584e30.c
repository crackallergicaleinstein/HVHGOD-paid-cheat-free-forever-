// FUN_180584e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180584e30 */

ulonglong FUN_180584e30(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_3 + 0x10);
  iVar8 = *(int *)(param_2 + 0x10) - iVar2;
  uVar6 = *(ulonglong *)(param_1 + 0x8f8);
  uVar4 = (ulonglong)(uint)-(iVar8 >> 0x1f);
  if (uVar6 != 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x8f0);
    uVar1 = uVar6 + uVar4 * 0x48;
    if (uVar6 < uVar1) {
      pbVar5 = (byte *)(uVar6 + 0xc);
      uVar6 = (uVar1 - uVar6) - 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar4 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar3,0);
      lVar7 = uVar6 / 0x48 + 1;
      do {
        if (*(int *)(pbVar5 + -4) < (iVar2 - iVar8 / 7) + -0x10) {
          *pbVar5 = *pbVar5 | 0x10;
        }
        pbVar5 = pbVar5 + 0x48;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return uVar4;
}



