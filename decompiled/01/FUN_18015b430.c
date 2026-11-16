// FUN_18015b430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b430 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18015b430(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 ****local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined1 auStack_48 [16];
  undefined1 local_38 [48];
  
  pauVar1 = (undefined1 (*) [16])FUN_18015b360(local_38,param_3);
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (*(longlong *)pauVar1[1] != 0) {
    FUN_18015b2a0(pauVar1,&DAT_180700480,2);
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,local_78,uVar3 & 0xffffffff);
  ppppuVar2 = local_78;
  if (0xf < local_60) {
    ppppuVar2 = local_78[0];
  }
  FUN_18015b2a0(pauVar1,ppppuVar2,local_68);
  FUN_18015c010(local_78);
  local_58 = *pauVar1;
  auStack_48 = pauVar1[1];
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  FUN_18015c010(pauVar1);
  FUN_18015b6d0(param_1,local_58);
  FUN_18015c010(local_58);
  *param_1 = std::_System_error::vftable;
  uVar3 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar3;
  return param_1;
}



