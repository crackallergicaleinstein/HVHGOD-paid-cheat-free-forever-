// FUN_1804f3150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f3150 */

void FUN_1804f3150(longlong param_1,undefined8 *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar11;
  ulonglong uVar9;
  int *piVar10;
  undefined8 uVar12;
  uint uVar13;
  int *piVar14;
  double dVar15;
  float fVar16;
  
  piVar14 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x27b8) != 0) {
    piVar14 = (int *)(*(longlong *)(param_1 + 0x27b8) + 4);
  }
  if (piVar14 != (int *)0x0) {
    fVar16 = 0.0;
    do {
      uVar9 = 0;
      if (*piVar14 != 0) {
        uVar2 = piVar14[1];
        iVar6 = (short)piVar14[3] * 0x32;
        iVar7 = *param_3 + -1 + iVar6;
        if (*param_3 == 0) {
          iVar7 = iVar6;
        }
        FUN_1804d0ea0(param_3,iVar7 + 0x1e);
        FUN_1804b1930(param_3,"[%s][0x%08X,%d]\n",*param_2,*piVar14,(int)(short)piVar14[3]);
        if ((float)piVar14[2] != fVar16) {
          FUN_1804b1930(param_3,"RefScale=%g\n",(double)(float)piVar14[2]);
        }
        pfVar8 = (float *)(piVar14 + 5);
        if (0 < (short)piVar14[3]) {
          do {
            iVar7 = (int)uVar9;
            if (((((uVar2 & 1) != 0) || ((uVar2 & 4) != 0)) || ((uVar2 & 2) != 0)) ||
               (((uVar2 & 8) != 0 && (*(short *)(pfVar8 + 3) != -1)))) {
              FUN_1804b1930(param_3,"Column %-2d",uVar9);
              uVar11 = (undefined4)(uVar9 >> 0x20);
              if ((uVar2 & 1) != 0) {
                if ((*(byte *)((longlong)pfVar8 + 0xe) & 0x10) != 0) {
                  dVar15 = (double)*pfVar8;
                  FUN_1804b1930(param_3," Weight=%.4f",dVar15);
                  uVar11 = (undefined4)((ulonglong)dVar15 >> 0x20);
                  if ((*(byte *)((longlong)pfVar8 + 0xe) & 0x10) != 0) goto LAB_1804f32d4;
                }
                FUN_1804b1930(param_3," Width=%d",CONCAT44(uVar11,(int)*pfVar8));
              }
LAB_1804f32d4:
              if ((uVar2 & 4) != 0) {
                FUN_1804b1930(param_3," Visible=%d",
                              (int)(char)(*(char *)((longlong)pfVar8 + 0xe) << 4) >> 6);
              }
              if ((uVar2 & 2) != 0) {
                FUN_1804b1930(param_3," Order=%d",(int)*(short *)((longlong)pfVar8 + 10));
              }
              if (((uVar2 & 8) != 0) && (*(short *)(pfVar8 + 3) != -1)) {
                uVar12 = 0x5e;
                if ((*(byte *)((longlong)pfVar8 + 0xe) & 3) == 1) {
                  uVar12 = 0x76;
                }
                FUN_1804b1930(param_3," Sort=%d%c",(int)*(short *)(pfVar8 + 3),uVar12);
              }
              if (pfVar8[1] != 0.0) {
                FUN_1804b1930(param_3," ID=0x%08X");
              }
              iVar6 = 1;
              if (*param_3 != 0) {
                iVar6 = *param_3;
              }
              iVar5 = iVar6 + 1;
              if (param_3[1] <= iVar5) {
                iVar4 = param_3[1] * 2;
                if (iVar4 < iVar5) {
                  iVar4 = iVar5;
                }
                FUN_1804d0ea0(param_3,iVar4);
              }
              iVar4 = param_3[1];
              if (iVar4 < iVar5) {
                if (iVar4 == 0) {
                  iVar4 = 8;
                }
                else {
                  iVar4 = iVar4 / 2 + iVar4;
                }
                iVar3 = iVar5;
                if (iVar5 < iVar4) {
                  iVar3 = iVar4;
                }
                FUN_1804d0ea0(param_3,iVar3);
              }
              *param_3 = iVar5;
              *(undefined1 *)((longlong)iVar6 + -1 + *(longlong *)(param_3 + 2)) = 10;
              *(undefined1 *)((longlong)iVar6 + *(longlong *)(param_3 + 2)) = 0;
            }
            uVar13 = iVar7 + 1;
            uVar9 = (ulonglong)uVar13;
            pfVar8 = pfVar8 + 4;
          } while ((int)uVar13 < (int)(short)piVar14[3]);
        }
        if (((*(char *)(param_1 + 0x85) != '\0') &&
            (uVar1 = *(ushort *)(piVar14 + 4), (uVar1 & 0x7f) != 0 && (uVar1 & 0x780) != 0)) &&
           (0x7ff < uVar1)) {
          FUN_1804b1930(param_3,"LastUsed=%08d\n",
                        (((uVar1 & 0x7f) + 2000) * 100 + (uVar1 >> 7 & 0xf)) * 100 +
                        (uint)(uVar1 >> 0xb));
        }
        iVar7 = 1;
        if (*param_3 != 0) {
          iVar7 = *param_3;
        }
        iVar6 = iVar7 + 1;
        if (param_3[1] <= iVar6) {
          iVar5 = param_3[1] * 2;
          if (iVar5 < iVar6) {
            iVar5 = iVar6;
          }
          FUN_1804d0ea0(param_3,iVar5);
        }
        iVar5 = param_3[1];
        if (iVar5 < iVar6) {
          if (iVar5 == 0) {
            iVar5 = 8;
          }
          else {
            iVar5 = iVar5 / 2 + iVar5;
          }
          iVar4 = iVar6;
          if (iVar6 < iVar5) {
            iVar4 = iVar5;
          }
          FUN_1804d0ea0(param_3,iVar4);
        }
        *param_3 = iVar6;
        *(undefined1 *)((longlong)iVar7 + -1 + *(longlong *)(param_3 + 2)) = 10;
        *(undefined1 *)((longlong)iVar7 + *(longlong *)(param_3 + 2)) = 0;
      }
      piVar10 = (int *)((longlong)piVar14[-1] + (longlong)piVar14);
      piVar14 = (int *)0x0;
      if (piVar10 !=
          (int *)(*(longlong *)(param_1 + 0x27b8) + 4 + (longlong)*(int *)(param_1 + 0x27b0))) {
        piVar14 = piVar10;
      }
    } while (piVar14 != (int *)0x0);
  }
  return;
}



