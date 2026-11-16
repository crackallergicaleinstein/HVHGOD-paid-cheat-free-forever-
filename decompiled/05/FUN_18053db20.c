// FUN_18053db20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053db20 */

void FUN_18053db20(longlong param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  FUN_180488c60();
  if (param_2 == 5) {
    FUN_18048a250("Hold Time",param_1 + 0x28,0,0x3fc00000,"%.2f s",0x3d4ccccd,1,&DAT_18082a278);
    uVar5 = 0x3f800000;
    FUN_18048a250("Rise Height",param_1 + 0x2c,0x41a00000,0x43960000,"%.0f u",0x3f800000,1,
                  &DAT_18082a254);
    uVar4 = 0x43b40000;
    uVar3 = 0xc3b40000;
    puVar6 = &DAT_180829a4c;
    param_1 = param_1 + 0x30;
    pcVar1 = "%.0f deg";
    pcVar2 = "Spiral Turn";
  }
  else {
    uVar5 = 0x3f800000;
    FUN_18048a250("Launch Speed",param_1 + 0x14,0x41c80000,0x43960000,"%.0f u/s",0x3f800000,1,
                  &DAT_18082a274);
    if (1 < param_2 - 1U) goto LAB_18053dcae;
    uVar4 = 0x44480000;
    puVar6 = &DAT_18082a26c;
    param_1 = param_1 + 0x18;
    pcVar1 = "%.0f";
    uVar3 = 0;
    pcVar2 = "Gravity";
  }
  FUN_18048a250(pcVar2,param_1,uVar3,uVar4,pcVar1,uVar5,1,puVar6);
LAB_18053dcae:
  FUN_180488f10();
  return;
}



