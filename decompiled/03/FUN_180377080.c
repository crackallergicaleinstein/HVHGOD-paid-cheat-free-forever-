// FUN_180377080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180377080 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180377080(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_138 [4];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_100 [62];
  
  lVar2 = DAT_180ba3148;
  if (DAT_180ba3148 != 0) {
    DAT_180ba3148 = 0;
    (**(code **)(*(longlong *)lVar2 + 0x10))();
  }
  lVar2 = DAT_180ba3140;
  if (DAT_180ba3140 != 0) {
    DAT_180ba3140 = 0;
    (**(code **)(*(longlong *)lVar2 + 0x10))();
  }
  FUN_180381fe0(local_138);
  uVar5 = 0;
  do {
    uVar3 = 0;
    puVar4 = (undefined8 *)((longlong)local_138 + uVar5);
    if (local_138 + 2 != puVar4) {
      uVar3 = *puVar4;
      *puVar4 = 0;
    }
    plVar1 = *(longlong **)((longlong)&DAT_180ba3150 + uVar5);
    *(undefined8 *)((longlong)&DAT_180ba3150 + uVar5) = uVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar5 = uVar5 + 8;
  } while (uVar5 < 0x10);
  _eh_vector_destructor_iterator_(local_138,8,2,FUN_1801bd340);
  FUN_180381fe0(local_138);
  uVar5 = 0;
  do {
    uVar3 = 0;
    puVar4 = (undefined8 *)((longlong)local_138 + uVar5);
    if (local_138 + 3 != puVar4) {
      uVar3 = *puVar4;
      *puVar4 = 0;
    }
    plVar1 = *(longlong **)((longlong)&DAT_180ba3160 + uVar5);
    *(undefined8 *)((longlong)&DAT_180ba3160 + uVar5) = uVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar5 = uVar5 + 8;
  } while (uVar5 < 0x10);
  _eh_vector_destructor_iterator_(local_138,8,2,FUN_1801bd340);
  FUN_18063ab10(&local_108,0,0x100);
  FUN_180381f90(&local_108);
  uVar5 = 0;
  do {
    uVar3 = 0;
    if (local_118 != local_118 + uVar5 + 0x10) {
      uVar3 = *(undefined8 *)(local_118 + uVar5 + 0x10);
      *(undefined8 *)(local_118 + uVar5 + 0x10) = 0;
    }
    plVar1 = *(longlong **)((longlong)&DAT_180ba3030 + uVar5);
    *(undefined8 *)((longlong)&DAT_180ba3030 + uVar5) = uVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined4 *)((longlong)&DAT_180ba3038 + uVar5) = *(undefined4 *)((longlong)local_100 + uVar5)
    ;
    uVar5 = uVar5 + 0x10;
  } while (uVar5 < 0x100);
  _eh_vector_destructor_iterator_(&local_108,0x10,0x10,FUN_1801bd340);
  lVar2 = DAT_180ba3138;
  DAT_180ba3130 = 0;
  if (DAT_180ba3138 != 0) {
    DAT_180ba3138 = 0;
    (**(code **)(*(longlong *)lVar2 + 0x10))();
  }
  return;
}



