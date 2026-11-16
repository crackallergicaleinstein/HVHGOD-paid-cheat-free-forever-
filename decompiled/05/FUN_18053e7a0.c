// FUN_18053e7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053e7a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053e7a0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined **local_a0;
  char *local_98;
  undefined4 local_90;
  undefined1 ***local_88;
  undefined1 *local_80;
  undefined1 local_78 [8];
  undefined1 **local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = (undefined1  [16])0x0;
  local_90 = 1;
  local_98 = "Configure";
  local_a0 = (undefined **)CONCAT44(local_a0._4_4_,0x425c0000);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x43f00000);
  FUN_180485630(&local_60,param_1,0);
  local_a0 = &PTR_DAT_18086c5d0;
  local_a8 = &DAT_18086c528;
  FUN_18055a480(&local_60,"##misc_section",&DAT_180c5a508,&PTR_s_Audio_Feedback_18086bb28);
  auVar7 = ZEXT464((uint)((float)(int)local_40._8_4_ * 30.855553 + 0.6 + uStack_50._4_4_ + 21.0));
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  auVar6 = auVar7._0_16_;
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
    auVar6 = auVar7._0_16_;
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = (undefined1  [16])0x0;
  uVar4 = auVar6._0_4_;
  local_a0._0_4_ = uVar4;
  if (DAT_180c5a508 == 0) {
    local_90 = 2;
    local_98 = "Audio Feedback";
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
    FUN_180485630(&local_60,param_1,0);
    cVar3 = DAT_180b0c0f8;
    local_78[0] = (code)0x0;
    local_70 = (undefined1 **)local_78;
    local_68 = &DAT_180b0c0f8;
    uVar4 = 0x43af0000;
    local_a0._0_4_ = 0x43af0000;
    FUN_1805631c0(&local_60);
    cVar2 = DAT_180b0c188;
    if (cVar3 != DAT_180b0c0f8) {
      DAT_180b0c108 = DAT_180b0c0f8;
    }
    local_78[0] = (code)0x0;
    local_70 = (undefined1 **)local_78;
    local_68 = &DAT_180b0c188;
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
    FUN_1805635f0(&local_60);
    if (cVar2 != DAT_180b0c188) {
      DAT_180b0c198 = DAT_180b0c188;
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (1 < iVar1) {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    if (DAT_180c5a508 == 1) {
      local_90 = 2;
      local_98 = "Hit Feedback";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_60,param_1,0);
      cVar2 = DAT_180b0c770;
      local_70 = (undefined1 **)FUN_18053cc70;
      local_88 = &local_70;
      local_80 = &DAT_180b0c770;
      uVar4 = 0x43af0000;
      local_a0._0_4_ = 0x43af0000;
      local_a8._0_1_ = 1;
      FUN_180563a20(&local_60,"Hit Marker",&DAT_180b0c770,&local_88);
      cVar3 = DAT_180b0c218;
      if (cVar2 != DAT_180b0c770) {
        DAT_180b0c780 = DAT_180b0c770;
      }
      local_70 = (undefined1 **)FUN_18053cea0;
      local_88 = &local_70;
      local_80 = &DAT_180b0c218;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
      FUN_180563a20(&local_60,"Hit Flash",&DAT_180b0c218,&local_88);
      if (cVar3 != DAT_180b0c218) {
        DAT_180b0c228 = DAT_180b0c218;
      }
      if (DAT_180bbecdb != '\0') {
        if (DAT_180c62d18 != DAT_180c62d20) {
          FUN_18015c010(DAT_180c62d20 + -0x20);
          DAT_180c62d20 = DAT_180c62d20 + -0x20;
        }
        DAT_1808e4e38 = 0xffffffff;
      }
      uVar5 = auVar7._0_4_;
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        uVar5 = auVar7._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      local_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_90 = 2;
      local_98 = "Bullet Effects";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436a199a);
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_60,param_1,1);
      cVar3 = DAT_180b0c5c0;
      local_70 = (undefined1 **)FUN_18053cf70;
      local_88 = &local_70;
      local_80 = &DAT_180b0c5c0;
      local_a8._0_1_ = 1;
      local_a0._0_4_ = uVar4;
      FUN_180563a20(&local_60,"Bullet Impacts",&DAT_180b0c5c0,&local_88);
      cVar2 = DAT_180b0c6c8;
      if (cVar3 != DAT_180b0c5c0) {
        DAT_180b0c5d0 = DAT_180b0c5c0;
      }
      local_70 = (undefined1 **)FUN_18053d3f0;
      local_88 = &local_70;
      local_80 = &DAT_180b0c6c8;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
      FUN_180563a20(&local_60,"Bullet Tracers",&DAT_180b0c6c8,&local_88);
      if (cVar2 != DAT_180b0c6c8) {
        DAT_180b0c6d8 = DAT_180b0c6c8;
      }
    }
    else if (DAT_180c5a508 == 2) {
      local_90 = 1;
      local_98 = "Kill Effect";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_60,param_1,0);
      cVar3 = DAT_180b0c290;
      local_70 = (undefined1 **)FUN_18053dcd0;
      local_88 = &local_70;
      local_80 = &DAT_180b0c290;
      uVar4 = 0x43af0000;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,0x43af0000);
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
      FUN_180563a20(&local_60,"Kill Effect",&DAT_180b0c290,&local_88);
      if (cVar3 != DAT_180b0c290) {
        DAT_180b0c2a0 = DAT_180b0c290;
      }
      if (DAT_180bbecdb != '\0') {
        if (DAT_180c62d18 != DAT_180c62d20) {
          FUN_18015c010(DAT_180c62d20 + -0x20);
          DAT_180c62d20 = DAT_180c62d20 + -0x20;
        }
        DAT_1808e4e38 = 0xffffffff;
      }
      uVar5 = auVar7._0_4_;
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        uVar5 = auVar7._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      local_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_90 = 2;
      local_98 = "Kill Effect Add-ons";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436a199a);
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_60,param_1,1);
      cVar3 = DAT_180b0c308;
      local_70 = (undefined1 **)FUN_18053df70;
      local_88 = &local_70;
      local_80 = &DAT_180b0c308;
      local_a8._0_1_ = DAT_180b0c290;
      local_a0._0_4_ = uVar4;
      FUN_180563a20(&local_60,"Shockwave",&DAT_180b0c308,&local_88);
      cVar2 = DAT_180b0c370;
      if (cVar3 != DAT_180b0c308) {
        DAT_180b0c318 = DAT_180b0c308;
      }
      local_70 = (undefined1 **)FUN_18053e0e0;
      local_88 = &local_70;
      local_80 = &DAT_180b0c370;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,DAT_180b0c290);
      FUN_180563a20(&local_60,"Thunder",&DAT_180b0c370,&local_88);
      if (cVar2 != DAT_180b0c370) {
        DAT_180b0c380 = DAT_180b0c370;
      }
    }
    else {
      local_90 = 3;
      local_98 = "Game Information";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_60,param_1,0);
      cVar2 = DAT_180b0da08;
      local_78[0] = (code)0x0;
      local_88 = (undefined1 ***)local_78;
      local_80 = &DAT_180b0da08;
      uVar4 = 0x43af0000;
      local_a0._0_4_ = 0x43af0000;
      FUN_180563e60(&local_60);
      cVar3 = DAT_180b0d9a0;
      if (cVar2 != DAT_180b0da08) {
        DAT_180b0da18 = DAT_180b0da08;
      }
      local_78[0] = (code)0x0;
      local_88 = (undefined1 ***)local_78;
      local_80 = &DAT_180b0d9a0;
      local_a0._0_4_ = uVar4;
      FUN_180564290(&local_60);
      cVar2 = DAT_180b0b3c8;
      if (cVar3 != DAT_180b0d9a0) {
        DAT_180b0d9b0 = DAT_180b0d9a0;
      }
      local_70 = (undefined1 **)FUN_18053e620;
      local_88 = &local_70;
      local_80 = &DAT_180b0b3c8;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
      FUN_180563a20(&local_60,"Scoreboard Weapons",&DAT_180b0b3c8,&local_88);
      if (cVar2 != DAT_180b0b3c8) {
        DAT_180b0b3d8 = DAT_180b0b3c8;
      }
      if (DAT_180bbecdb != '\0') {
        if (DAT_180c62d18 != DAT_180c62d20) {
          FUN_18015c010(DAT_180c62d20 + -0x20);
          DAT_180c62d20 = DAT_180c62d20 + -0x20;
        }
        DAT_1808e4e38 = 0xffffffff;
      }
      uVar5 = auVar7._0_4_;
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        uVar5 = auVar7._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      local_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_90 = 1;
      local_98 = "Lighting";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436a199a);
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_60,param_1,1);
      cVar3 = DAT_180b0d768;
      local_70 = (undefined1 **)&DAT_180b0b320;
      local_88 = &local_70;
      local_80 = &DAT_180b0d768;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      FUN_1805646c0(&local_60);
      if (cVar3 != DAT_180b0d768) {
        DAT_180b0d778 = DAT_180b0d768;
      }
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (1 < iVar1) {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  FUN_1804c5a40("Calling PopID() too many times!");
}



