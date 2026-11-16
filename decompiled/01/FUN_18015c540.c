// FUN_18015c540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18015c540(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  undefined8 *******pppppppuVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined **ppuVar20;
  uint uVar21;
  longlong *unaff_RSI;
  uint uVar22;
  ulonglong uVar23;
  undefined **ppuVar24;
  uint unaff_R12D;
  bool bVar25;
  undefined1 auStack_528 [48];
  undefined1 local_4f8 [16];
  undefined1 local_4e8;
  char local_4e7 [7];
  uint local_4e0 [2];
  char local_4d8 [8];
  uint local_4d0 [2];
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined1 local_4c0 [13];
  undefined2 local_4b3;
  undefined1 local_4b1;
  undefined2 local_4af;
  undefined1 local_4ad;
  undefined1 local_4a0 [16];
  undefined8 local_490;
  undefined8 local_488;
  undefined1 local_480 [24];
  undefined1 local_468 [32];
  undefined1 local_448 [56];
  undefined8 local_410;
  undefined1 local_408 [56];
  undefined1 local_3d0 [56];
  undefined1 local_398 [56];
  undefined1 local_360 [56];
  undefined1 local_328 [56];
  undefined1 local_2f0 [56];
  undefined1 local_2b8 [56];
  undefined1 local_280 [56];
  undefined1 local_248 [56];
  undefined1 local_210 [56];
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  ulonglong uStack_1d0;
  undefined **local_1c8;
  longlong lStack_1c0;
  undefined *local_1b8;
  undefined5 local_1b0;
  undefined2 uStack_1ab;
  undefined1 uStack_1a9;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 *******local_188 [2];
  undefined8 local_178;
  ulonglong local_170;
  undefined1 local_168 [16];
  longlong local_158;
  int iStack_14c;
  longlong local_148 [2];
  undefined1 local_138 [160];
  undefined **local_98 [12];
  ulonglong local_38;
  uint auStack_30 [2];
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_528;
  local_4e0[0] = 0;
  FUN_1800a8ec0(local_168);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (local_158 == 0) {
      uStack_1d6 = 0;
      uStack_1d0 = 0;
      local_1c8 = (undefined **)0x0;
      lStack_1c0 = 7;
      local_1d8 = 0;
      puVar5 = &local_1d8;
      uVar21 = 1;
    }
    else {
      local_4a0 = (undefined1  [16])0x0;
      local_490 = 0;
      local_488 = 0;
      FUN_180159e60(local_4a0,L"Settings/menu.json",0x12);
      local_4e0[0] = 0x62;
      puVar5 = (undefined2 *)FUN_1800a7e60(local_468,local_168,local_4a0);
      uVar21 = 0x66;
    }
    local_4e0[0] = uVar21;
    FUN_1800f5370(local_4c0,puVar5);
    puVar19 = local_4c0;
    uVar21 = uVar21 | 8;
  }
  else {
    FUN_1800f5370(local_1a8,param_1);
    puVar19 = local_1a8;
    uVar21 = 0x10;
  }
  local_4e0[0] = uVar21;
  FUN_1800f5370(local_188,puVar19);
  if ((uVar21 & 0x10) != 0) {
    uVar21 = uVar21 & 0xffffffef;
    FUN_18015b930(local_1a8);
  }
  if ((uVar21 & 8) != 0) {
    uVar21 = uVar21 & 0xfffffff7;
    FUN_18015b930(local_4c0);
  }
  if ((uVar21 & 4) != 0) {
    uVar21 = uVar21 & 0xfffffffb;
    FUN_18015b930(local_468);
  }
  if ((uVar21 & 2) != 0) {
    uVar21 = uVar21 & 0xfffffffd;
    FUN_18015b930(local_4a0);
  }
  if ((uVar21 & 1) != 0) {
    FUN_18015b930(&local_1d8);
  }
  local_1a8._8_8_ = 0x77;
  local_1a8._0_8_ = 0x2d0000002e;
  local_198 = 0;
  local_4e8 = 0;
  pppppppuVar13 = local_188;
  if (7 < local_170) {
    pppppppuVar13 = local_188[0];
  }
  ppuVar24 = (undefined **)0xffffffff;
  iVar3 = FUN_1805fb620(pppppppuVar13,&local_1d8,9);
  if (((iVar3 != 0) || (uStack_1d0 == 0)) || (0x2000 < uStack_1d0)) goto LAB_18015d676;
  FUN_18063ab10(local_148,0,0x110);
  FUN_18015e690(local_148,local_188,1);
  local_410 = 0;
  FUN_18015e870(&local_1b8,local_148,local_448);
  if (((char)local_1b8 != '\x01') ||
     (plVar16 = (longlong *)CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0)),
     plVar6 = (longlong *)FUN_1800f6de0(plVar16,local_4f8,"version"), *plVar6 == *plVar16))
  goto LAB_18015d5d1;
  local_1d8 = 0;
  uStack_1d6 = 0;
  uStack_1d0 = 0;
  local_1c8 = (undefined **)0x0;
  lStack_1c0 = 0;
  FUN_18015ba30(&local_1d8,"version",7);
  pcVar7 = (char *)FUN_180113610(&local_1b8,&local_1d8);
  FUN_18015c010(&local_1d8);
  if ((*pcVar7 != '\x05') && (*pcVar7 != '\x06')) goto LAB_18015d5d1;
  local_1d8 = 0;
  uStack_1d6 = 0;
  uStack_1d0 = 0;
  local_1c8 = (undefined **)0x0;
  lStack_1c0 = 0;
  FUN_18015ba30(&local_1d8,"version",7);
  uVar8 = FUN_180113610(&local_1b8,&local_1d8);
  FUN_18015c010(&local_1d8);
  local_4f8 = ZEXT816(0);
  FUN_1801409d0(local_4f8 + 8,0);
  local_4f8[0] = 5;
  local_4f8._8_8_ = 1;
  cVar2 = FUN_1800f3780(uVar8,local_4f8);
  FUN_1801409d0(local_4f8 + 8,local_4f8[0]);
  if (cVar2 == '\0') {
    local_1d8 = 0;
    uStack_1d6 = 0;
    uStack_1d0 = 0;
    local_1c8 = (undefined **)0x0;
    lStack_1c0 = 0;
    FUN_18015ba30(&local_1d8,"version",7);
    uVar8 = FUN_180113610(&local_1b8,&local_1d8);
    FUN_18015c010(&local_1d8);
    local_4f8 = ZEXT816(0);
    FUN_1801409d0(local_4f8 + 8,0);
    local_4f8[0] = 5;
    local_4f8._8_8_ = 2;
    cVar2 = FUN_1800f3780(uVar8,local_4f8);
    FUN_1801409d0(local_4f8 + 8,local_4f8[0]);
    if (cVar2 == '\0') goto LAB_18015d5d1;
  }
  if ((char)local_1b8 == '\x01') {
    plVar16 = *(longlong **)CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0));
    plVar6 = (longlong *)plVar16[1];
    cVar2 = *(char *)((longlong)plVar6 + 0x19);
    unaff_RSI = plVar16;
    while (cVar2 == '\0') {
      uVar10 = plVar6[6];
      plVar17 = plVar6 + 4;
      if (0xf < (ulonglong)plVar6[7]) {
        plVar17 = (longlong *)*plVar17;
      }
      uVar23 = uVar10;
      if (4 < uVar10) {
        uVar23 = 4;
      }
      iVar3 = memcmp(plVar17,&DAT_1807005f0,uVar23);
      if (iVar3 == 0) {
        if (3 < uVar10) goto LAB_18015ca26;
LAB_18015cc39:
        plVar6 = plVar6 + 2;
      }
      else {
        if (iVar3 < 0) goto LAB_18015cc39;
LAB_18015ca26:
        unaff_RSI = plVar6;
      }
      plVar6 = (longlong *)*plVar6;
      cVar2 = *(char *)((longlong)plVar6 + 0x19);
    }
    if (*(char *)((longlong)unaff_RSI + 0x19) == '\0') {
      plVar6 = unaff_RSI + 4;
      uVar10 = unaff_RSI[6];
      if (0xf < (ulonglong)unaff_RSI[7]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar23 = uVar10;
      if (4 < uVar10) {
        uVar23 = 4;
      }
      iVar3 = memcmp(plVar6,&DAT_1807005f0,uVar23);
      if (iVar3 == 0) {
        if (uVar10 < 5) goto LAB_18015cc4c;
      }
      else if (iVar3 < 0) {
LAB_18015cc4c:
        if (unaff_RSI != plVar16) {
          local_1d8 = 0;
          uStack_1d6 = 0;
          uStack_1d0 = 0;
          local_1c8 = (undefined **)0x0;
          lStack_1c0 = 0;
          FUN_18015ba30(&local_1d8,&DAT_1807005f0,4);
          pcVar7 = (char *)FUN_180113610(&local_1b8,&local_1d8);
          FUN_18015c010(&local_1d8);
          if (*pcVar7 == '\x02') {
            local_1d8 = 0;
            uStack_1d6 = 0;
            uStack_1d0 = 0;
            local_1c8 = (undefined **)0x0;
            lStack_1c0 = 0;
            FUN_18015ba30(&local_1d8,&DAT_1807005f0,4);
            uVar8 = FUN_180113610(&local_1b8,&local_1d8);
            FUN_18015c010(&local_1d8);
            uVar10 = FUN_1800f3d40(uVar8);
            if (uVar10 < 7) {
              local_4c8 = 0;
              local_4c4 = 0;
              lVar14 = 0;
              do {
                lVar15 = lVar14 + 1;
                if (*(char *)((longlong)local_4d0 + lVar14 + 8) != local_4c0[lVar14 + -4]) break;
                lVar14 = lVar15;
              } while (lVar15 != 4);
              local_198 = 0;
              local_1a8 = (undefined1  [16])0x0;
              uVar10 = 0;
              while( true ) {
                local_1d8 = 0;
                uStack_1d6 = 0;
                uStack_1d0 = 0;
                local_1c8 = (undefined **)0x0;
                lStack_1c0 = 0;
                FUN_18015ba30(&local_1d8,&DAT_1807005f0,4);
                uVar8 = FUN_180113610(&local_1b8,&local_1d8);
                FUN_18015c010(&local_1d8);
                uVar23 = FUN_1800f3d40(uVar8);
                if (uVar23 <= uVar10) break;
                local_1d8 = 0;
                uStack_1d6 = 0;
                uStack_1d0 = 0;
                local_1c8 = (undefined **)0x0;
                lStack_1c0 = 0;
                FUN_18015ba30(&local_1d8,&DAT_1807005f0,4);
                pcVar7 = (char *)FUN_180113610(&local_1b8,&local_1d8);
                FUN_18015c010(&local_1d8);
                if (*pcVar7 != '\x02') {
                  uVar8 = FUN_180112a50(pcVar7);
                  local_4f8._0_8_ = uVar8;
                  uVar8 = FUN_18010f410(&local_1d8);
                  FUN_1800f6ca0(local_408,0x131,uVar8);
                    /* WARNING: Subroutine does not return */
                  FUN_180606630(local_408,&DAT_1808d1050);
                }
                pcVar7 = (char *)(**(longlong **)(pcVar7 + 8) + uVar10 * 0x10);
                if ((*pcVar7 != '\x05') && (*pcVar7 != '\x06')) {
                  FUN_18015c090(local_480,"Invalid shortcut type");
                    /* WARNING: Subroutine does not return */
                  FUN_180606630(local_480,&DAT_1808d12a8);
                }
                local_4f8 = ZEXT816(0);
                FUN_1801409d0(local_4f8 + 8,0);
                local_4f8[0] = 5;
                local_4f8._8_8_ = 8;
                FUN_180112ae0(pcVar7,local_4d8,local_4f8);
                FUN_1801409d0(local_4f8 + 8,local_4f8[0]);
                if (local_4d8[0] < '\0') {
LAB_18015cf44:
                  *(undefined4 *)(local_1a8 + uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                }
                else {
                  local_4f8 = ZEXT816(0);
                  FUN_1801409d0(local_4f8 + 8,0);
                  local_4f8[0] = 5;
                  local_4f8._8_8_ = 0xff;
                  FUN_180112ae0(pcVar7,local_4e7,local_4f8);
                  FUN_1801409d0(local_4f8 + 8,local_4f8[0]);
                  if (local_4e7[0] != -1) goto LAB_18015cf44;
                  uVar4 = FUN_1800e62a0(pcVar7);
                  *(undefined4 *)(local_1a8 + uVar10 * 4) = uVar4;
                  uVar10 = uVar10 + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  local_1d8 = 0;
  uStack_1d6 = 0;
  uStack_1d0 = 0;
  local_1c8 = (undefined **)0x0;
  lStack_1c0 = 0;
  FUN_18015ba30(&local_1d8,"version",7);
  uVar8 = FUN_180113610(&local_1b8,&local_1d8);
  FUN_18015c010(&local_1d8);
  local_4f8 = ZEXT816(0);
  FUN_1801409d0(local_4f8 + 8,0);
  local_4f8[0] = 5;
  local_4f8._8_8_ = 1;
  cVar2 = FUN_1800f3780(uVar8,local_4f8);
  FUN_1801409d0(local_4f8 + 8,local_4f8[0]);
  if (cVar2 == '\0') goto LAB_18015d5d1;
  bVar25 = (char)local_1b8 == '\x01';
  local_4e0[0] = CONCAT31(local_4e0[0]._1_3_,bVar25);
  plVar16 = (longlong *)CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0));
  if (!bVar25) {
LAB_18015cb58:
    if (bVar25) {
      cVar2 = -0x58;
      puVar9 = (undefined8 *)FUN_1800f6de0(plVar16,local_4f8);
      plVar6 = (longlong *)*plVar16;
      if ((longlong *)*puVar9 != plVar6) goto LAB_18015d03f;
      plVar17 = (longlong *)plVar6[1];
      unaff_R12D = 0xb;
      unaff_RSI = plVar6;
      if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
        do {
          uVar10 = plVar17[6];
          plVar16 = plVar17 + 4;
          if (0xf < (ulonglong)plVar17[7]) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar23 = uVar10;
          if (0xb < uVar10) {
            uVar23 = 0xb;
          }
          iVar3 = memcmp(plVar16,"duration_ms",uVar23);
          if (iVar3 == 0) {
            if (10 < uVar10) goto LAB_18015cbd6;
LAB_18015cf5f:
            plVar17 = plVar17 + 2;
          }
          else {
            if (iVar3 < 0) goto LAB_18015cf5f;
LAB_18015cbd6:
            unaff_RSI = plVar17;
          }
          plVar17 = (longlong *)*plVar17;
        } while (*(char *)((longlong)plVar17 + 0x19) == '\0');
        plVar16 = (longlong *)CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0));
      }
      if (*(char *)((longlong)unaff_RSI + 0x19) == '\0') {
        plVar17 = unaff_RSI + 4;
        uVar10 = unaff_RSI[6];
        if (0xf < (ulonglong)unaff_RSI[7]) {
          plVar17 = (longlong *)*plVar17;
        }
        uVar23 = uVar10;
        if (0xb < uVar10) {
          uVar23 = 0xb;
        }
        iVar3 = memcmp(plVar17,"duration_ms",uVar23);
        cVar2 = (char)uVar23;
        if (iVar3 == 0) {
          if (uVar10 < 0xc) goto LAB_18015cf6e;
        }
        else if (iVar3 < 0) {
LAB_18015cf6e:
          if (unaff_RSI != plVar6) goto LAB_18015d03f;
        }
      }
    }
    bVar25 = (char)local_4e0[0] != '\0';
    if (bVar25) {
      plVar6 = (longlong *)*plVar16;
      plVar17 = (longlong *)plVar6[1];
      unaff_R12D = 0xe;
      unaff_RSI = plVar6;
      if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
        do {
          uVar10 = plVar17[6];
          plVar16 = plVar17 + 4;
          if (0xf < (ulonglong)plVar17[7]) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar23 = uVar10;
          if (0xe < uVar10) {
            uVar23 = 0xe;
          }
          iVar3 = memcmp(plVar16,"reduced_motion",uVar23);
          if (iVar3 == 0) {
            if (0xd < uVar10) goto LAB_18015cfce;
LAB_18015d026:
            plVar17 = plVar17 + 2;
          }
          else {
            if (iVar3 < 0) goto LAB_18015d026;
LAB_18015cfce:
            unaff_RSI = plVar17;
          }
          plVar17 = (longlong *)*plVar17;
        } while (*(char *)((longlong)plVar17 + 0x19) == '\0');
        plVar16 = (longlong *)CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0));
      }
      if (*(char *)((longlong)unaff_RSI + 0x19) == '\0') {
        plVar17 = unaff_RSI + 4;
        uVar10 = unaff_RSI[6];
        if (0xf < (ulonglong)unaff_RSI[7]) {
          plVar17 = (longlong *)*plVar17;
        }
        uVar23 = uVar10;
        if (0xe < uVar10) {
          uVar23 = 0xe;
        }
        iVar3 = memcmp(plVar17,"reduced_motion",uVar23);
        cVar2 = (char)uVar23;
        if (iVar3 == 0) {
          if (uVar10 < 0xf) goto LAB_18015d036;
        }
        else if (iVar3 < 0) {
LAB_18015d036:
          if (unaff_RSI != plVar6) goto LAB_18015d03f;
        }
      }
    }
    goto LAB_18015d5d1;
  }
  cVar2 = -0x60;
  plVar6 = (longlong *)FUN_1800f6de0(plVar16,local_4f8);
  if (*plVar6 == *plVar16) goto LAB_18015cb58;
LAB_18015d03f:
  uVar21 = (uint)unaff_RSI;
  local_4f8._0_4_ = 4;
  local_4d0[0] = 0;
  if ((char)local_4e0[0] == '\0') {
    uVar8 = FUN_180112a50(&local_1b8);
    local_4f8._0_8_ = uVar8;
    uVar8 = FUN_1800f6bd0(&local_1d8,"cannot use value() with ",local_4f8);
    FUN_1800f6ca0(local_210,0x132,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_210,&DAT_1808d1050);
  }
  ppuVar20 = &local_1b8;
  local_1d8 = SUB82(ppuVar20,0);
  uStack_1d6 = (undefined6)((ulonglong)ppuVar20 >> 0x10);
  uStack_1d0 = 0;
  local_1c8 = (undefined **)0x0;
  lStack_1c0 = -0x8000000000000000;
  switch((char)local_1b8) {
  case '\0':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)local_1b8 & 0xff) {
    default:
      goto switchD_18015d0a9_default;
    case 1:
      goto switchD_18015d0a9_caseD_1;
    case 2:
      goto switchD_18015d0a9_caseD_2;
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      goto switchD_18015d134_caseD_0;
    case 0xb:
      goto switchD_18015d134_caseD_1;
    case 0xc:
      goto switchD_18015d134_caseD_2;
    case 0x14:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
                    /* WARNING: Could not recover jumptable at 0x00018015d1ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(&UINT_18015dbdc)[(longlong)ppuVar20] + 0x180000000))
                ((code *)((ulonglong)(&UINT_18015dbdc)[(longlong)ppuVar20] + 0x180000000));
      return;
    case 0x15:
    case 0x1f:
      goto switchD_18015d0b5_caseD_15;
    case 0x16:
    case 0x20:
      local_1c8 = *(undefined ***)(ppuVar24[1] + 8);
      goto LAB_18015d230;
    case 0x1e:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      local_4d0[0] = 0;
      local_1c8 = (undefined **)0x0;
      uStack_1d0 = 0;
      lStack_1c0 = 1;
      goto LAB_18015d230;
    case 0x28:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
      goto switchD_18015d299_caseD_0;
    case 0x29:
      goto switchD_18015d299_caseD_1;
    case 0x2a:
      goto switchD_18015d299_caseD_2;
    case 0x32:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
                    /* WARNING: Could not recover jumptable at 0x00018015d369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(&UINT_18015dc54)[(longlong)ppuVar20] + 0x180000000))
                ((code *)((ulonglong)(&UINT_18015dc54)[(longlong)ppuVar20] + 0x180000000));
      return;
    case 0x33:
    case 0x3d:
      goto switchD_18015d0b5_caseD_33;
    case 0x34:
    case 0x3e:
      local_1c8 = *(undefined ***)(ppuVar24[1] + 8);
      goto LAB_18015d39a;
    case 0x3c:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      local_4d0[0] = 0;
      local_1c8 = (undefined **)0x0;
      uStack_1d0 = 0;
      lStack_1c0 = 1;
      goto LAB_18015d39a;
    case 0x46:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
      goto switchD_18015d403_caseD_0;
    case 0x47:
      goto switchD_18015d403_caseD_1;
    case 0x48:
      goto switchD_18015d403_caseD_2;
    case 0x50:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
                    /* WARNING: Could not recover jumptable at 0x00018015d4c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(&UINT_18015dccc)[(longlong)ppuVar20] + 0x180000000))
                ((code *)((ulonglong)(&UINT_18015dccc)[(longlong)ppuVar20] + 0x180000000));
      return;
    case 0x51:
    case 0x5b:
      goto switchD_18015d0b5_caseD_51;
    case 0x52:
    case 0x5c:
      local_1c8 = *(undefined ***)(ppuVar24[1] + 8);
      break;
    case 0x5a:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      local_4d0[0] = 0;
      local_1c8 = (undefined **)0x0;
      uStack_1d0 = 0;
      lStack_1c0 = 1;
      break;
    case 100:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
      goto switchD_18015d563_caseD_0;
    case 0x65:
      goto switchD_18015d563_caseD_1;
    case 0x66:
      goto switchD_18015d563_caseD_2;
    }
    goto LAB_18015d4fa;
  case '\x01':
    break;
  case '\x02':
switchD_18015d0a9_caseD_2:
    local_1c8 = *(undefined ***)(CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0)) + 8);
    break;
  default:
switchD_18015d0a9_default:
    lStack_1c0 = 1;
  }
switchD_18015d0a9_caseD_1:
  puVar11 = (ulonglong *)FUN_1800f6de0(plVar16,local_4e0,"theme");
  uStack_1d0 = *puVar11;
  uVar8 = FUN_1800f3e20(&local_1b8,local_4c0);
  cVar2 = FUN_1800e6ca0(&local_1d8,uVar8);
  if (cVar2 == '\0') {
    ppuVar20 = (undefined **)CONCAT62(uStack_1d6,local_1d8);
    switch(*(char *)ppuVar20) {
    default:
switchD_18015d134_caseD_0:
      if (lStack_1c0 != 0) {
        FUN_18015bae0(&local_1d8,"cannot get value");
        FUN_1800f6e80(local_3d0,0xd6,&local_1d8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_3d0,&DAT_1808d0fe8);
      }
      break;
    case '\x01':
switchD_18015d134_caseD_1:
      ppuVar20 = (undefined **)(uStack_1d0 + 0x40);
      break;
    case '\x02':
switchD_18015d134_caseD_2:
      ppuVar20 = local_1c8;
    }
    local_4e0[0] = FUN_1800e62a0(ppuVar20);
  }
  else {
    local_4e0[0] = 0;
  }
  puVar18 = local_4d0;
  if (-1 < (int)local_4e0[0]) {
    puVar18 = local_4e0;
  }
  puVar12 = (uint *)local_4f8;
  if ((int)local_4e0[0] < 5) {
    puVar12 = puVar18;
  }
  unaff_R12D = *puVar12;
  local_4e0[0] = 4;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = local_4f8._4_12_;
  local_4f8 = auVar1 << 0x20;
  if ((char)local_1b8 != '\x01') {
    uVar8 = FUN_180112a50(&local_1b8);
    local_4f8._0_8_ = uVar8;
    uVar8 = FUN_1800f6bd0(&local_1d8,"cannot use value() with ",local_4f8);
    FUN_1800f6ca0(local_248,0x132,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_248,&DAT_1808d1050);
  }
  ppuVar24 = &local_1b8;
  local_1d8 = SUB82(ppuVar24,0);
  uStack_1d6 = (undefined6)((ulonglong)ppuVar24 >> 0x10);
  cVar2 = '\x01';
switchD_18015d0b5_caseD_15:
  lStack_1c0 = -0x8000000000000000;
  local_1c8 = (undefined **)0x0;
  uStack_1d0 = *(ulonglong *)ppuVar24[1];
LAB_18015d230:
  if (cVar2 != '\0') {
    puVar11 = (ulonglong *)
              FUN_1800f6de0(CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0)),local_4d0,"effect");
    uStack_1d0 = *puVar11;
  }
  uVar8 = FUN_1800f3e20(&local_1b8,local_4c0);
  cVar2 = FUN_1800e6ca0(&local_1d8,uVar8);
  if (cVar2 == '\0') {
    ppuVar20 = (undefined **)CONCAT62(uStack_1d6,local_1d8);
    switch(*(char *)ppuVar20) {
    default:
switchD_18015d299_caseD_0:
      if (lStack_1c0 != 0) {
        FUN_18015bae0(&local_1d8,"cannot get value");
        FUN_1800f6e80(local_398,0xd6,&local_1d8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_398,&DAT_1808d0fe8);
      }
      break;
    case '\x01':
switchD_18015d299_caseD_1:
      ppuVar20 = (undefined **)(uStack_1d0 + 0x40);
      break;
    case '\x02':
switchD_18015d299_caseD_2:
      ppuVar20 = local_1c8;
    }
    local_4d0[0] = FUN_1800e62a0(ppuVar20);
  }
  else {
    local_4d0[0] = 0;
  }
  puVar18 = (uint *)local_4f8;
  if (-1 < (int)local_4d0[0]) {
    puVar18 = local_4d0;
  }
  puVar12 = local_4e0;
  if ((int)local_4d0[0] < 5) {
    puVar12 = puVar18;
  }
  uVar21 = *puVar12;
  local_4e0[0] = 400;
  local_4f8._0_4_ = 100;
  if ((char)local_1b8 != '\x01') {
    uVar8 = FUN_180112a50(&local_1b8);
    local_4f8._0_8_ = uVar8;
    uVar8 = FUN_1800f6bd0(&local_1d8,"cannot use value() with ",local_4f8);
    FUN_1800f6ca0(local_280,0x132,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_280,&DAT_1808d1050);
  }
  ppuVar24 = &local_1b8;
  local_1d8 = SUB82(ppuVar24,0);
  uStack_1d6 = (undefined6)((ulonglong)ppuVar24 >> 0x10);
  cVar2 = '\x01';
switchD_18015d0b5_caseD_33:
  lStack_1c0 = -0x8000000000000000;
  local_1c8 = (undefined **)0x0;
  uStack_1d0 = *(ulonglong *)ppuVar24[1];
LAB_18015d39a:
  if (cVar2 != '\0') {
    puVar11 = (ulonglong *)
              FUN_1800f6de0(CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0)),local_4d0,
                            "duration_ms");
    uStack_1d0 = *puVar11;
  }
  uVar8 = FUN_1800f3e20(&local_1b8,local_4c0);
  cVar2 = FUN_1800e6ca0(&local_1d8,uVar8);
  if (cVar2 == '\0') {
    ppuVar20 = (undefined **)CONCAT62(uStack_1d6,local_1d8);
    switch(*(char *)ppuVar20) {
    default:
switchD_18015d403_caseD_0:
      if (lStack_1c0 != 0) {
        FUN_18015bae0(&local_1d8,"cannot get value");
        FUN_1800f6e80(local_360,0xd6,&local_1d8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_360,&DAT_1808d0fe8);
      }
      break;
    case '\x01':
switchD_18015d403_caseD_1:
      ppuVar20 = (undefined **)(uStack_1d0 + 0x40);
      break;
    case '\x02':
switchD_18015d403_caseD_2:
      ppuVar20 = local_1c8;
    }
    local_4d0[0] = FUN_1800e62a0(ppuVar20);
  }
  else {
    local_4d0[0] = 200;
  }
  puVar18 = (uint *)local_4f8;
  if (99 < (int)local_4d0[0]) {
    puVar18 = local_4d0;
  }
  puVar12 = local_4e0;
  if ((int)local_4d0[0] < 0x191) {
    puVar12 = puVar18;
  }
  plVar16 = (longlong *)(ulonglong)*puVar12;
  if ((char)local_1b8 != '\x01') {
    uVar8 = FUN_180112a50(&local_1b8);
    local_4f8._0_8_ = uVar8;
    uVar8 = FUN_1800f6bd0(&local_1d8,"cannot use value() with ",local_4f8);
    FUN_1800f6ca0(local_2b8,0x132,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_2b8,&DAT_1808d1050);
  }
  ppuVar24 = &local_1b8;
  local_1d8 = SUB82(ppuVar24,0);
  uStack_1d6 = (undefined6)((ulonglong)ppuVar24 >> 0x10);
  cVar2 = '\x01';
switchD_18015d0b5_caseD_51:
  lStack_1c0 = -0x8000000000000000;
  local_1c8 = (undefined **)0x0;
  uStack_1d0 = *(ulonglong *)ppuVar24[1];
LAB_18015d4fa:
  uVar22 = (uint)plVar16;
  if (cVar2 != '\0') {
    puVar11 = (ulonglong *)
              FUN_1800f6de0(CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,local_1b0)),local_4f8,
                            "reduced_motion");
    uStack_1d0 = *puVar11;
  }
  uVar8 = FUN_1800f3e20(&local_1b8,local_4c0);
  cVar2 = FUN_1800e6ca0(&local_1d8,uVar8);
  if (cVar2 == '\0') {
    ppuVar20 = (undefined **)CONCAT62(uStack_1d6,local_1d8);
    switch(*(char *)ppuVar20) {
    default:
switchD_18015d563_caseD_0:
      uVar22 = (uint)plVar16;
      if (lStack_1c0 != 0) {
        FUN_18015bae0(&local_1d8,"cannot get value");
        FUN_1800f6e80(local_2f0,0xd6,&local_1d8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_2f0,&DAT_1808d0fe8);
      }
      break;
    case '\x01':
switchD_18015d563_caseD_1:
      uVar22 = (uint)plVar16;
      ppuVar20 = (undefined **)(uStack_1d0 + 0x40);
      break;
    case '\x02':
switchD_18015d563_caseD_2:
      uVar22 = (uint)plVar16;
      ppuVar20 = local_1c8;
    }
    if (*(char *)ppuVar20 != '\x04') {
      uVar8 = FUN_180112a50(ppuVar20);
      local_4f8._0_8_ = uVar8;
      uVar8 = FUN_180156f00(&local_1d8);
      FUN_1800f6ca0(local_328,0x12e,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_328,&DAT_1808d1050);
    }
    local_4e7[0] = *(char *)(ppuVar20 + 1);
  }
  else {
    local_4e7[0] = '\0';
  }
  local_4f8._0_4_ = unaff_R12D;
  local_4b3 = uStack_1ab;
  local_4b1 = uStack_1a9;
  local_4e8 = 1;
  local_4e0[0] = uVar22;
  local_4d0[0] = uVar21;
LAB_18015d5d1:
  FUN_1801409d0(&local_1b0,(ulonglong)local_1b8 & 0xff);
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
       *(int *)(local_148[0] + 4) + -0xb0;
  FUN_1800f63e0(local_138);
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
       *(int *)(local_148[0] + 4) + -0x18;
  local_98[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_98);
LAB_18015d676:
  local_1b8 = &DAT_1808da600;
  iVar3 = FUN_1805f68d0(&DAT_1808da600);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da64c == 0x7fffffff) {
    DAT_1808da64c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  pppppppuVar13 = local_188;
  if (7 < local_170) {
    pppppppuVar13 = local_188[0];
  }
  FUN_1800f5190(&DAT_1808da668,pppppppuVar13,local_178);
  local_1d8 = local_1a8._0_2_;
  uStack_1d6 = local_1a8._2_6_;
  uStack_1d0 = local_1a8._8_8_;
  local_1c8 = (undefined **)local_198;
  puVar9 = (undefined8 *)FUN_18015c2e0(local_1a8,&local_1d8);
  _DAT_1808da650 = *puVar9;
  uRam00000001808da658 = puVar9[1];
  DAT_1808da660 = puVar9[2];
  DAT_180bbe878 = local_4f8._0_4_;
  DAT_180bbe87c = local_4d0[0];
  DAT_180bbe880 = local_4e0[0];
  DAT_180bbe884 = local_4e7[0];
  _DAT_180bbe885 = local_4b3;
  DAT_180bbe887 = local_4b1;
  DAT_180bbe888 = local_4e8;
  _DAT_180bbe889 = local_4af;
  DAT_180bbe88b = local_4ad;
  DAT_180bb904c = 0;
  LOCK();
  DAT_180bb904b = 0;
  UNLOCK();
  DAT_180bbe8b8 = DAT_180bbe8b8 + 1;
  FUN_18015c470();
  FUN_1805f68fc(&DAT_1808da600);
  FUN_18015b930(local_188);
  FUN_18015b930(local_168);
}



