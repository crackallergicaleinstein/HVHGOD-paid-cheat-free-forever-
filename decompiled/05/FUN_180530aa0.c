// FUN_180530aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180530aa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180530aa0(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined ***local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  uint7 uStack_77;
  undefined8 uStack_70;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_18[0] = (uint)DAT_180b0de18;
  if (3 < local_18[0]) {
    local_18[0] = 0;
  }
  FUN_180488c60();
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Show Watermark",&DAT_180b0dad8,&DAT_180829dc0,1);
  if (cVar2 != '\0') {
    DAT_180b0dae8 = DAT_180b0dad8;
  }
  uStack_90 = 4;
  local_98 = &PTR_DAT_18086bda0;
  local_a8 = &PTR_s_Modern_18086c358;
  local_b0 = &local_58;
  auStack_88 = ZEXT816(0);
  local_58 = &PTR_DAT_18086bda0;
  uStack_50 = 4;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_78 = 0;
  uStack_70 = 0;
  local_38 = (ulonglong)uStack_77 << 8;
  local_b8 = &DAT_18082a240;
  uStack_30 = 0;
  local_28 = auVar1._0_8_;
  local_a0 = 4;
  cVar2 = FUN_18048d220("Style",local_18,&local_a8,1);
  if (cVar2 != '\0') {
    DAT_180b0de18 = (byte)local_18[0];
  }
  FUN_1805302b0((&PTR_s_A_rounded_bar_with_subtle_separa_18086be70)[(int)local_18[0]]);
  if (local_18[0] == 3) {
    cVar2 = FUN_18048b0e0("Glass Appearance",&DAT_180858a0c,1);
    if (cVar2 != '\0') {
      FUN_1805303d0("##watermark_glass",0x43a00000);
    }
  }
  FUN_180488f10();
  if (local_18[0] == 3) {
    cVar2 = FUN_180488630("##watermark_glass","Glass Appearance",0x43a00000);
    if (cVar2 != '\0') {
      FUN_180530480();
      FUN_1804aeac0();
    }
  }
  FUN_180488c60();
  FUN_180488a80("Identity & Session",&DAT_18082a250);
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Account",&DAT_180b0dc78,&DAT_18082a250,1);
  if (cVar2 != '\0') {
    DAT_180b0dc88 = DAT_180b0dc78;
  }
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0(&DAT_180867ddc,&DAT_180b0dce0,&DAT_180830b38,1);
  if (cVar2 != '\0') {
    DAT_180b0dcf0 = DAT_180b0dce0;
  }
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Local Time",&DAT_180b0dc10,&DAT_18082a278,1);
  if (cVar2 != '\0') {
    DAT_180b0dc20 = DAT_180b0dc10;
  }
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Performance",&DAT_180859278);
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Framerate",&DAT_180b0db40,&DAT_180830b50,1);
  if (cVar2 != '\0') {
    DAT_180b0db50 = DAT_180b0db40;
  }
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0(&DAT_180867c3c,&DAT_180b0dba8,&DAT_18082a270,1);
  if (cVar2 != '\0') {
    DAT_180b0dbb8 = DAT_180b0dba8;
  }
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Tick Rate",&DAT_180b0dd48,&DAT_18085d5a8,1);
  if (cVar2 != '\0') {
    DAT_180b0dd58 = DAT_180b0dd48;
  }
  local_b0 = (undefined ***)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Velocity",&DAT_180b0ddb0,&DAT_18082a274,1);
  if (cVar2 != '\0') {
    DAT_180b0ddc0 = DAT_180b0ddb0;
  }
  FUN_180488f10();
}



