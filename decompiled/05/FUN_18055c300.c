// FUN_18055c300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055c300 */

void FUN_18055c300(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_1804898a0("High Jump",lVar2 + 0x218,&DAT_18082a27c,1,0,0);
  FUN_1804898a0("Preserve Ramp Momentum",lVar2 + 0x219,&DAT_18082a274,1,0,0);
  FUN_180488f10();
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_1804898a0("Reduce Landing Penalty",lVar2 + 0x21a,&DAT_18082a26c,1,0,0);
  FUN_1804898a0("Avoid Fall Damage",lVar2 + 0x21b,&DAT_18082a264,1,0,0);
  FUN_180488f10();
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar3);
  FUN_180488f10();
  return;
}



