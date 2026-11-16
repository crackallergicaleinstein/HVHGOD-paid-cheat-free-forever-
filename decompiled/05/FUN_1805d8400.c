// FUN_1805d8400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d8400 */

ulonglong FUN_1805d8400(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  
  param_1[1] = param_2;
  plVar1 = param_1 + 3;
  *param_1 = param_3;
  param_1[2] = *(longlong *)(param_2 + 0x30);
  puVar2 = (undefined4 *)((longlong)param_1 + 0x2074);
  param_1[0x410] = (longlong)puVar2;
  param_1[0x40f] = (longlong)puVar2;
  *puVar2 = 0;
  uVar8 = FUN_1805d80c0(param_3);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar6 = FUN_1805780f0(param_3);
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  param_1[9] = (longlong)FUN_1805d80a0;
  param_1[10] = (longlong)thunk_FUN_18057abd0;
  lVar3 = *(longlong *)(param_3 + 0x30);
  param_1[0xb] = lVar3;
  *plVar1 = (longlong)param_1 + 0x1074;
  *(undefined4 *)(param_1 + 4) = 0;
  if (plVar1 == (longlong *)0x0) {
    return 3;
  }
  param_1[7] = 0;
  plVar9 = (longlong *)FUN_18057aad0(lVar3,0x1bf0,local_res8);
  if (plVar9 == (longlong *)0x0) {
    return 3;
  }
  param_1[8] = (longlong)plVar9;
  *plVar9 = (longlong)plVar1;
  plVar9[8] = 0;
  *(undefined4 *)(plVar9 + 1) = 0x3f34;
  if ((((param_1[9] == 0) || (pcVar4 = (code *)param_1[10], pcVar4 == (code *)0x0)) ||
      (puVar5 = (undefined8 *)param_1[8], puVar5 == (undefined8 *)0x0)) ||
     (((longlong *)*puVar5 != plVar1 || (0x1f < *(int *)(puVar5 + 1) - 0x3f34U)))) {
    iVar7 = -2;
  }
  else {
    if ((puVar5[8] != 0) && (*(int *)(puVar5 + 6) != 0xf)) {
      if (pcVar4 == thunk_FUN_18057abd0) {
        FUN_18057abd0();
      }
      else {
        (*pcVar4)(param_1[0xb]);
      }
      puVar5[8] = 0;
    }
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)(puVar5 + 6) = 0xf;
    iVar7 = FUN_1805da140(plVar1);
    if (iVar7 == 0) goto LAB_1805d855b;
  }
  if ((code *)param_1[10] == thunk_FUN_18057abd0) {
    FUN_18057abd0();
  }
  else {
    (*(code *)param_1[10])(param_1[0xb],plVar9);
  }
  param_1[8] = 0;
LAB_1805d855b:
  if ((iVar7 == 0) && (*plVar1 != 0)) {
    return uVar8 & 0xffffffff;
  }
  return 3;
}



