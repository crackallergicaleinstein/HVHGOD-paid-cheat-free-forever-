// FUN_180497080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180497080 */

void FUN_180497080(longlong *param_1)

{
  longlong lVar1;
  ulonglong in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_18048d5d0("Avoid Collisions",lVar1 + 2,0);
  FUN_18048d5d0("View Angles",lVar1 + 3,1);
  FUN_18048d5d0("Movement Keys",lVar1 + 4,1);
  FUN_18048d5d0("Only While Holding Jump",lVar1 + 5,1);
  FUN_18048d5d0("Stop On Shift Key",lVar1 + 6,1);
  FUN_18048d5d0("Stop On Key Release",lVar1 + 7,1);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  uVar2 = 0;
  FUN_1804898a0("Subtick Mode",lVar1 + 8,0,1,in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0);
  FUN_18048a250("Turn Speed",lVar1 + 0xc,0,0x42c80000,"%.0f%%",CONCAT44(uVar2,0x3f800000),1,0);
  FUN_180488f10();
  return;
}



