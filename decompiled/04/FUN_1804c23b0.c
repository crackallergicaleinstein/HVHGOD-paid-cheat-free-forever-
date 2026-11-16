// FUN_1804c23b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c23b0 */

void FUN_1804c23b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = DAT_180bb8ae8;
  *(undefined4 *)(DAT_180bb8ae8 + 0x11e4) = param_2;
  *(longlong *)(lVar2 + 0x11d0) = param_1;
  FUN_1804c2460(param_3);
  if (param_1 != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar2 + 0x1210) = lVar5;
    *(longlong *)(lVar2 + 0x1218) = param_1;
    FUN_1804e6b90(lVar5);
    if (*(longlong *)(lVar2 + 0x14d0) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x14d0) + 0x2c8);
      lVar3 = *(longlong *)(lVar5 + 0x28);
      lVar4 = *(longlong *)(lVar5 + 0x30);
      if ((*(longlong *)(lVar2 + 0x78) != *(longlong *)(lVar5 + 0x30)) ||
         (*(longlong *)(lVar2 + 0x70) != lVar3)) {
        *(longlong *)(lVar2 + 0x70) = lVar3;
        *(longlong *)(lVar2 + 0x78) = lVar4;
        plVar1 = (longlong *)
                 (*(longlong *)(lVar2 + 0xb8) + -0x10 + (longlong)*(int *)(lVar2 + 0xb0) * 0x10);
        *plVar1 = lVar3;
        plVar1[1] = lVar4;
        FUN_1804d92c0();
      }
    }
  }
  return;
}



