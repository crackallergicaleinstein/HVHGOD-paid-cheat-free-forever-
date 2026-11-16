// FUN_180176500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176500 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_180176500(longlong *param_1,undefined1 (*param_2) [16])

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  plVar2 = (longlong *)*param_1;
  *param_1 = 0;
  if ((plVar2 == (longlong *)0x0) || ((char)plVar2[0x1f] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1801647e0(4);
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *(undefined8 *)*param_2 = *puVar7;
  *(undefined8 *)(*param_2 + 8) = uVar3;
  *(undefined8 *)param_2[1] = uVar4;
  *(undefined8 *)(param_2[1] + 8) = uVar5;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
  puVar7[2] = 0;
  param_2[2] = (undefined1  [16])0x0;
  *(undefined8 *)param_2[3] = 0;
  *(undefined8 *)(param_2[3] + 8) = 0;
  uVar3 = puVar7[5];
  uVar4 = puVar7[6];
  uVar5 = puVar7[7];
  *(undefined8 *)param_2[2] = puVar7[4];
  *(undefined8 *)(param_2[2] + 8) = uVar3;
  *(undefined8 *)param_2[3] = uVar4;
  *(undefined8 *)(param_2[3] + 8) = uVar5;
  *(undefined1 *)(puVar7 + 4) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0xf;
  LOCK();
  plVar1 = plVar2 + 1;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    puVar7 = (undefined8 *)plVar2[0x21];
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
    else {
      (**(code **)*puVar7)(puVar7,plVar2);
    }
  }
  return param_2;
}



