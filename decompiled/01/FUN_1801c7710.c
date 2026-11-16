// FUN_1801c7710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c7710 */

undefined1 (*) [16]
FUN_1801c7710(undefined1 (*param_1) [16],longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong local_50;
  ulonglong local_48;
  undefined1 (*local_40) [16];
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  uVar6 = 1;
  local_40 = param_1;
  while( true ) {
    uVar1 = param_2[1];
    lVar2 = *param_2;
    if (uVar1 == 0) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      lVar4 = thunk_FUN_1805f7e70(lVar2,uVar1 + lVar2,param_3,param_4,uVar6);
      uVar5 = 0xffffffffffffffff;
      if (lVar4 != uVar1 + lVar2) {
        uVar5 = lVar4 - lVar2;
      }
    }
    local_48 = uVar5;
    if (uVar1 < uVar5) {
      local_48 = uVar1;
    }
    plVar3 = *(longlong **)(*param_1 + 8);
    local_50 = lVar2;
    if (plVar3 == *(longlong **)param_1[1]) {
      FUN_180178c40(param_1,plVar3,&local_50);
    }
    else {
      *plVar3 = lVar2;
      plVar3[1] = local_48;
      *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x10;
    }
    if (uVar5 == 0xffffffffffffffff) break;
    *param_2 = uVar5 + 1 + lVar2;
    param_2[1] = uVar1 - (uVar5 + 1);
  }
  return param_1;
}



