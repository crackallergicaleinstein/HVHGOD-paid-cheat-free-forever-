// FUN_1801dc220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dc220 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dc220(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  float fVar16;
  undefined1 auStack_728 [32];
  int local_708;
  char **local_700;
  char local_6f8;
  int local_6f4;
  int local_6f0;
  char *local_6e8;
  longlong *plStack_6e0;
  undefined8 local_6d8;
  undefined1 local_6d0;
  undefined7 uStack_6cf;
  undefined8 uStack_6c8;
  longlong lStack_6c0;
  ulonglong uStack_6b8;
  char *local_6a8;
  char *local_6a0;
  char *local_698;
  int *local_690;
  longlong local_688;
  undefined8 *local_680;
  char **local_678;
  char **local_670;
  undefined1 *local_668;
  int *local_660;
  char **local_658;
  char **local_650;
  char *local_648;
  char **local_640;
  int *local_638;
  char *local_628;
  char *local_620;
  char *local_618;
  longlong *plStack_610;
  char *local_608;
  char *local_600;
  char local_5f8;
  char local_5f7;
  char local_5f6;
  char local_5f5;
  int local_5f4;
  int local_5f0;
  int local_5ec;
  undefined1 local_5e8 [16];
  longlong lStack_5d8;
  ulonglong uStack_5d0;
  char local_5c8;
  char acStack_5c7 [1384];
  undefined1 local_5f [7];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_728;
  iVar10 = 0;
  local_5f8 = *(char *)(param_4 + 10);
  if (local_5f8 == '\0') {
    local_5f8 = '\x02';
  }
  bVar2 = false;
  iVar15 = 3;
  cVar14 = 'e';
  local_6f0 = *(int *)(param_4 + 4);
  bVar1 = false;
  switch(*(undefined1 *)(param_4 + 8)) {
  case 0x41:
    bVar2 = true;
  case 0x61:
    iVar15 = 4;
    cVar14 = 'p';
    break;
  default:
    bVar1 = true;
    break;
  case 0x45:
    bVar2 = true;
  case 0x65:
    if (local_6f0 == -1) {
      local_6f0 = 6;
    }
    iVar15 = 1;
    break;
  case 0x46:
    bVar2 = true;
  case 0x66:
    if (local_6f0 == -1) {
      local_6f0 = 6;
    }
    iVar15 = 2;
    break;
  case 0x47:
    bVar2 = true;
  case 0x67:
    if (local_6f0 == -1) {
      local_6f0 = 6;
    }
    else if (local_6f0 == 0) {
      local_6f0 = 1;
    }
  }
  local_6f4 = local_6f0 + -0x432;
  if (local_6f0 < 0x433) {
    local_6f4 = 0;
  }
  else {
    local_6f0 = 0x432;
  }
  local_6d8 = param_1;
  iVar4 = FUN_180615430(param_3);
  local_5f6 = iVar4 != 0;
  if (NAN((float)param_3) || NAN((float)param_3)) {
    local_618 = acStack_5c7;
    if (iVar4 == 0) {
      local_618 = &local_5c8;
    }
    local_618[0] = 'n';
    local_618[1] = 'a';
    local_618[2] = 'n';
    local_618 = local_618 + 3;
  }
  else {
    if (local_6f0 == -1) {
      if (!bVar1) {
        local_708 = iVar15;
        FUN_1801e4f00();
        goto LAB_1801dc3c8;
      }
      puVar5 = (undefined8 *)FUN_1801e6040(&local_6e8,&local_5c8,local_5f,param_3);
      local_6e8 = (char *)*puVar5;
      plStack_610 = (longlong *)puVar5[1];
    }
    else {
      local_700 = (char **)CONCAT44(local_700._4_4_,local_6f0);
      local_708 = iVar15;
      FUN_1801e4b30(&local_6e8,&local_5c8,local_5f);
LAB_1801dc3c8:
      plStack_610 = plStack_6e0;
    }
    local_618 = local_6e8;
  }
  fVar16 = (float)param_3;
  local_628 = &local_5c8;
  local_5f4 = (int)local_618 - (int)local_628;
  if (local_5f6 == '\0') {
    if (local_5f8 != '\x02') {
      local_5f4 = local_5f4 + 1;
    }
  }
  else {
    local_628 = acStack_5c7;
  }
  pcVar7 = local_628;
  if (bVar2) {
    for (; pcVar7 != local_618; pcVar7 = pcVar7 + 1) {
      cVar9 = *pcVar7;
      if (('`' < cVar9) && (cVar9 < '{')) {
        *pcVar7 = cVar9 + -0x20;
      }
    }
    cVar14 = cVar14 + -0x20;
  }
  local_6f8 = ((uint)fVar16 & 0x7f800000) == 0x7f800000;
  cVar9 = '\0';
  local_5f7 = '\0';
  local_5f0 = 0;
  local_5ec = 0;
  lStack_5d8 = 0;
  uStack_5d0 = 0xf;
  local_5e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_5e8._1_15_;
  local_5e8 = auVar3 << 8;
  local_620 = local_618;
  local_608 = local_618;
  local_600 = local_618;
  if ((bool)local_6f8) goto LAB_1801dc70a;
  pcVar7 = local_628;
  pcVar8 = local_618;
  pcVar13 = local_618;
  if (*(char *)(param_4 + 0xb) == '\0') {
    if (*(char *)(param_4 + 0xc) != '\0') goto joined_r0x0001801dc4aa;
  }
  else {
joined_r0x0001801dc4aa:
    for (; pcVar7 < local_618; pcVar7 = pcVar7 + 1) {
      if (*pcVar7 == '.') {
        pcVar13 = pcVar7;
        local_600 = pcVar7;
      }
      else if (*pcVar7 == cVar14) {
        pcVar8 = pcVar7;
        local_620 = pcVar7;
      }
    }
    local_608 = pcVar13;
    if (pcVar8 < pcVar13) {
      local_608 = pcVar8;
    }
    if ((*(char *)(param_4 + 0xb) != '\0') && (pcVar13 == local_618)) {
      local_5f4 = local_5f4 + 1;
      cVar9 = '\x01';
      local_5f7 = '\x01';
    }
    if (*(char *)(param_4 + 0xc) != '\0') {
      if (param_5 == 0) {
        plStack_6e0 = (longlong *)FUN_1805fbf84(1);
      }
      else {
        plStack_6e0 = *(longlong **)(param_5 + 8);
        (**(code **)(*plStack_6e0 + 8))();
      }
      plVar6 = (longlong *)FUN_1801ddd40(&local_6e8);
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_6d0);
      FUN_18015c010(local_5e8);
      local_5e8._1_7_ = uStack_6cf;
      local_5e8[0] = local_6d0;
      local_5e8._8_8_ = uStack_6c8;
      lStack_5d8 = lStack_6c0;
      uStack_5d0 = uStack_6b8;
      lStack_6c0 = 0;
      uStack_6b8 = 0xf;
      local_6d0 = 0;
      thunk_FUN_18015c010(&local_6d0);
      if ((plStack_6e0 != (longlong *)0x0) &&
         (puVar5 = (undefined8 *)(**(code **)(*plStack_6e0 + 0x10))(), puVar5 != (undefined8 *)0x0))
      {
        (**(code **)*puVar5)(puVar5,1);
      }
      pcVar7 = local_5e8;
      if (0xf < uStack_5d0) {
        pcVar7 = (char *)local_5e8._0_8_;
      }
      uVar11 = (longlong)local_608 - (longlong)local_628;
      if ((lStack_5d8 != 0) && (uVar12 = (ulonglong)*pcVar7, uVar12 < uVar11)) {
        pcVar8 = pcVar7 + lStack_5d8;
        do {
          uVar11 = uVar11 - (longlong)(char)uVar12;
          iVar10 = iVar10 + 1;
          if (pcVar7 + 1 != pcVar8) {
            pcVar7 = pcVar7 + 1;
          }
          uVar12 = (ulonglong)*pcVar7;
        } while (uVar12 < uVar11);
      }
      local_5f4 = local_5f4 + iVar10;
      pcVar8 = local_620;
      cVar9 = local_5f7;
      local_5ec = iVar10;
    }
  }
  if (iVar15 == 1) {
LAB_1801dc6d1:
    if (((local_6f4 != 0) && (*(char *)(param_4 + 0xb) == '\0')) &&
       (*(char *)(param_4 + 0xc) == '\0')) {
      do {
        pcVar8 = pcVar8 + -1;
        local_620 = pcVar8;
      } while (*pcVar8 != cVar14);
    }
  }
  else if (iVar15 != 2) {
    if (iVar15 == 3) {
      iVar10 = local_5f0;
      if ((*(char *)(param_4 + 0xb) != '\0') &&
         ((*(char *)(param_4 + 8) == 'g' || (*(char *)(param_4 + 8) == 'G')))) {
        iVar10 = (int)pcVar8 - (int)local_628;
        if (cVar9 == '\0') {
          iVar10 = iVar10 + -1;
        }
        iVar10 = (local_6f4 - iVar10) + local_6f0;
        local_5f0 = iVar10;
        if (((pcVar8 == local_618) && (ABS(fVar16) < 1.0)) && (pcVar7 = local_628, fVar16 != 0.0)) {
          for (; pcVar7 < local_618; pcVar7 = pcVar7 + 1) {
            if (*pcVar7 == '0') {
              iVar10 = iVar10 + 1;
              local_5f0 = iVar10;
            }
            else if (*pcVar7 != '.') break;
          }
        }
      }
      goto LAB_1801dc70a;
    }
    goto LAB_1801dc6d1;
  }
  iVar10 = local_6f4;
  local_5f0 = local_6f4;
LAB_1801dc70a:
  local_5f4 = local_5f4 + iVar10;
  if (((*(char *)(param_4 + 0xd) == '\0') || (*(char *)(param_4 + 9) != '\0')) ||
     (local_6f8 != '\0')) {
    local_5f5 = '\0';
  }
  else {
    local_5f5 = '\x01';
  }
  local_6a8 = &local_5f8;
  local_6a0 = &local_5f6;
  local_698 = &local_5f5;
  local_690 = &local_5f4;
  local_680 = &param_5;
  local_670 = &local_608;
  local_668 = local_5e8;
  local_660 = &local_5ec;
  local_658 = &local_600;
  local_650 = &local_618;
  local_648 = &local_5f7;
  local_640 = &local_620;
  local_638 = &local_5f0;
  local_688 = param_4;
  local_678 = &local_628;
  if (local_5f5 == '\0') {
    local_700 = &local_6a8;
    FUN_1801df610(local_6d8,param_2,local_5f4,param_4);
  }
  else {
    FUN_1801dc870(&local_6a8,local_6d8,param_2);
  }
  thunk_FUN_18015c010(local_5e8);
}



