// FUN_18054fd70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054fd70 */

void FUN_18054fd70(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_180517040("Recoil Strength",lVar2 + 0x180,0,0x96,"%.0f%%");
  FUN_180517040("Pitch",lVar2 + 0x194,0,0x96,"%.0f%%");
  FUN_180517040(&DAT_180858658,lVar2 + 0x198,0,0x96,"%.0f%%");
  FUN_180488f10();
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_180517040("Start Bullet",lVar2 + 0x1a0,1,10,&DAT_180829c34);
  FUN_180517040("Smoothing",lVar2 + 0x19c,1,0x1e,&DAT_180829c34);
  FUN_180488f10();
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_180517040("Minimum Recoil Scale",lVar2 + 0x184,0,0x96,"%.0f%%");
  FUN_180517040("Maximum Recoil Scale",lVar2 + 0x188,0,0x96,"%.0f%%");
  FUN_180488f10();
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar3);
  FUN_180488f10();
  return;
}



