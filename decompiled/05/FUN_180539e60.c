// FUN_180539e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180539e60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180539e60(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char *local_90;
  char *local_88;
  int local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  uint local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if (DAT_180c62f68 == 0) {
    uVar5 = FUN_1805533e0(param_1,&DAT_180cb6200);
    ppuVar4 = (undefined **)FUN_18055ebb0(&DAT_180cb6200);
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = 3;
    local_88 = "Item Labels";
    local_98 = 0x436e0000;
    local_90._0_4_ = uVar5;
    FUN_180485630(&local_68,param_1,0);
    cVar1 = *(char *)ppuVar4;
    local_90 = (char *)CONCAT44(local_90._4_4_,0x43960000);
    local_78 = ppuVar4;
    FUN_180552fb0(&local_68,"Enable Labels",ppuVar4,&local_78);
    if (*(char *)ppuVar4 != cVar1) {
      *(char *)(ppuVar4 + 2) = *(char *)ppuVar4;
    }
    local_78 = &PTR_s_Visible_18086c3c0;
    local_70 = 2;
    FUN_180487250(&local_68,"Visibility",ppuVar4 + 0x3a,&local_78);
    local_88 = (char *)CONCAT44(local_88._4_4_,0x3f800000);
    local_90 = "%.0f m";
    local_98 = 0x43480000;
    FUN_180487560(&local_68,"Max Distance",(char *)((longlong)ppuVar4 + 0x1cc));
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar3 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
    }
    bVar2 = *(byte *)(ppuVar4 + 0x39);
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = (bVar2 != 1) + 2 + (uint)(bVar2 != 0);
    local_88 = "Content & Appearance";
    local_90._0_4_ = 0x425c0000;
    local_98 = 0x436a199a;
    FUN_180485630(&local_68,param_1,1);
    local_78 = &PTR_DAT_18086bfb8;
    local_70 = 3;
    local_38[0] = (uint)bVar2;
    FUN_180487250(&local_68,"Display",local_38,&local_78);
    if (local_38[0] != bVar2) {
      *(char *)(ppuVar4 + 0x39) = (char)local_38[0];
    }
    cVar1 = *(char *)(ppuVar4 + 0x3b);
    uVar5 = 0x43a70000;
    local_90 = (char *)CONCAT44(local_90._4_4_,0x43a70000);
    local_78 = ppuVar4 + 0xd;
    FUN_180553bf0(&local_68);
    if (cVar1 != *(char *)(ppuVar4 + 0x3b)) {
      *(char *)(ppuVar4 + 0x3d) = *(char *)(ppuVar4 + 0x3b);
    }
    if (bVar2 != 1) {
      local_98 = uVar5;
      FUN_180554010(&local_68);
      if (bVar2 == 0) goto LAB_18053a140;
    }
    local_98 = uVar5;
    FUN_180554470(&local_68);
  }
  else if (DAT_180c62f68 == 1) {
    uVar5 = FUN_1805549a0(param_1,&DAT_180cbda50);
    ppuVar4 = (undefined **)FUN_18055ead0(&DAT_180cbda50);
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = 3;
    local_88 = "Item Glow";
    local_98 = 0x436e0000;
    local_90._0_4_ = uVar5;
    FUN_180485630(&local_68,param_1,0);
    cVar1 = *(char *)ppuVar4;
    local_90 = (char *)CONCAT44(local_90._4_4_,0x43960000);
    local_78 = ppuVar4;
    FUN_180552fb0(&local_68,"Enable Glow",ppuVar4,&local_78);
    if (*(char *)ppuVar4 != cVar1) {
      *(char *)(ppuVar4 + 2) = *(char *)ppuVar4;
    }
    local_78 = &PTR_s_Visible_18086c3c0;
    local_70 = 2;
    FUN_180487250(&local_68,"Visibility",(char *)((longlong)ppuVar4 + 0x6c),&local_78);
    local_88 = (char *)CONCAT44(local_88._4_4_,0x3f800000);
    local_90 = "%.0f m";
    local_98 = 0x43480000;
    FUN_180487560(&local_68,"Max Distance",ppuVar4 + 0xe);
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar3 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
    }
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = 1;
    local_88 = "Appearance";
    local_90 = (char *)CONCAT44(local_90._4_4_,0x425c0000);
    local_98 = 0x436a199a;
    FUN_180485630(&local_68,param_1,1);
    FUN_180539830(&local_68);
  }
  else {
    uVar5 = FUN_1805551b0(param_1,&DAT_180cbf2c0);
    FUN_180111410(&DAT_180cbf2c0);
    if (DAT_180cbf2c0 == 1) {
      ppuVar4 = (undefined **)(&DAT_180cbf558 + (longlong)DAT_180cbf2c4 * 0x288);
    }
    else if (DAT_180cbf2c0 == 2) {
      ppuVar4 = (undefined **)(&DAT_180cc0710 + (longlong)DAT_180cbf2c8 * 0x288);
    }
    else {
      ppuVar4 = (undefined **)&DAT_180cbf2d0;
    }
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = 3;
    local_88 = "Item Materials";
    local_98 = 0x436e0000;
    local_90._0_4_ = uVar5;
    FUN_180485630(&local_68,param_1,0);
    cVar1 = *(char *)ppuVar4;
    local_90 = (char *)CONCAT44(local_90._4_4_,0x43960000);
    local_78 = ppuVar4;
    FUN_180552fb0(&local_68,"Enable Materials",ppuVar4,&local_78);
    if (*(char *)ppuVar4 != cVar1) {
      *(char *)(ppuVar4 + 2) = *(char *)ppuVar4;
    }
    local_78 = &PTR_s_Visible_18086c3c0;
    local_70 = 2;
    FUN_180487250(&local_68,"Visibility",ppuVar4 + 0x4f,&local_78);
    local_88 = (char *)CONCAT44(local_88._4_4_,0x3f800000);
    local_90 = "%.0f m";
    local_98 = 0x43480000;
    FUN_180487560(&local_68,"Max Distance",ppuVar4 + 0x50);
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar3 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
    }
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = 1;
    local_88 = "Appearance";
    local_90 = (char *)CONCAT44(local_90._4_4_,0x425c0000);
    local_98 = 0x436a199a;
    FUN_180485630(&local_68,param_1,1);
    local_98 = 0x43a70000;
    FUN_1805559c0(&local_68);
  }
LAB_18053a140:
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar3 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
  }
}



