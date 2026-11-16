// FUN_18017d110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017d110 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017d110(short *param_1,undefined1 (*param_2) [16])

{
  longlong *plVar1;
  short *psVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 auVar5 [16];
  short *psVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [8];
  undefined1 auVar13 [8];
  undefined1 auVar14 [8];
  undefined8 uVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  undefined1 local_d8;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [8];
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_108;
  local_b8 = &DAT_1807bfe90;
  uStack_b0 = 2;
  plVar1 = (longlong *)(param_1 + 8);
  if (*plVar1 == 0) {
    *(undefined8 *)*param_2 = 0;
    *(undefined8 *)(*param_2 + 8) = 0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 7;
    *(undefined2 *)*param_2 = 0;
  }
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(short **)param_1;
  }
  psVar2 = param_1 + *plVar1;
  psVar8 = (short *)FUN_1800a7b00(param_1,psVar2);
  local_88 = (undefined1  [16])0x0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (param_1 == psVar8) {
    uStack_78 = 0;
    uStack_70 = 7;
    local_88._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar3._14_2_ = 0;
    auVar3._0_14_ = local_88._2_14_;
    local_88 = auVar3 << 0x10;
  }
  else {
    FUN_180159e60(local_88,param_1,(longlong)psVar8 - (longlong)param_1 >> 1);
  }
  psVar9 = (short *)local_88;
  if (7 < uStack_70) {
    psVar9 = (short *)local_88._0_8_;
  }
  psVar9 = psVar9 + uStack_78;
  psVar6 = (short *)local_88;
  if (7 < uStack_70) {
    psVar6 = (short *)local_88._0_8_;
  }
  for (; psVar6 != psVar9; psVar6 = psVar6 + 1) {
    if (*psVar6 == 0x2f) {
      *psVar6 = 0x5c;
    }
  }
  _local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)FUN_18015bca0(0x130);
  FUN_18063aed0(puVar10);
  if (local_a0 != (undefined1  [8])0x0) {
    if ((0xfff < ((longlong)local_90 - (longlong)local_a0 & 0xfffffffffffffff0U)) &&
       (0x1f < ((longlong)local_a0 - *(longlong *)((longlong)local_a0 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
  local_90 = puVar10 + 0x26;
  bVar4 = false;
  local_a0 = (undefined1  [8])puVar10;
  puStack_98 = puVar10;
  if (psVar8 == psVar2) goto LAB_18017d43f;
  if (*psVar8 == 0x5c) {
LAB_18017d2d5:
    bVar4 = true;
    if (uStack_78 < uStack_70) {
      puVar11 = local_88;
      if (7 < uStack_70) {
        puVar11 = (undefined1 *)local_88._0_8_;
      }
      lVar16 = uStack_78 * 2;
      uStack_78 = uStack_78 + 1;
      *(undefined4 *)(puVar11 + lVar16) = 0x5c;
    }
    else {
      FUN_18010f7f0(local_88,1,local_d8);
    }
    psVar8 = psVar8 + 1;
    puVar10 = puStack_98;
    if (psVar8 != psVar2) {
      do {
        if ((*psVar8 != 0x5c) && (*psVar8 != 0x2f)) goto LAB_18017d363;
        psVar8 = psVar8 + 1;
      } while (psVar8 != psVar2);
      goto LAB_18017d43f;
    }
LAB_18017d363:
    if (psVar8 == psVar2) goto LAB_18017d43f;
  }
  else if (*psVar8 == 0x2f) goto LAB_18017d2d5;
  do {
    if ((*psVar8 == 0x5c) || (psVar9 = psVar8, *psVar8 == 0x2f)) {
      if ((local_a0 == (undefined1  [8])puVar10) || (puVar10[-1] != 0)) {
        if (puVar10 == local_90) {
          FUN_1801b41d0(local_a0,puVar10);
          puVar10 = puStack_98;
        }
        else {
          *puVar10 = 0;
          puVar10[1] = 0;
          puStack_98 = puStack_98 + 2;
          puVar10 = puStack_98;
        }
      }
      psVar9 = psVar8 + 1;
    }
    else {
      do {
        psVar9 = psVar9 + 1;
        if ((psVar9 == psVar2) || (*psVar9 == 0x5c)) break;
      } while (*psVar9 != 0x2f);
      if (puVar10 == local_90) {
        FUN_1801b4330(local_a0,puVar10);
        puVar10 = puStack_98;
      }
      else {
        *puVar10 = psVar8;
        puVar10[1] = (longlong)psVar9 - (longlong)psVar8 >> 1;
        puStack_98 = puStack_98 + 2;
        puVar10 = puStack_98;
      }
    }
    psVar8 = psVar9;
  } while (psVar9 != psVar2);
LAB_18017d43f:
  auVar13 = local_a0;
  if (local_a0 != (undefined1  [8])puVar10) {
    auVar12 = local_a0;
    auVar14 = local_a0;
    do {
      uVar15 = *(undefined8 *)auVar14;
      lVar16 = *(longlong *)((longlong)auVar14 + 8);
      auVar13 = auVar12;
      if ((*(longlong *)((longlong)auVar14 + 8) == 1) &&
         (iVar7 = FUN_1801594c0(*(undefined8 *)auVar14,&DAT_1807bfe8c), iVar7 == 0)) {
joined_r0x00018017d4fd:
        puVar10 = puStack_98;
        if ((undefined8 *)((longlong)auVar14 + 0x10) == puStack_98) break;
      }
      else {
        if ((lVar16 == 2) && (iVar7 = FUN_1801594c0(uVar15,&DAT_1807bfe90), iVar7 == 0)) {
          if ((auVar12 == local_a0) ||
             ((*(longlong *)((longlong)auVar12 + -0x18) == 2 &&
              (iVar7 = FUN_1801594c0(*(undefined8 *)((longlong)auVar12 + -0x20),&DAT_1807bfe90),
              iVar7 == 0)))) {
            if (!bVar4) {
              *(undefined **)auVar12 = local_b8;
              *(undefined8 *)((longlong)auVar12 + 8) = uStack_b0;
              goto LAB_18017d516;
            }
          }
          else {
            auVar13 = (undefined1  [8])((longlong)auVar12 + -0x20);
          }
          goto joined_r0x00018017d4fd;
        }
        *(undefined8 *)auVar12 = uVar15;
        *(longlong *)((longlong)auVar12 + 8) = lVar16;
LAB_18017d516:
        auVar13 = (undefined1  [8])((longlong)auVar12 + 0x10);
        puVar10 = puStack_98;
        if ((undefined8 *)((longlong)auVar14 + 0x10) == puStack_98) break;
        auVar13 = (undefined1  [8])((longlong)auVar12 + 0x20);
      }
      auVar14 = (undefined1  [8])((longlong)auVar14 + 0x20);
      auVar12 = auVar13;
      puVar10 = puStack_98;
    } while (auVar14 != (undefined1  [8])puStack_98);
  }
  if (auVar13 != (undefined1  [8])puVar10) {
    puVar10 = (undefined8 *)auVar13;
    puStack_98 = (undefined8 *)auVar13;
  }
  auVar13 = local_a0;
  if ((1 < (ulonglong)((longlong)puVar10 - (longlong)local_a0 >> 4)) && (puVar10[-1] == 0)) {
    if (puVar10[-3] == 2) {
      iVar7 = FUN_1801594c0(puVar10[-4],&DAT_1807bfe90);
      auVar13 = local_a0;
      puVar10 = puStack_98;
      if (iVar7 == 0) {
        puStack_98 = puStack_98 + -2;
        puVar10 = puStack_98;
      }
    }
  }
  for (; auVar13 != (undefined1  [8])puVar10; auVar13 = (undefined1  [8])((longlong)auVar13 + 0x10))
  {
    if (*(longlong *)((longlong)auVar13 + 8) == 0) {
      if (uStack_78 < uStack_70) {
        puVar11 = local_88;
        if (7 < uStack_70) {
          puVar11 = (undefined1 *)local_88._0_8_;
        }
        lVar16 = uStack_78 * 2;
        uStack_78 = uStack_78 + 1;
        *(undefined4 *)(puVar11 + lVar16) = 0x5c;
      }
      else {
        FUN_18010f7f0(local_88,1);
      }
    }
    else {
      FUN_1800f52e0(local_88,*(undefined8 *)auVar13);
    }
  }
  if (uStack_78 == 0) {
    FUN_1800f5190(local_88,&DAT_1807bfe8c);
  }
  *(undefined8 *)*param_2 = local_88._0_8_;
  *(undefined8 *)(*param_2 + 8) = local_88._8_8_;
  *(ulonglong *)param_2[1] = uStack_78;
  *(ulonglong *)(param_2[1] + 8) = uStack_70;
  uStack_78 = 0;
  uStack_70 = 7;
  auVar5._14_2_ = 0;
  auVar5._0_14_ = local_88._2_14_;
  local_88 = auVar5 << 0x10;
  if (local_a0 != (undefined1  [8])0x0) {
    if ((0xfff < ((longlong)local_90 - (longlong)local_a0 & 0xfffffffffffffff0U)) &&
       (0x1f < (ulonglong)((longlong)local_a0 + (-8 - *(longlong *)((longlong)local_a0 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
    local_a0 = (undefined1  [8])0x0;
    puStack_98 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
  }
  FUN_18015b930(local_88);
}



