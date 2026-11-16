// FUN_1803db960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803db960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1803db960(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ (param_2 & 0xffffffff) >> 0x18
          ) * 0x100000001b3 & _DAT_180cc92e0;
  lVar2 = *(longlong *)(DAT_180cc92c8 + 8 + uVar6 * 0x10);
  lVar4 = DAT_180cc92c8;
  if (lVar2 == DAT_180cc92b8) {
LAB_1803db9e5:
    lVar2 = 0;
  }
  else {
    lVar4 = *(longlong *)(DAT_180cc92c8 + uVar6 * 0x10);
    iVar1 = *(int *)(lVar2 + 0x10);
    while ((int)param_2 != iVar1) {
      if (lVar2 == lVar4) goto LAB_1803db9e5;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  lVar5 = DAT_180cc92b8;
  if (lVar2 != 0) {
    lVar5 = lVar2;
  }
  if (lVar5 == DAT_180cc92b8) {
    return 0;
  }
  uVar3 = FUN_1803db750(lVar4,lVar5 + 0x18);
  return uVar3;
}



