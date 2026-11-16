// FUN_18015ec20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ec20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015ec20(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong *local_d0 [3];
  longlong local_b8;
  undefined1 local_a8 [40];
  undefined1 local_80 [64];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  local_b8 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  plVar5 = (longlong *)FUN_180111f10(local_80,param_3);
  local_d0[0] = plVar5;
  FUN_180111f10(param_1,plVar5);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(longlong *)(param_1 + 0x48) = *param_2;
  *(longlong *)(param_1 + 0x50) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0xf;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined ***)(param_1 + 0xb8) = &PTR_180700558;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar6 = (undefined8 *)FUN_18061159c();
  if ((char *)*puVar6 == (char *)0x0) {
    cVar3 = '.';
  }
  else {
    cVar3 = *(char *)*puVar6;
  }
  *(int *)(param_1 + 0xd8) = (int)cVar3;
  *(undefined8 *)(param_1 + 0xe0) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  uVar4 = FUN_180161330(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  plVar2 = (longlong *)plVar5[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar5);
    plVar5[7] = 0;
  }
  local_d8 = 1;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar8 = (longlong)*(int *)(*param_2 + 4);
    puVar1 = (uint *)(lVar8 + 0x10 + (longlong)param_2);
    *puVar1 = *puVar1 & 1;
    uVar10 = 4;
    if (*(longlong *)(lVar8 + 0x48 + (longlong)param_2) != 0) {
      uVar10 = 0;
    }
    puVar1 = (uint *)(lVar8 + 0x10 + (longlong)param_2);
    *puVar1 = *puVar1 | uVar10;
    uVar10 = *(uint *)(lVar8 + 0x10 + (longlong)param_2) &
             *(uint *)(lVar8 + 0x14 + (longlong)param_2);
    if (uVar10 != 0) {
      uVar7 = FUN_1801597e0(local_d0,1);
      pcVar9 = "ios_base::badbit set";
      if ((uVar10 & 4) == 0) {
        pcVar9 = "ios_base::eofbit set";
      }
      FUN_1801596c0(local_a8,pcVar9,uVar7);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_a8,&DAT_1808d0f18);
    }
  }
  plVar5 = (longlong *)param_3[7];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != param_3);
    param_3[7] = 0;
  }
}



