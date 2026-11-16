// FUN_180173120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180173120 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180173120(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [14];
  char cVar31;
  undefined1 uVar32;
  int iVar33;
  longlong *plVar34;
  longlong lVar35;
  char *pcVar36;
  char *pcVar37;
  undefined8 *puVar38;
  int *piVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  longlong *plVar43;
  byte *pbVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 (*pauVar47) [16];
  uint uVar48;
  void *_Buf1;
  byte bVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [64];
  undefined1 auStack_748 [32];
  uint local_728;
  ulonglong local_720;
  undefined1 local_718 [16];
  undefined1 auStack_708 [16];
  undefined8 local_6f0;
  longlong local_6e8 [2];
  undefined8 *local_6d8;
  longlong *local_6d0;
  undefined1 local_6c8 [16];
  undefined1 auStack_6b8 [16];
  undefined8 local_698 [2];
  undefined8 local_688;
  undefined1 local_680 [8];
  undefined1 local_678 [16];
  undefined1 auStack_668 [16];
  undefined1 local_658;
  undefined7 uStack_657;
  undefined8 uStack_650;
  undefined1 auStack_648 [16];
  undefined1 local_638;
  undefined7 uStack_637;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  undefined8 uStack_618;
  undefined8 uStack_610;
  longlong local_608;
  ulonglong local_600;
  undefined1 local_5f0 [16];
  undefined1 auStack_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 auStack_5c0 [16];
  undefined8 local_5b0 [2];
  undefined8 local_5a0;
  undefined1 local_598 [16];
  undefined8 local_588;
  undefined1 local_580 [16];
  undefined1 auStack_570 [16];
  undefined1 local_560 [16];
  undefined1 auStack_550 [16];
  undefined1 local_540 [16];
  undefined1 auStack_530 [16];
  byte *local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  longlong local_500;
  ulonglong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 *local_4c8;
  longlong *local_4c0;
  undefined1 *local_4b8;
  undefined8 *local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulonglong uStack_498;
  ulonglong uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 local_438 [56];
  undefined1 local_400 [56];
  undefined1 local_3c8 [56];
  undefined1 local_390 [56];
  undefined1 local_358 [56];
  undefined1 local_320 [56];
  undefined1 local_2e8 [56];
  undefined1 local_2b0 [56];
  undefined1 local_278 [56];
  undefined8 local_240;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined1 local_220 [16];
  longlong local_210;
  byte *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [3];
  undefined1 local_1d0 [24];
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 local_f8 [35];
  undefined1 local_d5;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  uVar48 = 0;
  local_728 = 0;
  local_608 = param_1;
  local_4f0 = param_1;
  local_6e8[0] = FUN_1801717d0(param_1 + 0x58,local_1e8);
  uVar46 = *(ulonglong *)(local_6e8[0] + 0x18);
  local_4f8 = *(longlong *)(local_6e8[0] + 0x20) + uVar46;
  auVar51 = ZEXT1664(_DAT_18086d450);
  local_500 = local_6e8[0];
  do {
    local_720 = uVar46;
    local_600 = uVar46;
    if (uVar46 == local_4f8) {
      FUN_180111a20(local_1e8);
      uVar41 = local_1e8[0];
      local_1e8[0] = 0;
      FUN_1804547d0(uVar41,0x10);
      _Buf1 = (void *)(param_1 + 0x1a0);
      if (0xf < *(ulonglong *)(param_1 + 0x1b8)) {
        _Buf1 = *(void **)(param_1 + 0x1a0);
      }
      uVar46 = *(ulonglong *)(param_1 + 0x1b0);
      if (((0x15 < uVar46) && (iVar33 = memcmp(_Buf1,"hvhgod-internal-forks-",0x16), iVar33 == 0))
         && (uVar46 == 0x36)) {
        for (pbVar44 = (byte *)((longlong)_Buf1 + 0x16); pbVar44 != (byte *)((longlong)_Buf1 + 0x36)
            ; pbVar44 = pbVar44 + 1) {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
          iVar33 = isxdigit((uint)*pbVar44);
          if (iVar33 == 0) {
          }
        }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
        if (*(undefined1 **)(local_4f0 + 400) != (undefined1 *)0x0) {
          if ((*(char *)(param_1 + 0x231) == '\0') && (*(ulonglong *)(param_1 + 0x228) <= param_2))
          {
            local_6d8 = (undefined8 *)(param_1 + 0x180);
            if (0xf < *(ulonglong *)(param_1 + 0x198)) {
              local_6d8 = (undefined8 *)*local_6d8;
            }
            local_6d0 = (longlong *)*(undefined1 **)(local_4f0 + 400);
            FUN_180170670(&local_240,&local_6d8);
            if (lStack_230 != 0) {
              pauVar47 = (undefined1 (*) [16])(param_1 + 0x1a0);
              local_678 = (undefined1  [16])0x0;
              auStack_668 = (undefined1  [16])0x0;
              uVar46 = *(ulonglong *)(param_1 + 0x1b0);
              if (0xf < *(ulonglong *)(param_1 + 0x1b8)) {
                pauVar47 = *(undefined1 (**) [16])*pauVar47;
              }
              if (0x7fffffffffffffff < uVar46) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bb70();
              }
              auStack_668._0_8_ = uVar46;
              if (uVar46 < 0x10) {
                auStack_668._8_8_ = 0xf;
                local_678 = *pauVar47;
              }
              else {
                uVar40 = uVar46 | 0xf;
                uVar45 = 0x7fffffffffffffff;
                if ((uVar40 < 0x8000000000000000) && (uVar45 = uVar40, uVar40 < 0x16)) {
                  uVar45 = 0x16;
                }
                uVar41 = FUN_18015bca0(uVar45 + 1);
                local_678._0_8_ = uVar41;
                auStack_668._8_8_ = uVar45;
                FUN_18063aed0(uVar41,pauVar47,uVar46 + 1);
              }
              FUN_18015b360(&local_658,param_1 + 0x180);
              FUN_1800e60e0(local_1e8,"action");
              FUN_1800e60e0(local_1d0,"migrate");
              local_6d8 = local_1e8;
              local_6d0 = &local_1b8;
              FUN_1800f4e90(local_698,&local_6d8,1,2);
              local_688 = 0;
              local_6d8 = local_698;
              local_6d0 = (longlong *)local_680;
              FUN_1800f4e90(&local_638,&local_6d8,1,2);
              FUN_1800f5370(local_628,&local_240);
              local_4a8 = local_678._0_8_;
              uStack_4a0 = local_678._8_8_;
              uStack_498 = auStack_668._0_8_;
              uStack_490 = auStack_668._8_8_;
              auStack_668 = auVar51._0_16_;
              auVar26[0xf] = 0;
              auVar26._0_15_ = local_678._1_15_;
              local_678 = auVar26 << 8;
              uStack_480 = uStack_650;
              uStack_478 = auStack_648._0_8_;
              uStack_470 = auStack_648._8_8_;
              local_658 = 0;
              uStack_460 = uStack_630;
              local_638 = 0;
              uStack_630 = 0;
              local_458 = local_628._0_8_;
              uStack_450 = local_628._8_8_;
              uStack_448 = uStack_618;
              uStack_440 = uStack_610;
              uStack_618 = 0;
              uStack_610 = 7;
              auVar27._14_2_ = 0;
              auVar27._0_14_ = local_628._2_14_;
              local_628 = auVar27 << 0x10;
              auVar51 = ZEXT1664(auStack_668);
              auStack_648 = auStack_668;
              uVar32 = FUN_180171620(param_1 + 0x58,&local_4a8);
              *(undefined1 *)(param_1 + 0x231) = uVar32;
              FUN_18015b930(local_628);
              FUN_1801409d0(&uStack_630,local_638);
              FUN_18015c010(&local_658);
              FUN_18015c010(local_678);
              _eh_vector_destructor_iterator_(local_698,0x18,1,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_1e8,0x18,2,FUN_1800aab30);
            }
            FUN_18015b930(&local_240);
          }
          if (((*(char *)(param_1 + 0x230) == '\0') && (*(char *)(param_1 + 0x231) == '\0')) &&
             (*(ulonglong *)(param_1 + 0x220) <= param_2)) {
            FUN_18015b360(local_678,param_1 + 0x1a0);
            FUN_18015b360(&local_658,param_1 + 0x180);
            FUN_1800e60e0(local_1e8,"action");
            FUN_1800e60e0(local_1d0,&DAT_180701738);
            local_6d8 = local_1e8;
            local_6d0 = &local_1b8;
            FUN_1800f4e90(local_698,&local_6d8,1,2);
            local_688 = 0;
            local_6d8 = local_698;
            local_6d0 = (longlong *)local_680;
            FUN_1800f4e90(&local_638,&local_6d8,1,2);
            local_628._2_14_ = SUB1614((undefined1  [16])0x0,2);
            auVar30 = (undefined1  [14])local_628._2_14_;
            local_4a8 = local_678._0_8_;
            uStack_4a0 = local_678._8_8_;
            uStack_498 = auStack_668._0_8_;
            uStack_490 = auStack_668._8_8_;
            auStack_668 = auVar51._0_16_;
            auVar28[0xf] = 0;
            auVar28._0_15_ = local_678._1_15_;
            local_678 = auVar28 << 8;
            local_488 = CONCAT71(uStack_657,local_658);
            uStack_480 = uStack_650;
            uStack_478 = auStack_648._0_8_;
            uStack_470 = auStack_648._8_8_;
            local_658 = 0;
            local_468 = CONCAT71(uStack_637,local_638);
            uStack_460 = uStack_630;
            local_638 = 0;
            uStack_630 = 0;
            local_628._8_8_ = SUB168((undefined1  [16])0x0,8);
            local_458 = 0;
            uStack_450 = local_628._8_8_;
            uStack_448 = 0;
            uStack_440 = 7;
            uStack_618 = 0;
            uStack_610 = 7;
            auVar29._14_2_ = 0;
            auVar29._0_14_ = auVar30;
            local_628 = auVar29 << 0x10;
            auStack_648 = auStack_668;
            uVar32 = FUN_180171620(param_1 + 0x58,&local_4a8);
            *(undefined1 *)(param_1 + 0x230) = uVar32;
            FUN_18015b930(local_628);
            FUN_1801409d0(&uStack_630,local_638);
            FUN_18015c010(&local_658);
            FUN_18015c010(local_678);
            _eh_vector_destructor_iterator_(local_698,0x18,1,FUN_1800aab30);
            _eh_vector_destructor_iterator_(local_1e8,0x18,2,FUN_1800aab30);
          }
        }
      }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
    }
    puVar1 = *(undefined8 **)
              (*(longlong *)(local_6e8[0] + 8) +
              (*(longlong *)(local_6e8[0] + 0x10) - 1U & uVar46) * 8);
    puVar42 = (undefined8 *)(param_1 + 0x180);
    puVar38 = puVar1 + 4;
    if (0xf < *(ulonglong *)(param_1 + 0x198)) {
      puVar42 = (undefined8 *)*puVar42;
    }
    sVar2 = puVar1[6];
    if (0xf < (ulonglong)puVar1[7]) {
      puVar38 = (undefined8 *)*puVar38;
    }
    if ((sVar2 != *(size_t *)(param_1 + 400)) ||
       ((sVar2 != 0 && (iVar33 = memcmp(puVar38,puVar42,sVar2), iVar33 != 0)))) goto LAB_1801743a2;
    puVar38 = (undefined8 *)(param_1 + 0x1a0);
    if (0xf < *(ulonglong *)(param_1 + 0x1b8)) {
      puVar38 = (undefined8 *)*puVar38;
    }
    sVar2 = puVar1[2];
    puVar42 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar42 = (undefined8 *)*puVar1;
    }
    if ((sVar2 != *(size_t *)(param_1 + 0x1b0)) ||
       ((sVar2 != 0 && (iVar33 = memcmp(puVar42,puVar38,sVar2), iVar33 != 0)))) goto LAB_1801743a2;
    lVar35 = puVar1[10];
    plVar43 = puVar1 + 8;
    uVar45 = puVar1[0xb];
    plVar34 = plVar43;
    if (0xf < uVar45) {
      plVar34 = (longlong *)*plVar43;
    }
    if ((((lVar35 == 7) && ((int)*plVar34 == 0x7267696d)) &&
        (*(short *)((longlong)plVar34 + 4) == 0x7461)) && (*(char *)((longlong)plVar34 + 6) == 'e'))
    {
      *(undefined1 *)(param_1 + 0x231) = 0;
      cVar31 = FUN_1800e6540(puVar1 + 0xc,"error");
      lVar35 = param_2 + 15000;
      if (cVar31 == '\0') {
        lVar35 = -1;
      }
      *(longlong *)(param_1 + 0x228) = lVar35;
    }
    else {
      if (0xf < uVar45) {
        plVar43 = (longlong *)*plVar43;
      }
      if ((lVar35 == 4) && (*(int *)plVar43 == 0x7473696c)) {
        *(undefined1 *)(param_1 + 0x230) = 0;
        *(ulonglong *)(param_1 + 0x220) = param_2 + 15000;
      }
      else {
        piVar39 = (int *)(puVar1 + 8);
        if (0xf < uVar45) {
          piVar39 = (int *)puVar1[8];
        }
        if (((lVar35 != 5) || (*piVar39 != 0x61656c63)) || ((char)piVar39[1] != 'r')) {
          *(undefined1 *)(param_1 + 0x232) = 0;
        }
      }
    }
    cVar31 = FUN_1800e6540(puVar1 + 0xc,"error");
    if (cVar31 != '\0') {
      piVar39 = (int *)(puVar1 + 8);
      if (0xf < (ulonglong)puVar1[0xb]) {
        piVar39 = (int *)puVar1[8];
      }
      if ((puVar1[10] != 4) || (*piVar39 != 0x7473696c)) {
        piVar39 = (int *)(puVar1 + 8);
        if (0xf < (ulonglong)puVar1[0xb]) {
          piVar39 = (int *)puVar1[8];
        }
        if (puVar1[10] == 5) {
          iVar33 = *piVar39 + -0x61656c63;
          if (iVar33 == 0) {
            iVar33 = *(byte *)(piVar39 + 1) - 0x72;
          }
          if (iVar33 == 0) goto LAB_1801743a2;
        }
        pcVar36 = (char *)FUN_1801757b0(puVar1 + 0xc,"error");
        local_4d8 = auVar51._0_16_;
        local_4e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar50[0xf] = 0;
        auVar50._0_15_ = local_4e8._1_15_;
        local_4e8 = auVar50 << 8;
        local_728 = uVar48 | 0x4000;
        if (*pcVar36 != '\x03') {
          local_720 = FUN_180112a50(pcVar36);
          uVar41 = FUN_1800f6bd0(&local_240,"type must be string, but is ",&local_720);
          FUN_1800f6ca0(local_438,0x12e,uVar41);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_438,&DAT_1808d1050);
        }
        plVar43 = *(longlong **)(pcVar36 + 8);
        if ((longlong *)local_4e8 != plVar43) {
          plVar34 = plVar43 + 2;
          if (0xf < (ulonglong)plVar43[3]) {
            plVar43 = (longlong *)*plVar43;
          }
          FUN_180113930(local_4e8,plVar43,*plVar34);
        }
        uVar48 = uVar48 | 0x2000;
        local_728 = uVar48;
        FUN_18016df60(param_1,local_4e8,0);
        FUN_18015c010(local_4e8);
      }
      goto LAB_1801743a2;
    }
    cVar31 = FUN_1800e6540(puVar1 + 0xc,"forks");
    if (cVar31 == '\0') goto LAB_1801743a2;
    local_220 = (undefined1  [16])0x0;
    local_210 = 0;
    local_208 = (byte *)FUN_1801757b0(puVar1 + 0xc,"forks");
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0x8000000000000000;
    bVar49 = *local_208;
    switch(bVar49) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar49) {
      case 0:
        local_1f0 = 1;
        break;
      case 1:
        goto switchD_1801734e1_caseD_1;
      case 2:
        goto switchD_1801734e1_caseD_2;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        goto switchD_1801734e1_default;
      default:
        goto switchD_180173565_caseD_0;
      case 0xb:
      case 0x15:
        goto switchD_180173565_caseD_1;
      case 0xc:
      case 0x16:
        goto switchD_180173565_caseD_2;
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
        goto switchD_180173565_default;
      }
    case 1:
switchD_1801734e1_caseD_1:
      local_200 = *(undefined8 *)**(undefined8 **)(local_208 + 8);
      break;
    case 2:
switchD_1801734e1_caseD_2:
      uStack_1f8 = **(undefined8 **)(local_208 + 8);
      break;
    default:
switchD_1801734e1_default:
      local_1f0 = 0;
    }
    local_518 = 0;
    uStack_510 = 0;
    local_508 = 0x8000000000000000;
    bVar49 = *local_208;
    local_520 = local_208;
    switch(bVar49) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_180173565_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar49) {
      case 1:
        goto switchD_180173565_caseD_1;
      case 2:
        goto switchD_180173565_caseD_2;
      }
    default:
switchD_180173565_default:
      local_508 = 1;
      break;
    case 1:
switchD_180173565_caseD_1:
      local_518 = **(undefined8 **)(local_208 + 8);
      break;
    case 2:
switchD_180173565_caseD_2:
      uStack_510 = *(undefined8 *)(*(longlong *)(local_208 + 8) + 8);
    }
    while (cVar31 = FUN_1800e6ca0(&local_208,&local_520), cVar31 == '\0') {
      pcVar36 = (char *)FUN_1800f3560(&local_208);
      FUN_18016a4e0(&local_1b8);
      pcVar37 = (char *)FUN_180175a00(pcVar36);
      auStack_570 = auVar51._0_16_;
      local_580._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_580._1_15_;
      local_580 = auVar3 << 8;
      local_728 = uVar48 | 4;
      if (*pcVar37 != '\x03') {
        local_720 = FUN_180112a50(pcVar37);
        uVar41 = FUN_1800f6bd0(&local_240,"type must be string, but is ",&local_720);
        FUN_1800f6ca0(local_400,0x12e,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_400,&DAT_1808d1050);
      }
      plVar43 = *(longlong **)(pcVar37 + 8);
      if ((longlong *)local_580 != plVar43) {
        plVar34 = plVar43 + 2;
        if (0xf < (ulonglong)plVar43[3]) {
          plVar43 = (longlong *)*plVar43;
        }
        FUN_180113930(local_580,plVar43,*plVar34);
      }
      local_728 = uVar48 | 2;
      FUN_18015c010(&local_1b8);
      local_1b8 = local_580._0_8_;
      uStack_1b0 = local_580._8_8_;
      uStack_1a8 = auStack_570._0_8_;
      uStack_1a0 = auStack_570._8_8_;
      auStack_570 = auVar51._0_16_;
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_580._1_15_;
      local_580 = auVar4 << 8;
      auVar51 = ZEXT1664(auStack_570);
      FUN_18015c010(local_580);
      pcVar37 = (char *)FUN_1801760e0(pcVar36);
      auStack_550 = auVar51._0_16_;
      local_560._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar5[0xf] = 0;
      auVar5._0_15_ = local_560._1_15_;
      local_560 = auVar5 << 8;
      local_728 = uVar48 | 0x12;
      if (*pcVar37 != '\x03') {
        local_720 = FUN_180112a50(pcVar37);
        uVar41 = FUN_1800f6bd0(&local_240,"type must be string, but is ",&local_720);
        FUN_1800f6ca0(local_3c8,0x12e,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_3c8,&DAT_1808d1050);
      }
      plVar43 = *(longlong **)(pcVar37 + 8);
      if ((longlong *)local_560 != plVar43) {
        plVar34 = plVar43 + 2;
        if (0xf < (ulonglong)plVar43[3]) {
          plVar43 = (longlong *)*plVar43;
        }
        FUN_180113930(local_560,plVar43,*plVar34);
      }
      local_728 = uVar48 | 10;
      FUN_18015c010(&local_198);
      local_198 = local_560._0_8_;
      uStack_190 = local_560._8_8_;
      uStack_188 = auStack_550._0_8_;
      uStack_180 = auStack_550._8_8_;
      auStack_550 = auVar51._0_16_;
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_560._1_15_;
      local_560 = auVar6 << 8;
      auVar51 = ZEXT1664(auStack_550);
      FUN_18015c010(local_560);
      pcVar37 = (char *)FUN_1801758d0(pcVar36);
      auStack_530 = auVar51._0_16_;
      local_540._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar7[0xf] = 0;
      auVar7._0_15_ = local_540._1_15_;
      local_540 = auVar7 << 8;
      local_728 = uVar48 | 0x4a;
      if (*pcVar37 != '\x03') {
        local_720 = FUN_180112a50(pcVar37);
        uVar41 = FUN_1800f6bd0(&local_240,"type must be string, but is ",&local_720);
        FUN_1800f6ca0(local_390,0x12e,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_390,&DAT_1808d1050);
      }
      plVar43 = *(longlong **)(pcVar37 + 8);
      if ((longlong *)local_540 != plVar43) {
        plVar34 = plVar43 + 2;
        if (0xf < (ulonglong)plVar43[3]) {
          plVar43 = (longlong *)*plVar43;
        }
        FUN_180113930(local_540,plVar43,*plVar34);
      }
      local_728 = uVar48 | 0x2a;
      FUN_18015c010(&local_d0);
      local_d0 = local_540._0_8_;
      uStack_c8 = local_540._8_8_;
      uStack_c0 = auStack_530._0_8_;
      uStack_b8 = auStack_530._8_8_;
      auStack_530 = auVar51._0_16_;
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_540._1_15_;
      local_540 = auVar8 << 8;
      auVar51 = ZEXT1664(auStack_530);
      FUN_18015c010(local_540);
      auStack_708 = auVar51._0_16_;
      local_718._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_718._1_15_;
      local_718 = auVar9 << 8;
      puVar38 = (undefined8 *)FUN_180175550(pcVar36,&local_240,"itemId",local_718);
      auVar50 = auVar51._0_16_;
      if (&local_70 != puVar38) {
        FUN_18015c010(&local_70);
        auVar50 = auVar51._0_16_;
        local_70 = *puVar38;
        uStack_68 = puVar38[1];
        uStack_60 = puVar38[2];
        uStack_58 = puVar38[3];
        puVar38[2] = 0;
        puVar38[3] = 0xf;
        *(undefined1 *)puVar38 = 0;
      }
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(&local_240);
      FUN_18015c010(local_718);
      auStack_708 = auVar51._0_16_;
      local_718._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar10[0xf] = 0;
      auVar10._0_15_ = local_718._1_15_;
      local_718 = auVar10 << 8;
      if (*pcVar36 != '\x01') {
        local_720 = FUN_180112a50(pcVar36);
        uVar41 = FUN_1800f6bd0(local_5b0,"cannot use value() with ",&local_720);
        FUN_1800f6ca0(local_2e8,0x132,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_2e8,&DAT_1808d1050);
      }
      local_240 = 0;
      uStack_238 = 0;
      lStack_230 = 0;
      uStack_228 = 0;
      auVar51 = ZEXT1664(auStack_708);
      FUN_1800e6b50(pcVar36,&local_240,"sourceName");
      uVar41 = FUN_1800f3e20(pcVar36,local_5b0);
      cVar31 = FUN_1800e6ca0(&local_240,uVar41);
      auVar50 = auVar51._0_16_;
      if (cVar31 == '\0') {
        uVar41 = FUN_1800f34a0(&local_240);
        FUN_1800e69c0(uVar41,local_6c8);
        auVar50 = auVar51._0_16_;
      }
      else {
        local_6c8 = local_718;
        auStack_6b8 = auStack_708;
        auVar11[0xf] = 0;
        auVar11._0_15_ = local_718._1_15_;
        local_718 = auVar11 << 8;
        auStack_708 = auVar50;
      }
      local_728 = uVar48 | 0xaa;
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(&local_b0);
      local_b0 = local_6c8._0_8_;
      uStack_a8 = local_6c8._8_8_;
      uStack_a0 = auStack_6b8._0_8_;
      uStack_98 = auStack_6b8._8_8_;
      auStack_6b8 = ZEXT816(0xf) << 0x40;
      auVar12[0xf] = 0;
      auVar12._0_15_ = local_6c8._1_15_;
      local_6c8 = auVar12 << 8;
      auVar51 = ZEXT1664(auVar51._0_16_);
      FUN_18015c010(local_6c8);
      FUN_18015c010(local_718);
      auStack_6b8 = auVar51._0_16_;
      local_6c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar13[0xf] = 0;
      auVar13._0_15_ = local_6c8._1_15_;
      local_6c8 = auVar13 << 8;
      if (*pcVar36 != '\x01') {
        local_720 = FUN_180112a50(pcVar36);
        uVar41 = FUN_1800f6bd0(local_5b0,"cannot use value() with ",&local_720);
        FUN_1800f6ca0(local_320,0x132,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_320,&DAT_1808d1050);
      }
      local_240 = 0;
      uStack_238 = 0;
      lStack_230 = 0;
      uStack_228 = 0;
      auVar51 = ZEXT1664(auStack_6b8);
      FUN_1800e6b50(pcVar36,&local_240,"sourceAuthor");
      uVar41 = FUN_1800f3e20(pcVar36,local_5b0);
      cVar31 = FUN_1800e6ca0(&local_240,uVar41);
      auVar50 = auVar51._0_16_;
      if (cVar31 == '\0') {
        uVar41 = FUN_1800f34a0(&local_240);
        FUN_1800e69c0(uVar41,local_718);
        auVar50 = auVar51._0_16_;
      }
      else {
        local_718 = local_6c8;
        auStack_708 = auStack_6b8;
        auVar14[0xf] = 0;
        auVar14._0_15_ = local_6c8._1_15_;
        local_6c8 = auVar14 << 8;
        auStack_6b8 = auVar50;
      }
      local_728 = uVar48 | 0x1aa;
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(&local_90);
      local_90 = local_718._0_8_;
      uStack_88 = local_718._8_8_;
      uStack_80 = auStack_708._0_8_;
      uStack_78 = auStack_708._8_8_;
      auStack_708 = ZEXT816(0xf) << 0x40;
      auVar15[0xf] = 0;
      auVar15._0_15_ = local_718._1_15_;
      local_718 = auVar15 << 8;
      auVar51 = ZEXT1664(auVar51._0_16_);
      FUN_18015c010(local_718);
      FUN_18015c010(local_6c8);
      auStack_708 = auVar51._0_16_;
      local_718._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar16[0xf] = 0;
      auVar16._0_15_ = local_718._1_15_;
      local_718 = auVar16 << 8;
      puVar38 = (undefined8 *)FUN_180176210(pcVar36,&local_240);
      auVar50 = auVar51._0_16_;
      if (&local_158 != puVar38) {
        FUN_18015c010(&local_158);
        auVar50 = auVar51._0_16_;
        local_158 = *puVar38;
        uStack_150 = puVar38[1];
        uStack_148 = puVar38[2];
        uStack_140 = puVar38[3];
        puVar38[2] = 0;
        puVar38[3] = 0xf;
        *(undefined1 *)puVar38 = 0;
      }
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(&local_240);
      FUN_18015c010(local_718);
      auStack_708 = auVar51._0_16_;
      local_718._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar17[0xf] = 0;
      auVar17._0_15_ = local_718._1_15_;
      local_718 = auVar17 << 8;
      puVar38 = (undefined8 *)FUN_180175550(pcVar36,&local_240,"image",local_718);
      auVar50 = auVar51._0_16_;
      if (&local_118 != puVar38) {
        FUN_18015c010(&local_118);
        auVar50 = auVar51._0_16_;
        local_118 = *puVar38;
        uStack_110 = puVar38[1];
        uStack_108 = puVar38[2];
        uStack_100 = puVar38[3];
        puVar38[2] = 0;
        puVar38[3] = 0xf;
        *(undefined1 *)puVar38 = 0;
      }
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(&local_240);
      FUN_18015c010(local_718);
      auStack_6b8 = auVar51._0_16_;
      local_6c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar18[0xf] = 0;
      auVar18._0_15_ = local_6c8._1_15_;
      local_6c8 = auVar18 << 8;
      if (*pcVar36 != '\x01') {
        local_720 = FUN_180112a50(pcVar36);
        uVar41 = FUN_1800f6bd0(local_5b0,"cannot use value() with ",&local_720);
        FUN_1800f6ca0(local_358,0x132,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_358,&DAT_1808d1050);
      }
      local_240 = 0;
      uStack_238 = 0;
      lStack_230 = 0;
      uStack_228 = 0;
      auVar51 = ZEXT1664(auStack_6b8);
      FUN_1800e6b50(pcVar36,&local_240,"updated");
      uVar41 = FUN_1800f3e20(pcVar36,local_5b0);
      cVar31 = FUN_1800e6ca0(&local_240,uVar41);
      auVar50 = auVar51._0_16_;
      if (cVar31 == '\0') {
        uVar41 = FUN_1800f34a0(&local_240);
        FUN_1800e69c0(uVar41,local_718);
        auVar50 = auVar51._0_16_;
      }
      else {
        local_718 = local_6c8;
        auStack_708 = auStack_6b8;
        auVar19[0xf] = 0;
        auVar19._0_15_ = local_6c8._1_15_;
        local_6c8 = auVar19 << 8;
        auStack_6b8 = auVar50;
      }
      uVar48 = uVar48 | 0x1ab;
      auVar51 = ZEXT1664(auVar50);
      local_728 = uVar48;
      FUN_18015c010(&local_178);
      local_178 = local_718._0_8_;
      uStack_170 = local_718._8_8_;
      uStack_168 = auStack_708._0_8_;
      uStack_160 = auStack_708._8_8_;
      auStack_708 = ZEXT816(0xf) << 0x40;
      auVar20[0xf] = 0;
      auVar20._0_15_ = local_718._1_15_;
      local_718 = auVar20 << 8;
      auVar51 = ZEXT1664(auVar51._0_16_);
      FUN_18015c010(local_718);
      FUN_18015c010(local_6c8);
      local_d5 = 1;
      if (local_220._8_8_ == local_210) {
        FUN_180178db0(local_220,local_220._8_8_,&local_1b8);
      }
      else {
        FUN_18017a9c0(local_220._8_8_,&local_1b8);
        local_220._8_8_ = local_220._8_8_ + 0x168;
      }
      FUN_18015c010(&local_70);
      FUN_18015c010(&local_90);
      FUN_18015c010(&local_b0);
      FUN_18015c010(&local_d0);
      FUN_18015c010(local_f8);
      FUN_18015c010(&local_118);
      FUN_18015c010(local_138);
      FUN_18015c010(&local_158);
      FUN_18015c010(&local_178);
      FUN_18015c010(&local_198);
      FUN_18015c010(&local_1b8);
      FUN_1800f33e0(&local_208);
    }
    cVar31 = FUN_1800e6540(puVar1 + 0xc,"selected");
    if (cVar31 != '\0') {
      pcVar36 = (char *)FUN_1801757b0(puVar1 + 0xc,"selected");
      auStack_5e0 = auVar51._0_16_;
      local_5f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar21[0xf] = 0;
      auVar21._0_15_ = local_5f0._1_15_;
      local_5f0 = auVar21 << 8;
      local_728 = uVar48 | 0x1000;
      if (*pcVar36 != '\x03') {
        local_720 = FUN_180112a50(pcVar36);
        uVar41 = FUN_1800f6bd0(local_5b0,"type must be string, but is ",&local_720);
        FUN_1800f6ca0(local_2b0,0x12e,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_2b0,&DAT_1808d1050);
      }
      plVar43 = *(longlong **)(pcVar36 + 8);
      if ((longlong *)local_5f0 != plVar43) {
        plVar34 = plVar43 + 2;
        if (0xf < (ulonglong)plVar43[3]) {
          plVar43 = (longlong *)*plVar43;
        }
        FUN_180113930(local_5f0,plVar43,*plVar34);
      }
      auVar50 = auVar51._0_16_;
      local_728 = uVar48 | 0x800;
      plVar43 = (longlong *)(param_1 + 0x1c0);
      if (plVar43 != (longlong *)local_5f0) {
        FUN_18015c010(plVar43);
        *plVar43 = local_5f0._0_8_;
        *(undefined8 *)(param_1 + 0x1c8) = local_5f0._8_8_;
        *(undefined8 *)(param_1 + 0x1d0) = auStack_5e0._0_8_;
        *(undefined8 *)(param_1 + 0x1d8) = auStack_5e0._8_8_;
        auVar50 = auVar51._0_16_;
        auVar22[0xf] = 0;
        auVar22._0_15_ = local_5f0._1_15_;
        local_5f0 = auVar22 << 8;
        auStack_5e0 = auVar50;
      }
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(local_5f0);
      pcVar36 = (char *)FUN_1801757b0(puVar1 + 0xc,"payload");
      auStack_5c0 = auVar51._0_16_;
      local_5d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar23[0xf] = 0;
      auVar23._0_15_ = local_5d0._1_15_;
      local_5d0 = auVar23 << 8;
      local_728 = uVar48 | 0xc00;
      if (*pcVar36 != '\x03') {
        local_720 = FUN_180112a50(pcVar36);
        uVar41 = FUN_1800f6bd0(local_5b0,"type must be string, but is ",&local_720);
        FUN_1800f6ca0(local_278,0x12e,uVar41);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_278,&DAT_1808d1050);
      }
      plVar43 = *(longlong **)(pcVar36 + 8);
      if ((longlong *)local_5d0 != plVar43) {
        plVar34 = plVar43 + 2;
        if (0xf < (ulonglong)plVar43[3]) {
          plVar43 = (longlong *)*plVar43;
        }
        FUN_180113930(local_5d0,plVar43,*plVar34);
      }
      auVar50 = auVar51._0_16_;
      uVar48 = uVar48 | 0xa00;
      plVar43 = (longlong *)(param_1 + 0x1e0);
      local_728 = uVar48;
      if (plVar43 != (longlong *)local_5d0) {
        FUN_18015c010(plVar43);
        *plVar43 = local_5d0._0_8_;
        *(undefined8 *)(param_1 + 0x1e8) = local_5d0._8_8_;
        *(undefined8 *)(param_1 + 0x1f0) = auStack_5c0._0_8_;
        *(undefined8 *)(param_1 + 0x1f8) = auStack_5c0._8_8_;
        auVar50 = auVar51._0_16_;
        auVar24[0xf] = 0;
        auVar24._0_15_ = local_5d0._1_15_;
        local_5d0 = auVar24 << 8;
        auStack_5c0 = auVar50;
      }
      auVar51 = ZEXT1664(auVar50);
      FUN_18015c010(local_5d0);
    }
    puVar38 = (undefined8 *)(param_1 + 0x168);
    if (puVar38 != (undefined8 *)local_220) {
      FUN_180111850(puVar38);
      *puVar38 = local_220._0_8_;
      *(undefined8 *)(param_1 + 0x170) = local_220._8_8_;
      *(longlong *)(param_1 + 0x178) = local_210;
      local_220 = (undefined1  [16])0x0;
      local_210 = 0;
    }
    FUN_180172d30(param_1);
    if (((*(char *)(param_1 + 0x233) != '\0') && (*(char *)(param_1 + 0x231) == '\0')) &&
       (*(longlong *)(param_1 + 0x228) == -1)) {
      *(undefined1 *)(param_1 + 0x233) = 0;
      auStack_708 = auVar51._0_16_;
      local_718._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar25[0xf] = 0;
      auVar25._0_15_ = local_718._1_15_;
      local_718 = auVar25 << 8;
      FUN_180175550(puVar1 + 0xc,&local_240,"active",local_718);
      FUN_18015c010(local_718);
      if (lStack_230 != 0) {
        FUN_1800e60e0(local_6c8,"action");
        FUN_1800e60e0(auStack_6b8 + 8,&DAT_180700e24);
        local_4b8 = local_6c8;
        local_4b0 = local_698;
        FUN_1800f4e90(local_5b0,&local_4b8,1,2);
        local_5a0 = 0;
        FUN_1800e60e0(local_718,&DAT_1806bc068);
        FUN_1800e64d0(auStack_708 + 8,&local_240);
        local_6f0 = 0;
        local_4c8 = local_718;
        local_4c0 = local_6e8;
        FUN_1800f4e90(local_598,&local_4c8,1,2);
        local_588 = 0;
        local_6d8 = local_5b0;
        local_6d0 = (longlong *)local_580;
        uVar41 = FUN_1800f4e90(local_698,&local_6d8,1,2);
        FUN_180172820(param_1,uVar41);
        _eh_vector_destructor_iterator_(local_5b0,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_718,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_6c8,0x18,2,FUN_1800aab30);
      }
      FUN_18015c010(&local_240);
    }
    lVar35 = puVar1[10];
    piVar39 = (int *)(puVar1 + 8);
    uVar46 = puVar1[0xb];
    if (0xf < uVar46) {
      piVar39 = (int *)puVar1[8];
    }
    if (lVar35 == 7) {
      iVar33 = *piVar39 + -0x7267696d;
      if ((iVar33 == 0) && (iVar33 = *(ushort *)(piVar39 + 1) - 0x7461, iVar33 == 0)) {
        iVar33 = *(byte *)((longlong)piVar39 + 6) - 0x65;
      }
      if (iVar33 != 0) goto LAB_1801741d6;
      local_718 = (undefined1  [16])0x0;
      auStack_708 = (undefined1  [16])0x0;
      FUN_18015ba30(local_718,"Local forks moved to your account.",0x22);
      FUN_18016df60(param_1,local_718,1);
LAB_180174377:
      FUN_18015c010(local_718);
    }
    else {
LAB_1801741d6:
      piVar39 = (int *)(puVar1 + 8);
      if (0xf < uVar46) {
        piVar39 = (int *)puVar1[8];
      }
      if ((lVar35 == 4) && (*piVar39 == 0x65766173)) {
        local_718 = (undefined1  [16])0x0;
        auStack_708 = (undefined1  [16])0x0;
        FUN_18015ba30(local_718,"Private fork saved to your account.",0x23);
        FUN_18016df60(param_1,local_718,1);
        goto LAB_180174377;
      }
      piVar39 = (int *)(puVar1 + 8);
      if (0xf < uVar46) {
        piVar39 = (int *)puVar1[8];
      }
      if (lVar35 == 6) {
        iVar33 = *piVar39 + -0x616e6572;
        if (iVar33 == 0) {
          iVar33 = *(ushort *)(piVar39 + 1) - 0x656d;
        }
        if (iVar33 == 0) {
          local_718 = (undefined1  [16])0x0;
          auStack_708 = (undefined1  [16])0x0;
          FUN_18015ba30(local_718,"Private fork renamed.",0x15);
          FUN_18016df60(param_1,local_718,1);
          goto LAB_180174377;
        }
      }
      piVar39 = (int *)(puVar1 + 8);
      if (0xf < uVar46) {
        piVar39 = (int *)puVar1[8];
      }
      if (lVar35 == 6) {
        iVar33 = *piVar39 + -0x656c6564;
        if (iVar33 == 0) {
          iVar33 = *(ushort *)(piVar39 + 1) - 0x6574;
        }
        if (iVar33 == 0) {
          local_718 = (undefined1  [16])0x0;
          auStack_708 = (undefined1  [16])0x0;
          FUN_18015ba30(local_718,"Private fork deleted.",0x15);
          FUN_18016df60(param_1,local_718,1);
          goto LAB_180174377;
        }
      }
      piVar39 = (int *)(puVar1 + 8);
      if (0xf < uVar46) {
        piVar39 = (int *)puVar1[8];
      }
      if (lVar35 == 6) {
        iVar33 = *piVar39 + -0x61657263;
        if (iVar33 == 0) {
          iVar33 = *(ushort *)(piVar39 + 1) - 0x6574;
        }
        if (iVar33 == 0) {
          local_718 = (undefined1  [16])0x0;
          auStack_708 = (undefined1  [16])0x0;
          FUN_18015ba30(local_718,"Private fork created.",0x15);
          FUN_18016df60(param_1,local_718,1);
          goto LAB_180174377;
        }
      }
    }
    FUN_180111850(local_220);
    uVar46 = local_720;
LAB_1801743a2:
    uVar46 = uVar46 + 1;
  } while( true );
}



