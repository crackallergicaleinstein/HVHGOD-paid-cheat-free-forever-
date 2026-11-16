// FUN_180208800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180208800 */

longlong FUN_180208800(longlong param_1,short param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xe0);
  plVar4 = (longlong *)
           (((((ulonglong)(byte)param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(byte)((ushort)param_2 >> 8)) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x108)) * 0x10 + *(longlong *)(param_1 + 0xf0));
  lVar3 = plVar4[1];
  if (lVar3 == lVar2) {
LAB_180208871:
    lVar3 = 0;
  }
  else {
    sVar1 = *(short *)(lVar3 + 0x10);
    while (param_2 != sVar1) {
      if (lVar3 == *plVar4) goto LAB_180208871;
      lVar3 = *(longlong *)(lVar3 + 8);
      sVar1 = *(short *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  if (lVar3 == lVar2) {
    return 0;
  }
  return *(longlong *)(lVar3 + 0x18) * 0xb8 + *(longlong *)(param_1 + 0x48);
}



