// FUN_18049d080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049d080 */

void FUN_18049d080(longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180488a80("Appearance",&DAT_18082a270);
  FUN_180489fc0("Ring Color",lVar1 + 0x356c,1,&DAT_18082a268);
  FUN_18048a250("Ring Radius",lVar1 + 0x3580,0x40800000,0x43480000,&DAT_180829c34,
                CONCAT44(uVar3,0x3f800000),1,&DAT_18082a254);
  pcVar2 = "%.1f s";
  FUN_18048a250("Display Time",lVar1 + 0x357c,0x3e4ccccd,0x40c00000,"%.1f s",0x3dcccccd,1,
                &DAT_18082a278);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Sync to Local Player",lVar1 + 0x3584,&DAT_18082a250,1,
                (ulonglong)pcVar2 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



