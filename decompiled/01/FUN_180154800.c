// FUN_180154800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154800 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180154800(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  puVar1 = param_1 + 10;
  param_1[0xc] = 0;
  puVar3 = puVar1;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar3 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar3 = 0;
  if (param_1[7] != param_1[8]) {
    param_1[8] = param_1[7];
  }
  param_1[0x13] = 0xffffffffffffffff;
  local_48[0] = *(undefined1 *)((longlong)param_1 + 0x14);
  FUN_180157850(param_1 + 7,local_48);
  iVar10 = 5;
  uVar11 = *(uint *)((longlong)param_1 + 0x14);
  switch(uVar11) {
  case 0x2d:
    FUN_18015af80(puVar1);
    uVar11 = *(uint *)((longlong)param_1 + 0x14);
    break;
  case 0x30:
    goto switchD_18015497d_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_18015489a_caseD_31;
  }
  iVar10 = 6;
  param_1[4] = param_1[4] + 1;
  plVar8 = param_1 + 5;
  *plVar8 = *plVar8 + 1;
  if (*(char *)(param_1 + 3) == '\0') {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)param_1[1]) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = (uint)*pbVar2;
      *param_1 = pbVar2 + 1;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar11;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (uVar11 != 0xffffffff) {
    local_48[0] = (undefined1)uVar11;
    FUN_180157850(param_1 + 7,local_48);
  }
  if (*(int *)((longlong)param_1 + 0x14) == 10) {
    param_1[6] = param_1[6] + 1;
    *plVar8 = 0;
  }
  else {
    switch(*(int *)((longlong)param_1 + 0x14)) {
    case 0x30:
switchD_18015497d_caseD_30:
      FUN_18015af80(puVar1);
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\0') {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = (uint)*pbVar2;
          *param_1 = pbVar2 + 1;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar11;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (*(int *)((longlong)param_1 + 0x14) != -1) {
        local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
        FUN_180157850(param_1 + 7,local_48);
      }
      iVar9 = *(int *)((longlong)param_1 + 0x14);
      if (iVar9 == 10) {
LAB_180154d29:
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
switchD_180154a8e_caseD_2f:
        *(undefined1 *)(param_1 + 3) = 1;
        param_1[4] = param_1[4] + -1;
        if (param_1[5] == 0) {
          if (param_1[6] != 0) {
            param_1[6] = param_1[6] + -1;
          }
        }
        else {
          param_1[5] = param_1[5] + -1;
        }
        if (iVar9 != -1) {
          param_1[8] = param_1[8] + -1;
        }
        local_40 = 0;
        puVar5 = (undefined4 *)FUN_18060fe00();
        *puVar5 = 0;
        if (iVar10 == 5) {
          plVar8 = param_1 + 10;
          if (0xf < (ulonglong)param_1[0xd]) {
            plVar8 = (longlong *)*plVar8;
          }
          uVar6 = FUN_18060fb58(plVar8,&local_40,10);
          piVar7 = (int *)FUN_18060fe00();
          if (*piVar7 != 0x22) {
            param_1[0x10] = uVar6;
          }
        }
        else if (iVar10 == 6) {
          plVar8 = param_1 + 10;
          if (0xf < (ulonglong)param_1[0xd]) {
            plVar8 = (longlong *)*plVar8;
          }
          uVar6 = FUN_18060faa4(plVar8,&local_40,10);
          piVar7 = (int *)FUN_18060fe00();
          if (*piVar7 != 0x22) {
            param_1[0xf] = uVar6;
          }
        }
        plVar8 = param_1 + 10;
        if (0xf < (ulonglong)param_1[0xd]) {
          plVar8 = (longlong *)*plVar8;
        }
        uVar6 = FUN_180614da4(plVar8,&local_40);
        param_1[0x11] = uVar6;
      }
      if (iVar9 == 0x2e) {
switchD_180154a8e_caseD_2e:
        FUN_18015af80(param_1 + 10,*(undefined1 *)(param_1 + 0x12));
        param_1[0x13] = param_1[0xc] + -1;
        iVar10 = 7;
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\0') {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 == (byte *)param_1[1]) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)*pbVar2;
            *param_1 = pbVar2 + 1;
          }
          *(uint *)((longlong)param_1 + 0x14) = uVar11;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 0;
        }
        if (*(int *)((longlong)param_1 + 0x14) != -1) {
          local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
          FUN_180157850(param_1 + 7,local_48);
        }
        if (*(int *)((longlong)param_1 + 0x14) == 10) {
          param_1[6] = param_1[6] + 1;
          param_1[5] = 0;
        }
        else {
          switch(*(int *)((longlong)param_1 + 0x14)) {
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
switchD_180154b37_caseD_30:
            FUN_18015af80(param_1 + 10);
            param_1[4] = param_1[4] + 1;
            param_1[5] = param_1[5] + 1;
            if (*(char *)(param_1 + 3) == '\0') {
              pbVar2 = (byte *)*param_1;
              if (pbVar2 == (byte *)param_1[1]) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = (uint)*pbVar2;
                *param_1 = pbVar2 + 1;
              }
              *(uint *)((longlong)param_1 + 0x14) = uVar11;
            }
            else {
              *(undefined1 *)(param_1 + 3) = 0;
            }
            if (*(int *)((longlong)param_1 + 0x14) != -1) {
              local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
              FUN_180157850(param_1 + 7,local_48);
            }
            iVar9 = *(int *)((longlong)param_1 + 0x14);
            if (iVar9 == 10) goto LAB_180154d29;
            switch(iVar9) {
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              goto switchD_180154b37_caseD_30;
            default:
              goto switchD_180154a8e_caseD_2f;
            case 0x45:
            case 0x65:
              goto switchD_180154a8e_caseD_45;
            }
          }
        }
        pcVar4 = "invalid number; expected digit after \'.\'";
      }
      else {
        if ((iVar9 != 0x45) && (iVar9 != 0x65)) goto switchD_180154a8e_caseD_2f;
switchD_180154a8e_caseD_45:
        FUN_18015af80(param_1 + 10);
        iVar10 = 7;
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\0') {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 == (byte *)param_1[1]) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)*pbVar2;
            *param_1 = pbVar2 + 1;
          }
          *(uint *)((longlong)param_1 + 0x14) = uVar11;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 0;
        }
        if (*(int *)((longlong)param_1 + 0x14) != -1) {
          local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
          FUN_180157850(param_1 + 7,local_48);
        }
        if (*(int *)((longlong)param_1 + 0x14) == 10) {
          param_1[6] = param_1[6] + 1;
          param_1[5] = 0;
        }
        else {
          switch(*(int *)((longlong)param_1 + 0x14)) {
          case 0x2b:
          case 0x2d:
            FUN_18015af80(param_1 + 10);
            param_1[4] = param_1[4] + 1;
            param_1[5] = param_1[5] + 1;
            if (*(char *)(param_1 + 3) == '\0') {
              pbVar2 = (byte *)*param_1;
              if (pbVar2 == (byte *)param_1[1]) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = (uint)*pbVar2;
                *param_1 = pbVar2 + 1;
              }
              *(uint *)((longlong)param_1 + 0x14) = uVar11;
            }
            else {
              *(undefined1 *)(param_1 + 3) = 0;
            }
            if (*(int *)((longlong)param_1 + 0x14) != -1) {
              local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
              FUN_180157850(param_1 + 7,local_48);
            }
            if (*(int *)((longlong)param_1 + 0x14) == 10) {
              param_1[6] = param_1[6] + 1;
              param_1[5] = 0;
            }
            else {
              switch(*(int *)((longlong)param_1 + 0x14)) {
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x34:
              case 0x35:
              case 0x36:
              case 0x37:
              case 0x38:
              case 0x39:
                goto switchD_180154c23_caseD_30;
              }
            }
            pcVar4 = "invalid number; expected digit after exponent sign";
            goto LAB_180154938;
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
switchD_180154c23_caseD_30:
            FUN_18015af80(param_1 + 10);
            param_1[4] = param_1[4] + 1;
            param_1[5] = param_1[5] + 1;
            if (*(char *)(param_1 + 3) == '\0') {
              pbVar2 = (byte *)*param_1;
              if (pbVar2 == (byte *)param_1[1]) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = (uint)*pbVar2;
                *param_1 = pbVar2 + 1;
              }
              *(uint *)((longlong)param_1 + 0x14) = uVar11;
            }
            else {
              *(undefined1 *)(param_1 + 3) = 0;
            }
            if (*(int *)((longlong)param_1 + 0x14) != -1) {
              local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
              FUN_180157850(param_1 + 7,local_48);
            }
            iVar9 = *(int *)((longlong)param_1 + 0x14);
            if (iVar9 == 10) goto LAB_180154d29;
            switch(iVar9) {
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              goto switchD_180154c23_caseD_30;
            default:
              goto switchD_180154a8e_caseD_2f;
            }
          }
        }
        pcVar4 = "invalid number; expected \'+\', \'-\', or digit after exponent";
      }
      goto LAB_180154938;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
switchD_18015489a_caseD_31:
      do {
        FUN_18015af80(param_1 + 10);
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\0') {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 == (byte *)param_1[1]) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)*pbVar2;
            *param_1 = pbVar2 + 1;
          }
          *(uint *)((longlong)param_1 + 0x14) = uVar11;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 0;
        }
        if (*(int *)((longlong)param_1 + 0x14) != -1) {
          local_48[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
          FUN_180157850(param_1 + 7,local_48);
        }
        iVar9 = *(int *)((longlong)param_1 + 0x14);
        if (iVar9 == 10) goto LAB_180154d29;
        switch(iVar9) {
        case 0x2e:
          goto switchD_180154a8e_caseD_2e;
        default:
          goto switchD_180154a8e_caseD_2f;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          break;
        case 0x45:
        case 0x65:
          goto switchD_180154a8e_caseD_45;
        }
      } while( true );
    }
  }
  pcVar4 = "invalid number; expected digit after \'-\'";
LAB_180154938:
  param_1[0xe] = pcVar4;
}



