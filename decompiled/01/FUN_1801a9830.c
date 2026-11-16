// FUN_1801a9830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a9830 */

longlong * FUN_1801a9830(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_180bbe958;
  plVar2 = (longlong *)
           (((((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3 & DAT_180bbe980) * 0x10
           + DAT_180bbe968);
  if ((longlong *)plVar2[1] == param_3) {
    if ((longlong *)*plVar2 == param_3) {
      *plVar2 = DAT_180bbe958;
      plVar2[1] = lVar1;
    }
    else {
      plVar2[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar2 == param_3) {
    *plVar2 = *param_3;
  }
  lVar1 = *param_3;
  DAT_180bbe960 = DAT_180bbe960 + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  FUN_1801b2a20(param_3 + 0x69);
  FUN_18015c010(param_3 + 0xb);
  FUN_1804547d0(param_3,0x378);
  *param_2 = lVar1;
  return param_2;
}



