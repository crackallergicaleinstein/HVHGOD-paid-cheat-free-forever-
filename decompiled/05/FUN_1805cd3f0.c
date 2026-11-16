// FUN_1805cd3f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cd3f0 */

undefined8 FUN_1805cd3f0(longlong *param_1,uint param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  uVar7 = *(uint *)(param_1 + 6);
  if (param_2 < uVar7) {
    uVar8 = uVar7 * 2;
    do {
      puVar10 = (undefined1 *)((ulonglong)(param_2 * 2) + 0xe + param_1[3]);
      puVar1 = puVar10 + (uVar8 + 2);
      pbVar2 = puVar1 + uVar8;
      uVar3 = puVar10[1];
      uVar4 = *puVar10;
      *(uint *)((longlong)param_1 + 0x3c) = (uint)CONCAT11(uVar4,uVar3);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(uint *)(param_1 + 7) = (uint)CONCAT11(uVar5,uVar6);
      pbVar11 = pbVar2 + uVar8;
      *(uint *)(param_1 + 8) = (int)(short)((ushort)*pbVar2 << 8) | (uint)pbVar2[1];
      uVar9 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
      if (((uVar7 - 1 <= param_2) && (CONCAT11(uVar5,uVar6) == 0xffff)) &&
         (CONCAT11(uVar4,uVar3) == 0xffff)) {
        if (uVar9 == 0) goto LAB_1805cd4f9;
        if ((byte *)((ulonglong)*(uint *)(*param_1 + 0x298) + *(longlong *)(*param_1 + 0x290)) <
            pbVar11 + (ulonglong)uVar9 + 2) {
          *(undefined4 *)(param_1 + 8) = 1;
          goto LAB_1805cd4f9;
        }
      }
      if (uVar9 != 0xffff) {
        if (uVar9 != 0) {
          *(uint *)((longlong)param_1 + 0x34) = param_2;
          param_1[9] = (longlong)(pbVar11 + uVar9);
          return 0;
        }
LAB_1805cd4f9:
        *(uint *)((longlong)param_1 + 0x34) = param_2;
        param_1[9] = 0;
        return 0;
      }
      param_2 = param_2 + 1;
    } while (param_2 < uVar7);
  }
  return 0xffffffff;
}



