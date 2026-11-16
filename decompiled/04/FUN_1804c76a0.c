// FUN_1804c76a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c76a0 */

void FUN_1804c76a0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = DAT_180bb8ae8;
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  iVar2 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
  if (*(int *)(*plVar3 + 0x1534) == iVar2) {
    FUN_1804cf810(iVar2,0xb,param_1);
  }
  if ((*(byte *)(lVar1 + 0x28cc) & 8) != 0) {
    FUN_1804cf3e0("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,iVar2);
  }
  FUN_1804c7740(iVar2,param_2);
  return;
}



