// FUN_1805da140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805da140 */

undefined8 FUN_1805da140(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((((param_1 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
       (*(longlong *)(param_1 + 0x38) == 0)) ||
      ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 == (longlong *)0x0 || (*plVar2 != param_1)))
      ) || (0x1f < (int)plVar2[1] - 0x3f34U)) {
    return 0xfffffffe;
  }
  *(undefined8 *)((longlong)plVar2 + 0x34) = 0;
  *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
  if (((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 == (longlong *)0x0 ||
      ((*plVar2 != param_1 || (0x1f < (int)plVar2[1] - 0x3f34U)))))) {
    return 0xfffffffe;
  }
  *(undefined4 *)((longlong)plVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(uint *)(plVar2 + 2) != 0) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(plVar2 + 2) & 1;
  }
  plVar1 = plVar2 + 0xaa;
  plVar2[1] = 0x3f34;
  plVar2[0x11] = (longlong)plVar1;
  plVar2[0xd] = (longlong)plVar1;
  plVar2[0xc] = (longlong)plVar1;
  *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
  *(undefined4 *)(plVar2 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)plVar2 + 0x1c) = 0x8000;
  plVar2[5] = 0;
  plVar2[9] = 0;
  *(undefined4 *)(plVar2 + 0x37c) = 1;
  *(undefined4 *)((longlong)plVar2 + 0x1be4) = 0xffffffff;
  return 0;
}



