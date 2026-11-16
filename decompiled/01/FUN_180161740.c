// FUN_180161740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180161740 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x0001801619ec : 10 cases all go to same
   destination */

void FUN_180161740(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  puVar11 = (undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar5 = puVar11;
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    puVar5 = (undefined8 *)*puVar11;
  }
  *(undefined1 *)puVar5 = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != *(longlong *)(param_1 + 0x40)) {
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  local_28[0] = *(undefined1 *)(param_1 + 0x14);
  FUN_180157850((longlong *)(param_1 + 0x38),local_28);
  iVar10 = 5;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  switch(uVar2) {
  case 0x2d:
    FUN_18015af80(puVar11);
    break;
  case 0x30:
    goto switchD_1801617d4_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_1801617d4_caseD_31;
  }
  iVar10 = 6;
  uVar2 = FUN_180162620(param_1);
  switch(uVar2) {
  case 0x30:
    uVar2 = *(undefined4 *)(param_1 + 0x14);
switchD_1801617d4_caseD_30:
    FUN_18015af80(puVar11,uVar2);
    iVar3 = FUN_180162620(param_1);
    if (iVar3 == 0x2e) {
switchD_180161894_caseD_0:
      FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x90));
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x60) + -1;
      iVar10 = 7;
      uVar2 = FUN_180162620(param_1);
      switch(uVar2) {
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
        FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
        iVar3 = FUN_180162620(param_1);
        uVar4 = iVar3 - 0x30;
        if (uVar4 < 0x36) {
LAB_180161943:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((&switchD_180161957::switchdataD_180161c24)[(int)uVar4]) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
            goto switchD_180161957_caseD_0;
          default:
            break;
          case 0x15:
          case 0x35:
            goto switchD_180161894_caseD_17;
          }
        }
        break;
      default:
        pcVar9 = "invalid number; expected digit after \'.\'";
        goto LAB_180161ae4;
      }
    }
    else if ((iVar3 - 0x45U & 0xffffffdf) == 0) {
switchD_180161894_caseD_17:
      FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
      iVar10 = 7;
      uVar2 = FUN_180162620(param_1);
      switch(uVar2) {
      case 0x2b:
      case 0x2d:
        FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
        uVar2 = FUN_180162620(param_1);
        switch(uVar2) {
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
          goto switchD_180161860_caseD_30;
        default:
          pcVar9 = "invalid number; expected digit after exponent sign";
          goto LAB_180161ae4;
        }
      default:
        pcVar9 = "invalid number; expected \'+\', \'-\', or digit after exponent";
LAB_180161ae4:
        *(char **)(param_1 + 0x70) = pcVar9;
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
switchD_180161860_caseD_30:
        FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
        iVar3 = FUN_180162620(param_1);
        while (iVar3 - 0x30U < 10) {
          FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
          iVar3 = FUN_180162620(param_1);
        }
      }
    }
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar2 = *(undefined4 *)(param_1 + 0x14);
switchD_1801617d4_caseD_31:
    FUN_18015af80(puVar11,uVar2);
    iVar3 = FUN_180162620(param_1);
    uVar4 = iVar3 - 0x2e;
    if (uVar4 < 0x38) {
LAB_180161880:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&switchD_180161894::switchdataD_180161bb8)[(int)uVar4]) {
      case 0:
        goto switchD_180161894_caseD_0;
      default:
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        goto switchD_180161894_caseD_2;
      case 0x17:
      case 0x37:
        goto switchD_180161894_caseD_17;
      }
    }
    break;
  default:
    pcVar9 = "invalid number; expected digit after \'-\'";
    goto LAB_180161ae4;
  }
switchD_180161894_caseD_1:
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
    }
  }
  else {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
  }
  local_20 = 0;
  puVar6 = (undefined4 *)FUN_18060fe00();
  *puVar6 = 0;
  if (iVar10 == 5) {
    puVar5 = puVar11;
    if (0xf < *(ulonglong *)(param_1 + 0x68)) {
      puVar5 = (undefined8 *)*puVar11;
    }
    uVar7 = FUN_18060fb58(puVar5,&local_20,10);
    piVar8 = (int *)FUN_18060fe00();
    if (*piVar8 != 0x22) {
      *(undefined8 *)(param_1 + 0x80) = uVar7;
    }
  }
  else if (iVar10 == 6) {
    puVar5 = puVar11;
    if (0xf < *(ulonglong *)(param_1 + 0x68)) {
      puVar5 = (undefined8 *)*puVar11;
    }
    uVar7 = FUN_18060faa4(puVar5,&local_20,10);
    piVar8 = (int *)FUN_18060fe00();
    if (*piVar8 != 0x22) {
      *(undefined8 *)(param_1 + 0x78) = uVar7;
    }
  }
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    puVar11 = (undefined8 *)*puVar11;
  }
  uVar7 = FUN_180614da4(puVar11,&local_20);
  *(undefined8 *)(param_1 + 0x88) = uVar7;
switchD_180161894_caseD_2:
  FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
  iVar3 = FUN_180162620(param_1);
  uVar4 = iVar3 - 0x2e;
  if (0x37 < uVar4) goto switchD_180161894_caseD_1;
  goto LAB_180161880;
switchD_180161957_caseD_0:
  FUN_18015af80(puVar11,*(undefined1 *)(param_1 + 0x14));
  iVar3 = FUN_180162620(param_1);
  uVar4 = iVar3 - 0x30;
  if (0x35 < uVar4) goto switchD_180161894_caseD_1;
  goto LAB_180161943;
}



