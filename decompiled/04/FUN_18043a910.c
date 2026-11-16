// FUN_18043a910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18043a910(ulonglong param_1,float param_2,float param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_78 [2];
  ulonglong local_70;
  undefined1 local_68 [48];
  
  local_78[0] = param_4;
  local_70 = param_1;
  if ((DAT_180cd49a8 & 1) == 0) {
    DAT_180cd49a8 = DAT_180cd49a8 | 1;
    _DAT_180cd49b0 = 0;
    DAT_180cd49b8 = 0;
    uRam0000000180cd49c0 = 0;
    DAT_180cd49c8 = 0;
    _DAT_180cd49d0 = 0;
    uRam0000000180cd49d8 = 0;
    _DAT_180cd49e0 = 0;
    uRam0000000180cd49e8 = 0;
    FUN_1803ce3b0(&DAT_180cd49b0);
    atexit(FUN_180663180);
  }
  uVar6 = ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
          0x100000001b3 & _DAT_180cd49e0;
  lVar5 = *(longlong *)(DAT_180cd49c8 + 8 + uVar6 * 0x10);
  if (lVar5 == DAT_180cd49b8) {
LAB_18043aa61:
    lVar5 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(lVar5 + 0x10);
    while (param_1 != uVar1) {
      if (lVar5 == *(longlong *)(DAT_180cd49c8 + uVar6 * 0x10)) goto LAB_18043aa61;
      lVar5 = *(longlong *)(lVar5 + 8);
      uVar1 = *(ulonglong *)(lVar5 + 0x10);
    }
  }
  lVar4 = DAT_180cd49b8;
  if (lVar5 != 0) {
    lVar4 = lVar5;
  }
  if (lVar4 == DAT_180cd49b8) {
    plVar3 = (longlong *)FUN_18043e6f0(&DAT_180cd49b0,local_68,&local_70,local_78);
    lVar4 = *plVar3;
  }
  auVar2 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)(param_3 * DAT_180bbae00)));
  *(float *)(lVar4 + 0x18) =
       auVar2._0_4_ * (param_2 - *(float *)(lVar4 + 0x18)) + *(float *)(lVar4 + 0x18);
  return;
}



