// FUN_1805cc6c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cc6c0 */

uint FUN_1805cc6c0(longlong *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = param_1[3];
  uVar4 = 0;
  uVar5 = (uint)param_3 + *param_2;
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0xc),*(undefined1 *)(lVar2 + 0xd)),
                             *(undefined1 *)(lVar2 + 0xe)),*(undefined1 *)(lVar2 + 0xf));
  if (uVar10 != 0) {
    uVar8 = 0;
    uVar7 = uVar10;
    do {
      uVar9 = uVar7 + uVar8 >> 1;
      uVar1 = uVar9 + 1;
      lVar6 = (ulonglong)(uVar9 * 0xc) + lVar2;
      uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 0x14),*(undefined1 *)(lVar6 + 0x15)
                                        ),*(undefined1 *)(lVar6 + 0x16)),
                       *(undefined1 *)(lVar6 + 0x17));
      if (uVar5 < CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 0x10),
                                             *(undefined1 *)(lVar6 + 0x11)),
                                    *(undefined1 *)(lVar6 + 0x12)),*(undefined1 *)(lVar6 + 0x13))) {
        uVar7 = uVar9;
      }
      else {
        uVar8 = uVar1;
        if (uVar5 <= uVar3) {
          uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 0x18),
                                             *(undefined1 *)(lVar6 + 0x19)),
                                    *(undefined1 *)(lVar6 + 0x1a)),*(undefined1 *)(lVar6 + 0x1b));
          break;
        }
      }
    } while (uVar8 < uVar7);
    if (param_3 == 0) goto LAB_1805cc81e;
    if ((uVar5 <= uVar3) || (uVar9 = uVar1, uVar1 != uVar10)) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      *(uint *)((longlong)param_1 + 0x34) = uVar9;
      uVar5 = 0;
      if (uVar4 < *(uint *)(*param_1 + 0x10)) {
        uVar5 = uVar4;
      }
      uVar4 = uVar5;
      if (uVar4 == 0) {
        FUN_1805cc840(param_1);
        if ((char)param_1[5] != '\0') {
          uVar4 = *(uint *)(param_1 + 6);
          *param_2 = *(int *)((longlong)param_1 + 0x2c);
          return uVar4;
        }
      }
      else {
        *(uint *)(param_1 + 6) = uVar4;
      }
      *param_2 = *(int *)((longlong)param_1 + 0x2c);
      goto LAB_1805cc81e;
    }
  }
  uVar4 = 0;
LAB_1805cc81e:
  return uVar4;
}



