// FUN_1805ea8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ea8e0 */

longlong FUN_1805ea8e0(undefined2 *param_1,longlong *param_2,undefined2 *param_3,longlong param_4,
                      char param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  
  puVar9 = param_1;
  while( true ) {
    uVar6 = *(uint *)(param_2 + 1);
    if (0x40 < uVar6) break;
    uVar8 = param_2[3];
    uVar1 = param_2[2];
    if (uVar1 < uVar8 + 8) {
      if (uVar1 == uVar8) break;
      uVar4 = (ulonglong)(uVar6 >> 3);
      if (uVar1 - uVar4 < uVar8) {
        uVar3 = (int)uVar1 - (int)uVar8;
        plVar7 = (longlong *)(uVar1 - uVar3);
        param_2[2] = (longlong)plVar7;
        uVar6 = uVar6 + uVar3 * -8;
        *(uint *)(param_2 + 1) = uVar6;
        *param_2 = *plVar7;
        break;
      }
      uVar6 = uVar6 + (uVar6 >> 3) * -8;
    }
    else {
      uVar4 = (ulonglong)(uVar6 >> 3);
      uVar6 = uVar6 & 7;
    }
    param_2[2] = (longlong)(uVar1 - uVar4);
    *(uint *)(param_2 + 1) = uVar6;
    lVar2 = *(longlong *)(uVar1 - uVar4);
    *param_2 = lVar2;
    if ((undefined2 *)((longlong)param_3 - 7U) <= puVar9) break;
    bVar5 = -param_5 & 0x3f;
    uVar8 = (ulonglong)(lVar2 << ((byte)uVar6 & 0x3f)) >> bVar5;
    *puVar9 = *(undefined2 *)(param_4 + uVar8 * 4);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(param_4 + 2 + uVar8 * 4);
    puVar9 = (undefined2 *)((ulonglong)*(byte *)(param_4 + 3 + uVar8 * 4) + (longlong)puVar9);
    uVar8 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> bVar5;
    lVar2 = param_4 + uVar8 * 4;
    *puVar9 = *(undefined2 *)(param_4 + uVar8 * 4);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(lVar2 + 2);
    puVar9 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 3) + (longlong)puVar9);
    uVar8 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> bVar5;
    lVar2 = param_4 + uVar8 * 4;
    *puVar9 = *(undefined2 *)(param_4 + uVar8 * 4);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(lVar2 + 2);
    puVar9 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 3) + (longlong)puVar9);
    uVar8 = (ulonglong)(*param_2 << ((byte)param_2[1] & 0x3f)) >> bVar5;
    lVar2 = param_4 + uVar8 * 4;
    *puVar9 = *(undefined2 *)(param_4 + uVar8 * 4);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(lVar2 + 2);
    puVar9 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 3) + (longlong)puVar9);
  }
  do {
    if (0x40 < uVar6) {
joined_r0x0001805eab30:
      for (; puVar9 <= param_3 + -1;
          puVar9 = (undefined2 *)((longlong)puVar9 + (ulonglong)*(byte *)(lVar2 + 3))) {
        uVar8 = (ulonglong)(*param_2 << ((byte)uVar6 & 0x3f)) >> (-param_5 & 0x3fU);
        lVar2 = param_4 + uVar8 * 4;
        *puVar9 = *(undefined2 *)(param_4 + uVar8 * 4);
        uVar6 = (uint)*(byte *)(lVar2 + 2) + (int)param_2[1];
        *(uint *)(param_2 + 1) = uVar6;
      }
      if (puVar9 < param_3) {
        uVar8 = (ulonglong)(*param_2 << ((byte)uVar6 & 0x3f)) >> (-param_5 & 0x3fU);
        lVar2 = param_4 + uVar8 * 4;
        *(undefined1 *)puVar9 = *(undefined1 *)(param_4 + uVar8 * 4);
        if (*(char *)(lVar2 + 3) == '\x01') {
          *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(lVar2 + 2);
        }
        else if ((*(uint *)(param_2 + 1) < 0x40) &&
                (uVar6 = (uint)*(byte *)(lVar2 + 2) + *(uint *)(param_2 + 1),
                *(uint *)(param_2 + 1) = uVar6, 0x40 < uVar6)) {
          *(undefined4 *)(param_2 + 1) = 0x40;
        }
        puVar9 = (undefined2 *)((longlong)puVar9 + 1);
      }
      return (longlong)puVar9 - (longlong)param_1;
    }
    uVar8 = param_2[3];
    uVar1 = param_2[2];
    if (uVar1 < uVar8 + 8) {
      if (uVar1 == uVar8) goto joined_r0x0001805eab30;
      uVar4 = (ulonglong)(uVar6 >> 3);
      if (uVar1 - uVar4 < uVar8) {
        uVar3 = (int)uVar1 - (int)uVar8;
        plVar7 = (longlong *)(uVar1 - uVar3);
        param_2[2] = (longlong)plVar7;
        uVar6 = uVar6 + uVar3 * -8;
        *(uint *)(param_2 + 1) = uVar6;
        *param_2 = *plVar7;
        goto joined_r0x0001805eab30;
      }
      uVar6 = uVar6 + (uVar6 >> 3) * -8;
    }
    else {
      uVar4 = (ulonglong)(uVar6 >> 3);
      uVar6 = uVar6 & 7;
    }
    param_2[2] = (longlong)(uVar1 - uVar4);
    *(uint *)(param_2 + 1) = uVar6;
    lVar2 = *(longlong *)(uVar1 - uVar4);
    *param_2 = lVar2;
    if (param_3 + -1 < puVar9) goto joined_r0x0001805eab30;
    uVar8 = (ulonglong)(lVar2 << ((byte)uVar6 & 0x3f)) >> (-param_5 & 0x3fU);
    *puVar9 = *(undefined2 *)(param_4 + uVar8 * 4);
    *(uint *)(param_2 + 1) = (int)param_2[1] + (uint)*(byte *)(param_4 + 2 + uVar8 * 4);
    uVar6 = *(uint *)(param_2 + 1);
    puVar9 = (undefined2 *)((longlong)puVar9 + (ulonglong)*(byte *)(param_4 + 3 + uVar8 * 4));
  } while( true );
}



