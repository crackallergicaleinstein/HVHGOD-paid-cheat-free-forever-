// FUN_1805ca220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ca220 */

int FUN_1805ca220(longlong param_1,longlong param_2,ushort param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort *puVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  ulonglong uVar15;
  int local_res20 [2];
  
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = 0;
  uVar15 = (ulonglong)param_3;
  uVar11 = 0;
  lVar7 = 0;
  uVar5 = (uint)param_3 * 2;
  if (param_4 < uVar5) {
    return 3;
  }
  puVar6 = (ushort *)FUN_18057ac40(uVar4,2,0,uVar15,0,local_res20);
  if ((local_res20[0] == 0) && (local_res20[0] = FUN_180577bf0(param_2,uVar5), local_res20[0] == 0))
  {
    if (param_3 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x38) + -1;
      puVar13 = puVar6;
      do {
        uVar8 = CONCAT11(*(undefined1 *)(lVar9 + 1),*(undefined1 *)(lVar9 + 2));
        *puVar13 = uVar8;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        uVar11 = uVar8;
        uVar15 = uVar15 - 1;
        lVar9 = lVar9 + 2;
        puVar13 = puVar13 + 1;
      } while (uVar15 != 0);
    }
    FUN_180577d30(param_2);
    uVar8 = uVar11 - 0x101;
    if (uVar11 < 0x102) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
LAB_1805ca3d1:
      *(ushort *)(param_1 + 2) = param_3;
      *(ushort **)(param_1 + 8) = puVar6;
      *(ushort *)(param_1 + 4) = uVar8;
      *(longlong *)(param_1 + 0x10) = lVar7;
      return 0;
    }
    param_4 = param_4 + (uint)param_3 * -2;
    lVar7 = FUN_18057abe0(uVar4,param_4 + 1 + (uint)uVar8 * 8,local_res20);
    if (local_res20[0] == 0) {
      pbVar2 = (byte *)(lVar7 + (ulonglong)uVar8 * 8);
      local_res20[0] = FUN_180578100(param_2,pbVar2,param_4);
      if (local_res20[0] == 0) {
        pbVar14 = pbVar2 + param_4;
        for (; (pbVar2 < pbVar14 && (uVar10 < uVar8)); uVar10 = uVar10 + 1) {
          bVar3 = *pbVar2;
          pbVar1 = pbVar2 + 1;
          *pbVar2 = 0;
          pbVar2 = pbVar1 + bVar3;
          *(byte **)(lVar7 + (ulonglong)uVar10 * 8) = pbVar1;
        }
        *pbVar14 = 0;
        if (uVar10 < uVar8) {
          puVar12 = (undefined8 *)(lVar7 + (ulonglong)uVar10 * 8);
          for (uVar15 = (ulonglong)(ushort)(uVar8 - uVar10); uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar12 = pbVar14;
            puVar12 = puVar12 + 1;
          }
        }
        goto LAB_1805ca3d1;
      }
    }
  }
  FUN_18057abd0(uVar4,lVar7);
  FUN_18057abd0(uVar4,puVar6);
  return local_res20[0];
}



