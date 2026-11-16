// FUN_18061a2a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a2a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18061a2a8(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    puVar4 = (undefined4 *)FUN_18060fe00();
    *puVar4 = 0x16;
    FUN_18060aad4();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_18062a878(0,&DAT_180bb1c70,0x104);
  _DAT_180bb2670 = &DAT_180bb1c70;
  if ((DAT_180bb2690 == (char *)0x0) || (pcVar6 = DAT_180bb2690, *DAT_180bb2690 == '\0')) {
    pcVar6 = &DAT_180bb1c70;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_18061a088(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_18060fe00();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_18061a088(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_18062a150(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_180621380(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_180621380(plVar5);
        return iVar3;
      }
      _DAT_180bb2678 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_180bb2678 = _DAT_180bb2678 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_180bb2680 = plVar2;
      FUN_180621380(0);
      local_res10 = (longlong *)0x0;
      goto LAB_18061a40d;
    }
    _DAT_180bb2678 = (int)local_res18 + -1;
    DAT_180bb2680 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_18061a40d:
  FUN_180621380(plVar5);
  return iVar7;
}



