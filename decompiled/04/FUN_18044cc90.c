// FUN_18044cc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044cc90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044cc90(void)

{
  undefined8 uVar1;
  bool bVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort uVar16;
  undefined1 auStackY_98 [32];
  ulonglong local_68;
  ulonglong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_30;
  
  lVar9 = DAT_180c64058;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStackY_98;
  uVar16 = *(ushort *)(DAT_180c64058 + 0x4a) & 0x7fff;
  if (*(short *)(DAT_180c64058 + 0x58) != -1) {
    if (*(longlong *)(DAT_180c64058 + 0x50) == 0) {
    }
    if (uVar16 == 0) {
    }
  }
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  if (*(short *)(DAT_180c64058 + 0x58) != -1) {
    FUN_18044d2b0(local_48,uVar16);
    uVar4 = local_48._0_8_;
    uVar1 = *(undefined8 *)(lVar9 + 0x50);
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    cVar5 = FUN_1804514f0(uVar4,uVar1);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (cVar5 == '\0') {
LAB_18044cf74:
      lVar9 = local_48._0_8_;
      goto LAB_18044cf11;
    }
  }
  uVar6 = *(ushort *)(lVar9 + 0x58);
  uVar15 = 0;
  lVar9 = local_48._0_8_;
  if (uVar6 != 0xffff) {
    uVar14 = local_68;
    do {
      if ((uVar16 <= uVar15) || (uVar16 <= uVar6)) break;
      puVar12 = (ulonglong *)((ulonglong)uVar6 * 0x10 + lVar9);
      if (*puVar12 != 0) {
        lVar9 = *puVar12 + 0x30;
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        if (lVar9 == 0) {
          bVar2 = false;
        }
        else {
          local_68 = 0;
          cVar5 = FUN_1804514f0(&local_68,lVar9);
          if (cVar5 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            uVar14 = local_68;
          }
        }
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        local_68 = local_68 & 0xffffffff00000000;
        if (!bVar2) goto LAB_18044cf74;
        uVar11 = *puVar12;
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        cVar5 = FUN_18044c8f0(uVar11,&local_68);
        lVar7 = FUN_18017ea70();
        uVar10 = *(uint *)(lVar7 + 4);
        if (uVar10 != 0) {
          uVar10 = uVar10 - 1;
          *(uint *)(lVar7 + 4) = uVar10;
        }
        puVar3 = DAT_180c62bb8;
        uVar11 = (ulonglong)uVar10;
        if (cVar5 == '\0') goto LAB_18044cf74;
        uVar13 = (ulonglong)((uint)uVar14 & 0x412);
        if ((uVar14 & 0x412) != 0) {
          if (DAT_180c62bb0 != DAT_180c62bb8) {
            uVar11 = *puVar12;
            puVar8 = DAT_180c62bb0;
            do {
              if (*puVar8 == uVar11) goto LAB_18044ceae;
              puVar8 = puVar8 + 3;
            } while (puVar8 != DAT_180c62bb8);
          }
          local_60 = *puVar12;
          uStack_58 = (undefined4)local_68;
          local_50 = uVar13;
          if (DAT_180c62bb8 == DAT_180c62bc0) {
            FUN_18044d4a0(uVar11,DAT_180c62bb8,&local_60);
          }
          else {
            *DAT_180c62bb8 = local_60;
            puVar3[1] = CONCAT44(uStack_54,(undefined4)local_68);
            puVar3[2] = uVar13;
            DAT_180c62bb8 = DAT_180c62bb8 + 3;
          }
        }
LAB_18044ceae:
        cVar5 = FUN_1804513c0(lVar9,8);
        if (cVar5 == '\0') goto LAB_18044cf74;
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        cVar5 = FUN_18044d350(lVar9);
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if (cVar5 == '\0') goto LAB_18044cf74;
        lVar9 = local_48._0_8_;
      }
      uVar6 = *(ushort *)((longlong)puVar12 + 10);
      uVar15 = uVar15 + 1;
    } while (uVar6 != 0xffff);
  }
LAB_18044cf11:
  if (lVar9 != 0) {
    if ((0xfff < (local_38 - lVar9 & 0xfffffffffffffff0U)) &&
       (0x1f < (lVar9 - *(longlong *)(lVar9 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}



