// FUN_1801d42f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d42f0 */

undefined8 FUN_1801d42f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [16];
  
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar5 = 0xcbf29ce484222325;
  uVar3 = 0;
  if (param_2[2] != 0) {
    do {
      uVar5 = (uVar5 ^ *(byte *)((longlong)puVar6 + uVar3)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  lVar2 = FUN_180177b00(param_1,local_18,param_2,uVar5);
  plVar1 = *(longlong **)(lVar2 + 8);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  plVar4 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) & uVar5) * 0x10 + *(longlong *)(param_1 + 0x18));
  if ((longlong *)plVar4[1] == plVar1) {
    if ((longlong *)*plVar4 == plVar1) {
      lVar2 = *(longlong *)(param_1 + 8);
      *plVar4 = lVar2;
      plVar4[1] = lVar2;
    }
    else {
      plVar4[1] = plVar1[1];
    }
  }
  else if ((longlong *)*plVar4 == plVar1) {
    *plVar4 = *plVar1;
  }
  lVar2 = *plVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)plVar1[1] = lVar2;
  *(longlong *)(lVar2 + 8) = plVar1[1];
  FUN_18015c010(plVar1 + 2);
  FUN_1804547d0(plVar1,0x30);
  return 1;
}



