// FUN_18055c400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055c400 */

void FUN_18055c400(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_18053bcb0("Steering Strength",lVar2 + 0x144,0x19,200,&DAT_18082a274);
  puVar5 = &DAT_18082a278;
  FUN_18053bcb0("Subtick Steps",lVar2 + 0x140,1,0x1c,&DAT_18082a278);
  FUN_180488f10();
  lVar2 = *plVar1;
  FUN_180488c60();
  cVar4 = FUN_18048b0e0("Steering Inputs & Conditions",&DAT_180829dc4,1);
  if (cVar4 != '\0') {
    FUN_1805303d0("##strafe_inputs",0x43af0000);
  }
  cVar4 = FUN_180488630("##strafe_inputs","Steering Inputs & Conditions",0x43af0000);
  if (cVar4 != '\0') {
    FUN_180488c60();
    uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
    FUN_1804898a0("Avoid Walls",lVar2 + 0x138,&DAT_18082a264,1,uVar6,0);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_1804898a0("Steer from View",lVar2 + 0x139,&DAT_180829dc0,1,uVar6,0);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_1804898a0("Steer from Movement Keys",lVar2 + 0x13a,&DAT_180829dc4,1,uVar6,0);
    FUN_180488f10();
    FUN_180488c60();
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_1804898a0("Only While Jump Held",lVar2 + 0x13b,&DAT_18082a27c,1,uVar6,0);
    FUN_1804898a0("Pause While Walking",lVar2 + 0x13c,&DAT_18085d5a8,1,uVar6 & 0xffffffffffffff00,0)
    ;
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_180488f10();
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar3);
  FUN_180488f10();
  return;
}



