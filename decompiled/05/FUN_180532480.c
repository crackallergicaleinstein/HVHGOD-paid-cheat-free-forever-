// FUN_180532480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180532480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180532480(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [64];
  undefined1 auStack_158 [32];
  char *local_138;
  undefined ****local_130;
  undefined ***local_128;
  undefined8 *puStack_120;
  undefined ***pppuStack_118;
  uint *puStack_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint local_d8 [4];
  undefined **local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  FUN_180488c60();
  local_130 = (undefined ****)0x0;
  local_138 = (char *)((ulonglong)local_138 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Enable Auto-buy",&DAT_180b0d7e0,&DAT_18085d598,1);
  if (cVar2 != '\0') {
    DAT_180b0d7f0 = DAT_180b0d7e0;
  }
  uVar5 = FUN_180550d40(extraout_XMM0_Qa,&DAT_180b0d848);
  FUN_180551430(uVar5,&DAT_180b0d84c);
  FUN_180488f10();
  FUN_180488c60();
  if (DAT_180b0d850 == '\0') {
    local_d8[0] = 0;
  }
  else {
    local_d8[0] = 2 - (DAT_180b0d98d != '\0');
  }
  cVar2 = FUN_1805519c0(local_d8[0],local_d8);
  if (cVar2 != '\0') {
    DAT_180b0d850 = local_d8[0] != 0;
    DAT_180b0d860 = DAT_180b0d850;
    if (local_d8[0] != 0) {
      DAT_180b0d98d = local_d8[0] == 1;
    }
  }
  local_d8[0] = (uint)DAT_180b0d920;
  local_138 = "taser";
  cVar2 = FUN_180551e90(&DAT_1808680d4,local_d8,&PTR_DAT_180801510,&DAT_180829fa0);
  if (cVar2 != '\0') {
    DAT_180b0d920 = local_d8[0] != 0;
    DAT_180b0d930 = DAT_180b0d920;
  }
  local_d8[0] = (uint)DAT_180b0d8b8;
  local_138 = "defuser";
  cVar2 = FUN_180551e90("Defuse Kit",local_d8,&PTR_DAT_180800ed0,&DAT_180829f98);
  if (cVar2 != '\0') {
    DAT_180b0d8b8 = local_d8[0] != 0;
    DAT_180b0d8c8 = DAT_180b0d8b8;
  }
  cVar2 = FUN_18048b0e0("Grenades",&DAT_180829f9c,1);
  if (cVar2 != '\0') {
    FUN_1805303d0("##autobuy_grenades",0x43a20000);
  }
  FUN_180488f10();
  cVar2 = FUN_180488630("##autobuy_grenades","Grenades");
  if (cVar2 != '\0') {
    FUN_1805302b0("Choose which grenades to buy when there is enough money.");
    local_c8 = (undefined **)&DAT_180b0d7e0;
    FUN_180488c60();
    FUN_1805328b0(&local_c8);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  uStack_b0 = 2;
  local_b8 = &PTR_DAT_18086be90;
  local_c8 = &PTR_DAT_18086c080;
  local_130 = &local_128;
  auStack_a8 = ZEXT816(0);
  local_128 = (undefined ***)&PTR_DAT_18086be90;
  puStack_120 = (undefined8 *)0x2;
  pppuStack_118 = (undefined ***)0x0;
  puStack_110 = (uint *)0x0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
  uStack_90 = 0;
  local_138 = &DAT_18082a294;
  local_108 = local_98;
  uStack_100 = 0;
  local_f8 = auVar1._0_8_;
  local_c0 = 2;
  cVar2 = FUN_18048d220("Money Priority",&DAT_180b0d990,&local_c8,1);
  auVar7 = ZEXT464(0x43a30000);
  uVar5 = auVar7._0_8_;
  if ((cVar2 == '\0') || (DAT_180b0d990 != 1)) {
    if (DAT_180b0d990 != 1) goto LAB_180532743;
    cVar2 = FUN_18048b0e0("Edit Purchase Order",&DAT_18082a28c,1);
    uVar5 = auVar7._0_8_;
    if (cVar2 == '\0') goto LAB_180532743;
  }
  FUN_1805303d0("##autobuy_order",auVar7._0_8_);
  uVar5 = auVar7._0_8_;
LAB_180532743:
  cVar2 = FUN_180488630("##autobuy_order","Purchase Order",uVar5);
  if (cVar2 != '\0') {
    FUN_1805302b0(
                 "Drag selected items into order. The first item gets the first chance at the available money."
                 );
    puVar3 = (undefined8 *)FUN_1802fa8d0(&local_128,&DAT_180b0d7e0);
    local_78 = *puVar3;
    uStack_70 = puVar3[1];
    uStack_68 = puVar3[2];
    uStack_60 = puVar3[3];
    local_58 = puVar3[4];
    uStack_50 = puVar3[5];
    uStack_48 = puVar3[6];
    uStack_40 = puVar3[7];
    local_38 = puVar3[8];
    uStack_30 = puVar3[9];
    puVar3 = (undefined8 *)FUN_1802f4de0(&local_128,DAT_180b0d994);
    local_b8 = (undefined **)*puVar3;
    uStack_b0 = puVar3[1];
    auStack_a8 = *(undefined1 (*) [16])(puVar3 + 2);
    local_98 = (undefined1 *)puVar3[4];
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_128 = _DAT_180bb8890;
    puStack_120 = (undefined8 *)uRam0000000180bb8898;
    pppuStack_118 = (undefined ***)uRam0000000180bb88a0;
    puStack_110 = (uint *)uRam0000000180bb88a8;
    uVar6 = _DAT_180bb88b0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_128 = &local_b8;
    local_d8[0] = 0;
    puStack_120 = &local_78;
    pppuStack_118 = &local_c8;
    puStack_110 = local_d8;
    local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar6);
    local_108 = &DAT_180b0d7e0;
    FUN_180488c60();
    FUN_180531e00(&local_128);
    FUN_180488f10();
    if (1 < (int)local_d8[0]) {
      cVar2 = FUN_18048b0e0("Restore Default Order",&DAT_180829a4c,1);
      if (cVar2 != '\0') {
        DAT_180b0d994 = 0;
      }
    }
    FUN_1804aeac0();
  }
  pcVar4 = "None uses the standard purchase order.";
  if (DAT_180b0d990 == 1) {
    pcVar4 = "Your selected items are attempted in custom order.";
  }
  FUN_1805302b0(pcVar4);
}



