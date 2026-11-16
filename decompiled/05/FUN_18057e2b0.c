// FUN_18057e2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e2b0 */

undefined8 FUN_18057e2b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_180577910(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_180580870(param_1,param_2);
    FUN_180580290(param_1,param_2);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return 0;
}



