// FUN_1801ac930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ac930 */

undefined8 FUN_1801ac930(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)
           (((((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_2[1]) * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^
                 (ulonglong)param_2[3]) * 0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^
               (ulonglong)param_2[5]) * 0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^
             (ulonglong)param_2[7]) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10 +
           *(longlong *)(param_1 + 0x18));
  plVar3 = (longlong *)plVar4[1];
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar3 == plVar1) {
LAB_1801ac9e2:
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = plVar3[2];
    while (*(longlong *)param_2 != lVar2) {
      if (plVar3 == (longlong *)*plVar4) goto LAB_1801ac9e2;
      plVar3 = (longlong *)plVar3[1];
      lVar2 = plVar3[2];
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((longlong *)plVar4[1] == plVar3) {
    if ((longlong *)*plVar4 == plVar3) {
      *plVar4 = (longlong)plVar1;
      plVar4[1] = (longlong)plVar1;
    }
    else {
      plVar4[1] = plVar3[1];
    }
  }
  else if ((longlong *)*plVar4 == plVar3) {
    *plVar4 = *plVar3;
  }
  lVar2 = *plVar3;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)plVar3[1] = lVar2;
  *(longlong *)(lVar2 + 8) = plVar3[1];
  FUN_1804547d0(plVar3,0x20);
  return 1;
}



