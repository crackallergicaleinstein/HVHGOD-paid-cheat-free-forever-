// FUN_1803c9810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c9810 */

void FUN_1803c9810(longlong *param_1,undefined1 param_2,byte param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)
           FUN_18028c850(local_18,param_2,*(undefined1 *)(*param_1 + 8),*param_5,0,param_3 | 0x100);
  if ((*plVar1 != 0) && (*plVar1 == *(longlong *)param_1[1])) {
    *(longlong *)param_1[2] = *param_1;
    *(byte *)param_1[3] = param_3;
    *(undefined1 *)param_1[4] = param_4;
    *(undefined1 *)param_1[5] = param_2;
    *(undefined4 *)param_1[6] = *param_5;
    *(int *)param_1[7] = *(int *)param_1[7] + 1;
  }
  return;
}



