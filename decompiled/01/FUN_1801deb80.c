// FUN_1801deb80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801deb80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801deb80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  
  plVar2 = (longlong *)
           FUN_1801df300(local_48,param_3,*(undefined1 *)(param_1[1] + 10),
                         *(ulonglong *)param_1[2] >> 0x3f);
  puVar3 = (undefined8 *)*plVar2;
  puVar5 = *(undefined1 **)param_1[3];
  puVar7 = puVar5 + ((undefined8 *)param_1[3])[1];
  for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
    uVar1 = *puVar5;
    if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
      (**(code **)*puVar3)(puVar3);
    }
    *(undefined1 *)(puVar3[1] + puVar3[2]) = uVar1;
    puVar3[2] = puVar3[2] + 1;
  }
  if (*(char *)param_1[4] != '\0') {
    if ((*(int *)param_1[5] < *(int *)param_1[1]) &&
       (iVar4 = *(int *)param_1[1] - *(int *)param_1[5], lVar6 = (longlong)iVar4, 0 < iVar4)) {
      do {
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(undefined1 *)(puVar3[1] + puVar3[2]) = 0x30;
        puVar3[2] = puVar3[2] + 1;
        lVar6 = lVar6 + -1;
      } while (0 < lVar6);
    }
  }
  iVar4 = *(int *)param_1[6];
  if (iVar4 < 1) {
    FUN_1801df570(param_2,*(undefined8 *)param_1[7],*param_1,puVar3);
  }
  else {
    if (*(longlong *)param_1[9] == 0) {
      local_40 = (longlong *)FUN_1805fbf84(1);
    }
    else {
      local_40 = *(longlong **)(*(longlong *)param_1[9] + 8);
      (**(code **)(*local_40 + 8))();
    }
    plVar2 = (longlong *)FUN_1801ddd40(local_48);
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar2 = (longlong *)param_1[8];
    local_38 = (longlong)plVar2;
    if (0xf < (ulonglong)plVar2[3]) {
      local_38 = *plVar2;
    }
    local_30 = plVar2[2];
    FUN_1801df3c0(param_2,*(undefined8 *)param_1[7],*param_1,&local_38,uVar1,iVar4,puVar3);
    if ((local_40 != (longlong *)0x0) &&
       (puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return param_2;
}



