// FUN_1804cea70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cea70 */

void FUN_1804cea70(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  int iVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x1478);
  plVar2 = plVar9 + *(int *)(param_1 + 0x1470);
  for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
    lVar4 = *plVar9;
    if ((*(uint *)(lVar4 + 0x14) & 0x100) == 0) {
      lVar7 = FUN_1804ce570(lVar4);
      if (lVar7 == 0) {
        lVar7 = FUN_1804ce460(*(undefined8 *)(lVar4 + 8));
        *(undefined2 *)(lVar7 + 0xc) = *(undefined2 *)(param_1 + 0x2778);
        *(int *)(lVar4 + 0x2c4) = (int)lVar7 - *(int *)(param_1 + 0x27a8);
      }
      *(uint *)(lVar7 + 4) =
           CONCAT22((short)(int)*(float *)(lVar4 + 0x2c),(short)(int)*(float *)(lVar4 + 0x28));
      *(uint *)(lVar7 + 8) =
           CONCAT22((short)(int)*(float *)(lVar4 + 0x3c),(short)(int)*(float *)(lVar4 + 0x38));
      bVar8 = (*(char *)(lVar4 + 0x17) * '\x02' ^ *(byte *)(lVar7 + 0xe)) & 2 ^
              *(byte *)(lVar7 + 0xe);
      *(byte *)(lVar7 + 0xe) = bVar8;
      *(byte *)(lVar7 + 0xe) = ((bVar8 ^ *(byte *)(lVar4 + 0xcf)) & 1 ^ bVar8) & 0xf7;
      *(undefined2 *)(lVar7 + 0xc) = *(undefined2 *)(param_1 + 0x2778);
    }
  }
  iVar1 = *(int *)(param_1 + 0x27a0) * 6;
  iVar10 = *param_3 + -1 + iVar1;
  if (*param_3 == 0) {
    iVar10 = iVar1;
  }
  FUN_1804d0ea0(param_3,iVar10);
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x27a8) + 4;
  }
  while (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0xe) & 8) == 0) {
      FUN_1804b1930(param_3,"[%s][%s]\n",*param_2,lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0xe) & 2) == 0) {
        FUN_1804b1930(param_3,"Pos=%d,%d\n",(int)*(short *)(lVar4 + 4),(int)*(short *)(lVar4 + 6));
        FUN_1804b1930(param_3,"Size=%d,%d\n",(int)*(short *)(lVar4 + 8),(int)*(short *)(lVar4 + 10))
        ;
        if ((*(byte *)(lVar4 + 0xe) & 1) != 0) {
          FUN_1804b1930(param_3,"Collapsed=1\n");
        }
      }
      else {
        FUN_1804b1930(param_3,"IsChild=1\n");
        FUN_1804b1930(param_3,"Size=%d,%d\n",(int)*(short *)(lVar4 + 8),(int)*(short *)(lVar4 + 10))
        ;
      }
      if (((*(char *)(param_1 + 0x85) != '\0') &&
          (uVar3 = *(ushort *)(lVar4 + 0xc), (uVar3 & 0x7f) != 0 && (uVar3 & 0x780) != 0)) &&
         (0x7ff < uVar3)) {
        FUN_1804b1930(param_3,"LastUsed=%08d\n",
                      (((uVar3 & 0x7f) + 2000) * 100 + (uVar3 >> 7 & 0xf)) * 100 +
                      (uint)(uVar3 >> 0xb));
      }
      iVar10 = 1;
      if (*param_3 != 0) {
        iVar10 = *param_3;
      }
      iVar1 = iVar10 + 1;
      if (param_3[1] <= iVar1) {
        iVar6 = param_3[1] * 2;
        if (iVar6 < iVar1) {
          iVar6 = iVar1;
        }
        FUN_1804d0ea0(param_3,iVar6);
      }
      iVar6 = param_3[1];
      if (iVar6 < iVar1) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar5 = iVar1;
        if (iVar1 < iVar6) {
          iVar5 = iVar6;
        }
        FUN_1804d0ea0(param_3,iVar5);
      }
      *param_3 = iVar1;
      *(undefined1 *)((longlong)iVar10 + -1 + *(longlong *)(param_3 + 2)) = 10;
      *(undefined1 *)((longlong)iVar10 + *(longlong *)(param_3 + 2)) = 0;
    }
    lVar7 = *(int *)(lVar4 + -4) + lVar4;
    lVar4 = 0;
    if (lVar7 != *(longlong *)(param_1 + 0x27a8) + 4 + (longlong)*(int *)(param_1 + 0x27a0)) {
      lVar4 = lVar7;
    }
  }
  return;
}



