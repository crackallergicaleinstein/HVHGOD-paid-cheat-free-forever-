// FUN_1801717d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801717d0 */

undefined8 * FUN_1801717d0(longlong param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  longlong local_20;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  iVar3 = FUN_1805f68d0();
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_18010f0f0(&local_58);
  pplVar1 = (longlong **)(param_1 + 0xd0);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_18010f0f0(param_2);
  plVar2 = (longlong *)*param_2;
  *param_2 = *pplVar1;
  *pplVar1 = plVar2;
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    *(undefined8 *)*param_2 = param_2;
  }
  if (*pplVar1 != (longlong *)0x0) {
    **pplVar1 = (longlong)pplVar1;
  }
  param_2[1] = *(undefined8 *)(param_1 + 0xd8);
  param_2[2] = *(undefined8 *)(param_1 + 0xe0);
  param_2[3] = *(undefined8 *)(param_1 + 0xe8);
  param_2[4] = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (pplVar1 != &local_58) {
    FUN_180111a20(pplVar1);
    plVar2 = *pplVar1;
    *pplVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      *local_58 = (longlong)pplVar1;
    }
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&local_58;
    }
    *(undefined8 *)(param_1 + 0xd8) = uStack_50;
    *(undefined8 *)(param_1 + 0xe0) = uStack_48;
    *(undefined8 *)(param_1 + 0xe8) = uStack_40;
    *(undefined8 *)(param_1 + 0xf0) = local_38;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_58 = plVar2;
  }
  FUN_180111a20(&local_58);
  plVar2 = local_58;
  local_58 = (longlong *)0x0;
  FUN_1804547d0(plVar2,0x10);
  FUN_1805f68fc(param_1);
  return param_2;
}



