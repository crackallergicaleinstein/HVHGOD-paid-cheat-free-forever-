// FUN_180398030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180398030 */

undefined8 * FUN_180398030(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  bool bVar15;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
  if (param_2 != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_84 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    local_64 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    local_88 = 0;
    local_44 = (undefined1  [16])0x0;
    local_34 = 0;
    local_30 = 0;
    local_28 = (undefined1  [16])0x0;
    local_18 = 0;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar3 = FUN_1804514c0(&local_a8,param_2,0x98);
    if (cVar3 == '\0') {
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
    }
    else {
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
        lVar4 = *(longlong *)(param_2 + 0x40);
        lVar9 = 0;
        if (lVar4 != 0) {
          lVar9 = lVar4 + 0x10;
        }
        if (lVar9 != 0) {
          plVar7 = (longlong *)&DAT_00000030;
          if (lVar4 != 0) {
            plVar7 = (longlong *)(lVar4 + 0x40);
          }
          lVar9 = 0;
          if (*plVar7 != 0) {
            lVar9 = *plVar7 + 0x10;
          }
          if (lVar9 != 0) {
            *param_1 = param_3;
            param_1[1] = *(undefined8 *)(param_2 + 8);
            param_1[2] = *(undefined8 *)(param_2 + 0x60);
            param_1[3] = *(undefined8 *)(param_2 + 0x68);
            param_1[4] = *(undefined8 *)(param_2 + 0x70);
            *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x4c);
            *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x50);
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x30);
            lVar9 = *plVar7;
            bVar15 = lVar9 != 0;
            puVar5 = (undefined4 *)&DAT_0000000c;
            if (bVar15) {
              puVar5 = (undefined4 *)(lVar9 + 0x1c);
            }
            uVar1 = *puVar5;
            puVar5 = (undefined4 *)&DAT_00000010;
            if (bVar15) {
              puVar5 = (undefined4 *)(lVar9 + 0x20);
            }
            uVar2 = *puVar5;
            puVar5 = (undefined4 *)&DAT_00000008;
            if (bVar15) {
              puVar5 = (undefined4 *)(lVar9 + 0x18);
            }
            *(undefined4 *)((longlong)param_1 + 0x44) = *puVar5;
            plVar7 = (longlong *)&DAT_00000028;
            if (lVar4 != 0) {
              plVar7 = (longlong *)(lVar4 + 0x38);
            }
            *(undefined4 *)(param_1 + 9) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
            lVar9 = 0;
            if (*plVar7 != 0) {
              lVar9 = *plVar7 + 0x10;
            }
            if (lVar9 != 0) {
              *(undefined1 *)((longlong)param_1 + 0x5d) = 1;
              param_1[5] = *(undefined8 *)(lVar9 + 8);
            }
            iVar6 = *(int *)((longlong)param_1 + 0x3c);
            if (-1 < *(int *)(param_1 + 7)) {
              iVar6 = *(int *)(param_1 + 7);
            }
            if (((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 8))) && (*(int *)(param_1 + 8) < 0x101)
               ) {
              lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)iVar6 * 8);
              lVar8 = 0;
              if (lVar9 != 0) {
                lVar8 = lVar9 + 0x10;
              }
              if (lVar8 != 0) {
                lVar9 = 0;
                if (*(longlong *)(lVar8 + 8) != 0) {
                  lVar9 = *(longlong *)(lVar8 + 8) + 0x10;
                }
                if (lVar9 != 0) {
                  *(undefined1 *)((longlong)param_1 + 0x5e) = 1;
                  uVar1 = *(undefined4 *)(lVar9 + 0xc);
                  uVar2 = *(undefined4 *)(lVar9 + 0x10);
                  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar9 + 8);
                  *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
                  *(undefined4 *)(param_1 + 0xb) = uVar2;
                }
              }
            }
            piVar14 = (int *)&DAT_00000010;
            if (lVar4 != 0) {
              piVar14 = (int *)(lVar4 + 0x20);
            }
            if ((*piVar14 < 0x41) && (uVar13 = 0, *piVar14 != 0)) {
              plVar7 = (longlong *)&DAT_00000018;
              if (lVar4 != 0) {
                plVar7 = (longlong *)(lVar4 + 0x28);
              }
              do {
                lVar4 = *(longlong *)(*plVar7 + 8 + (longlong)(int)uVar13 * 8);
                lVar9 = 0;
                if (lVar4 != 0) {
                  lVar9 = lVar4 + 0x10;
                }
                if ((lVar9 != 0) && ((*(ulonglong *)(lVar9 + 8) & 0x801) != 0)) {
                  uVar12 = param_1[6] * 0x100000001b3 ^ *(ulonglong *)(lVar9 + 8);
                  param_1[6] = uVar12;
                  puVar10 = (uint *)&DAT_00000014;
                  if (lVar4 != 0) {
                    puVar10 = (uint *)(lVar4 + 0x24);
                  }
                  uVar12 = uVar12 * 0x100000001b3 ^ (ulonglong)*puVar10;
                  param_1[6] = uVar12;
                  pcVar11 = &DAT_00000010;
                  if (lVar4 != 0) {
                    pcVar11 = (char *)(lVar4 + 0x20);
                  }
                  param_1[6] = 2 - (ulonglong)(*pcVar11 != '\0') ^ uVar12 * 0x100000001b3;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < (ulonglong)(longlong)*piVar14);
            }
            *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
          }
        }
      }
    }
  }
  return param_1;
}



