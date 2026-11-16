// FUN_18044cfa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044cfa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044cfa0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_98 [32];
  ulonglong local_58;
  longlong lStack_50;
  undefined1 local_48 [8];
  ulonglong *puStack_40;
  ulonglong *local_38;
  ulonglong local_30;
  
  uVar2 = DAT_180c64058;
  puVar9 = DAT_180c62bb8;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStackY_98;
  _local_48 = (undefined1  [16])0x0;
  lVar14 = 0;
  local_38 = (ulonglong *)0x0;
  puStack_40 = (ulonglong *)0x0;
  puVar7 = puStack_40;
  puVar8 = DAT_180c62bb0;
  if (DAT_180c62bb0 != DAT_180c62bb8) {
    do {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(puVar8 + 1));
      lStack_50 = 0;
      if (puVar7 == local_38) {
        FUN_180178c40(local_48,puVar7);
        puVar7 = puStack_40;
      }
      else {
        *puVar7 = local_58;
        puVar7[1] = 0;
        puVar7 = (ulonglong *)((longlong)puStack_40 + 0x10);
        puStack_40 = puVar7;
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar9);
  }
  local_58 = (ulonglong)local_48;
  lStack_50 = (longlong)puVar7 - (longlong)local_48 >> 4;
  FUN_18044c9c0(uVar2,&local_58);
  uVar12 = 0;
  if (((longlong)DAT_180c62bb8 - (longlong)DAT_180c62bb0) / 0x18 != 0) {
    lVar13 = 0;
    uVar11 = local_58;
    do {
      plVar1 = (longlong *)((longlong)DAT_180c62bb0 + lVar14);
      lVar10 = *plVar1;
      if (*(longlong *)((longlong)local_48 + 8 + lVar13) == lVar10) {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        lVar10 = lVar10 + 0x30;
        if (lVar10 == 0) {
          bVar3 = false;
        }
        else {
          local_58 = 0;
          cVar5 = FUN_1804514f0(&local_58,lVar10);
          if (cVar5 == '\0') {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            uVar11 = local_58;
          }
        }
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if ((bVar3) && (local_58 = uVar11 | plVar1[2], lVar10 != 0)) {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          cVar5 = FUN_1801fde60(lVar10,&local_58);
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          if (cVar5 != '\0') {
            plVar1[2] = 0;
          }
        }
      }
      else {
        plVar1[2] = 0;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x18;
      lVar13 = lVar13 + 0x10;
    } while (uVar12 < (ulonglong)(((longlong)DAT_180c62bb8 - (longlong)DAT_180c62bb0) / 0x18));
  }
  puVar8 = DAT_180c62bb8;
  puVar9 = DAT_180c62bb0;
  if (DAT_180c62bb0 != DAT_180c62bb8) {
    do {
      if (puVar9[2] == 0) break;
      puVar9 = puVar9 + 3;
    } while (puVar9 != DAT_180c62bb8);
    puVar4 = puVar9;
    if (puVar9 != DAT_180c62bb8) {
      while (puVar4 = puVar4 + 3, puVar4 != puVar8) {
        if (puVar4[2] != 0) {
          uVar2 = puVar4[1];
          *puVar9 = *puVar4;
          puVar9[1] = uVar2;
          puVar9[2] = puVar4[2];
          puVar9 = puVar9 + 3;
        }
      }
      if (puVar9 != puVar8) {
        lVar14 = (longlong)DAT_180c62bb8 - (longlong)puVar8;
        FUN_18063aed0(puVar9);
        DAT_180c62bb8 = (undefined8 *)(lVar14 + (longlong)puVar9);
      }
    }
  }
  if (local_48 != (undefined1  [8])0x0) {
    if ((0xfff < ((longlong)local_38 - (longlong)local_48 & 0xfffffffffffffff0U)) &&
       (0x1f < ((longlong)local_48 - *(longlong *)((longlong)local_48 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}



