// FUN_1804e3f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e3f90 */

void FUN_1804e3f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  longlong lVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar12 [64];
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x20) != *(int *)(param_1 + 4))) {
    FUN_1804e7840();
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_1804e7950(param_1);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_1804e37d0(param_1);
  }
  plVar10 = *(longlong **)(param_1 + 0x98);
  plVar1 = plVar10 + *(int *)(param_1 + 0x90);
  do {
    if (plVar10 == plVar1) {
LAB_1804e4013:
      if (*(char *)(param_1 + 0x51) != '\0') {
        *(undefined1 *)(param_1 + 0x52) = 1;
        return;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0xb9) = 1;
      plVar10 = *(longlong **)(param_1 + 0x70);
      plVar1 = plVar10 + *(int *)(param_1 + 0x68);
      if (plVar10 != plVar1) {
        auVar12 = ZEXT464(0xbf800000);
        do {
          lVar4 = *plVar10;
          lVar6 = FUN_1804e97d0(lVar4,*(undefined4 *)(lVar4 + 0x1c),auVar12._0_8_,param_4,
                                unaff_XMM6_Qa,unaff_XMM6_Qb);
          if (*(short *)(lVar4 + 0x32) != 0) {
            FUN_1804e95f0(lVar6);
          }
          if (*(short *)(lVar4 + 0x30) != 0) {
            FUN_1804e95f0(lVar6);
          }
          plVar11 = *(longlong **)(lVar4 + 0x28);
          plVar2 = plVar11 + *(int *)(lVar4 + 0x20);
          for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
            puVar9 = &DAT_18085b930;
            if (*(ushort **)(*plVar11 + 0x40) != (ushort *)0x0) {
              puVar9 = *(ushort **)(*plVar11 + 0x40);
            }
            uVar5 = *puVar9;
            if (uVar5 != 0) {
              puVar9 = puVar9 + 1;
              do {
                uVar8 = (uint)uVar5;
                if (uVar5 <= *puVar9) {
                  do {
                    if (0xffff < uVar8) break;
                    uVar7 = (ulonglong)(uVar8 & 0xffff);
                    if (((ulonglong)(longlong)*(int *)(lVar6 + 0x20) <= uVar7) ||
                       ((sVar3 = *(short *)(*(longlong *)(lVar6 + 0x28) + uVar7 * 2), sVar3 != -2 &&
                        (sVar3 == -1)))) {
                      FUN_1804e83c0(lVar6,uVar7,0);
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar8 <= *puVar9);
                }
                uVar5 = puVar9[1];
                puVar9 = puVar9 + 2;
              } while (uVar5 != 0);
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar1);
      }
      *(undefined1 *)(param_1 + 0x52) = 1;
      return;
    }
    if (*(longlong *)(*plVar10 + 0x70) != 0) {
      *(byte *)(param_1 + 0x51) = (byte)(*(uint *)(*(longlong *)(*plVar10 + 0x70) + 0x2c) >> 4) & 1;
      goto LAB_1804e4013;
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



