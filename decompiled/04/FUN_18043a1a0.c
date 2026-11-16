// FUN_18043a1a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a1a0 */

ulonglong FUN_18043a1a0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  longlong *plVar5;
  
  if (param_2 == 1) {
    return (ulonglong)*(byte *)(param_1 + 0x10);
  }
  if (param_2 == 2) {
    return (ulonglong)*(byte *)(param_1 + 0x14);
  }
  lVar2 = *(longlong *)(param_1 + 0x180);
  plVar5 = (longlong *)
           ((((ulonglong)((int)param_2 >> 0x18 & 0xff) ^
             ((((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)((int)param_2 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)((int)param_2 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x1a8)) * 0x10 + *(longlong *)(param_1 + 400));
  lVar3 = plVar5[1];
  if (lVar3 == lVar2) {
LAB_18043a246:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while (param_2 != uVar1) {
      if (lVar3 == *plVar5) goto LAB_18043a246;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  uVar4 = (uint7)((ulonglong)lVar3 >> 8);
  if ((lVar3 == lVar2) || (*(char *)(lVar3 + 0x14) == '\0')) {
    return (ulonglong)uVar4 << 8;
  }
  return CONCAT71(uVar4,1);
}



