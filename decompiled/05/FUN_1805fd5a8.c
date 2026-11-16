// FUN_1805fd5a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd5a8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001805fd9ae) */
/* WARNING: Removing unreachable block (ram,0x0001805fd9d4) */
/* WARNING: Removing unreachable block (ram,0x0001805fd9d8) */
/* WARNING: Removing unreachable block (ram,0x0001805fd9de) */
/* WARNING: Removing unreachable block (ram,0x0001805fd9e2) */

void FUN_1805fd5a8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  char param_5,char *param_6,ulonglong param_7,char param_8)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  char ****ppppcVar12;
  char *pcVar13;
  undefined1 auStackY_f8 [32];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 local_a8 [4];
  longlong *local_a0;
  longlong *local_98;
  undefined4 *local_90;
  char ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  char ****local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_f8;
  if ((param_7 == 0) || ((*param_6 != '+' && (*param_6 != '-')))) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar8 = &DAT_1806abf4c;
    if (((uVar11 + 2 <= param_7) && (param_6[uVar11] == '0')) &&
       ((param_6[uVar11 + 1] + 0xa8U & 0xdf) == 0)) {
      uVar11 = uVar11 + 2;
    }
  }
  else {
    puVar8 = &DAT_1806abf48;
  }
  local_90 = param_2;
  local_b8 = FUN_18061beb0(param_6,puVar8);
  local_a8[0] = 0x2e;
  puVar5 = (undefined8 *)FUN_18061159c();
  local_a8[0] = CONCAT11(local_a8[0]._1_1_,*(undefined1 *)*puVar5);
  uVar6 = FUN_18061beb0(param_6,local_a8);
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_98 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  local_a0 = (longlong *)FUN_1801593f0(&local_a0);
  if ((plVar1 != (longlong *)0x0) &&
     (puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
  local_88 = (char ****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_18015ad80(&local_88,0,param_7);
  (**(code **)(*local_a0 + 0x38))(local_a0,param_6);
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_98 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  plVar7 = (longlong *)FUN_1801ddd40(&local_a0);
  if ((plVar1 != (longlong *)0x0) &&
     (puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,local_68);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (uVar6 != param_7) {
    cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
    ppppcVar12 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar12 = local_88;
    }
    *(char *)((longlong)ppppcVar12 + uVar6) = cVar3;
  }
  if (param_8 != '\0') {
    if (uVar6 == param_7) {
      uVar6 = local_b8;
    }
    ppppcVar12 = (char ****)local_68;
    if (0xf < local_50) {
      ppppcVar12 = local_68[0];
    }
    while (((cVar3 = *(char *)ppppcVar12, cVar3 != '\x7f' && ('\0' < cVar3)) &&
           ((ulonglong)(longlong)cVar3 < uVar6 - uVar11))) {
      uVar6 = uVar6 - (longlong)cVar3;
      FUN_18043ec70(&local_88,uVar6);
      if ('\0' < *(char *)((longlong)ppppcVar12 + 1)) {
        ppppcVar12 = (char ****)((longlong)ppppcVar12 + 1);
      }
    }
  }
  uVar2 = local_78;
  uVar6 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar6 < 1) || (uVar6 <= local_78)) {
    lVar9 = 0;
  }
  else {
    lVar9 = uVar6 - local_78;
  }
  uVar4 = *(uint *)(param_4 + 0x18) & 0x1c0;
  local_b8._0_4_ = *param_3;
  local_b8._4_4_ = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  if (uVar4 == 0x40) {
    ppppcVar12 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar12 = local_88;
    }
    uVar6 = uVar11;
    if (uVar11 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,
                   *(char *)ppppcVar12);
        ppppcVar12 = (char ****)((longlong)ppppcVar12 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else if (uVar4 == 0x100) {
    ppppcVar12 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar12 = local_88;
    }
    uVar6 = uVar11;
    if (uVar11 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,
                   *(char *)ppppcVar12);
        ppppcVar12 = (char ****)((longlong)ppppcVar12 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (lVar9 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,param_5);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    lVar9 = 0;
  }
  else {
    if (lVar9 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,param_5);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    lVar9 = 0;
    ppppcVar12 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar12 = local_88;
    }
    uVar6 = uVar11;
    if (uVar11 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,
                   *(char *)ppppcVar12);
        ppppcVar12 = (char ****)((longlong)ppppcVar12 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  *param_3 = (undefined4)local_b8;
  param_3[1] = local_b8._4_4_;
  param_3[2] = uStack_b0;
  param_3[3] = uStack_ac;
  ppppcVar12 = (char ****)&local_88;
  if (0xf < uStack_70) {
    ppppcVar12 = local_88;
  }
  pcVar13 = (char *)((longlong)ppppcVar12 + uVar11);
  lVar10 = uVar2 - uVar11;
  if (lVar10 != 0) {
    do {
      std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,*pcVar13);
      pcVar13 = pcVar13 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  if (lVar9 != 0) {
    do {
      std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_b8,param_5);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *local_90 = (undefined4)local_b8;
  local_90[1] = local_b8._4_4_;
  local_90[2] = uStack_b0;
  local_90[3] = uStack_ac;
  FUN_18015c010(local_68);
  if (0xf < uStack_70) {
    if ((0xfff < uStack_70 + 1) &&
       ((char *)0x1f < (char *)((longlong)local_88 + (-8 - (longlong)local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}



