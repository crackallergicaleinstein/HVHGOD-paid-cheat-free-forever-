// FUN_1805c8d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8d80 */

ulonglong FUN_1805c8d80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint local_res10 [6];
  
  if (0xffff < param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_res10[0] = param_2;
    uVar2 = FUN_1805ccde0(param_1,local_res10,0);
    return uVar2;
  }
  lVar1 = *param_1;
  uVar9 = 0;
  lVar10 = param_1[3];
  uVar11 = (uint)(*(byte *)(lVar10 + 7) >> 1) | (uint)*(byte *)(lVar10 + 6) << 7;
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = uVar11 * 2;
    uVar2 = (ulonglong)uVar4;
    uVar3 = 0;
    if (uVar11 != 0) {
      puVar6 = (undefined1 *)(lVar10 + 0xe + uVar2 + (ulonglong)uVar4 * 2);
      lVar10 = lVar10 + 0xd;
      while( true ) {
        puVar6 = puVar6 + 2;
        uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar10 + 1),*(undefined1 *)(lVar10 + 2));
        uVar5 = (uint)CONCAT11(puVar6[uVar2 * -2],puVar6[(ulonglong)uVar4 * -2 + 1]);
        if (param_2 < uVar5) break;
        if (param_2 <= uVar8) {
          uVar12 = (int)(short)((ushort)(byte)puVar6[-uVar2] << 8) | (uint)(byte)puVar6[1 - uVar2];
          uVar7 = (uint)CONCAT11(*puVar6,(puVar6 + (1 - uVar2))[uVar2]);
          if (((uVar3 < uVar11 - 1) || (uVar5 != 0xffff)) || (uVar8 != 0xffff)) {
LAB_1805c8ef7:
            if (uVar7 == 0xffff) goto LAB_1805c8f15;
            if (uVar7 != 0) {
              uVar2 = (ulonglong)(uVar7 + (param_2 - uVar5) * 2);
              uVar9 = 0;
              if ((CONCAT11(puVar6[uVar2],puVar6[uVar2 + 1]) != 0) &&
                 (uVar9 = uVar12 + CONCAT11(puVar6[uVar2],puVar6[uVar2 + 1]) & 0xffff,
                 *(uint *)(lVar1 + 0x10) <= uVar9)) {
                uVar9 = 0;
              }
              break;
            }
          }
          else if (uVar7 != 0) {
            if (puVar6 + (ulonglong)uVar7 + 2 <=
                (undefined1 *)((ulonglong)*(uint *)(lVar1 + 0x298) + *(longlong *)(lVar1 + 0x290)))
            goto LAB_1805c8ef7;
            uVar12 = 1;
          }
          uVar9 = uVar12 + param_2 & 0xffff;
          break;
        }
LAB_1805c8f15:
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 2;
        if (uVar11 <= uVar3) break;
      }
    }
    uVar4 = uVar9;
  }
  return (ulonglong)uVar4;
}



