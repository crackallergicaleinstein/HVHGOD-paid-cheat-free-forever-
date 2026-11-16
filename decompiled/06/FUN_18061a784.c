// FUN_18061a784 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a784 */

undefined8 FUN_18061a784(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_180bb1d80;
  if (DAT_180bb1d80 == (longlong *)0x0) {
LAB_18061a7ad:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_18062b638(0,0,*plVar4,0xffffffff,0,0,0,0);
      if (iVar1 == 0) goto LAB_18061a7ad;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_18061a858:
        FUN_180621380(lVar3);
        goto LAB_18061a7ad;
      }
      iVar1 = FUN_18062b638(0,0,*plVar4,0xffffffff,lVar3,iVar1,0,0);
      if (iVar1 == 0) goto LAB_18061a858;
      thunk_FUN_18062b8c4();
      FUN_180621380();
    }
    uVar2 = 0;
  }
  return uVar2;
}



