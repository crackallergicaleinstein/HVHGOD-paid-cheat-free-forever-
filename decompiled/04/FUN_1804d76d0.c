// FUN_1804d76d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d76d0 */

void FUN_1804d76d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
                  ,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined1 in_ZMM1 [64];
  undefined1 auVar7 [16];
  undefined4 local_res10 [2];
  
  auVar7 = vminss_avx(ZEXT416(param_6),ZEXT416(param_5));
  auVar7._0_4_ = in_ZMM1._0_4_ / auVar7._0_4_;
  auVar7._4_12_ = in_ZMM1._4_12_;
  local_res10[0] = 0;
  _param_12 = 0;
  lVar3 = FUN_1804d7270(param_3,param_4,auVar7._0_8_,&param_12,local_res10);
  if (lVar3 != 0) {
    FUN_1804d67c0(param_1,lVar3,_param_12,local_res10[0],param_5,param_6,param_7,param_8,param_9,
                  param_10);
    lVar2 = DAT_180bb8ae8;
    if ((_param_12 != 0) && (DAT_180bb8ae8 != 0)) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar2 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar2 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(_param_12);
    lVar2 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar2 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar2 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar3);
  }
  return;
}



