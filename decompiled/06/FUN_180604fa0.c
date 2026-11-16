// FUN_180604fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180604fa0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018060519c) */
/* WARNING: Removing unreachable block (ram,0x0001806051bb) */
/* WARNING: Removing unreachable block (ram,0x0001806051bf) */
/* WARNING: Removing unreachable block (ram,0x0001806051c5) */
/* WARNING: Removing unreachable block (ram,0x0001806051c9) */

void FUN_180604fa0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  char param_5,char param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  char ****ppppcVar6;
  ulonglong uVar7;
  undefined1 auStackY_e8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  char ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStackY_e8;
  if ((*(uint *)(param_4 + 0x18) & 0x4000) == 0) {
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = *(longlong **)(param_3 + 2);
    (**(code **)(*param_1 + 0x48))(local_98,param_2,&local_98);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
    uStack_90 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar2 = (longlong *)FUN_1801ddd40(&local_98);
    if ((plVar1 != (longlong *)0x0) &&
       (puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar3 != (undefined8 *)0x0))
    {
      (**(code **)*puVar3)(puVar3,1);
    }
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = (char ****)0x0;
    if (param_6 == '\0') {
      pcVar4 = *(code **)(*plVar2 + 0x30);
    }
    else {
      pcVar4 = *(code **)(*plVar2 + 0x38);
    }
    (*pcVar4)(plVar2,&local_98);
    FUN_1800f5780(&local_78,&local_98);
    FUN_18015c010();
    uVar7 = *(ulonglong *)(param_4 + 0x28);
    if (((longlong)uVar7 < 1) || (uVar7 <= local_68)) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar7 - local_68;
    }
    if ((*(uint *)(param_4 + 0x18) & 0x1c0) != 0x40) {
      local_98 = *param_3;
      uStack_94 = param_3[1];
      uStack_90._0_4_ = param_3[2];
      uStack_90._4_4_ = param_3[3];
      if (lVar5 != 0) {
        do {
          std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                    ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_98,param_5);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      *param_3 = local_98;
      param_3[1] = uStack_94;
      param_3[2] = (undefined4)uStack_90;
      param_3[3] = uStack_90._4_4_;
      lVar5 = 0;
    }
    ppppcVar6 = (char ****)&local_78;
    if (0xf < uStack_60) {
      ppppcVar6 = local_78;
    }
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90._0_4_ = param_3[2];
    uStack_90._4_4_ = param_3[3];
    uVar7 = local_68;
    if (local_68 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_98,*(char *)ppppcVar6
                  );
        ppppcVar6 = (char ****)((longlong)ppppcVar6 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *(undefined8 *)(param_4 + 0x28) = 0;
    if (lVar5 != 0) {
      do {
        std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                  ((ostreambuf_iterator<char,std::char_traits<char>_> *)&local_98,param_5);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    *param_2 = local_98;
    param_2[1] = uStack_94;
    param_2[2] = (undefined4)uStack_90;
    param_2[3] = uStack_90._4_4_;
    if (0xf < uStack_60) {
      ppppcVar6 = local_78;
      if ((0xfff < uStack_60 + 1) &&
         (ppppcVar6 = (char ****)local_78[-1],
         (char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(ppppcVar6);
    }
  }
}



