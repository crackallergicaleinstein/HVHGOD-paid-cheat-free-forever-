// FUN_18059b8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059b8b0 */

int FUN_18059b8b0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  int local_res10 [2];
  
  puVar10 = *(ushort **)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar12 = *(ushort **)(param_2 + 0x40);
  local_res10[0] = 0;
  if ((ushort *)((longlong)puVar10 + 0x65U) <= puVar12) {
    uVar4 = *(ushort *)((longlong)puVar10 + 99);
    if (((puVar12 < (ushort *)((longlong)puVar10 + (ulonglong)uVar4 + 0x87)) ||
        (*(ushort *)((longlong)puVar10 + (ulonglong)uVar4 + 0x75) < 0x12)) ||
       (puVar6 = (ushort *)
                 ((ulonglong)*(uint *)((longlong)puVar10 + (ulonglong)uVar4 + 0x83) +
                 (longlong)puVar10), puVar6 == puVar10)) {
      return 0;
    }
    puVar10 = puVar6 + 1;
    if (puVar10 <= puVar12) {
      uVar11 = (uint)*puVar6;
      *(uint *)(param_3 + 0x38) = uVar11;
      if ((ushort *)((ulonglong)(uVar11 * 4) + (longlong)puVar10) <= puVar12) {
        if (uVar11 == 0) {
          return 0;
        }
        puVar7 = (undefined4 *)FUN_18057ac40(uVar2,0x10,0,uVar11,0,local_res10);
        *(undefined4 **)(param_3 + 0x30) = puVar7;
        if (local_res10[0] == 0) {
          iVar9 = 0;
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          puVar12 = (ushort *)((ulonglong)(uint)(*(int *)(param_3 + 0x38) << 2) + (longlong)puVar10)
          ;
          if (0 < *(int *)(param_1 + 0x38)) {
            plVar8 = *(longlong **)(param_1 + 0x40);
            do {
              if (*(short *)(*plVar8 + 0xc) == 7) {
                *(longlong *)(param_1 + 0x88) = *plVar8;
                break;
              }
              iVar9 = iVar9 + 1;
              plVar8 = plVar8 + 1;
            } while (iVar9 < *(int *)(param_1 + 0x38));
          }
          for (; puVar10 < puVar12; puVar10 = puVar10 + 2) {
            uVar5 = FUN_1805738d0(param_1,(char)*puVar10);
            *puVar7 = uVar5;
            uVar5 = FUN_1805738d0(param_1,*(undefined1 *)((longlong)puVar10 + 1));
            puVar7[1] = uVar5;
            bVar1 = *(byte *)((longlong)puVar10 + 3);
            uVar4 = puVar10[1];
            puVar7[3] = 0;
            puVar7[2] = (int)(short)((ushort)bVar1 << 8) | (uint)(byte)uVar4;
            puVar7 = puVar7 + 4;
          }
          *(undefined8 *)(param_1 + 0x88) = uVar3;
          FUN_1806192c0(*(undefined8 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x38),0x10,
                        FUN_18059bbd0);
          if (local_res10[0] == 0) {
            return 0;
          }
        }
        goto LAB_18059bac3;
      }
    }
  }
  local_res10[0] = 2;
LAB_18059bac3:
  FUN_18057abd0(uVar2,*(undefined8 *)(param_3 + 0x30));
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  return local_res10[0];
}



