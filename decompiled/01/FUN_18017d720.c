// FUN_18017d720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017d720 */

undefined8 * FUN_18017d720(short *param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined1 auVar2 [16];
  short *psVar3;
  short *psVar4;
  undefined1 local_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *local_20;
  
  psVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar4 = *(short **)param_1;
  }
  psVar1 = psVar4 + *(longlong *)(param_1 + 8);
  local_20 = param_2;
  psVar3 = (short *)FUN_1800a7b00(psVar4,psVar1);
  if ((psVar4 == psVar3) && (psVar3 != psVar1)) {
    do {
      if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
      psVar3 = psVar3 + 1;
    } while (psVar3 != psVar1);
    if ((psVar4 == psVar3) && (psVar3 != psVar1)) {
      while (*psVar3 != 0x5c) {
        if ((*psVar3 == 0x2f) || (psVar3 = psVar3 + 1, psVar3 == psVar1)) break;
      }
    }
  }
  uStack_38 = 0;
  uStack_30 = 0;
  local_48 = (undefined1  [16])0x0;
  FUN_180159e60(local_48,psVar4,(longlong)psVar3 - (longlong)psVar4 >> 1);
  psVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar4 = *(short **)param_1;
  }
  *param_2 = psVar4;
  param_2[1] = local_48._0_8_;
  param_2[2] = local_48._8_8_;
  param_2[3] = uStack_38;
  param_2[4] = uStack_30;
  param_2[5] = param_1;
  uStack_38 = 0;
  uStack_30 = 7;
  auVar2._14_2_ = 0;
  auVar2._0_14_ = local_48._2_14_;
  local_48 = auVar2 << 0x10;
  FUN_18015b930(local_48);
  return param_2;
}



