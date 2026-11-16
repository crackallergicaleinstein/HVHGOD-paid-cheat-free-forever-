// FUN_1805d7720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d7720 */

undefined4
FUN_1805d7720(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 local_res8 [8];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  code *local_40;
  longlong local_38;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 6;
  }
  if (param_2 == 0) {
    return 6;
  }
  local_70 = param_5;
  local_60 = *param_3;
  local_48 = FUN_1805d80a0;
  local_40 = thunk_FUN_18057abd0;
  local_58 = 0;
  local_78 = param_4;
  local_68 = param_2;
  local_38 = param_1;
  plVar2 = (longlong *)FUN_18057aad0(param_1,0x1bf0,local_res8);
  if (plVar2 == (longlong *)0x0) {
    return 6;
  }
  *plVar2 = (longlong)&local_78;
  plVar2[8] = 0;
  *(undefined4 *)(plVar2 + 1) = 0x3f34;
  local_50 = plVar2;
  if ((((local_48 == (code *)0x0) || (local_40 == (code *)0x0)) || (plVar2 == (longlong *)0x0)) ||
     (((undefined8 *)*plVar2 != &local_78 || (0x1f < (int)plVar2[1] - 0x3f34U)))) {
    iVar1 = -2;
  }
  else {
    if ((plVar2[8] != 0) && ((int)plVar2[6] != 0xf)) {
      if (local_40 == thunk_FUN_18057abd0) {
        FUN_18057abd0();
      }
      else {
        (*local_40)(local_38);
      }
      plVar2[8] = 0;
    }
    *(undefined4 *)(plVar2 + 2) = 7;
    *(undefined4 *)(plVar2 + 6) = 0xf;
    iVar1 = FUN_1805da140(&local_78);
    if (iVar1 == 0) goto LAB_1805d7856;
  }
  if (local_40 == thunk_FUN_18057abd0) {
    FUN_18057abd0();
  }
  else {
    (*local_40)(local_38,plVar2);
  }
  local_50 = (longlong *)0x0;
LAB_1805d7856:
  if (iVar1 != 0) {
    return 6;
  }
  iVar1 = FUN_1805d8890(&local_78,4);
  if (iVar1 == 1) {
    *param_3 = local_5c;
    if ((((local_48 == (code *)0x0) || (local_40 == (code *)0x0)) || (local_50 == (longlong *)0x0))
       || (((undefined8 *)*local_50 != &local_78 || (0x1f < (int)local_50[1] - 0x3f34U)))) {
      iVar1 = -2;
    }
    else {
      if (local_50[8] != 0) {
        if (local_40 == thunk_FUN_18057abd0) {
          FUN_18057abd0();
        }
        else {
          (*local_40)(local_38,local_50[8]);
        }
      }
      if (local_40 == thunk_FUN_18057abd0) {
        FUN_18057abd0();
        iVar1 = 0;
      }
      else {
        (*local_40)(local_38,local_50);
        iVar1 = 0;
      }
    }
  }
  else {
    if (((local_48 != (code *)0x0) && (local_40 != (code *)0x0)) &&
       ((local_50 != (longlong *)0x0 &&
        (((undefined8 *)*local_50 == &local_78 && ((int)local_50[1] - 0x3f34U < 0x20)))))) {
      if (local_50[8] != 0) {
        if (local_40 == thunk_FUN_18057abd0) {
          FUN_18057abd0();
        }
        else {
          (*local_40)(local_38,local_50[8]);
        }
      }
      if (local_40 == thunk_FUN_18057abd0) {
        FUN_18057abd0();
      }
      else {
        (*local_40)(local_38,local_50);
      }
    }
    if (iVar1 == 0) {
      return 10;
    }
  }
  if (iVar1 == -4) {
    return 0x40;
  }
  if (iVar1 == -5) {
    return 10;
  }
  if (iVar1 == -3) {
    return 8;
  }
  uVar3 = 0;
  if (iVar1 == 2) {
    uVar3 = 8;
  }
  return uVar3;
}



