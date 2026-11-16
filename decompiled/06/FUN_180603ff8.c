// FUN_180603ff8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603ff8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180604392) */
/* WARNING: Removing unreachable block (ram,0x0001806043b8) */
/* WARNING: Removing unreachable block (ram,0x0001806043bc) */
/* WARNING: Removing unreachable block (ram,0x0001806043c2) */
/* WARNING: Removing unreachable block (ram,0x0001806043c6) */

void FUN_180603ff8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  char param_5,char *param_6,ulonglong param_7)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char ****ppppcVar11;
  char *pcVar12;
  undefined1 auStackY_e8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 *local_90;
  char ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  char ****local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_e8;
  if ((param_7 == 0) || ((*param_6 != '+' && (*param_6 != '-')))) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if ((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) {
    if (((uVar9 + 2 <= param_7) && (param_6[uVar9] == '0')) &&
       ((param_6[uVar9 + 1] + 0xa8U & 0xdf) == 0)) {
      uVar9 = uVar9 + 2;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  uStack_a0 = plVar2;
  local_90 = param_2;
  (**(code **)(*plVar2 + 8))(plVar2);
  plVar5 = (longlong *)FUN_1801593f0(&local_a8);
  if ((plVar2 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  local_88 = (char ****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_18015ad80(&local_88,0,param_7);
  (**(code **)(*plVar5 + 0x38))(plVar5,param_6);
  plVar2 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  uStack_a0 = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2);
  plVar5 = (longlong *)FUN_1801ddd40(&local_a8);
  if ((plVar2 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  (**(code **)(*plVar5 + 0x28))(plVar5,local_68);
  ppppcVar11 = (char ****)local_68;
  if (0xf < local_50) {
    ppppcVar11 = local_68[0];
  }
  if ((*(char *)ppppcVar11 != '\x7f') && ('\0' < *(char *)ppppcVar11)) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    while (((cVar1 = *(char *)ppppcVar11, cVar1 != '\x7f' && ('\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < param_7 - uVar9))) {
      param_7 = param_7 - (longlong)cVar1;
      FUN_18043ec70(&local_88,param_7);
      if ('\0' < *(char *)((longlong)ppppcVar11 + 1)) {
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
      }
    }
  }
  uVar3 = local_78;
  uVar10 = *(ulonglong *)(param_4 + 0x28);
  if (((longlong)uVar10 < 1) || (uVar10 <= local_78)) {
    lVar7 = 0;
  }
  else {
    lVar7 = uVar10 - local_78;
  }
  uVar4 = *(uint *)(param_4 + 0x18) & 0x1c0;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0._0_4_ = param_3[2];
  uStack_a0._4_4_ = param_3[3];
  if (uVar4 == 0x40) {
    ppppcVar11 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar11 = local_88;
    }
    uVar10 = uVar9;
    if (uVar9 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,
                   *(char *)ppppcVar11);
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else if (uVar4 == 0x100) {
    ppppcVar11 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar11 = local_88;
    }
    uVar10 = uVar9;
    if (uVar9 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,
                   *(char *)ppppcVar11);
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (lVar7 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,param_5);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar7 = 0;
  }
  else {
    if (lVar7 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,param_5);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar7 = 0;
    ppppcVar11 = (char ****)&local_88;
    if (0xf < uStack_70) {
      ppppcVar11 = local_88;
    }
    uVar10 = uVar9;
    if (uVar9 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,
                   *(char *)ppppcVar11);
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  *param_3 = local_a8;
  param_3[1] = uStack_a4;
  param_3[2] = (undefined4)uStack_a0;
  param_3[3] = uStack_a0._4_4_;
  ppppcVar11 = (char ****)&local_88;
  if (0xf < uStack_70) {
    ppppcVar11 = local_88;
  }
  pcVar12 = (char *)((longlong)ppppcVar11 + uVar9);
  lVar8 = uVar3 - uVar9;
  if (lVar8 != 0) {
    do {
      std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,*pcVar12);
      pcVar12 = pcVar12 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(undefined8 *)(param_4 + 0x28) = 0;
  if (lVar7 != 0) {
    do {
      std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_a8,param_5);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *local_90 = local_a8;
  local_90[1] = uStack_a4;
  local_90[2] = (undefined4)uStack_a0;
  local_90[3] = uStack_a0._4_4_;
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



