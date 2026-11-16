// FUN_1805db020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805db020 */

undefined8 FUN_1805db020(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte local_res18 [8];
  int local_res20 [2];
  
  uVar10 = *(int *)(param_1 + 0x1100) - *(int *)(param_1 + 0x10f8);
  if (param_2 <= uVar10) {
    uVar10 = param_2;
  }
  *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar10;
  *(longlong *)(param_1 + 0x10f8) = *(longlong *)(param_1 + 0x10f8) + (ulonglong)uVar10;
  param_2 = param_2 - uVar10;
LAB_1805db063:
  do {
    if (param_2 == 0) {
      return 0;
    }
    uVar10 = *(uint *)(param_1 + 100);
    piVar1 = (int *)(param_1 + 0x18);
    uVar13 = *(uint *)(param_1 + 0x60);
    uVar8 = 0;
    uVar12 = *(uint *)(param_1 + 0x68);
    uVar11 = param_2;
    if (0xfff < param_2) {
      uVar11 = 0x1000;
    }
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      iVar6 = FUN_1805788b0(*(undefined8 *)(param_1 + 0xe0),2);
      if ((iVar6 == 0) &&
         (iVar6 = FUN_180578980(*(undefined8 *)(param_1 + 0xe0),local_res18,1), iVar6 == 1)) {
        uVar5 = local_res18[0] & 0x1f;
        *(uint *)(param_1 + 0x4c) = local_res18[0] & 0x80;
        iVar6 = 1 << (sbyte)uVar5;
        *(uint *)(param_1 + 0x48) = uVar5;
        *(int *)(param_1 + 0x50) = iVar6 + -0x100;
        if (0x10 < uVar5) goto LAB_1805db392;
        *(undefined4 *)(param_1 + 0x54) = 9;
        uVar12 = 0;
        *(uint *)(param_1 + 0x58) = (uint)((local_res18[0] & 0x80) != 0);
        iVar4 = 0x100;
        if (uVar5 < 10) {
          iVar4 = iVar6 + -0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar4;
        uVar5 = FUN_1805db5f0(piVar1);
        if (0xff < uVar5) goto LAB_1805db392;
        uVar8 = 1;
        uVar10 = uVar5;
        uVar13 = uVar5;
        if (1 < uVar11) {
          *piVar1 = 1;
          goto LAB_1805db17f;
        }
      }
      else {
LAB_1805db392:
        *piVar1 = 3;
      }
    }
    else {
      if (iVar6 == 1) goto LAB_1805db17f;
      if (iVar6 == 2) {
        do {
          iVar6 = *(int *)(param_1 + 0x90);
          while (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            uVar8 = uVar8 + 1;
            *(int *)(param_1 + 0x90) = iVar6;
            if (uVar8 == uVar11) {
              *(uint *)(param_1 + 0x60) = uVar13;
              *(uint *)(param_1 + 100) = uVar10;
              *(uint *)(param_1 + 0x68) = uVar12;
              *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar11;
              param_2 = param_2 - uVar11;
              goto LAB_1805db063;
            }
          }
          if (*(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x50)) {
            uVar5 = *(uint *)(param_1 + 0x80);
            if (uVar5 <= *(uint *)(param_1 + 0x58)) {
              if (uVar5 == 0) {
                uVar9 = 0x200;
              }
              else {
                uVar9 = uVar5 + (uVar5 >> 2);
              }
              lVar7 = FUN_18057ad10(*(undefined8 *)(param_1 + 0xe8),3,uVar5,uVar9,
                                    *(undefined8 *)(param_1 + 0x70),local_res20);
              *(longlong *)(param_1 + 0x70) = lVar7;
              if (local_res20[0] != 0) goto LAB_1805db392;
              lVar2 = lVar7 + (ulonglong)uVar9 * 2;
              *(longlong *)(param_1 + 0x78) = lVar2;
              FUN_18063aed0(lVar2,lVar7 + (ulonglong)uVar5 * 2,(ulonglong)uVar5);
              *(uint *)(param_1 + 0x80) = uVar9;
            }
            *(short *)(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x58) * 2) =
                 (short)uVar13;
            *(char *)((ulonglong)*(uint *)(param_1 + 0x58) + *(longlong *)(param_1 + 0x78)) =
                 (char)uVar10;
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          }
          *piVar1 = 1;
          uVar13 = uVar12;
LAB_1805db17f:
          while( true ) {
            uVar5 = FUN_1805db5f0(piVar1);
            if ((int)uVar5 < 0) goto LAB_1805db392;
            if ((uVar5 != 0x100) || (*(int *)(param_1 + 0x4c) == 0)) break;
            *(undefined4 *)(param_1 + 0x58) = 0;
            *(undefined1 *)(param_1 + 0x38) = 1;
            uVar10 = 0;
            uVar13 = 0;
          }
          uVar12 = uVar5;
          if (0xff < uVar5) {
            uVar9 = uVar5;
            if (*(uint *)(param_1 + 0x58) <= uVar5 - 0x100) {
              if ((*(uint *)(param_1 + 0x58) < uVar5 - 0x100) ||
                 ((*(ulonglong *)(param_1 + 0x98) <= (ulonglong)*(uint *)(param_1 + 0x90) &&
                  (iVar6 = FUN_1805dbae0(piVar1), iVar6 < 0)))) goto LAB_1805db392;
              *(char *)((ulonglong)*(uint *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) =
                   (char)uVar10;
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
              uVar9 = uVar13;
            }
            uVar5 = uVar9;
            if (0xff < uVar9) {
              do {
                if ((*(longlong *)(param_1 + 0x70) == 0) ||
                   ((*(ulonglong *)(param_1 + 0x98) <= (ulonglong)*(uint *)(param_1 + 0x90) &&
                    (iVar6 = FUN_1805dbae0(piVar1), iVar6 < 0)))) goto LAB_1805db392;
                *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) =
                     *(undefined1 *)((ulonglong)(uVar9 - 0x100) + *(longlong *)(param_1 + 0x78));
                *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
                uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar9 - 0x100) * 2);
                uVar9 = (uint)uVar3;
                uVar5 = (uint)uVar3;
              } while (0xff < uVar3);
            }
          }
          uVar10 = uVar5;
          if ((*(ulonglong *)(param_1 + 0x98) <= (ulonglong)*(uint *)(param_1 + 0x90)) &&
             (iVar6 = FUN_1805dbae0(piVar1), iVar6 < 0)) goto LAB_1805db392;
          *(char *)((ulonglong)*(uint *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x88)) =
               (char)uVar10;
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
          *piVar1 = 2;
        } while( true );
      }
    }
    *(uint *)(param_1 + 0x60) = uVar13;
    *(uint *)(param_1 + 100) = uVar10;
    *(uint *)(param_1 + 0x68) = uVar12;
    if (uVar8 < uVar11) {
      return 0x55;
    }
    *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar11;
    param_2 = param_2 - uVar11;
  } while( true );
}



