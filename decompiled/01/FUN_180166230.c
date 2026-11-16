// FUN_180166230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166230 */

undefined1 (*) [16]
FUN_180166230(undefined1 (*param_1) [16],longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_50;
  ulonglong local_48;
  undefined1 (*local_40) [16];
  
  uVar6 = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  uVar7 = 1;
  uVar2 = param_2[1];
  lVar5 = *param_2;
  local_40 = param_1;
  while (lVar1 = lVar5 + uVar6, uVar6 < uVar2) {
    lVar4 = thunk_FUN_1805f7e70(lVar1,lVar5 + uVar2,9,param_4,uVar7);
    if ((lVar4 == lVar5 + uVar2) || (lVar4 = lVar4 - lVar5, lVar4 == -1)) break;
    local_48 = lVar4 - uVar6;
    if (uVar2 - uVar6 < lVar4 - uVar6) {
      local_48 = uVar2 - uVar6;
    }
    plVar3 = *(longlong **)(*param_1 + 8);
    if (plVar3 == *(longlong **)param_1[1]) {
      local_50 = lVar1;
      FUN_180178c40(param_1,plVar3,&local_50);
      uVar6 = lVar4 + 1;
    }
    else {
      *plVar3 = lVar1;
      plVar3[1] = local_48;
      *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x10;
      uVar6 = lVar4 + 1;
      local_50 = lVar1;
    }
  }
  if ((ulonglong)param_2[1] < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  lVar5 = param_2[1] - uVar6;
  local_48 = -1;
  if (lVar5 != -1) {
    local_48 = lVar5;
  }
  plVar3 = *(longlong **)(*param_1 + 8);
  if (plVar3 == *(longlong **)param_1[1]) {
    local_50 = lVar1;
    FUN_180178c40(param_1,plVar3,&local_50);
  }
  else {
    *plVar3 = lVar1;
    plVar3[1] = local_48;
    *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x10;
  }
  return param_1;
}



