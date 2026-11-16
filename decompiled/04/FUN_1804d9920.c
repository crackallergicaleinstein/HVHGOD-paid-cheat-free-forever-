// FUN_1804d9920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9920 */

void FUN_1804d9920(longlong param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  float *param_5,uint param_6)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  
  if ((param_6 & 0x2000) == 0) {
    auVar1 = vunpcklps_avx(ZEXT416(**(uint **)(param_1 + 0x38)),
                           ZEXT416((*(uint **)(param_1 + 0x38))[1]));
    *param_4 = auVar1._0_8_;
    *param_3 = auVar1._0_8_;
    *param_5 = 0.0;
    return;
  }
  if (4.0 < param_2) {
    if (30.5 <= param_2) {
      iVar4 = 0x1f;
    }
    else {
      iVar4 = (int)(param_2 + 0.5);
    }
  }
  else {
    iVar4 = (int)((param_2 - 1.0) * 4.0 + 0.5) + 0x21;
  }
  auVar1 = *(undefined1 (*) [16])
            (*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + (longlong)iVar4 * 0x10);
  *(int *)param_3 = auVar1._0_4_;
  uVar2 = vextractps_avx(auVar1,1);
  *(undefined4 *)param_4 = uVar2;
  auVar3 = vshufps_avx(auVar1,auVar1,0xaa);
  *(int *)((longlong)param_4 + 4) = auVar3._0_4_;
  *(int *)((longlong)param_3 + 4) = auVar3._0_4_;
  auVar1 = vshufps_avx(auVar1,auVar1,0xff);
  *param_5 = param_2 * *(float *)(param_1 + 0xe0) * auVar1._0_4_;
  return;
}



