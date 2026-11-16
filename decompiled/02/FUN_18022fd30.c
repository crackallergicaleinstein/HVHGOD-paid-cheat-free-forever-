// FUN_18022fd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022fd30 */

longlong FUN_18022fd30(longlong param_1,byte *param_2)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
             0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18))
  ;
  lVar2 = plVar3[1];
  if (lVar2 != *(longlong *)(param_1 + 8)) {
    sVar1 = *(short *)(lVar2 + 0x10);
    while (*(short *)param_2 != sVar1) {
      if (lVar2 == *plVar3) goto LAB_18022fda2;
      lVar2 = *(longlong *)(lVar2 + 8);
      sVar1 = *(short *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) {
      return lVar2 + 0x18;
    }
  }
LAB_18022fda2:
                    /* WARNING: Subroutine does not return */
  FUN_1805fa8dc("invalid unordered_map<K, T> key");
}



