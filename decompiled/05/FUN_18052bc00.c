// FUN_18052bc00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052bc00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18052bc00(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined8 *local_c0;
  char **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  if (*(int *)*param_1 == 0xf) {
    cVar2 = FUN_18048b0e0("Open Models Folder",&DAT_180829a44,1);
    if (cVar2 != '\0') {
      FUN_18052b460();
    }
    cVar2 = FUN_18048b0e0("Rescan Custom Agents",&DAT_180829a4c,1);
    if (cVar2 != '\0') {
      iVar3 = FUN_1805f68d0(&DAT_1808daea0);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808daeec == 0x7fffffff) {
        DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      FUN_1801f3010(&DAT_180bbeba0);
      FUN_1805f68fc(&DAT_1808daea0);
      LOCK();
      DAT_180bbe88d = 1;
      UNLOCK();
      LOCK();
      DAT_1808da689 = 1;
      UNLOCK();
    }
    if (*(longlong *)(*(longlong *)param_1[1] + 0x18) != 0) {
      local_88 = 1;
      local_28 = "Game Default";
      local_b0 = 2;
      local_20 = "Suppress Cloth";
      local_a8 = 0;
      uStack_a0 = 0;
      auStack_98 = ZEXT816(0);
      uStack_80 = 0;
      local_b8 = &local_28;
      local_48 = CONCAT71(uStack_87,1);
      local_c0 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
      local_c8 = &DAT_18082a27c;
      uStack_40 = 0;
      local_38 = auVar1._0_8_;
      FUN_18048d220("Cloth Motion",&DAT_180cc81a0,&local_b8,1);
    }
  }
  else if ((*(int *)*param_1 < 0xf) && (**(short **)param_1[2] != 0x1f)) {
    cVar2 = FUN_18048b0e0("Stickers",&DAT_18085d588,1);
    if (cVar2 != '\0') {
      FUN_18052acc0(*(undefined4 *)param_1[3],*(undefined4 *)*param_1,1,0);
      FUN_1804c7bf0();
    }
    cVar2 = FUN_18048b0e0("Charm",&DAT_180829dbc,1);
    if (cVar2 != '\0') {
      FUN_18052acc0(*(undefined4 *)param_1[3],*(undefined4 *)*param_1,2,0);
      FUN_1804c7bf0();
    }
  }
  if (*(int *)*param_1 != 0xf) {
    cVar2 = FUN_18048b0e0("Restore Native Item",&DAT_180829a4c,1);
    if (cVar2 != '\0') {
      FUN_18052b6f0(*(undefined4 *)param_1[3],*(undefined4 *)*param_1);
    }
  }
}



