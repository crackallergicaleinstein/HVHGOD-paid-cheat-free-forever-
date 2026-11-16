// FUN_1801dc870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dc870 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801dc870(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  plVar5 = (longlong *)
           FUN_1801df300(local_38,param_3,*(undefined1 *)*param_1,*(undefined1 *)param_1[1]);
  puVar7 = (undefined8 *)*plVar5;
  if (*(char *)param_1[2] != '\0') {
    if ((*(int *)param_1[3] < *(int *)param_1[4]) &&
       (iVar8 = *(int *)param_1[4] - *(int *)param_1[3], lVar9 = (longlong)iVar8, 0 < iVar8)) {
      do {
        if ((ulonglong)puVar7[3] < puVar7[2] + 1) {
          (**(code **)*puVar7)(puVar7);
        }
        *(undefined1 *)(puVar7[2] + puVar7[1]) = 0x30;
        puVar7[2] = puVar7[2] + 1;
        lVar9 = lVar9 + -1;
      } while (0 < lVar9);
    }
  }
  if (*(char *)(param_1[4] + 0xc) != '\0') {
    if (*(longlong *)param_1[5] == 0) {
      local_50 = (longlong *)FUN_1805fbf84(1);
    }
    else {
      local_50 = *(longlong **)(*(longlong *)param_1[5] + 8);
      (**(code **)(*local_50 + 8))();
    }
    plVar5 = (longlong *)FUN_1801ddd40(local_58);
    if ((local_50 != (longlong *)0x0) &&
       (puVar6 = (undefined8 *)(**(code **)(*local_50 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    uVar1 = *(undefined4 *)param_1[9];
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    plVar2 = (longlong *)param_1[8];
    local_48 = (longlong)plVar2;
    if (0xf < (ulonglong)plVar2[3]) {
      local_48 = *plVar2;
    }
    local_40 = plVar2[2];
    puVar7 = (undefined8 *)
             FUN_1801df3c0(local_58,*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],&local_48,
                           uVar4,uVar1,puVar7);
    puVar7 = (undefined8 *)*puVar7;
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] != '\0'))
    {
      uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if ((ulonglong)puVar7[3] < puVar7[2] + 1) {
        (**(code **)*puVar7)(puVar7);
      }
      *(undefined1 *)(puVar7[1] + puVar7[2]) = uVar4;
      puVar7[2] = puVar7[2] + 1;
      *(undefined1 *)param_1[0xc] = 0;
    }
    *(undefined8 *)param_1[6] = *(undefined8 *)param_1[7];
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      *(longlong *)param_1[6] = *(longlong *)param_1[6] + 1;
    }
  }
  puVar3 = *(undefined1 **)param_1[0xd];
  for (puVar10 = *(undefined1 **)param_1[6]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    uVar4 = *puVar10;
    if ((ulonglong)puVar7[3] < puVar7[2] + 1) {
      (**(code **)*puVar7)(puVar7);
    }
    *(undefined1 *)(puVar7[2] + puVar7[1]) = uVar4;
    puVar7[2] = puVar7[2] + 1;
  }
  if ((*(char *)(param_1[4] + 0xb) != '\0') && (*(char *)param_1[0xc] != '\0')) {
    if ((ulonglong)puVar7[3] < puVar7[2] + 1) {
      (**(code **)*puVar7)(puVar7);
    }
    *(undefined1 *)(puVar7[1] + puVar7[2]) = 0x2e;
    puVar7[2] = puVar7[2] + 1;
  }
  iVar8 = *(int *)param_1[0xe];
  while (0 < iVar8) {
    if ((ulonglong)puVar7[3] < puVar7[2] + 1) {
      (**(code **)*puVar7)(puVar7);
    }
    *(undefined1 *)(puVar7[2] + puVar7[1]) = 0x30;
    puVar7[2] = puVar7[2] + 1;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
    iVar8 = *(int *)param_1[0xe];
  }
  FUN_1801df570(param_2,*(undefined8 *)param_1[0xd],*(undefined8 *)param_1[0xb],puVar7);
  return param_2;
}



