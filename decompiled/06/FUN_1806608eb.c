// FUN_1806608eb - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806608eb */

undefined4 FUN_1806608eb(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_180606ee8();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_180606ee8();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_180606ee8();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  lVar3 = FUN_180606ee8();
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_2 + 0xa8);
  FUN_180609088(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x78),
                *(undefined8 *)(param_2 + 0x80),lVar2,*(undefined8 *)(param_2 + 0x90),0,0,1);
  lVar2 = FUN_180606ee8();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



