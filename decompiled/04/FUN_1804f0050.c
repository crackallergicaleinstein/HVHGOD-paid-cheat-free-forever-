// FUN_1804f0050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f0050 */

void FUN_1804f0050(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  
  sVar9 = 1;
  sVar8 = *(short *)(param_1 + 0x22e);
  sVar7 = 1;
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    sVar7 = *(short *)(param_1 + 0x206);
  }
  if (*(int *)(param_1 + 0x6c) <= (int)*(short *)(param_1 + 0x206)) {
    iVar5 = memcmp(*(void **)(param_1 + 0x58),*(void **)(param_1 + 0x50),
                   (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2);
    if (iVar5 == 0) {
      sVar10 = 0;
      goto LAB_1804f00c4;
    }
  }
  sVar10 = 1;
LAB_1804f00c4:
  FUN_1804e1860();
  *(undefined2 *)(param_1 + 0x238) = 1;
  sVar4 = -1;
  if (sVar10 != 0) {
    sVar4 = ((0 < sVar8) + 1) * (sVar7 + 1) + sVar10;
  }
  *(short *)(param_1 + 0x236) = sVar4;
  if (0 < *(short *)(param_1 + 0x22e)) {
    sVar9 = sVar7 + 2;
  }
  iVar5 = 0;
  *(short *)(param_1 + 0x23a) = sVar9;
  sVar9 = 2;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar1 + 0x6d + lVar6) == '\0') || (*(char *)(lVar1 + 0x6e + lVar6) == '\0')) {
        sVar8 = *(short *)(param_1 + 0x236);
        *(short *)(lVar1 + 0x68 + lVar6) = sVar8;
        *(short *)(lVar1 + 0x66 + lVar6) = sVar8;
      }
      else {
        *(short *)(lVar1 + 0x66 + lVar6) = sVar9;
        sVar8 = 0;
        if (0 < *(short *)(param_1 + 0x22e)) {
          sVar8 = sVar7 + 1;
        }
        *(short *)(lVar1 + 0x68 + lVar6) = sVar8 + sVar9;
        sVar8 = sVar9;
        if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
          sVar9 = sVar9 + 1;
        }
      }
      *(short *)(lVar1 + 100 + lVar6) = sVar8;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x78;
    } while (iVar5 < *(int *)(param_1 + 0x6c));
  }
  *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(param_1 + 0x124);
  *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_1 + 300);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x270);
  *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x268);
  *(undefined8 *)(param_1 + 0x14c) = uVar3;
  *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_1 + 0x164);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_1 + 0x16c);
  if ((*(uint *)(param_1 + 4) >> 0x10 & 1) != 0) {
    auVar2 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x15c)),ZEXT416(*(uint *)(param_1 + 0x13c)));
    *(int *)(param_1 + 0x15c) = auVar2._0_4_;
  }
  if ((*(uint *)(param_1 + 4) >> 0x11 & 1) != 0) {
    auVar2 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x160)),ZEXT416(*(uint *)(param_1 + 0x140)));
    *(int *)(param_1 + 0x160) = auVar2._0_4_;
  }
  return;
}



