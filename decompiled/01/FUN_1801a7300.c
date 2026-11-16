// FUN_1801a7300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a7300 */

longlong * FUN_1801a7300(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  plVar4 = param_3 + 2;
  if (0xf < (ulonglong)param_3[5]) {
    plVar4 = (longlong *)param_3[2];
  }
  uVar3 = 0xcbf29ce484222325;
  uVar2 = 0;
  if (param_3[4] != 0) {
    do {
      uVar3 = (uVar3 ^ *(byte *)((longlong)plVar4 + uVar2)) * 0x100000001b3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_3[4]);
  }
  plVar4 = (longlong *)
           ((uVar3 & *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
  if ((longlong *)plVar4[1] == param_3) {
    if ((longlong *)*plVar4 == param_3) {
      lVar1 = *(longlong *)(param_1 + 8);
      *plVar4 = lVar1;
      plVar4[1] = lVar1;
    }
    else {
      plVar4[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar4 == param_3) {
    *plVar4 = *param_3;
  }
  lVar1 = *param_3;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  FUN_180195770(param_3 + 6);
  FUN_18015c010(param_3 + 2);
  FUN_1804547d0(param_3,0x170);
  *param_2 = lVar1;
  return param_2;
}



