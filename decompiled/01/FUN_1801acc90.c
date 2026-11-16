// FUN_1801acc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801acc90 */

undefined8 FUN_1801acc90(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           (((((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_2[1]) * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^
                 (ulonglong)param_2[3]) * 0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^
               (ulonglong)param_2[5]) * 0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^
             (ulonglong)param_2[7]) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10 +
           *(longlong *)(param_1 + 0x18));
  lVar1 = plVar2[1];
  if (lVar1 != *(longlong *)(param_1 + 8)) {
    if (*(longlong *)param_2 == *(longlong *)(lVar1 + 0x10)) goto LAB_1801acd40;
    while (lVar1 != *plVar2) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(longlong *)param_2 == *(longlong *)(lVar1 + 0x10)) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
      }
    }
  }
  lVar1 = 0;
LAB_1801acd40:
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
}



