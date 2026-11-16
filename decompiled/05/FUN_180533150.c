// FUN_180533150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180533150 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180533150(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  ulonglong *local_e0;
  undefined1 local_d8 [32];
  undefined8 ****local_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 ****local_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_90 = DAT_180bbef4a;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  DAT_180bbef4a = 1;
  local_e0 = &local_88;
  local_88 = DAT_1808e6650;
  uStack_80 = uRam00000001808e6658;
  uStack_78 = DAT_1808e6660;
  uStack_70 = DAT_1808e6668;
  DAT_1808e6660 = 0;
  DAT_1808e6668 = 0xf;
  DAT_1808e6650 = DAT_1808e6650 & 0xffffffffffffff00;
  local_e8 = 1;
  FUN_180113930(&DAT_1808e6650,"Profile settings",0x10);
  FUN_180488c60();
  FUN_180532bb0();
  FUN_180488f10();
  FUN_180488c60();
  FUN_1805335f0();
  FUN_180488f10();
  FUN_180488c60();
  cVar2 = FUN_18048b0e0("Auto-buy",&DAT_18085d598,1);
  if (cVar2 != '\0') {
    FUN_180488320("##profile_autobuy");
  }
  cVar2 = FUN_180488630("##profile_autobuy","Auto-buy",0x43aa0000);
  if (cVar2 != '\0') {
    FUN_180532480();
    FUN_1804aeac0();
  }
  local_f0 = 0;
  local_f8 = 0;
  FUN_1804898a0("Auto Accept",&DAT_180b0d998,&DAT_18082ac70,1);
  FUN_180488f10();
  FUN_180488c60();
  local_f0 = local_f0 & 0xffffffffffffff00;
  FUN_180489fc0("Accent Color",DAT_180c62f50 + 0x717c,1,&DAT_18082a268);
  local_f0 = 0;
  local_f8 = 0;
  FUN_1804898a0("Synchronization",&DAT_180b0b4d8,&DAT_180830b50,1);
  local_98[0] = DAT_1808e4fb5;
  local_f0 = 0;
  local_f8 = 0;
  cVar2 = FUN_1804898a0("Day Theme",local_98,&DAT_180830b60,1);
  if (cVar2 != '\0') {
    DAT_1808e4fb5 = local_98[0];
  }
  FUN_180488f10();
  FUN_180488c60();
  cVar2 = FUN_18048b0e0("Opening Shortcuts",&DAT_180829dc4,1);
  if (cVar2 != '\0') {
    FUN_180488320("##opening_shortcuts");
  }
  cVar2 = FUN_180488630("##opening_shortcuts","Opening Shortcuts",0x437a0000);
  if (cVar2 != '\0') {
    iVar3 = FUN_1805f68d0(&DAT_1808da600);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808da64c == 0x7fffffff) {
      DAT_1808da64c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    uVar4 = DAT_1808da660;
    uVar8 = _DAT_1808da650;
    uVar9 = uRam00000001808da658;
    FUN_1805f68fc(&DAT_1808da600);
    puVar6 = &local_68;
    iVar3 = 0;
    local_68 = uVar8;
    uStack_60 = uVar9;
    local_58 = uVar4;
    do {
      FUN_1804c2920(iVar3);
      iVar1 = iVar3 + 1;
      uVar4 = FUN_18015bea0(local_d8,iVar1);
      plVar5 = (longlong *)FUN_180141490(uVar4,0,"Shortcut ",9);
      local_b8 = (undefined8 ****)*plVar5;
      lStack_b0 = plVar5[1];
      lStack_a8 = plVar5[2];
      uStack_a0 = plVar5[3];
      *(undefined1 *)plVar5 = 0;
      plVar5[2] = 0;
      plVar5[3] = 0xf;
      local_50 = local_b8;
      lStack_48 = lStack_b0;
      lStack_40 = lStack_a8;
      uStack_38 = uStack_a0;
      FUN_18015c010(local_d8);
      ppppuVar7 = &local_50;
      if (0xf < uStack_a0) {
        ppppuVar7 = local_b8;
      }
      FUN_18050e080(ppppuVar7,puVar6,iVar3);
      iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar3 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
      }
      FUN_18015c010(&local_50);
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      iVar3 = iVar1;
    } while (iVar1 < 6);
    FUN_1804aeac0();
  }
  FUN_180488f10();
  DAT_180bbef4a = local_90;
  FUN_18015c010(&DAT_1808e6650);
  DAT_1808e6650 = local_88;
  uRam00000001808e6658 = uStack_80;
  DAT_1808e6660 = uStack_78;
  DAT_1808e6668 = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0xf;
  local_88 = local_88 & 0xffffffffffffff00;
  FUN_18015c010(&local_88);
}



