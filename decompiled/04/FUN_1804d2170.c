// FUN_1804d2170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d2170 */

longlong * FUN_1804d2170(longlong *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  iVar6 = 0;
  if (iVar3 < 0) {
    iVar6 = iVar3;
  }
  *(int *)(param_2 + 1) = iVar6;
  if (iVar6 < iVar3) {
LAB_1804d21b0:
    do {
      iVar3 = (int)param_2[1];
      iVar2 = *(int *)((longlong)param_2 + 0xc);
      if (iVar3 < iVar2) {
        lVar5 = *param_2;
        bVar1 = *(byte *)(lVar5 + iVar3);
        if (0x1b < bVar1) {
          if (bVar1 == 0x1e) {
            iVar3 = iVar3 + 1;
            if ((iVar2 < iVar3) || (iVar3 < 0)) {
              *(int *)(param_2 + 1) = iVar2;
            }
            else {
              *(int *)(param_2 + 1) = iVar3;
              if (iVar3 < iVar2) {
                iVar7 = iVar3;
                do {
                  if (iVar3 < iVar2) {
                    iVar3 = iVar3 + 1;
                    bVar1 = *(byte *)(iVar7 + lVar5);
                    *(int *)(param_2 + 1) = iVar3;
                    if (((bVar1 & 0xf) == 0xf) || (iVar7 = iVar3, (bVar1 & 0xf0) == 0xf0)) break;
                  }
                } while (iVar7 < iVar2);
              }
            }
          }
          else {
            FUN_1804d1f40(param_2);
          }
          goto LAB_1804d21b0;
        }
        bVar1 = *(byte *)(iVar3 + lVar5);
        uVar4 = (uint)bVar1;
        iVar7 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar7;
        if (bVar1 == 0xc) {
          if (iVar7 < iVar2) {
            uVar4 = *(byte *)(iVar7 + lVar5) | 0x100;
            *(int *)(param_2 + 1) = iVar3 + 2;
            iVar7 = iVar3 + 2;
          }
          else {
            uVar4 = 0x100;
          }
        }
      }
      else {
        uVar4 = 0;
        iVar7 = iVar3;
      }
      if (uVar4 == param_3) {
        iVar3 = iVar3 - iVar6;
        *param_1 = 0;
        param_1[1] = 0;
        if (iVar6 < 0) {
          return param_1;
        }
        if (iVar3 < 0) {
          return param_1;
        }
        if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
          return param_1;
        }
        if (*(int *)((longlong)param_2 + 0xc) - iVar6 < iVar3) {
          return param_1;
        }
        lVar5 = (longlong)iVar6 + *param_2;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        goto LAB_1804d228a;
      }
      iVar6 = iVar7;
    } while (iVar7 < iVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < *(int *)((longlong)param_2 + 0xc)) {
    lVar5 = *param_2;
LAB_1804d228a:
    *param_1 = lVar5;
  }
  return param_1;
}



