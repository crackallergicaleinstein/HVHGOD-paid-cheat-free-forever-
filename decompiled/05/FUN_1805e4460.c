// FUN_1805e4460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e4460 */

void FUN_1805e4460(undefined8 *param_1,short *param_2,int param_3,longlong param_4,longlong param_5,
                  undefined4 param_6,short *param_7)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  short *psVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  byte *pbVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 local_res8;
  
  uVar23 = param_3 + 1;
  local_res8 = 1;
  bVar7 = (byte)param_6;
  uVar24 = 1 << (bVar7 & 0x1f);
  uVar25 = 0;
  uVar20 = 1;
  uVar14 = 0;
  uVar11 = uVar24 - 1;
  uVar19 = (ulonglong)uVar11;
  if (uVar23 != 0) {
    psVar9 = param_7;
    do {
      sVar4 = *(short *)((longlong)psVar9 + ((longlong)param_2 - (longlong)param_7));
      if (sVar4 == -1) {
        *(uint *)((longlong)param_1 + uVar19 * 8 + 0xc) = uVar14;
        sVar4 = 1;
        uVar19 = (ulonglong)((int)uVar19 - 1);
      }
      else {
        if ((short)(1 << (bVar7 - 1 & 0x1f)) <= sVar4) {
          uVar20 = 0;
        }
        local_res8 = uVar20;
      }
      uVar11 = (uint)uVar19;
      *psVar9 = sVar4;
      uVar14 = uVar14 + 1;
      psVar9 = psVar9 + 1;
    } while (uVar14 < uVar23);
  }
  uVar16 = uVar24 - 1;
  uVar14 = (uVar24 >> 1) + 3 + (uVar24 >> 3);
  *param_1 = CONCAT44(param_6,local_res8);
  if (uVar11 == uVar16) {
    uVar19 = (ulonglong)uVar16;
    lVar22 = 0;
    lVar12 = 0;
    if (uVar23 != 0) {
      uVar13 = (ulonglong)uVar23;
      do {
        lVar6 = (longlong)*param_2;
        *(longlong *)((longlong)(param_7 + 0x35) + lVar22) = lVar12;
        if (8 < lVar6) {
          plVar15 = (longlong *)((longlong)param_7 + lVar22 + 0x72);
          for (lVar10 = (lVar6 - 9U >> 3) + 1; lVar10 != 0; lVar10 = lVar10 + -1) {
            *plVar15 = lVar12;
            plVar15 = plVar15 + 1;
          }
        }
        lVar22 = lVar22 + lVar6;
        param_2 = param_2 + 1;
        lVar12 = lVar12 + 0x101010101010101;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uVar13 = 0;
    if (uVar24 != 0) {
      lVar12 = ((ulonglong)uVar24 - 1 >> 1) + 1;
      pbVar17 = (byte *)(param_7 + 0x35);
      do {
        *(uint *)((longlong)param_1 + (uVar13 & uVar19) * 8 + 0xc) = (uint)*pbVar17;
        uVar1 = uVar13 + uVar14;
        uVar13 = uVar13 + (ulonglong)uVar14 * 2 & uVar19;
        *(uint *)((longlong)param_1 + (uVar1 & uVar19) * 8 + 0xc) = (uint)pbVar17[1];
        lVar12 = lVar12 + -1;
        pbVar17 = pbVar17 + 2;
      } while (lVar12 != 0);
    }
  }
  else {
    uVar5 = 0;
    uVar21 = 0;
    if (uVar23 != 0) {
      do {
        if (0 < *param_2) {
          uVar19 = (ulonglong)(uint)(int)*param_2;
          do {
            *(uint *)((longlong)param_1 + (ulonglong)uVar5 * 8 + 0xc) = uVar21;
            do {
              uVar5 = uVar5 + uVar14 & uVar16;
            } while (uVar11 < uVar5);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        uVar21 = uVar21 + 1;
        param_2 = param_2 + 1;
      } while (uVar21 < uVar23);
    }
  }
  if (uVar24 != 0) {
    puVar18 = (uint *)((longlong)param_1 + 0xc);
    do {
      uVar19 = (ulonglong)*puVar18;
      uVar25 = uVar25 + 1;
      uVar2 = param_7[uVar19];
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      param_7[uVar19] = uVar2 + 1;
      bVar8 = bVar7 - (char)iVar3;
      *(byte *)((longlong)puVar18 + -1) = bVar8;
      *(ushort *)(puVar18 + -1) = (uVar2 << (bVar8 & 0x1f)) - (short)uVar24;
      *(undefined1 *)((longlong)puVar18 + -2) = *(undefined1 *)(uVar19 + param_5);
      *puVar18 = *(uint *)(param_4 + uVar19 * 4);
      puVar18 = puVar18 + 2;
    } while (uVar25 < uVar24);
  }
  return;
}



