// FUN_1805335f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805335f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805335f0(void)

{
  char cVar1;
  int iVar2;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 **local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  cVar1 = FUN_18048b0e0("Watermark",&DAT_180830b50,1);
  auVar4 = ZEXT464(0x439b0000);
  if (cVar1 != '\0') {
    FUN_1805303d0("##profile_watermark",auVar4._0_8_);
  }
  cVar1 = FUN_180488630("##profile_watermark","Watermark",auVar4._0_8_);
  if (cVar1 != '\0') {
    FUN_180530aa0();
    FUN_1804aeac0();
  }
  cVar1 = FUN_18048b0e0("Clan Tag",&DAT_18085d5b4,1);
  if (cVar1 != '\0') {
    FUN_1805303d0("##profile_clan_tag",auVar4._0_8_);
  }
  cVar1 = FUN_180488630("##profile_clan_tag","Clan Tag",auVar4._0_8_);
  if (cVar1 != '\0') {
    FUN_180530e30();
    FUN_1804aeac0();
  }
  cVar1 = FUN_18048b0e0("Override Name",&DAT_18082a250,1);
  uVar3 = auVar4._0_8_;
  if (cVar1 != '\0') {
    FUN_1805303d0("##profile_name_override",uVar3);
    uVar3 = auVar4._0_8_;
  }
  cVar1 = FUN_180488630("##profile_name_override","Override Name",uVar3);
  if (cVar1 == '\0') goto LAB_1805337d3;
  if ((DAT_180cd7270 & 1) == 0) {
    DAT_180cd7270 = DAT_180cd7270 | 1;
    atexit(FUN_180663ef0);
  }
  local_28 = &DAT_180b0b4b8;
  if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) == '\0') {
    _Buf2 = &DAT_180b0b4b8;
    if (0xf < DAT_180b0b4d0) {
      _Buf2 = DAT_180b0b4b8;
    }
    _Buf1 = &DAT_180b0a5c8;
    if (0xf < DAT_180b0a5e0) {
      _Buf1 = DAT_180b0a5c8;
    }
    if (DAT_180b0a5d8 != DAT_180b0b4c8) goto LAB_18053378d;
    if (DAT_180b0a5d8 != 0) {
      iVar2 = memcmp(_Buf1,_Buf2,DAT_180b0a5d8);
      if (iVar2 != 0) goto LAB_18053378d;
    }
  }
  else {
LAB_18053378d:
    FUN_1805310f0(&local_28);
  }
  FUN_180488c60();
  FUN_1805311a0();
  FUN_180488f10();
  local_30 = &local_28;
  local_38 = &DAT_180b0b4b8;
  FUN_180488c60();
  FUN_180531470(&local_38);
  FUN_180488f10();
  FUN_1804aeac0();
LAB_1805337d3:
  cVar1 = FUN_18048b0e0("Hat HUD",&DAT_18085d5a0,1);
  if (cVar1 != '\0') {
    FUN_180488320("##profile_hat");
  }
  cVar1 = FUN_180488630("##profile_hat","Hat HUD",0x439f0000);
  if (cVar1 != '\0') {
    FUN_1805316c0();
    FUN_1804aeac0();
  }
}



