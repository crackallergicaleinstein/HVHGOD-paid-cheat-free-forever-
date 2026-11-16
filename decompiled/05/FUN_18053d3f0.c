// FUN_18053d3f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053d3f0 */

void FUN_18053d3f0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  undefined1 *local_res8 [4];
  char *pcVar3;
  ulonglong uVar4;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  uint7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_180488c60();
  FUN_18053bd80(&DAT_180b0c73c);
  local_a0 = 3;
  local_a8 = &PTR_DAT_18086bde8;
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_78 = 0;
  uStack_70 = 0;
  local_38 = (ulonglong)uStack_77 << 8;
  local_28 = auVar1._0_8_;
  uStack_30 = 0;
  FUN_18048d220("Animation",&DAT_180b0c738,&local_a8,1,&DAT_180859278,&local_58);
  auVar2 = ZEXT464(0x3dcccccd);
  FUN_18048a250("Visible Time",&DAT_180b0c734,auVar2._0_8_,0x40a00000,"%.1f s",0x3dcccccd,1,
                &DAT_18082a278);
  pcVar3 = "%.1f px";
  FUN_18048a250("Line Width",&DAT_180b0c740,0x3f000000,0x40c00000,"%.1f px",auVar2._0_4_,1,
                &DAT_18082a288);
  FUN_180488f10();
  FUN_180488c60();
  uVar4 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
  FUN_1805367d0("Start Color",&DAT_180b0c730,&DAT_18082a268,1,uVar4);
  FUN_1804898a0("Use Gradient",&DAT_180b0c768,&DAT_18082a260,1,uVar4 & 0xffffffffffffff00,0);
  FUN_1805367d0("End Color",&DAT_180b0c76c,&DAT_18082a260,DAT_180b0c768,1);
  FUN_180488f10();
  local_res8[0] = &DAT_180b0be78;
  FUN_180488c60();
  FUN_18053d610(local_res8);
  FUN_180488f10();
  return;
}



