// FUN_1805ea660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ea660 */

longlong FUN_1805ea660(undefined1 *param_1,longlong *param_2,undefined1 *param_3,longlong param_4,
                      char param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  
  puVar10 = param_1;
  while (uVar8 = *(uint *)(param_2 + 1), uVar8 < 0x41) {
    uVar9 = param_2[3];
    uVar2 = param_2[2];
    if (uVar2 < uVar9 + 8) {
      if (uVar2 == uVar9) break;
      uVar5 = (ulonglong)(uVar8 >> 3);
      if (uVar2 - uVar5 < uVar9) {
        uVar4 = (int)uVar2 - (int)uVar9;
        plVar7 = (longlong *)(uVar2 - uVar4);
        param_2[2] = (longlong)plVar7;
        *(uint *)(param_2 + 1) = uVar8 + uVar4 * -8;
        *param_2 = *plVar7;
        break;
      }
      uVar8 = uVar8 + (uVar8 >> 3) * -8;
    }
    else {
      uVar5 = (ulonglong)(uVar8 >> 3);
      uVar8 = uVar8 & 7;
    }
    param_2[2] = (longlong)(uVar2 - uVar5);
    *(uint *)(param_2 + 1) = uVar8;
    lVar3 = *(longlong *)(uVar2 - uVar5);
    *param_2 = lVar3;
    if (param_3 + -4 < puVar10) break;
    bVar6 = -param_5 & 0x3f;
    uVar9 = (ulonglong)(lVar3 << ((byte)uVar8 & 0x3f)) >> bVar6;
    uVar1 = *(undefined1 *)(param_4 + uVar9 * 2);
    *(uint *)(param_2 + 1) = *(byte *)(param_4 + 1 + uVar9 * 2) + uVar8;
    *puVar10 = uVar1;
    uVar9 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> bVar6;
    uVar1 = *(undefined1 *)(param_4 + uVar9 * 2);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(param_4 + 1 + uVar9 * 2);
    puVar10[1] = uVar1;
    uVar9 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> bVar6;
    uVar1 = *(undefined1 *)(param_4 + uVar9 * 2);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(param_4 + 1 + uVar9 * 2);
    puVar10[2] = uVar1;
    uVar9 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> bVar6;
    uVar1 = *(undefined1 *)(param_4 + uVar9 * 2);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(param_4 + 1 + uVar9 * 2);
    puVar10[3] = uVar1;
    puVar10 = puVar10 + 4;
  }
  do {
    uVar8 = *(uint *)(param_2 + 1);
    if (0x40 < uVar8) {
joined_r0x0001805ea88e:
      for (; puVar10 < param_3; puVar10 = puVar10 + 1) {
        uVar9 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> (-param_5 & 0x3fU);
        uVar1 = *(undefined1 *)(param_4 + uVar9 * 2);
        *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(param_4 + 1 + uVar9 * 2);
        *puVar10 = uVar1;
      }
LAB_1805ea8b7:
      return (longlong)param_3 - (longlong)param_1;
    }
    uVar9 = param_2[3];
    uVar2 = param_2[2];
    if (uVar2 < uVar9 + 8) {
      if (uVar2 == uVar9) goto joined_r0x0001805ea88e;
      uVar5 = (ulonglong)(uVar8 >> 3);
      if (uVar2 - uVar5 < uVar9) {
        uVar4 = (int)uVar2 - (int)uVar9;
        plVar7 = (longlong *)(uVar2 - uVar4);
        param_2[2] = (longlong)plVar7;
        *(uint *)(param_2 + 1) = uVar8 + uVar4 * -8;
        *param_2 = *plVar7;
        goto joined_r0x0001805ea88e;
      }
      uVar8 = uVar8 + (uVar8 >> 3) * -8;
    }
    else {
      uVar5 = (ulonglong)(uVar8 >> 3);
      uVar8 = uVar8 & 7;
    }
    param_2[2] = (longlong)(uVar2 - uVar5);
    *(uint *)(param_2 + 1) = uVar8;
    lVar3 = *(longlong *)(uVar2 - uVar5);
    *param_2 = lVar3;
    if (param_3 <= puVar10) goto LAB_1805ea8b7;
    uVar9 = (ulonglong)(lVar3 << ((byte)uVar8 & 0x3f)) >> (-param_5 & 0x3fU);
    uVar1 = *(undefined1 *)(param_4 + uVar9 * 2);
    *(uint *)(param_2 + 1) = *(byte *)(param_4 + 1 + uVar9 * 2) + uVar8;
    *puVar10 = uVar1;
    puVar10 = puVar10 + 1;
  } while( true );
}



