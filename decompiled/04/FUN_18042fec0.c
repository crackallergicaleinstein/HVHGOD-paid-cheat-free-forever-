// FUN_18042fec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042fec0 */

longlong * FUN_18042fec0(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint local_28 [2];
  undefined1 local_20 [24];
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  plVar6 = (longlong *)
           ((((((ulonglong)(param_3 >> 8 & 0xff) ^
               ((ulonglong)(param_3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
              (ulonglong)(param_3 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_3 >> 0x18)) *
             0x100000001b3 & *(ulonglong *)(param_1 + 0x58)) * 0x10 + *(longlong *)(param_1 + 0x40))
  ;
  lVar5 = plVar6[1];
  if (lVar5 == lVar2) {
LAB_18042ff58:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x10);
    while (param_3 != uVar1) {
      if (lVar5 == *plVar6) goto LAB_18042ff58;
      lVar5 = *(longlong *)(lVar5 + 8);
      uVar1 = *(uint *)(lVar5 + 0x10);
    }
  }
  if (lVar5 == 0) {
    lVar5 = lVar2;
  }
  if (lVar5 == lVar2) {
    local_28[0] = param_3;
    if (((*(longlong *)(param_1 + 0x98) != 0) &&
        (iVar4 = FUN_1805738d0(*(longlong *)(param_1 + 0x98),param_3), iVar4 != 0)) &&
       (cVar3 = FUN_180430180(param_1,local_28[0]), cVar3 != '\0')) {
      plVar6 = (longlong *)FUN_180438ea0(param_1 + 0x28,local_20,local_28);
      lVar5 = *plVar6;
      *param_2 = param_1;
      param_2[1] = lVar5 + 0x14;
      return param_2;
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_18042fec0(*(longlong *)(param_1 + 0x88),param_2,local_28[0]);
      return param_2;
    }
    lVar5 = param_1 + 0x68;
  }
  else {
    lVar5 = lVar5 + 0x14;
  }
  param_2[1] = lVar5;
  *param_2 = param_1;
  return param_2;
}



