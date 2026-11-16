// FUN_1805cc400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cc400 */

uint FUN_1805cc400(longlong *param_1,int *param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = param_1[3];
  uVar8 = (uint)param_3 + *param_2;
  uVar4 = 0;
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0xc),*(undefined1 *)(lVar1 + 0xd)),
                            *(undefined1 *)(lVar1 + 0xe)),*(undefined1 *)(lVar1 + 0xf));
  if (uVar6 != 0) {
    uVar7 = 0;
    uVar9 = uVar6;
    do {
      uVar2 = uVar9 + uVar7 >> 1;
      lVar5 = (ulonglong)(uVar2 * 0xc) + lVar1;
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x10),
                                          *(undefined1 *)(lVar5 + 0x11)),
                                 *(undefined1 *)(lVar5 + 0x12)),*(undefined1 *)(lVar5 + 0x13));
      uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x14),*(undefined1 *)(lVar5 + 0x15)
                                        ),*(undefined1 *)(lVar5 + 0x16)),
                       *(undefined1 *)(lVar5 + 0x17));
      if (uVar8 < uVar10) {
        uVar9 = uVar2;
      }
      else {
        if (uVar8 <= uVar3) {
          uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 0x18),
                                             *(undefined1 *)(lVar5 + 0x19)),
                                    *(undefined1 *)(lVar5 + 0x1a)),*(undefined1 *)(lVar5 + 0x1b));
          if ((uVar10 - uVar8) - 1 < uVar4) {
            uVar4 = 0;
          }
          else {
            uVar4 = (uVar4 - uVar10) + uVar8;
          }
          break;
        }
        uVar7 = uVar2 + 1;
      }
    } while (uVar7 < uVar9);
    if (param_3 == 0) goto LAB_1805cc572;
    if ((uVar8 <= uVar3) || (uVar2 = uVar2 + 1, uVar2 != uVar6)) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      *(uint *)((longlong)param_1 + 0x34) = uVar2;
      uVar6 = 0;
      if (uVar4 < *(uint *)(*param_1 + 0x10)) {
        uVar6 = uVar4;
      }
      uVar4 = uVar6;
      if (uVar4 == 0) {
        FUN_1805cc590(param_1);
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
      goto LAB_1805cc572;
    }
  }
  uVar4 = 0;
LAB_1805cc572:
  return uVar4;
}



