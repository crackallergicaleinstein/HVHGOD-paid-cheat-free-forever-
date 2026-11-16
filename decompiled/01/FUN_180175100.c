// FUN_180175100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180175100 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180175100(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_28;
  longlong local_20;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 == (longlong *)0x0) || (((char)param_1[1] != '\0' && ((char)plVar1[0x1f] != '\0')))) {
                    /* WARNING: Subroutine does not return */
    FUN_1801647e0(4);
  }
  iVar4 = FUN_1805f68d0(plVar1 + 0xc);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)((longlong)plVar1 + 0xac) == 0x7fffffff) {
    *(undefined4 *)((longlong)plVar1 + 0xac) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (cVar3 == '\0') {
    FUN_18017bf40(&local_28);
    lVar2 = *param_2;
    lVar6 = local_28;
    if ((lVar2 != 0) && (-1 < lVar2)) {
      lVar6 = 0x7fffffffffffffff;
      if (local_28 < lVar2 * -1000000 + 0x7fffffffffffffff) {
        lVar6 = lVar2 * 1000000 + local_28;
      }
    }
    iVar4 = *(int *)((longlong)plVar1 + 0xfc);
    while (iVar4 == 0) {
      do {
        FUN_18017bf40(&local_28);
        if ((lVar6 == local_28) || (lVar6 < local_28)) {
          if (*(int *)((longlong)plVar1 + 0xfc) != 0) goto LAB_18017520a;
          uVar5 = 1;
          goto LAB_180175211;
        }
        local_20 = lVar6 - local_28;
        uVar5 = FUN_18017b210(&local_20);
        iVar4 = FUN_1805f6bd4(plVar1 + 0x16,plVar1 + 0xc,uVar5);
      } while (iVar4 != 0);
      iVar4 = *(int *)((longlong)plVar1 + 0xfc);
    }
LAB_18017520a:
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
LAB_180175211:
  FUN_1805f68fc(plVar1 + 0xc);
  return uVar5;
}



