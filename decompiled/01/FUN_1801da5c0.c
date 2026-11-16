// FUN_1801da5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da5c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801da5c0(longlong param_1,char *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined4 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined1 local_70 [16];
  code *local_60;
  undefined4 *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  undefined2 local_3f;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  pcVar6 = (char *)(param_1 + 1);
  if (pcVar6 == param_2) goto LAB_1801da842;
  cVar2 = *pcVar6;
  if (cVar2 == '}') {
    lVar5 = param_3[3];
    if (lVar5 < 0) {
LAB_1801da869:
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Can not switch from manual to automatic indexing");
    }
    param_3[3] = lVar5 + 1;
    FUN_1801dae40(param_3,lVar5,pcVar6);
  }
  else {
    if (cVar2 == '{') {
      FUN_1801da9b0(param_3,pcVar6,param_1 + 2);
    }
    if (cVar2 == ':') {
      uVar4 = param_3[3];
      if ((longlong)uVar4 < 0) goto LAB_1801da869;
      lVar5 = uVar4 + 1;
    }
    else {
      if (9 < (byte)(cVar2 - 0x30U)) {
LAB_1801da842:
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Invalid format string.");
      }
      uVar3 = 0;
      if (cVar2 == '0') {
        pcVar6 = (char *)(param_1 + 2);
      }
      else {
        do {
          if (0xccccccc < uVar3) goto LAB_1801da85c;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          uVar3 = ((int)cVar2 + uVar3 * 10) - 0x30;
        } while (((pcVar6 != param_2) && ('/' < *pcVar6)) && (*pcVar6 < ':'));
        if (0x7fffffff < uVar3) {
LAB_1801da85c:
                    /* WARNING: Subroutine does not return */
          FUN_1801e6400("Number is too big");
        }
      }
      if ((pcVar6 == param_2) || ((*pcVar6 != '}' && (*pcVar6 != ':')))) goto LAB_1801da842;
      if (0 < param_3[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Can not switch from automatic to manual indexing");
      }
      uVar4 = (ulonglong)uVar3;
      lVar5 = -1;
    }
    param_3[3] = lVar5;
    if (*pcVar6 == '}') {
      FUN_1801dae40(param_3,uVar4,pcVar6);
    }
    if (*pcVar6 != ':') {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Missing \'}\' in format string.");
    }
    pcVar6 = pcVar6 + 1;
    lVar5 = *param_3;
    *param_3 = (longlong)pcVar6;
    param_3[1] = param_3[1] + (lVar5 - (longlong)pcVar6);
    plVar1 = param_3 + 4;
    local_60 = (code *)0x0;
    local_70 = (undefined1  [16])0x0;
    FUN_1801db620(local_70,plVar1,uVar4);
    if (local_70[0] == '\r') {
      (*local_60)(param_3,plVar1,local_70._8_8_);
      pcVar6 = (char *)*param_3;
      if (pcVar6 == param_2) goto LAB_1801da835;
    }
    else {
      local_88 = 0;
      local_76 = 0;
      local_58 = &local_88;
      local_84 = 0xffffffff;
      local_80 = 0;
      local_7c = 0;
      local_7a = 0x2001;
      local_40 = local_70[0];
      local_3f = 0;
      local_50 = param_3;
      local_48 = plVar1;
      pcVar6 = (char *)FUN_1801db7a0(pcVar6,param_2,&local_58);
      if ((pcVar6 == param_2) || (*pcVar6 != '}')) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Missing \'}\' in format string.");
      }
      local_b8 = &local_88;
      local_a8 = local_70._0_8_;
      uStack_a0 = local_70._8_8_;
      local_98 = local_60;
      local_c0 = plVar1;
      FUN_1801daa40(&local_a8,&local_c8,&local_c0);
      *plVar1 = local_c8;
    }
    if (*pcVar6 != '}') {
LAB_1801da835:
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Unknown format specifier.");
    }
  }
}



