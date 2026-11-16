// FUN_180195e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195e30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180195e30(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  bool bVar4;
  longlong lVar5;
  uint7 uVar6;
  char cVar7;
  BOOL BVar8;
  LONG LVar9;
  int iVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  LPCWSTR ****lpFileName;
  longlong *plVar17;
  undefined8 *****pppppuVar18;
  ulonglong *puVar19;
  byte *pbVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  byte *pbVar28;
  ulonglong *puVar29;
  byte *pbVar30;
  ulonglong _Size;
  undefined1 auStack_468 [48];
  uint local_438;
  undefined8 *local_428;
  undefined8 uStack_420;
  longlong *local_418;
  undefined8 *local_410;
  longlong *local_408;
  undefined1 local_3f8 [16];
  ulonglong *local_3e8;
  undefined1 local_3e0 [8];
  undefined1 auStack_3d8 [8];
  ulonglong *local_3d0;
  longlong *local_3c8;
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [16];
  char *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  longlong *local_390;
  undefined1 local_388 [8];
  undefined1 local_380 [16];
  undefined1 local_370 [56];
  undefined1 local_338 [56];
  undefined1 local_300 [56];
  undefined1 local_2c8 [56];
  undefined1 local_290 [56];
  undefined1 local_258 [56];
  ulonglong local_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  FILETIME FStack_20c;
  int iStack_204;
  uint local_200;
  int iStack_1fc;
  longlong local_1f8 [2];
  byte local_1e8 [160];
  undefined **local_148 [12];
  ulonglong *local_e8;
  longlong *plStack_e0;
  ulonglong *puStack_d8;
  longlong *plStack_d0;
  ulonglong local_c8;
  longlong *plStack_c0;
  ulonglong *local_b8;
  longlong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 local_80;
  FILETIME local_78;
  undefined8 *****local_70 [2];
  undefined8 local_60;
  ulonglong local_58;
  LPCWSTR ****local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_468;
  local_438 = 0;
  local_78.dwLowDateTime = 0;
  local_78.dwHighDateTime = 0;
  local_408 = param_2;
  local_3e8 = param_1;
  local_3d0 = param_1;
  local_3c8 = param_2;
LAB_180195eb0:
  uVar23 = local_438;
  puVar14 = (ulonglong *)&DAT_8000000000000000;
  if ((*param_2 != 0) && ((*(uint *)(*param_2 + 4) & 1) != 0)) {
    piVar3 = (int *)*param_2;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_3f8._8_8_ = 0x15;
          local_3f8._0_8_ = "tier0.dll:g_pMemAlloc";
          DAT_180c7df30 = (undefined8 *)FUN_180451750(local_3f8);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar3);
      }
    }
  }
  FUN_180165920(local_50,3,L"sync-response.bridge");
  local_220 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  FStack_20c.dwLowDateTime = 0;
  FStack_20c.dwHighDateTime = 0;
  iStack_204 = 0;
  local_200 = 0;
  lpFileName = (LPCWSTR ****)local_50;
  if (7 < local_38) {
    lpFileName = local_50[0];
  }
  BVar8 = GetFileAttributesExW((LPCWSTR)lpFileName,GetFileExInfoStandard,&local_220);
  if ((((BVar8 != 0) && ((local_220 & 0x410) == 0)) && (iStack_204 == 0)) &&
     ((local_200 < 0x1800001 && (LVar9 = CompareFileTime(&FStack_20c,&local_78), LVar9 != 0)))) {
    local_78.dwHighDateTime = FStack_20c.dwHighDateTime;
    local_78.dwLowDateTime = FStack_20c.dwLowDateTime;
    FUN_18063ab10(local_1f8,0,0x110);
    FUN_18015e690(local_1f8,local_50,0x20);
    FUN_18015ae30(local_70,local_200,0);
    pppppuVar18 = local_70;
    if (0xf < local_58) {
      pppppuVar18 = local_70[0];
    }
    FUN_1801771e0(local_1f8,pppppuVar18,local_60);
    if (((local_1e8[*(int *)(local_1f8[0] + 4)] & 6) == 0) &&
       ((*(code **)*param_1 == (code *)0x0 ||
        (cVar7 = (**(code **)*param_1)(local_70), cVar7 != '\0')))) {
      local_80 = 0;
      param_4 = (longlong *)0x0;
      puVar11 = (ulonglong *)FUN_180175670(local_3c0,local_70,&local_b8);
      uVar23 = uVar23 | 1;
    }
    else {
      local_3e0[0] = 0;
      FUN_180111d10(auStack_3d8,0);
      puVar11 = (ulonglong *)local_3e0;
      uVar23 = uVar23 | 2;
    }
    local_c8 = *puVar11;
    plStack_c0 = (longlong *)puVar11[1];
    *(undefined1 *)puVar11 = 0;
    puVar11[1] = 0;
    local_438 = uVar23;
    if ((uVar23 & 2) != 0) {
      uVar23 = uVar23 & 0xfffffffd;
      local_438 = uVar23;
      FUN_1801409d0(auStack_3d8,local_3e0[0]);
    }
    if ((uVar23 & 1) != 0) {
      uVar23 = uVar23 & 0xfffffffe;
      local_438 = uVar23;
      FUN_1801409d0(local_3b8,local_3c0[0]);
    }
    if ((char)local_c8 == '\x01') {
      local_3f8 = (undefined1  [16])0x0;
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_3a8 = "tier0.dll:g_pMemAlloc";
        local_3a0 = 0x15;
        DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_3a8);
      }
      puVar12 = (undefined8 *)
                (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x60);
      local_428 = puVar12;
      local_410 = puVar12;
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar12 + 1) = 1;
        *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
        *puVar12 = std::_Ref_count_obj2<hvhgod::sync::parsed_response>::vftable;
        local_418 = puVar12 + 2;
        *local_418 = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        *(undefined1 (*) [16])(puVar12 + 10) = (undefined1  [16])0x0;
        FUN_180111d10(puVar12 + 3,0);
        FUN_1801bb620(puVar12 + 4);
      }
      local_438 = uVar23 | 4;
      plVar24 = (longlong *)(ulonglong)local_438;
      local_418 = puVar12 + 2;
      local_3f8._8_8_ = puVar12;
      local_3f8._0_8_ = local_418;
      puVar26 = &local_c8;
      plStack_e0 = (longlong *)0x0;
      puStack_d8 = (ulonglong *)0x0;
      plStack_d0 = (longlong *)&DAT_8000000000000000;
      puVar19 = (ulonglong *)(local_c8 & 0xff);
      puVar11 = puVar14;
      puVar29 = param_1;
      local_e8 = puVar26;
      switch((char)local_c8) {
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
        switch(puVar19) {
        default:
          goto switchD_180196293_default;
        case (ulonglong *)0x1:
          goto switchD_180196293_caseD_1;
        case (ulonglong *)0x2:
          goto switchD_180196293_caseD_2;
        case (ulonglong *)0xa:
        case (ulonglong *)0xd:
        case (ulonglong *)0xe:
        case (ulonglong *)0xf:
        case (ulonglong *)0x10:
        case (ulonglong *)0x11:
        case (ulonglong *)0x12:
        case (ulonglong *)0x13:
          goto switchD_18019634b_caseD_0;
        case (ulonglong *)0xb:
        case (ulonglong *)0x15:
          goto switchD_18019634b_caseD_1;
        case (ulonglong *)0xc:
        case (ulonglong *)0x16:
          goto switchD_18019634b_caseD_2;
        case (ulonglong *)0x14:
        case (ulonglong *)0x17:
        case (ulonglong *)0x18:
        case (ulonglong *)0x19:
        case (ulonglong *)0x1a:
        case (ulonglong *)0x1b:
        case (ulonglong *)0x1c:
        case (ulonglong *)0x1d:
          goto switchD_18019634b_default;
        case (ulonglong *)0x1e:
        case (ulonglong *)0x21:
        case (ulonglong *)0x22:
        case (ulonglong *)0x23:
        case (ulonglong *)0x24:
        case (ulonglong *)0x25:
        case (ulonglong *)0x26:
        case (ulonglong *)0x27:
          goto switchD_1801963c7_caseD_0;
        case (ulonglong *)0x1f:
          goto switchD_1801963c7_caseD_1;
        case (ulonglong *)0x20:
          goto switchD_1801963c7_caseD_2;
        case (ulonglong *)0x28:
        case (ulonglong *)0x2b:
        case (ulonglong *)0x2c:
        case (ulonglong *)0x2d:
        case (ulonglong *)0x2e:
        case (ulonglong *)0x2f:
        case (ulonglong *)0x30:
        case (ulonglong *)0x31:
          goto switchD_18019643d_caseD_0;
        case (ulonglong *)0x29:
          goto switchD_18019643d_caseD_1;
        case (ulonglong *)0x2a:
          goto switchD_18019643d_caseD_2;
        case (ulonglong *)0x32:
        case (ulonglong *)0x35:
        case (ulonglong *)0x36:
        case (ulonglong *)0x37:
        case (ulonglong *)0x38:
        case (ulonglong *)0x39:
        case (ulonglong *)0x3a:
        case (ulonglong *)0x3b:
          goto switchD_1801962a0_caseD_32;
        case (ulonglong *)0x33:
          goto switchD_1801962a0_caseD_33;
        case (ulonglong *)0x34:
          goto switchD_1801962a0_caseD_34;
        case (ulonglong *)0x3c:
        case (ulonglong *)0x3f:
        case (ulonglong *)0x40:
        case (ulonglong *)0x41:
        case (ulonglong *)0x42:
        case (ulonglong *)0x43:
        case (ulonglong *)0x44:
        case (ulonglong *)0x45:
          goto switchD_1801964dd_caseD_0;
        case (ulonglong *)0x3d:
        case (ulonglong *)0x47:
          goto switchD_1801964dd_caseD_1;
        case (ulonglong *)0x3e:
        case (ulonglong *)0x48:
          goto switchD_1801964dd_caseD_2;
        case (ulonglong *)0x46:
          goto switchD_1801962a0_caseD_46;
        case (ulonglong *)0x49:
        case (ulonglong *)0x4a:
        case (ulonglong *)0x4b:
        case (ulonglong *)0x4c:
        case (ulonglong *)0x4d:
        case (ulonglong *)0x4e:
        case (ulonglong *)0x4f:
          goto switchD_1801964dd_default;
        case (ulonglong *)0x50:
        case (ulonglong *)0x53:
        case (ulonglong *)0x54:
        case (ulonglong *)0x55:
        case (ulonglong *)0x56:
        case (ulonglong *)0x57:
        case (ulonglong *)0x58:
        case (ulonglong *)0x59:
          goto switchD_180196545_caseD_0;
        case (ulonglong *)0x51:
          goto switchD_180196545_caseD_1;
        case (ulonglong *)0x52:
          goto switchD_180196545_caseD_2;
        case (ulonglong *)0x5a:
        case (ulonglong *)0x5d:
        case (ulonglong *)0x5e:
        case (ulonglong *)0x5f:
        case (ulonglong *)0x60:
        case (ulonglong *)0x61:
        case (ulonglong *)0x62:
        case (ulonglong *)0x63:
          goto switchD_1801965a0_caseD_0;
        case (ulonglong *)0x5b:
        case (ulonglong *)0x65:
          goto switchD_1801965a0_caseD_1;
        case (ulonglong *)0x5c:
        case (ulonglong *)0x66:
          goto switchD_1801965a0_caseD_2;
        case (ulonglong *)0x64:
        case (ulonglong *)0x67:
        case (ulonglong *)0x68:
        case (ulonglong *)0x69:
        case (ulonglong *)0x6a:
        case (ulonglong *)0x6b:
        case (ulonglong *)0x6c:
        case (ulonglong *)0x6d:
          goto switchD_1801965a0_default;
        }
      case '\x01':
switchD_180196293_caseD_1:
        plStack_e0 = (longlong *)*plStack_c0;
        break;
      case '\x02':
switchD_180196293_caseD_2:
        puStack_d8 = (ulonglong *)plStack_c0[1];
        break;
      default:
switchD_180196293_default:
        plStack_d0 = (longlong *)0x1;
      }
      if ((char)local_c8 == '\x01') {
        puVar13 = (undefined8 *)FUN_1800f6de0(plStack_c0,local_388,"cosmetics");
        plStack_e0 = (longlong *)*puVar13;
      }
      local_b8 = &local_c8;
      local_b0 = 0;
      lStack_a8 = 0;
      local_a0 = 0x8000000000000000;
      puVar19 = (ulonglong *)(local_c8 & 0xff);
      switch((char)local_c8) {
      case '\0':
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
switchD_18019634b_caseD_0:
        puVar26 = &local_c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(puVar19) {
        default:
          goto switchD_18019634b_default;
        case (ulonglong *)0x1:
          goto switchD_18019634b_caseD_1;
        case (ulonglong *)0x2:
          goto switchD_18019634b_caseD_2;
        case (ulonglong *)0xa:
        case (ulonglong *)0xd:
        case (ulonglong *)0xe:
        case (ulonglong *)0xf:
        case (ulonglong *)0x10:
        case (ulonglong *)0x11:
        case (ulonglong *)0x12:
        case (ulonglong *)0x13:
          goto switchD_1801963c7_caseD_0;
        case (ulonglong *)0xb:
          goto switchD_1801963c7_caseD_1;
        case (ulonglong *)0xc:
          goto switchD_1801963c7_caseD_2;
        case (ulonglong *)0x14:
        case (ulonglong *)0x17:
        case (ulonglong *)0x18:
        case (ulonglong *)0x19:
        case (ulonglong *)0x1a:
        case (ulonglong *)0x1b:
        case (ulonglong *)0x1c:
        case (ulonglong *)0x1d:
          goto switchD_18019643d_caseD_0;
        case (ulonglong *)0x15:
          goto switchD_18019643d_caseD_1;
        case (ulonglong *)0x16:
          goto switchD_18019643d_caseD_2;
        case (ulonglong *)0x1e:
        case (ulonglong *)0x21:
        case (ulonglong *)0x22:
        case (ulonglong *)0x23:
        case (ulonglong *)0x24:
        case (ulonglong *)0x25:
        case (ulonglong *)0x26:
        case (ulonglong *)0x27:
          goto switchD_1801962a0_caseD_32;
        case (ulonglong *)0x1f:
switchD_1801962a0_caseD_33:
          puVar19 = (ulonglong *)(plVar24 + 8);
          break;
        case (ulonglong *)0x20:
switchD_1801962a0_caseD_34:
          puVar19 = (ulonglong *)&DAT_8000000000000000;
          break;
        case (ulonglong *)0x28:
        case (ulonglong *)0x2b:
        case (ulonglong *)0x2c:
        case (ulonglong *)0x2d:
        case (ulonglong *)0x2e:
        case (ulonglong *)0x2f:
        case (ulonglong *)0x30:
        case (ulonglong *)0x31:
          goto switchD_1801964dd_caseD_0;
        case (ulonglong *)0x29:
        case (ulonglong *)0x33:
          goto switchD_1801964dd_caseD_1;
        case (ulonglong *)0x2a:
        case (ulonglong *)0x34:
          goto switchD_1801964dd_caseD_2;
        case (ulonglong *)0x32:
          goto switchD_1801962a0_caseD_46;
        case (ulonglong *)0x35:
        case (ulonglong *)0x36:
        case (ulonglong *)0x37:
        case (ulonglong *)0x38:
        case (ulonglong *)0x39:
        case (ulonglong *)0x3a:
        case (ulonglong *)0x3b:
          goto switchD_1801964dd_default;
        case (ulonglong *)0x3c:
        case (ulonglong *)0x3f:
        case (ulonglong *)0x40:
        case (ulonglong *)0x41:
        case (ulonglong *)0x42:
        case (ulonglong *)0x43:
        case (ulonglong *)0x44:
        case (ulonglong *)0x45:
          goto switchD_180196545_caseD_0;
        case (ulonglong *)0x3d:
          goto switchD_180196545_caseD_1;
        case (ulonglong *)0x3e:
          goto switchD_180196545_caseD_2;
        case (ulonglong *)0x46:
        case (ulonglong *)0x49:
        case (ulonglong *)0x4a:
        case (ulonglong *)0x4b:
        case (ulonglong *)0x4c:
        case (ulonglong *)0x4d:
        case (ulonglong *)0x4e:
        case (ulonglong *)0x4f:
          goto switchD_1801965a0_caseD_0;
        case (ulonglong *)0x47:
        case (ulonglong *)0x51:
          goto switchD_1801965a0_caseD_1;
        case (ulonglong *)0x48:
        case (ulonglong *)0x52:
          goto switchD_1801965a0_caseD_2;
        case (ulonglong *)0x50:
        case (ulonglong *)0x53:
        case (ulonglong *)0x54:
        case (ulonglong *)0x55:
        case (ulonglong *)0x56:
        case (ulonglong *)0x57:
        case (ulonglong *)0x58:
        case (ulonglong *)0x59:
          goto switchD_1801965a0_default;
        }
        goto LAB_180196491;
      case '\x01':
switchD_18019634b_caseD_1:
        local_b0 = *plStack_c0;
        break;
      case '\x02':
switchD_18019634b_caseD_2:
        lStack_a8 = plStack_c0[1];
        break;
      default:
switchD_18019634b_default:
        local_a0 = 1;
      }
      cVar7 = FUN_1800e6ca0(&local_e8,&local_b8);
      if (cVar7 == '\0') {
        param_4 = (longlong *)(ulonglong)(byte)*local_e8;
        param_1 = local_e8;
        puVar29 = local_e8;
        switch((byte)*local_e8) {
        default:
switchD_1801963c7_caseD_0:
          if (plStack_d0 != (longlong *)0x0) {
            FUN_18015bae0(&local_b8,"cannot get value");
            FUN_1800f6e80(local_290,0xd6,&local_b8);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_290,&DAT_1808d0fe8);
          }
          puVar29 = param_1;
          break;
        case 1:
switchD_1801963c7_caseD_1:
          param_1 = (ulonglong *)(plStack_e0 + 8);
          break;
        case 2:
switchD_1801963c7_caseD_2:
          puVar14 = puStack_d8;
          goto LAB_180196420;
        }
        puVar14 = param_1;
        param_1 = puVar29;
LAB_180196420:
        if ((byte)*puVar14 == 1) {
          param_2 = plStack_d0;
          puVar14 = puStack_d8;
          puVar11 = puStack_d8;
          plVar24 = plStack_e0;
          switch((int)param_4) {
          default:
switchD_18019643d_caseD_0:
            puVar11 = param_1;
            if (param_2 != (longlong *)0x0) {
              FUN_18015bae0(&local_b8,"cannot get value");
              FUN_1800f6e80(local_2c8,0xd6,&local_b8);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_2c8,&DAT_1808d0fe8);
            }
            param_2 = (longlong *)0x0;
            param_1 = puVar11;
            break;
          case 1:
switchD_18019643d_caseD_1:
            puVar11 = (ulonglong *)(plVar24 + 8);
            break;
          case 2:
switchD_18019643d_caseD_2:
            puVar14 = puVar11;
          }
          uVar15 = FUN_1800f3d40(puVar11);
          if (uVar15 < 0x81) {
            if ((uint)param_4 < 10) {
                    /* WARNING: Could not recover jumptable at 0x000180196478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulonglong)(&UINT_180196de8)[(longlong)param_4] + 0x180000000))
                        ((code *)((ulonglong)(&UINT_180196de8)[(longlong)param_4] + 0x180000000));
              return;
            }
switchD_1801962a0_caseD_32:
            puVar19 = param_1;
            if (param_2 != (longlong *)0x0) {
              FUN_18015bae0(&local_b8,"cannot get value");
              FUN_1800f6e80(local_300,0xd6,&local_b8);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_300,&DAT_1808d0fe8);
            }
            param_2 = (longlong *)0x0;
            param_1 = puVar19;
LAB_180196491:
            local_b0 = 0;
            lStack_a8 = 0;
            param_4 = (longlong *)&DAT_8000000000000000;
            local_a0 = 0x8000000000000000;
            puVar26 = (ulonglong *)(ulonglong)(byte)*puVar19;
            local_b8 = puVar19;
            switch((byte)*puVar19) {
            case 0:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
switchD_1801964dd_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
              switch((ulonglong)(&switchD_1801964ea::switchdataD_180196e38)[(longlong)puVar26] +
                     0x180000000) {
              case 0x1801964ec:
switchD_1801962a0_caseD_46:
                local_a0 = 1;
                break;
              case 0x1801964fa:
                goto switchD_1801964dd_caseD_1;
              case 0x18019650e:
                goto switchD_1801964dd_caseD_2;
              case 0x18019651f:
                goto switchD_1801964dd_default;
              case 0x180196547:
                goto switchD_180196545_caseD_1;
              case 0x18019654d:
                goto switchD_180196545_caseD_2;
              default:
                goto switchD_180196545_caseD_0;
              case 0x1801965a2:
                goto switchD_1801965a0_caseD_0;
              case 0x1801965af:
                goto switchD_1801965a0_caseD_1;
              case 0x1801965c0:
                goto switchD_1801965a0_caseD_2;
              case 0x1801965d2:
                goto switchD_1801965a0_default;
              }
            case 1:
switchD_1801964dd_caseD_1:
              local_b0 = **(longlong **)puVar19[1];
              break;
            case 2:
switchD_1801964dd_caseD_2:
              lStack_a8 = *(longlong *)puVar19[1];
              break;
            default:
switchD_1801964dd_default:
              local_a0 = 0;
            }
            do {
              switch((byte)*param_1) {
              default:
switchD_180196545_caseD_0:
                puVar19 = param_1;
                if (param_2 != (longlong *)0x0) {
                  FUN_18015bae0(&local_b8,"cannot get value");
                  FUN_1800f6e80(local_338,0xd6,&local_b8);
                    /* WARNING: Subroutine does not return */
                  FUN_180606630(local_338,&DAT_1808d0fe8);
                }
                param_1 = puVar19;
                break;
              case 1:
switchD_180196545_caseD_1:
                puVar19 = (ulonglong *)(plVar24 + 8);
                break;
              case 2:
switchD_180196545_caseD_2:
                puVar19 = puVar14;
                puVar14 = puVar19;
              }
              plStack_e0 = (longlong *)0x0;
              puStack_d8 = (ulonglong *)0x0;
              puVar26 = (ulonglong *)(ulonglong)(byte)*puVar19;
              local_e8 = puVar19;
              plStack_d0 = param_4;
              switch((byte)*puVar19) {
              case 0:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
switchD_1801965a0_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                switch((ulonglong)(&switchD_1801965ad::switchdataD_180196eb0)[(longlong)puVar26] +
                       0x180000000) {
                case 0x1801965af:
                  goto switchD_1801965a0_caseD_1;
                case 0x1801965c0:
                  goto switchD_1801965a0_caseD_2;
                }
              default:
switchD_1801965a0_default:
                plStack_d0 = (longlong *)0x1;
                break;
              case 1:
switchD_1801965a0_caseD_1:
                plStack_e0 = *(longlong **)puVar19[1];
                break;
              case 2:
switchD_1801965a0_caseD_2:
                puStack_d8 = *(ulonglong **)(puVar19[1] + 8);
              }
              cVar7 = FUN_1800e6ca0(&local_b8,&local_e8);
              if ((cVar7 != '\0') || ((*local_408 != 0 && ((*(uint *)(*local_408 + 4) & 1) != 0))))
              goto LAB_18019679b;
              if ((byte)*local_b8 != 1) {
                FUN_18015bae0(&local_b8,"cannot use key() for non-object iterators");
                FUN_1800f6e80(local_370,0xcf,&local_b8);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_370,&DAT_1808d0fe8);
              }
              pbVar28 = (byte *)(local_b0 + 0x20);
              if (*(ulonglong *)(local_b0 + 0x38) < 0x10) {
                pbVar30 = pbVar28;
              }
              else {
                pbVar30 = *(byte **)pbVar28;
              }
              puVar12 = (undefined8 *)0x0;
              bVar4 = false;
              for (pbVar20 = pbVar30; pbVar20 != pbVar30 + *(longlong *)(local_b0 + 0x30);
                  pbVar20 = pbVar20 + 1) {
                bVar1 = (&DAT_1807c5b10)[*pbVar20];
                if (9 < bVar1) break;
                if ((puVar12 < (undefined8 *)0x1999999999999999) ||
                   ((puVar12 == (undefined8 *)0x1999999999999999 && (bVar1 < 6)))) {
                  puVar12 = (undefined8 *)((ulonglong)bVar1 + (longlong)puVar12 * 10);
                }
                else {
                  bVar4 = true;
                }
              }
              if ((pbVar20 != pbVar30) && (!bVar4)) {
                if (0xf < *(ulonglong *)(local_b0 + 0x38)) {
                  pbVar28 = *(byte **)pbVar28;
                }
                local_428 = puVar12;
                if (pbVar20 == pbVar28 + *(longlong *)(local_b0 + 0x30)) {
                  local_e8 = (ulonglong *)0x0;
                  plStack_e0 = (longlong *)0x0;
                  FUN_18017f4d0(&local_e8,local_b0 + 0x40);
                  if (local_e8 != (ulonglong *)0x0) {
                    FUN_1801a8690(local_418 + 2,local_380,&local_428,&local_e8);
                  }
                  plVar25 = plStack_e0;
                  if (plStack_e0 != (longlong *)0x0) {
                    LOCK();
                    plVar21 = plStack_e0 + 1;
                    lVar5 = *plVar21;
                    *(int *)plVar21 = (int)*plVar21 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*plStack_e0)(plStack_e0);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar25 + 0xc);
                      iVar10 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar25 + 8))(plVar25);
                      }
                    }
                  }
                }
              }
              FUN_1800f33e0(&local_b8);
              param_4 = (longlong *)&DAT_8000000000000000;
            } while( true );
          }
        }
      }
      goto LAB_1801967a0;
    }
    goto LAB_180196a1f;
  }
  goto LAB_180196aca;
LAB_18019679b:
  puVar12 = local_410;
LAB_1801967a0:
  if ((char)local_c8 != '\x01') {
    local_428 = (undefined8 *)FUN_180112a50(&local_c8);
    uVar16 = FUN_1800f6bd0(&local_b8,"cannot use erase() with ",&local_428);
    FUN_1800f6ca0(local_258,0x133,uVar16);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_258,&DAT_1808d1050);
  }
  plVar24 = (longlong *)*plStack_c0;
  plVar25 = (longlong *)plVar24[1];
  plVar21 = plVar25;
  local_418 = plVar24;
  if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
    do {
      plVar22 = plVar21 + 4;
      uVar15 = plVar21[6];
      uVar27 = plVar21[7];
      plVar17 = plVar22;
      if (0xf < uVar27) {
        plVar17 = (longlong *)*plVar22;
      }
      _Size = uVar15;
      if (9 < uVar15) {
        _Size = 9;
      }
      iVar10 = memcmp(plVar17,"cosmetics",_Size);
      if (iVar10 == 0) {
        if (8 < uVar15) goto LAB_180196821;
LAB_180196851:
        plVar21 = plVar21 + 2;
      }
      else {
        if (iVar10 < 0) goto LAB_180196851;
LAB_180196821:
        if (*(char *)((longlong)plVar24 + 0x19) != '\0') {
          if (0xf < uVar27) {
            plVar22 = (longlong *)*plVar22;
          }
          iVar10 = memcmp(plVar22,"cosmetics",_Size);
          if (iVar10 == 0) {
            if (9 < uVar15) goto LAB_18019685e;
          }
          else if (-1 < iVar10) {
LAB_18019685e:
            plVar24 = plVar21;
          }
        }
        local_418 = plVar21;
      }
      plVar21 = (longlong *)*plVar21;
    } while (*(char *)((longlong)plVar21 + 0x19) == '\0');
    puVar12 = local_410;
  }
  plVar22 = plStack_c0;
  plVar21 = local_418;
  if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
    plVar25 = (longlong *)*plVar24;
  }
  cVar7 = *(char *)((longlong)plVar25 + 0x19);
  while (cVar7 == '\0') {
    uVar15 = plVar25[6];
    plVar17 = plVar25 + 4;
    if (0xf < (ulonglong)plVar25[7]) {
      plVar17 = (longlong *)*plVar17;
    }
    uVar27 = uVar15;
    if (9 < uVar15) {
      uVar27 = 9;
    }
    iVar10 = memcmp(plVar17,"cosmetics",uVar27);
    if (iVar10 == 0) {
      if (9 < uVar15) goto LAB_1801968e0;
LAB_180196982:
      plVar17 = (longlong *)plVar25[2];
    }
    else {
      if (iVar10 < 0) goto LAB_180196982;
LAB_1801968e0:
      plVar17 = (longlong *)*plVar25;
      plVar24 = plVar25;
    }
    plVar25 = plVar17;
    cVar7 = *(char *)((longlong)plVar17 + 0x19);
  }
  local_398 = plVar21;
  local_390 = plVar24;
  FUN_180151780(plVar22,&local_398);
  plVar24 = plStack_c0;
  uVar15 = local_c8;
  uVar6 = local_c8._1_7_;
  local_c8 = (ulonglong)local_c8._1_7_ << 8;
  plStack_c0 = (longlong *)0x0;
  puVar13 = puVar12 + 2;
  uVar2 = *(undefined1 *)puVar13;
  *(char *)puVar13 = (char)uVar15;
  local_428 = (undefined8 *)CONCAT71(uVar6,uVar2);
  uStack_420 = puVar12[3];
  puVar12[3] = plVar24;
  FUN_1801409d0(&uStack_420);
  param_1 = local_3e8;
  uVar15 = *local_3e8;
  iVar10 = FUN_1805f68d0(uVar15 + 8);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(uVar15 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(uVar15 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar27 = *param_1;
  local_3f8 = (undefined1  [16])0x0;
  *(undefined8 **)(uVar27 + 0x58) = puVar13;
  plVar24 = *(longlong **)(uVar27 + 0x60);
  *(undefined8 **)(uVar27 + 0x60) = puVar12;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar25 = plVar24 + 1;
    lVar5 = *plVar25;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar3 = (int *)((longlong)plVar24 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24);
      }
    }
  }
  FUN_1805f68fc(uVar15 + 8);
  param_2 = local_408;
LAB_180196a1f:
  FUN_1801409d0(&plStack_c0,local_c8 & 0xff);
  FUN_18015c010(local_70);
  *(undefined ***)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4) + -4) =
       *(int *)(local_1f8[0] + 4) + -0xb0;
  FUN_1800f63e0(local_1e8);
  *(undefined ***)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4) + -4) =
       *(int *)(local_1f8[0] + 4) + -0x18;
  local_148[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_148);
LAB_180196aca:
  FUN_18015b930(local_50);
  local_428 = (undefined8 *)0x64;
  FUN_1801a7270(&local_428);
  goto LAB_180195eb0;
}



