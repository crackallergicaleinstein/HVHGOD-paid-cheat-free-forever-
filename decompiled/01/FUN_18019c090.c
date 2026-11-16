// FUN_18019c090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019c090 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019c090(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && (param_2 != 0)) {
    local_58 = param_3 + param_2;
    local_50 = 0;
    lStack_48 = 0;
    local_40 = 0;
    if (param_4 != 0) {
      if (0x7fffffffffffffff < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar4 = FUN_18015bca0(param_4);
      local_50 = lVar4;
      local_40 = param_4 + lVar4;
      FUN_18063ab10(lVar4,0,param_4);
      lStack_48 = param_4 + lVar4;
    }
    lVar2 = local_50;
    lVar4 = local_58;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar3 = FUN_1804514f0(lVar2,lVar4,param_4);
    lVar6 = FUN_18017ea70();
    lVar5 = local_40;
    lVar2 = lStack_48;
    lVar4 = local_50;
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (cVar3 != '\0') {
      lVar6 = *param_1;
      plVar1 = *(longlong **)(lVar6 + 0x338);
      if (plVar1 == *(longlong **)(lVar6 + 0x340)) {
        FUN_1801b5730(lVar6 + 0x330,plVar1,&local_58);
      }
      else {
        *plVar1 = local_58;
        local_40 = 0;
        local_50 = 0;
        lStack_48 = 0;
        plVar1[1] = lVar4;
        plVar1[2] = lVar2;
        plVar1[3] = lVar5;
        *(longlong *)(lVar6 + 0x338) = *(longlong *)(lVar6 + 0x338) + 0x20;
      }
    }
    FUN_180113710(&local_50);
  }
}



