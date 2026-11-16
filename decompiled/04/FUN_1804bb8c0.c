// FUN_1804bb8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bb8c0 */

void FUN_1804bb8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar3 = *(longlong **)(lVar1 + 0x14d0);
  iVar2 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
  if (*(int *)(*plVar3 + 0x1534) == iVar2) {
    FUN_1804cf810(iVar2,0xb,param_1);
  }
  FUN_1804bb960(param_1,iVar2,param_2,0,param_4);
  return;
}



