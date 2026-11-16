// FUN_180424630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180424630 */

void FUN_180424630(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar3 = param_2 + 1;
    lVar4 = 0;
    do {
      lVar1 = 0;
      do {
        lVar2 = lVar1;
        bVar6 = *(char *)(lVar5 + lVar2) == "style"[lVar2];
        if (!bVar6) goto LAB_18042468a;
        lVar1 = lVar2 + 1;
      } while (lVar2 + 1 != 6);
      bVar6 = *(char *)(lVar5 + lVar2) == "style"[lVar2];
LAB_18042468a:
      if (bVar6) {
        FUN_180424410(param_1,*plVar3);
      }
      else {
        FUN_180423a20(param_1,lVar5);
      }
      lVar5 = *(longlong *)(lVar4 + 0x10 + (longlong)param_2);
      lVar4 = lVar4 + 0x10;
      plVar3 = plVar3 + 2;
    } while (lVar5 != 0);
  }
  return;
}



