// FUN_1801aad00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aad00 */

longlong * FUN_1801aad00(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  plVar3 = (longlong *)
           (((((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_3[1]) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^
                 (ulonglong)param_3[3]) * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^
               (ulonglong)param_3[5]) * 0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^
             (ulonglong)param_3[7]) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10 +
           *(longlong *)(param_1 + 0x18));
  lVar2 = plVar3[1];
  if (lVar2 != lVar1) {
    if (*(longlong *)param_3 == *(longlong *)(lVar2 + 0x10)) goto LAB_1801aadbf;
    while (lVar2 != *plVar3) {
      lVar2 = *(longlong *)(lVar2 + 8);
      if (*(longlong *)param_3 == *(longlong *)(lVar2 + 0x10)) {
        if (lVar2 == 0) {
          lVar2 = lVar1;
        }
        *param_2 = lVar2;
        return param_2;
      }
    }
  }
  lVar2 = 0;
LAB_1801aadbf:
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  *param_2 = lVar2;
  return param_2;
}



