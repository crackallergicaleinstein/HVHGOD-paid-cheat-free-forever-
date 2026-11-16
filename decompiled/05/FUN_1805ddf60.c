// FUN_1805ddf60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ddf60 */

ulonglong FUN_1805ddf60(undefined1 *param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4,
                       longlong param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  
  puVar12 = param_1 + param_2;
  if ((longlong)param_2 < 1) {
    puVar12 = param_1;
  }
  cVar2 = *(char *)(param_5 + 2);
  lVar1 = param_5 + 4;
  if (param_4 == 0) {
    param_4 = 0xffffffffffffffb8;
  }
  else {
    if (param_4 < 8) {
      uVar6 = (ulonglong)(byte)*param_3;
      switch(param_4) {
      case 7:
        uVar6 = ((ulonglong)*(byte *)((longlong)param_3 + 6) << 0x30) + uVar6;
      case 6:
        uVar6 = uVar6 + ((ulonglong)*(byte *)((longlong)param_3 + 5) << 0x28);
      case 5:
        uVar6 = uVar6 + ((ulonglong)*(byte *)((longlong)param_3 + 4) << 0x20);
      case 4:
        uVar6 = uVar6 + (ulonglong)*(byte *)((longlong)param_3 + 3) * 0x1000000;
      case 3:
        uVar6 = uVar6 + (ulonglong)*(byte *)((longlong)param_3 + 2) * 0x10000;
      case 2:
        uVar6 = uVar6 + (ulonglong)*(byte *)((longlong)param_3 + 1) * 0x100;
      }
      bVar3 = *(byte *)((longlong)param_3 + (param_4 - 1));
      if (bVar3 == 0) {
        return 0xffffffffffffffec;
      }
      iVar9 = (9 - (int)param_4) * 8;
      puVar11 = param_3;
    }
    else {
      bVar3 = *(byte *)((longlong)param_3 + (param_4 - 1));
      puVar11 = (ulonglong *)((param_4 - 8) + (longlong)param_3);
      uVar6 = *puVar11;
      if (bVar3 == 0) {
        return 0xffffffffffffffff;
      }
      iVar9 = 8;
    }
    iVar4 = 0x1f;
    if (bVar3 != 0) {
      for (; bVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar10 = iVar9 - iVar4;
    if (param_4 < 0xffffffffffffff89) {
      if ((longlong)puVar12 - (longlong)param_1 < 4) {
        if (uVar10 < 0x41) {
          if (puVar11 < param_3 + 1) {
            if (puVar11 != param_3) {
              uVar8 = (ulonglong)(uVar10 >> 3);
              if ((ulonglong *)((longlong)puVar11 - uVar8) < param_3) {
                uVar8 = (ulonglong)(uint)((int)puVar11 - (int)param_3);
              }
              puVar11 = (ulonglong *)((longlong)puVar11 - uVar8);
              uVar6 = *puVar11;
              uVar10 = uVar10 + (int)uVar8 * -8;
            }
          }
          else {
            puVar11 = (ulonglong *)((longlong)puVar11 - (ulonglong)(uVar10 >> 3));
            uVar10 = uVar10 & 7;
            uVar6 = *puVar11;
          }
        }
        else {
          puVar11 = (ulonglong *)&DAT_1806877f0;
        }
LAB_1805de1fd:
        if (param_1 < puVar12) {
          do {
            uVar8 = (uVar6 << ((byte)uVar10 & 0x3f)) >> (-cVar2 & 0x3fU);
            uVar10 = uVar10 + *(byte *)(lVar1 + uVar8 * 2);
            *param_1 = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
            param_1 = param_1 + 1;
          } while (param_1 < puVar12);
        }
        if ((puVar11 == param_3) && (uVar10 == 0x40)) {
          return param_2;
        }
        return 0xffffffffffffffec;
      }
      do {
        if (uVar10 < 0x41) {
          if (puVar11 < param_3 + 1) {
            if (puVar11 == param_3) {
              uVar5 = 2 - (uVar10 < 0x40);
              goto LAB_1805de0fd;
            }
            uVar6 = (ulonglong)(uVar10 >> 3);
            bVar13 = (ulonglong *)((longlong)puVar11 - uVar6) < param_3;
            if (bVar13) {
              uVar6 = (ulonglong)(uint)((int)puVar11 - (int)param_3);
            }
            uVar5 = (uint)bVar13;
            uVar10 = uVar10 + (int)uVar6 * -8;
          }
          else {
            uVar6 = (ulonglong)(uVar10 >> 3);
            uVar5 = 0;
            uVar10 = uVar10 & 7;
          }
          puVar11 = (ulonglong *)((longlong)puVar11 - uVar6);
          uVar6 = *puVar11;
        }
        else {
          puVar11 = (ulonglong *)&DAT_1806877f0;
          uVar5 = 3;
        }
LAB_1805de0fd:
        if (uVar5 != 0 || puVar12 + -3 <= param_1) goto LAB_1805de1fd;
        bVar7 = -cVar2 & 0x3f;
        uVar8 = (uVar6 << ((byte)uVar10 & 0x3f)) >> bVar7;
        bVar3 = *(byte *)(lVar1 + uVar8 * 2);
        *param_1 = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
        iVar9 = bVar3 + uVar10;
        uVar8 = (uVar6 << ((byte)iVar9 & 0x3f)) >> bVar7;
        bVar3 = *(byte *)(lVar1 + uVar8 * 2);
        param_1[1] = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
        iVar9 = (uint)bVar3 + iVar9;
        uVar8 = (uVar6 << ((byte)iVar9 & 0x3f)) >> bVar7;
        iVar9 = (uint)*(byte *)(lVar1 + uVar8 * 2) + iVar9;
        param_1[2] = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
        uVar8 = (uVar6 << ((byte)iVar9 & 0x3f)) >> bVar7;
        uVar10 = (uint)*(byte *)(lVar1 + uVar8 * 2) + iVar9;
        param_1[3] = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
        param_1 = param_1 + 4;
      } while( true );
    }
  }
  return param_4;
}



