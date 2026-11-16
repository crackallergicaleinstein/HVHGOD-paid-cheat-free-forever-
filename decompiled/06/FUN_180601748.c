// FUN_180601748 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601748 */

void FUN_180601748(char *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  pcVar3 = "Cause unknown: error caused by bad argument with value %1%";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
  }
  pcVar2 = "Unknown function operating on type %1%";
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
  }
  FUN_18015bae0(local_80,pcVar2);
  FUN_18015bae0(local_60,pcVar3);
  FUN_18015bae0(local_a0,"Error in function ");
  uVar1 = FUN_180601448();
  FUN_180605240(local_80,&DAT_1806abe74,uVar1);
  FUN_18015b0d0(local_a0,local_80);
  FUN_180151bc0(local_a0,&DAT_180700480);
  FUN_180601548(local_40,param_3);
  uVar1 = FUN_18015b6c0(local_40);
  FUN_180605240(local_60,&DAT_1806abe74,uVar1);
  FUN_18015b0d0(local_a0,local_60);
  FUN_1806036b0(local_b8,local_a0);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_b8,&DAT_1808d0d88);
}



