// FUN_18054fc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054fc80 */

void FUN_18054fc80(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_180517040("Pitch",lVar2 + 0x18c,0,0x96,"%.0f%%");
  FUN_180517040(&DAT_180858658,lVar2 + 400,0,0x96,"%.0f%%");
  FUN_180488f10();
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_180517040("Minimum Recoil Scale",lVar2 + 0x110,0,0x96,"%.0f%%");
  FUN_180517040("Maximum Recoil Scale",lVar2 + 0x114,0,0x96,"%.0f%%");
  FUN_180488f10();
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar3);
  FUN_180488f10();
  return;
}



