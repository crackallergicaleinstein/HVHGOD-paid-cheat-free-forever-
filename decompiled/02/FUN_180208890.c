// FUN_180208890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180208890 */

longlong FUN_180208890(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = param_1[0x24];
  plVar4 = (longlong *)
           ((((ulonglong)((int)param_2 >> 0x18 & 0xff) ^
             ((((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)((int)param_2 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)((int)param_2 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            param_1[0x29]) * 0x10 + param_1[0x26]);
  lVar3 = plVar4[1];
  if (lVar3 == lVar2) {
LAB_180208920:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while (param_2 != uVar1) {
      if (lVar3 == *plVar4) goto LAB_180208920;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  if (lVar3 == lVar2) {
    return 0;
  }
  return *(longlong *)(lVar3 + 0x18) * 0x98 + *param_1;
}



