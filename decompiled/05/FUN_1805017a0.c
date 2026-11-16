// FUN_1805017a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805017a0 */

void FUN_1805017a0(void)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar4 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar4 + 0x14d0);
  if (*(char *)(lVar3 + 0xd1) == '\0') {
    if ((((*(char *)(lVar4 + 0x20e1) == '\0') || (*(int *)(lVar4 + 0x2130) != 0)) ||
        (*(int *)(lVar4 + 0x21a0) != 0)) ||
       (((*(int *)(lVar4 + 0x20f0) != 0 && (*(int *)(lVar4 + 0x20f0) != 1)) ||
        (lVar7 = *(longlong *)(lVar4 + 0x2040), (*(uint *)(lVar7 + 0x14) & 0x10000000) == 0)))) {
      if (((*(longlong *)(lVar4 + 0x2040) == lVar3) && (*(char *)(lVar4 + 0x20e1) != '\0')) &&
         (*(int *)(lVar4 + 0x204c) == *(int *)(lVar3 + 0x170))) {
        *(uint *)(lVar4 + 0x20e4) = *(uint *)(lVar4 + 0x20e4) & 0xfffffff4;
        *(uint *)(lVar4 + 0x20e4) = *(uint *)(lVar4 + 0x20e4) | 4;
      }
    }
    else {
      for (lVar6 = *(longlong *)(lVar7 + 0x3c8);
          (lVar6 != 0 && ((*(uint *)(lVar6 + 0x14) & 0x10000000) != 0));
          lVar6 = *(longlong *)(lVar6 + 0x3c8)) {
        lVar7 = lVar6;
      }
      if (((*(longlong *)(lVar7 + 0x3c8) == lVar3) && (*(int *)(lVar7 + 0x1d8) == 0)) &&
         ((*(byte *)(lVar4 + 0x20e4) & 0x80) == 0)) {
        FUN_1804c8a10(lVar3,0);
        FUN_1804c8f10(*(undefined4 *)(lVar3 + 0x40c),1,0,lVar3 + 0x420);
        if (*(char *)(lVar4 + 0x2038) != '\0') {
          *(undefined1 *)(lVar4 + 0x2038) = 0;
          *(undefined1 *)(lVar4 + 0x20a0) = 2;
        }
        lVar7 = DAT_180bb8ae8;
        uVar1 = *(uint *)(lVar4 + 0x20e4);
        uVar8 = *(undefined4 *)(lVar4 + 0x20e8);
        uVar9 = *(undefined4 *)(lVar4 + 0x20f8);
        uVar2 = *(undefined4 *)(lVar4 + 0x20f0);
        *(undefined2 *)(lVar4 + 0x2039) = 0x101;
        *(undefined2 *)(lVar7 + 0x20e0) = 0;
        *(undefined1 *)(lVar7 + 0x20e2) = 1;
        *(bool *)(lVar7 + 0x20a1) = *(char *)(lVar7 + 0x20a2) != '\0';
        *(uint *)(lVar7 + 0x20e4) = uVar1 | 0x80;
        *(undefined4 *)(lVar7 + 0x20f0) = uVar2;
        *(undefined4 *)(lVar7 + 0x20f8) = uVar9;
        *(undefined4 *)(lVar7 + 0x20e8) = uVar8;
      }
    }
    FUN_1804ba3f0();
    FUN_1804c29a0();
    *(float *)(lVar3 + 0x17c) = *(float *)(lVar3 + 0x118) - *(float *)(lVar3 + 0x28);
    lVar7 = (longlong)*(int *)(lVar4 + 0x1fe8) * 0x3c;
    lVar4 = *(longlong *)(lVar4 + 0x1ff0);
    uVar8 = *(undefined4 *)(lVar7 + -0x30 + lVar4);
    uVar9 = *(undefined4 *)(lVar7 + -0x2c + lVar4);
    *(undefined1 *)(lVar7 + -4 + lVar4) = 0;
    auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + 0x138)),
                        ZEXT416((uint)(*(float *)(lVar3 + 0x130) - *(float *)(lVar3 + 0x98))));
    *(int *)(lVar3 + 0x138) = auVar5._0_4_;
    FUN_1804c6a30();
    *(undefined4 *)(lVar3 + 0x130) = uVar8;
    *(undefined4 *)(lVar3 + 0x134) = uVar9;
    *(undefined4 *)(lVar3 + 0x1d4) = 1;
    *(undefined1 *)(lVar3 + 0x158) = 0;
    *(undefined4 *)(lVar3 + 0x170) = 0;
    *(undefined1 *)(lVar3 + 0x17b) = 0;
  }
  return;
}



