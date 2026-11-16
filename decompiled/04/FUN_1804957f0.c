// FUN_1804957f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804957f0 */

void FUN_1804957f0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  lVar1 = *param_1;
  FUN_180488c60();
  uVar2 = 0x3f800000;
  FUN_18048a250("Aim FOV",lVar1 + 4,0,0x43340000,&DAT_180829cdc,CONCAT44(uVar5,0x3f800000),1,0);
  FUN_18048a250("Aim Speed",lVar1 + 8,0,0x42c80000,"%.0f%%",uVar2,1,0);
  FUN_18048a250("Reaction Time",lVar1 + 0xc,0,0x43fa0000,"%.0f ms",0x40a00000,1,0);
  FUN_18048a250("Kill Delay",lVar1 + 0x10,0,0x447a0000,"%.0f ms",0x41200000,1,0);
  FUN_18048a250("Max Walls",lVar1 + 0x14,0,0x40800000,&DAT_180829c34,uVar2,1,0);
  pcVar3 = "%.0f ms";
  FUN_18048a250("Backtrack",lVar1 + 0x18,0,0x43480000,"%.0f ms",uVar2,1,0);
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_1804898a0("Selftrack",lVar1 + 0x1c,0,1,uVar4,0);
  FUN_1804898a0("Spoof FPS",lVar1 + 0x1d,0,1,uVar4 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



