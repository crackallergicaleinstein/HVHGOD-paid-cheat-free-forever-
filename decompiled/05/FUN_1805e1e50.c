// FUN_1805e1e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e1e50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805e1e50(undefined2 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,code *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined2 *local_110;
  longlong local_108;
  ulonglong local_f8 [4];
  longlong local_d8 [4];
  ulonglong local_b8 [5];
  longlong *local_90;
  longlong local_80 [5];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_120 = param_5;
  puVar12 = (undefined2 *)(param_2 + (longlong)param_1);
  if (param_2 < 1) {
    puVar12 = param_1;
  }
  lVar1 = param_5 + 4;
  local_128 = param_4;
  local_110 = puVar12;
  local_108 = param_2;
  uVar7 = FUN_1805ddd10(local_f8,param_1,param_2,param_3);
  if ((0xffffffffffffff88 < uVar7) || (uVar7 == 0)) {
  }
  (*param_6)(local_f8);
  uVar7 = param_2 + 3U >> 2;
  plVar18 = local_d8;
  iVar17 = 0;
LAB_1805e1f00:
  if (uVar7 <= (ulonglong)((longlong)puVar12 - (longlong)param_1)) {
    puVar12 = (undefined2 *)((longlong)param_1 + uVar7);
  }
  puVar4 = (undefined2 *)*plVar18;
  if (puVar12 < puVar4) {
  }
  plVar15 = (longlong *)plVar18[-4];
  if (plVar15 < (longlong *)(plVar18[0xb] + -8)) {
  }
  uVar8 = 0;
  if (plVar18[4] != 0) {
    for (; ((ulonglong)plVar18[4] >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  lVar16 = *plVar15;
  plVar2 = local_90 + 1;
  iVar11 = (int)local_90;
  puVar10 = puVar4;
  if (7 < (ulonglong)((longlong)puVar12 - (longlong)puVar4)) {
    do {
      uVar6 = (uint)uVar8;
      if (uVar6 < 0x41) {
        if (plVar15 < plVar2) {
          if (plVar15 == local_90) {
            uVar14 = 2 - (uVar6 < 0x40);
            goto LAB_1805e1fc7;
          }
          uVar9 = uVar8 >> 3 & 0x1fffffff;
          bVar19 = (longlong *)((longlong)plVar15 - uVar9) < local_90;
          if (bVar19) {
            uVar9 = (ulonglong)(uint)((int)plVar15 - iVar11);
          }
          uVar14 = (uint)bVar19;
          uVar6 = uVar6 + (int)uVar9 * -8;
        }
        else {
          uVar6 = uVar6 & 7;
          uVar9 = (uVar8 & 0xffffffff) >> 3;
          uVar14 = 0;
        }
        uVar8 = (ulonglong)uVar6;
        plVar15 = (longlong *)((longlong)plVar15 - uVar9);
        lVar16 = *plVar15;
      }
      else {
        plVar15 = (longlong *)&DAT_1806877f0;
        uVar14 = 3;
      }
LAB_1805e1fc7:
      if (uVar14 != 0 || (undefined2 *)((longlong)puVar12 - 9U) <= puVar10) goto LAB_1805e20f9;
      uVar9 = (ulonglong)(lVar16 << ((byte)uVar8 & 0x3f)) >> 0x35;
      *puVar10 = *(undefined2 *)(lVar1 + uVar9 * 4);
      iVar13 = (uint)*(byte *)(param_5 + 6 + uVar9 * 4) + (int)uVar8;
      puVar10 = (undefined2 *)((ulonglong)*(byte *)(param_5 + 7 + uVar9 * 4) + (longlong)puVar10);
      uVar8 = (ulonglong)(lVar16 << ((byte)iVar13 & 0x3f)) >> 0x35;
      lVar3 = lVar1 + uVar8 * 4;
      *puVar10 = *(undefined2 *)(lVar1 + uVar8 * 4);
      iVar13 = (uint)*(byte *)(lVar3 + 2) + iVar13;
      puVar10 = (undefined2 *)((ulonglong)*(byte *)(lVar3 + 3) + (longlong)puVar10);
      uVar8 = (ulonglong)(lVar16 << ((byte)iVar13 & 0x3f)) >> 0x35;
      lVar3 = lVar1 + uVar8 * 4;
      *puVar10 = *(undefined2 *)(lVar1 + uVar8 * 4);
      iVar13 = (uint)*(byte *)(lVar3 + 2) + iVar13;
      puVar10 = (undefined2 *)((ulonglong)*(byte *)(lVar3 + 3) + (longlong)puVar10);
      uVar8 = (ulonglong)(lVar16 << ((byte)iVar13 & 0x3f)) >> 0x35;
      lVar3 = lVar1 + uVar8 * 4;
      *puVar10 = *(undefined2 *)(lVar1 + uVar8 * 4);
      iVar13 = (uint)*(byte *)(lVar3 + 2) + iVar13;
      puVar10 = (undefined2 *)((ulonglong)*(byte *)(lVar3 + 3) + (longlong)puVar10);
      uVar8 = (ulonglong)(lVar16 << ((byte)iVar13 & 0x3f)) >> 0x35;
      lVar3 = lVar1 + uVar8 * 4;
      *puVar10 = *(undefined2 *)(lVar1 + uVar8 * 4);
      uVar8 = (ulonglong)((uint)*(byte *)(lVar3 + 2) + iVar13);
      puVar10 = (undefined2 *)((ulonglong)*(byte *)(lVar3 + 3) + (longlong)puVar10);
    } while( true );
  }
  uVar6 = (uint)uVar8;
  if (uVar6 < 0x41) {
    if (plVar15 < plVar2) {
      if (plVar15 == local_90) goto LAB_1805e20f9;
      uVar9 = uVar8 >> 3 & 0x1fffffff;
      if ((longlong *)((longlong)plVar15 - uVar9) < local_90) {
        uVar9 = (ulonglong)(uint)((int)plVar15 - iVar11);
      }
      uVar6 = uVar6 + (int)uVar9 * -8;
    }
    else {
      uVar9 = (uVar8 & 0xffffffff) >> 3;
      uVar6 = uVar6 & 7;
    }
    uVar8 = (ulonglong)uVar6;
    plVar15 = (longlong *)((longlong)plVar15 - uVar9);
    lVar16 = *plVar15;
  }
  else {
    plVar15 = (longlong *)&DAT_1806877f0;
  }
LAB_1805e20f9:
  bVar5 = (byte)uVar8;
  if (1 < (ulonglong)((longlong)puVar12 - (longlong)puVar10)) {
    do {
      uVar6 = (uint)uVar8;
      if (uVar6 < 0x41) {
        if (plVar15 < plVar2) {
          if (plVar15 == local_90) {
            uVar14 = 2 - (uVar6 < 0x40);
            goto LAB_1805e2176;
          }
          uVar9 = uVar8 >> 3 & 0x1fffffff;
          bVar19 = (longlong *)((longlong)plVar15 - uVar9) < local_90;
          if (bVar19) {
            uVar9 = (ulonglong)(uint)((int)plVar15 - iVar11);
          }
          uVar14 = (uint)bVar19;
          uVar6 = uVar6 + (int)uVar9 * -8;
        }
        else {
          uVar6 = uVar6 & 7;
          uVar9 = (uVar8 & 0xffffffff) >> 3;
          uVar14 = 0;
        }
        uVar8 = (ulonglong)uVar6;
        plVar15 = (longlong *)((longlong)plVar15 - uVar9);
        lVar16 = *plVar15;
      }
      else {
        plVar15 = (longlong *)&DAT_1806877f0;
        uVar14 = 3;
      }
LAB_1805e2176:
      uVar6 = (uint)uVar8;
      if (uVar14 != 0 || puVar12 + -1 < puVar10) goto joined_r0x0001805e21b8;
      uVar9 = (ulonglong)(lVar16 << ((byte)uVar8 & 0x3f)) >> 0x35;
      *puVar10 = *(undefined2 *)(lVar1 + uVar9 * 4);
      uVar8 = (ulonglong)(uVar6 + *(byte *)(param_5 + 6 + uVar9 * 4));
      puVar10 = (undefined2 *)((longlong)puVar10 + (ulonglong)*(byte *)(param_5 + 7 + uVar9 * 4));
    } while( true );
  }
  goto LAB_1805e21eb;
joined_r0x0001805e21b8:
  for (; bVar5 = (byte)uVar6, puVar10 <= puVar12 + -1;
      puVar10 = (undefined2 *)((longlong)puVar10 + (ulonglong)*(byte *)(param_5 + 7 + uVar9 * 4))) {
    uVar9 = (ulonglong)(lVar16 << ((byte)uVar8 & 0x3f)) >> 0x35;
    *puVar10 = *(undefined2 *)(lVar1 + uVar9 * 4);
    uVar6 = (int)uVar8 + (uint)*(byte *)(param_5 + 6 + uVar9 * 4);
    uVar8 = (ulonglong)uVar6;
  }
LAB_1805e21eb:
  if (puVar10 < puVar12) {
    *(undefined1 *)puVar10 =
         *(undefined1 *)(lVar1 + ((ulonglong)(lVar16 << (bVar5 & 0x3f)) >> 0x35) * 4);
    puVar10 = (undefined2 *)((longlong)puVar10 + 1);
  }
  *plVar18 = (longlong)((longlong)puVar10 + (*plVar18 - (longlong)puVar4));
  if ((undefined2 *)*plVar18 != puVar12) {
  }
  iVar17 = iVar17 + 1;
  plVar18 = plVar18 + 1;
  param_1 = puVar12;
  puVar12 = local_110;
  if (3 < iVar17) {
  }
  goto LAB_1805e1f00;
}



