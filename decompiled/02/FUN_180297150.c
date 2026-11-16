// FUN_180297150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180297150 */

longlong * FUN_180297150(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           (((((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
  if ((longlong *)plVar2[1] == param_3) {
    if ((longlong *)*plVar2 == param_3) {
      lVar1 = *(longlong *)(param_1 + 8);
      *plVar2 = lVar1;
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
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_3[1];
  FUN_1804547d0(param_3,0xb0);
  *param_2 = lVar1;
  return param_2;
}



