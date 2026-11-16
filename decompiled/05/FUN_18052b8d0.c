// FUN_18052b8d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052b8d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052b8d0(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_70;
  int *local_68;
  ushort **ppuStack_60;
  undefined8 local_58;
  int *local_50;
  ushort *local_48;
  longlong local_40;
  int local_38 [2];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_38[0] = param_2;
  local_30[0] = param_1;
  FUN_180529500();
  sVar1 = *(short *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4970 +
                    ((longlong)local_30[0] * 0x15 + (longlong)local_38[0]) * 4);
  if (DAT_180b909b0 == 0) {
  }
  if (sVar1 < 0) {
  }
  if ((int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68) <=
      (int)sVar1) {
  }
  local_48 = (ushort *)((longlong)sVar1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58));
  if (local_48 == (ushort *)0x0) {
  }
  uVar2 = *local_48;
  uVar8 = ((ulonglong)(uVar2 >> 8) ^ ((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3)
          * 0x100000001b3 & DAT_180cc9cb8;
  lVar6 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar8 * 0x10);
  if (lVar6 == DAT_180cc9c90) {
LAB_18052b9e9:
    lVar6 = 0;
  }
  else {
    uVar3 = *(ushort *)(lVar6 + 0x10);
    while (uVar2 != uVar3) {
      if (lVar6 == *(longlong *)(DAT_180cc9ca0 + uVar8 * 0x10)) goto LAB_18052b9e9;
      lVar6 = *(longlong *)(lVar6 + 8);
      uVar3 = *(ushort *)(lVar6 + 0x10);
    }
  }
  lVar7 = DAT_180cc9c90;
  if (lVar6 != 0) {
    lVar7 = lVar6;
  }
  if (lVar7 == DAT_180cc9c90) {
  }
  local_40 = *(longlong *)(lVar7 + 0x18) * 0xb8 + DAT_180cc9bf8;
  if (local_40 == 0) {
  }
  if (DAT_1808e6670 == '\0') {
    local_68 = local_38;
    ppuStack_60 = &local_48;
    local_58 = &local_40;
    local_50 = local_30;
    FUN_180488c60();
    FUN_18052bc00(&local_68);
    FUN_180488f10();
  }
  if (DAT_1808e667c == 1) {
    lVar6 = (longlong)DAT_1808e6680;
    FUN_180488c60();
    local_70 = 1;
    local_80 = 0;
    local_88 = 1;
    local_90 = 0x3c23d70a;
    local_98 = &DAT_1807c6e40;
    cVar5 = FUN_18048a250("Scrape",&DAT_1808e66dc + lVar6 * 7,0,0x3f800000);
    if (cVar5 != '\0') {
      FUN_18052ab70();
    }
    cVar5 = FUN_18048b0e0("Remove Sticker",&DAT_180829a48,1);
    if (cVar5 == '\0') goto LAB_18052bb8e;
    (&DAT_1808e66d8)[lVar6 * 7] = 0;
    (&DAT_1808e66dc)[lVar6 * 7] = 0;
    *(undefined8 *)(&DAT_1808e66e0 + lVar6 * 7) = 0x3f800000;
    *(undefined8 *)(&DAT_1808e66e8 + lVar6 * 7) = 0;
    (&DAT_1808e66f0)[lVar6 * 7] = 0xffffffff;
    (&DAT_1808e6888)[DAT_1808e6680] = 0;
  }
  else {
    FUN_180488c60();
    local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
    cVar5 = FUN_18048bce0("Charm Seed",&DAT_1808e6768,0,100000);
    if (cVar5 != '\0') {
      FUN_18052ab70();
    }
    cVar5 = FUN_18048b0e0("Remove Charm",&DAT_180829a48,1);
    if (cVar5 == '\0') goto LAB_18052bb8e;
    local_68 = (int *)0x0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = ppuStack_60;
    auVar4 = vinsertps_avx(auVar4 << 0x40,ZEXT816(0),0x20);
    _DAT_1808e6764 = vinsertps_avx(auVar4,ZEXT816(0),0x30);
    local_58._0_5_ = (uint5)(uint)local_58;
    _DAT_1808e6774 = (ulonglong)local_58._5_3_ << 0x28;
  }
  DAT_1808e6672 = 0;
  FUN_1801d8230(0);
LAB_18052bb8e:
  FUN_180488f10();
}



