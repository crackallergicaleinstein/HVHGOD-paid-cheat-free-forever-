// FUN_18060d37c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060d37c */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18060d37c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  cVar6 = *(char *)(param_1 + 0x39);
  uVar9 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_18060d45f:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_18060d463:
      cVar6 = FUN_18060bcac(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_18060d4a5:
        cVar6 = FUN_18060e188(param_1);
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_18060d419:
            cVar6 = FUN_18060dffc(param_1,0);
            goto LAB_18060d4c7;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) {
          }
        }
LAB_18060d3f0:
        cVar6 = FUN_18060dda0(param_1);
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_18060d4bd;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') {
          }
          goto LAB_18060d419;
        }
        goto LAB_18060d3f0;
      }
      cVar6 = FUN_18060dd24(param_1);
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_18060baa8(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_18060d3f0;
      if (cVar6 == 'i') goto LAB_18060d45f;
      if (cVar6 != 'n') {
      }
      cVar6 = FUN_18060e0d0(param_1);
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_18060d4bd:
      uVar8 = 1;
    }
    else {
      if (cVar6 == 's') goto LAB_18060d4a5;
      if (cVar6 == 'u') goto LAB_18060d463;
      if (cVar6 != 'x') {
      }
      uVar8 = 0;
    }
    cVar6 = FUN_18060beb0(param_1,uVar8);
  }
LAB_18060d4c7:
  if (cVar6 == '\0') {
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
  }
  local_50 = local_50 & 0xffffffffff000000;
  lVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 >> 4 & 1) != 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar4 >> 1 & 1) == 0) goto LAB_18060d523;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    lVar11 = 1;
  }
LAB_18060d523:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) != 0) || (bVar5 = true, (uVar4 >> 5 & 1) == 0)) {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar11 + -0x10] = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar9 = 0x58;
    }
    local_40[lVar11 + -0xf] = uVar9;
    lVar11 = lVar11 + 2;
  }
  iVar13 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)lVar11;
  if ((uVar4 & 0xc) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (iVar7 = FUN_1806112e8(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar7 != -1))) {
        iVar7 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        if ((iVar7 == -2) || (iVar10 = iVar10 + 1, iVar13 <= iVar10)) goto LAB_18060d5d8;
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
LAB_18060d5d8:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_18060e3e8(plVar2,&local_50,lVar11,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)lVar11;
  }
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
             (iVar7 = FUN_1806112e8(0x30,*plVar2,uVar8), iVar7 != -1))) {
        iVar7 = *piVar1;
        *piVar1 = iVar7 + 1;
        if ((iVar7 == -2) || (iVar10 = iVar10 + 1, iVar13 <= iVar10)) goto LAB_18060d67f;
      }
      *piVar1 = -1;
    }
  }
LAB_18060d67f:
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_18060e3e8(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_18060e230(lVar11);
    }
    puVar12 = *(undefined2 **)(param_1 + 0x40);
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_50 = 0;
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        piVar1 = (int *)(param_1 + 0x20);
        plVar2 = (longlong *)(param_1 + 0x460);
        do {
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          lVar11 = FUN_180623fbc(local_40,uVar3,&local_50,*(undefined8 *)(param_1 + 8));
          if (lVar11 == -1) {
            *piVar1 = -1;
            break;
          }
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_18060e3e8(plVar2,local_40,lVar11,piVar1);
          }
          else {
            *piVar1 = *piVar1 + (int)lVar11;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        plVar2 = (longlong *)(param_1 + 0x460);
        do {
          local_50 = local_50 & 0xffffffff00000000;
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          local_68 = *(undefined8 *)(param_1 + 8);
          iVar7 = FUN_1806239f8(&local_50,local_40,6,uVar3);
          if (iVar7 != 0) {
LAB_18060d7cd:
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            break;
          }
          if ((int)local_50 == 0) goto LAB_18060d7cd;
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_18060e3e8(plVar2,local_40,local_50 & 0xffffffff,param_1 + 0x20);
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (int)local_50;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
  }
  if ((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (iVar7 = FUN_1806112e8(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar7 != -1))) {
        iVar7 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        if (iVar7 == -2) {
        }
        iVar10 = iVar10 + 1;
        if (iVar13 <= iVar10) {
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
}



