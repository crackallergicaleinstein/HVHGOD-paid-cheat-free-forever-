// FUN_1801aa8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aa8e0 */

longlong * FUN_1801aa8e0(undefined8 param_1,longlong *param_2,byte *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)
           (((((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_3[1]) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^
                 (ulonglong)param_3[3]) * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^
               (ulonglong)param_3[5]) * 0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^
             (ulonglong)param_3[7]) * 0x100000001b3 & DAT_180bbe980) * 0x10 + DAT_180bbe968);
  lVar1 = plVar2[1];
  if (lVar1 != DAT_180bbe958) {
    if (*(longlong *)param_3 == *(longlong *)(lVar1 + 0x10)) goto LAB_1801aa9a6;
    while (lVar1 != *plVar2) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(longlong *)param_3 == *(longlong *)(lVar1 + 0x10)) {
        lVar3 = DAT_180bbe958;
        if (lVar1 != 0) {
          lVar3 = lVar1;
        }
        *param_2 = lVar3;
        return param_2;
      }
    }
  }
  lVar1 = 0;
LAB_1801aa9a6:
  lVar3 = DAT_180bbe958;
  if (lVar1 != 0) {
    lVar3 = lVar1;
  }
  *param_2 = lVar3;
  return param_2;
}



