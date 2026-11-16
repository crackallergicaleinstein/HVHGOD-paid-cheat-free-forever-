// FUN_18053d9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053d9a0 */

void FUN_18053d9a0(longlong param_1,int param_2)

{
  char *pcVar1;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  FUN_180488c60();
  FUN_18053bd80(param_1 + 0x24);
  FUN_1805367d0("Start Color",param_1,&DAT_18082a268,1,1);
  FUN_1805367d0("End Color",param_1 + 4,&DAT_18082a260,1,1);
  FUN_180488f10();
  FUN_180488c60();
  if (param_2 != 3) {
    FUN_18053bcb0("Particle Count",param_1 + 0x1c,8,0x60,&DAT_180829db8);
  }
  pcVar1 = "Particle Size";
  if (param_2 == 3) {
    pcVar1 = "Ring Width";
  }
  FUN_18048a250(pcVar1,param_1 + 0xc,0x3f000000,0x40c00000,"%.1fx",CONCAT44(uVar2,0x3dcccccd),1,
                &DAT_18082a254);
  pcVar1 = "%.2fx";
  FUN_18048a250("Spread",param_1 + 0x10,0x3e800000,0x40400000,"%.2fx",0x3d4ccccd,1,&DAT_18082a248);
  FUN_1804898a0(&DAT_1806bd384,param_1 + 0x20,&DAT_180858a0c,1,
                (ulonglong)pcVar1 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



