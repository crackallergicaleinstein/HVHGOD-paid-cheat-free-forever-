// FUN_1801d8e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d8e90 */

longlong * FUN_1801d8e90(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           (((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
  if ((longlong *)plVar2[1] == param_3) {
    if ((longlong *)*plVar2 == param_3) {
      lVar1 = *(longlong *)(param_1 + 8);
      *plVar2 = lVar1;
      plVar2[1] = lVar1;
    }
    else {
      plVar2[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar2 == param_3) {
    *plVar2 = *param_3;
  }
  lVar1 = *param_3;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  FUN_18015c010(param_3 + 6);
  FUN_1804547d0(param_3,0x108);
  *param_2 = lVar1;
  return param_2;
}



