// FUN_18051a440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051a440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051a440(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [64];
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 *local_d0;
  char **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_38;
  char *local_30;
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  lVar1 = *param_1;
  local_38 = "Smooth";
  local_30 = "Acceleration";
  local_28 = "Dynamic";
  FUN_180488c60();
  local_c0 = 6;
  auStack_a8 = ZEXT816(0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  auVar4 = ZEXT864(0);
  local_c8 = (char **)0x1808672cc;
  local_d8 = (char *)FUN_180515fb0(&local_c8);
  local_58 = CONCAT71(uStack_97,local_98);
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  uStack_68 = auStack_a8._0_8_;
  uStack_60 = auStack_a8._8_8_;
  local_c8 = &local_38;
  local_c0 = 3;
  local_d0 = &local_78;
  auVar2 = vunpcklps_avx(auVar4._0_16_,auVar4._0_16_);
  local_48 = auVar2._0_8_;
  uStack_50 = uStack_90;
  cVar3 = FUN_18048d220("Motion",lVar1 + 0x74,&local_c8,1);
  if (cVar3 != '\0') {
    FUN_18050cd00();
  }
  local_d8 = "%.0f%%";
  FUN_180517040("Speed",lVar1 + 0x78,1,100);
  local_d8 = "%.0f";
  FUN_180517040("Smoothing",lVar1 + 0x6c,1,0x1e);
  FUN_180488f10();
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x74) != 0) {
    FUN_180488c60();
    if (*(int *)(lVar1 + 0x74) == 1) {
      local_d8 = "%.0f%%";
      FUN_180517040("Start Speed",lVar1 + 0x80,1,100);
      local_d8 = "%.0f%%/s";
      FUN_180517040("Acceleration",lVar1 + 0x84,1,500);
    }
    if (*(int *)(lVar1 + 0x74) == 2) {
      local_d8 = "%.0f";
      FUN_180517040("Edge Smoothing",lVar1 + 0x88,1,0x1e);
    }
    FUN_180488f10();
  }
  lVar1 = *param_1;
  FUN_180488c60();
  local_d8 = "%.0f%%";
  FUN_180517040("Motion Randomization",lVar1 + 0x7c,0,0x1e);
  FUN_180488f10();
}



