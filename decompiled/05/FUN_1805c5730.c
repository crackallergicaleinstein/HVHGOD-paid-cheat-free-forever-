// FUN_1805c5730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c5730 */

ulonglong FUN_1805c5730(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong in_RAX;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  
  puVar10 = *(undefined1 **)(param_5 + 2);
  if (puVar10 == (undefined1 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x4e0);
    if (lVar3 != 0) {
      uVar5 = (uint)*(ushort *)(lVar3 + 2);
      uVar7 = 0;
      if (*(ushort *)(lVar3 + 2) != 0) {
        do {
          uVar6 = (uVar5 - uVar7 >> 1) + uVar7;
          pbVar9 = (byte *)((ulonglong)(uVar6 * 6) + *(longlong *)(lVar3 + 8));
          in_RAX = (ulonglong)*pbVar9 << 8;
          uVar8 = (uint)pbVar9[1] | (uint)in_RAX;
          if (uVar8 < param_2) {
            uVar7 = uVar6 + 1;
          }
          else {
            if (uVar8 <= param_2) {
              in_RAX = (ulonglong)pbVar9[4] << 8;
              uVar4 = (ushort)pbVar9[5] | (ushort)in_RAX;
              if (uVar4 != 0) {
                bVar1 = pbVar9[3];
                bVar2 = pbVar9[2];
                uVar7 = (uint)uVar4 + (uint)CONCAT11(bVar2,bVar1);
                in_RAX = (ulonglong)uVar7;
                if (uVar7 <= *(ushort *)(lVar3 + 4)) {
                  *param_5 = (uint)uVar4;
                  param_5[1] = 0;
                  puVar10 = (undefined1 *)
                            ((ulonglong)((uint)CONCAT11(bVar2,bVar1) * 4) +
                            *(longlong *)(lVar3 + 0x10));
                  *(undefined1 **)(param_5 + 2) = puVar10;
                  goto LAB_1805c581f;
                }
              }
              break;
            }
            uVar5 = uVar6;
          }
        } while (uVar7 < uVar5);
      }
    }
  }
  else {
LAB_1805c581f:
    in_RAX = (ulonglong)*param_5;
    if (param_5[1] < *param_5) {
      *(undefined1 **)(param_5 + 2) = puVar10 + 2;
      *param_3 = (uint)CONCAT11(*puVar10,puVar10[1]);
      puVar10 = *(undefined1 **)(param_5 + 2);
      *(undefined1 **)(param_5 + 2) = puVar10 + 2;
      uVar7 = (uint)CONCAT11(*puVar10,puVar10[1]);
      *param_4 = uVar7;
      in_RAX = (ulonglong)*(uint *)(param_1 + 0x10);
      if ((*param_3 < *(uint *)(param_1 + 0x10)) &&
         ((uVar7 == 0xffff ||
          (in_RAX = (ulonglong)*(ushort *)(param_1 + 0x388), uVar7 < *(ushort *)(param_1 + 0x388))))
         ) {
        param_5[1] = param_5[1] + 1;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



