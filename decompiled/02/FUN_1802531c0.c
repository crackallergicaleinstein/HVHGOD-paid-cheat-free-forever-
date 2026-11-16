// FUN_1802531c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802531c0 */

byte FUN_1802531c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 8)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = -1;
    if (*(longlong *)(param_1 + 8) <= *(longlong *)(param_1 + 0x10)) {
      cVar4 = '\0';
    }
  }
  plVar2 = (longlong *)FUN_18017bf40(local_res8);
  lVar1 = *(longlong *)((ulonglong)((uint)((longlong)cVar4 >> 0x3f) & 8) + 8 + param_1);
  if (*plVar2 == lVar1) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0xff;
    if (lVar1 <= *plVar2) {
      bVar3 = 0;
    }
  }
  return bVar3 >> 7;
}



