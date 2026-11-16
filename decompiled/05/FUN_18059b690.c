// FUN_18059b690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059b690 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18059b690(undefined1 *param_1,uint param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_738 [32];
  undefined1 local_718 [808];
  undefined1 *local_3f0;
  undefined1 *local_338;
  int local_330;
  int local_32c;
  undefined1 local_328 [720];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_738;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar11 = (ulonglong)param_2;
  lVar2 = *(longlong *)(lVar1 + 0x2a0);
  uVar5 = *(undefined4 *)(lVar1 + 0x268);
  uVar6 = *(undefined4 *)(lVar1 + 0x26c);
  uVar7 = *(undefined4 *)(lVar1 + 0x270);
  plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  lVar4 = *(longlong *)(lVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar1 + 0x264);
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  *(undefined4 *)(param_1 + 0x698) = uVar6;
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar1 + 0x274);
  local_338 = param_4;
  if (plVar3 == (longlong *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x250) + uVar11 * 8);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(longlong *)(lVar1 + 600) + uVar11 * 4);
  }
  else {
    *param_3 = 0;
    iVar8 = (**(code **)*plVar3)(plVar3[1],uVar11);
    if (iVar8 != 0) goto LAB_18059b877;
  }
  if (param_1[0x5e] == '\0') {
    (**(code **)(lVar2 + 0x30))(local_718,param_1,1);
    (**(code **)(lVar2 + 0x38))(lVar1,lVar1 + 0x114,local_328);
    local_3f0 = local_328;
    iVar8 = (**(code **)(lVar4 + 0x18))(local_718,*param_3,*(undefined4 *)(param_3 + 1));
    if ((char)iVar8 == -0x5c) {
      puVar10 = local_718;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
      *local_338 = 1;
      pcVar9 = *(code **)(lVar4 + 0x18);
      goto LAB_18059b7c2;
    }
  }
  else {
    pcVar9 = *(code **)(lVar4 + 0x10);
    puVar10 = param_1;
LAB_18059b7c2:
    iVar8 = (*pcVar9)(puVar10,*param_3,*(undefined4 *)(param_3 + 1));
  }
  if (iVar8 == 0) {
    if (plVar3 == (longlong *)0x0) {
    }
    if (*(longlong *)(*plVar3 + 0x10) == 0) {
    }
    iVar8 = FUN_1805778f0(*(undefined4 *)(param_1 + 0x38));
    local_338 = (undefined1 *)(ulonglong)(uint)(iVar8 >> 0x10);
    local_330 = FUN_1805778f0(*(undefined4 *)(param_1 + 0x40));
    local_330 = local_330 >> 0x10;
    local_32c = FUN_1805778f0(*(undefined4 *)(param_1 + 0x44));
    local_32c = local_32c >> 0x10;
    iVar8 = (**(code **)(*plVar3 + 0x10))(plVar3[1],uVar11,0,&local_338);
    *(int *)(param_1 + 0x38) = (int)local_338 << 0x10;
    *(int *)(param_1 + 0x40) = local_330 << 0x10;
    *(int *)(param_1 + 0x44) = local_32c << 0x10;
    if (iVar8 == 0) {
    }
  }
  if (plVar3 == (longlong *)0x0) {
  }
LAB_18059b877:
  (**(code **)(*plVar3 + 8))(plVar3[1],param_3);
}



