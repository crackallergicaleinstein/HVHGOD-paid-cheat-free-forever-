// FUN_1803e9590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e9590 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e9590(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  int *local_198;
  int local_188;
  int local_184;
  undefined4 local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined8 local_158 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_100 = param_5;
  local_160 = param_7;
  local_f0 = 0;
  puStack_e8 = (undefined1 *)0x0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_178 = param_3;
  local_168 = param_2;
  local_108 = param_4;
  (**(code **)(*param_2 + 0x50))(param_2,&local_f0);
  local_188 = *(int *)((longlong)param_3 + 0xc) - *(int *)param_3;
  local_184 = *(int *)((longlong)param_3 + 0x10) - *(int *)((longlong)param_3 + 4);
  if (((local_188 != *(int *)(param_1 + 0x16)) || (local_184 != *(int *)((longlong)param_1 + 0xb4)))
     || (*(int *)(param_1 + 0x17) != (int)uStack_e0)) {
    plVar7 = (longlong *)param_1[0xc];
    if (plVar7 != (longlong *)0x0) {
      param_1[0xc] = 0;
      (**(code **)(*plVar7 + 0x10))();
    }
    plVar7 = (longlong *)param_1[0xe];
    if (plVar7 != (longlong *)0x0) {
      param_1[0xe] = 0;
      (**(code **)(*plVar7 + 0x10))();
    }
    plVar7 = (longlong *)param_1[0xd];
    if (plVar7 != (longlong *)0x0) {
      param_1[0xd] = 0;
      (**(code **)(*plVar7 + 0x10))();
    }
    plVar7 = (longlong *)param_1[0xf];
    if (plVar7 != (longlong *)0x0) {
      param_1[0xf] = 0;
      (**(code **)(*plVar7 + 0x10))();
    }
    FUN_180381fe0(local_158);
    puVar6 = local_158;
    lVar9 = 2;
    do {
      uVar5 = 0;
      if (local_158 + 6 != puVar6) {
        uVar5 = *puVar6;
        *puVar6 = 0;
      }
      plVar7 = *(longlong **)((longlong)param_1 + (0x80 - (longlong)local_158) + (longlong)puVar6);
      *(undefined8 *)((longlong)param_1 + (0x80 - (longlong)local_158) + (longlong)puVar6) = uVar5;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _eh_vector_destructor_iterator_(local_158,8,2,FUN_1801bd340);
    FUN_180381fe0(local_158 + 2);
    plVar7 = param_1 + 0x12;
    puVar6 = local_158 + 2;
    lVar9 = 2;
    do {
      uVar5 = 0;
      if (local_158 + 7 != puVar6) {
        uVar5 = *puVar6;
        *puVar6 = 0;
      }
      plVar1 = *(longlong **)(((longlong)plVar7 - (longlong)(local_158 + 2)) + (longlong)puVar6);
      *(undefined8 *)(((longlong)plVar7 - (longlong)(local_158 + 2)) + (longlong)puVar6) = uVar5;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _eh_vector_destructor_iterator_(local_158 + 2,8,2,FUN_1801bd340);
    FUN_180381fe0(local_158 + 4);
    puVar6 = local_158 + 4;
    lVar9 = 2;
    do {
      uVar5 = 0;
      if (&local_118 != puVar6) {
        uVar5 = *puVar6;
        *puVar6 = 0;
      }
      plVar1 = *(longlong **)
                ((longlong)param_1 + (0xa0 - (longlong)(local_158 + 4)) + (longlong)puVar6);
      *(undefined8 *)((longlong)param_1 + (0xa0 - (longlong)(local_158 + 4)) + (longlong)puVar6) =
           uVar5;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _eh_vector_destructor_iterator_(local_158 + 4,8,2,FUN_1801bd340);
    local_f0 = CONCAT44(local_184,local_188);
    uStack_e0 = CONCAT44(1,(int)uStack_e0);
    puStack_e8 = &DAT_100000001;
    uStack_d8 = uStack_d8 & 0xffffffff;
    local_d0 = 8;
    local_c8 = 0;
    plVar1 = (longlong *)*param_1;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    plVar3 = (longlong *)param_1[0xc];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xc] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar4 = (*pcVar2)(plVar1,&local_f0,0,param_1 + 0xc);
    if (iVar4 < 0) {
    }
    plVar1 = (longlong *)*param_1;
    pcVar2 = *(code **)(*plVar1 + 0x38);
    plVar3 = (longlong *)param_1[0xe];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xe] = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar4 = (*pcVar2)(plVar1,param_1[0xc],0,param_1 + 0xe);
    if (iVar4 < 0) {
    }
    local_180 = (int)uStack_e0;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x3d);
    local_d0 = CONCAT44(local_d0._4_4_,0x28);
    uVar8 = 0;
    do {
      plVar1 = (longlong *)*param_1;
      pcVar2 = *(code **)(*plVar1 + 0x28);
      plVar3 = (longlong *)plVar7[-2];
      if (plVar3 != (longlong *)0x0) {
        plVar7[-2] = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar4 = (*pcVar2)(plVar1,&local_f0,0,plVar7 + -2);
      if (iVar4 < 0) {
      }
      plVar1 = (longlong *)*param_1;
      pcVar2 = *(code **)(*plVar1 + 0x38);
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        *plVar7 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar4 = (*pcVar2)(plVar1,plVar7[-2],0,plVar7);
      if (iVar4 < 0) {
      }
      plVar1 = (longlong *)*param_1;
      pcVar2 = *(code **)(*plVar1 + 0x48);
      plVar3 = (longlong *)plVar7[2];
      if (plVar3 != (longlong *)0x0) {
        plVar7[2] = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar4 = (*pcVar2)(plVar1,plVar7[-2],0,param_1 + (ulonglong)uVar8 + 0x14);
      if (iVar4 < 0) {
      }
      uVar8 = uVar8 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar8 < 2);
    uStack_e0 = CONCAT44(uStack_e0._4_4_,local_180);
    local_f0 = 0x4000000040;
    local_d0 = CONCAT44(local_d0._4_4_,0x20);
    plVar7 = (longlong *)*param_1;
    pcVar2 = *(code **)(*plVar7 + 0x28);
    plVar1 = (longlong *)param_1[0xd];
    if (plVar1 != (longlong *)0x0) {
      param_1[0xd] = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    iVar4 = (*pcVar2)(plVar7,&local_f0,0,param_1 + 0xd);
    if (iVar4 < 0) {
    }
    plVar7 = (longlong *)*param_1;
    pcVar2 = *(code **)(*plVar7 + 0x48);
    plVar1 = (longlong *)param_1[0xf];
    if (plVar1 != (longlong *)0x0) {
      param_1[0xf] = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    iVar4 = (*pcVar2)(plVar7,param_1[0xd],0,param_1 + 0xf);
    if (iVar4 < 0) {
    }
    *(int *)(param_1 + 0x16) = local_188;
    *(int *)((longlong)param_1 + 0xb4) = local_184;
    *(int *)(param_1 + 0x17) = (int)uStack_e0;
    param_3 = local_178;
  }
  local_f8 = (longlong *)0x0;
  (**(code **)(*(longlong *)param_1[1] + 0x418))((longlong *)param_1[1],param_1[2],&local_f8);
  plVar1 = local_f8;
  plVar7 = (longlong *)param_1[1];
  local_170 = local_f8;
  local_1a0 = 0;
  local_1a8 = local_168;
  local_1b0 = 0;
  local_1b8 = (float *)((ulonglong)local_1b8._4_4_ << 0x20);
  local_198 = (int *)param_3;
  local_178 = plVar7;
  (**(code **)(*plVar7 + 0x170))(plVar7,param_1[0xc],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x120))((longlong *)param_1[1],param_1[0xb],0);
  (**(code **)(*(longlong *)param_1[1] + 0x118))((longlong *)param_1[1],0,0,0xffffffff);
  (**(code **)(*(longlong *)param_1[1] + 0xc0))((longlong *)param_1[1],4);
  (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],param_1[3],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x158))((longlong *)param_1[1],param_1[10]);
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],0,1,param_1 + 9);
  local_78 = (float)(param_6 >> 0x10 & 0xff) / 255.0;
  local_74 = (float)(param_6 >> 8 & 0xff) / 255.0;
  local_70 = (float)(param_6 & 0xff) / 255.0;
  uVar10 = 0;
  local_6c = 0;
  local_1a8 = (longlong *)((ulonglong)local_1a8 & 0xffffffff00000000);
  local_1b0 = 0;
  local_1b8 = &local_78;
  (**(code **)(*(longlong *)param_1[1] + 0x180))((longlong *)param_1[1],param_1[8],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x80))((longlong *)param_1[1],0,1,param_1 + 8);
  local_b8 = (float)*(uint *)(param_1 + 0x16);
  local_b4 = (float)*(uint *)((longlong)param_1 + 0xb4);
  local_ac = 0x3f800000;
  local_90 = 0;
  uStack_88 = 0x4280000042800000;
  local_7c = 0x3f800000;
  local_110 = 0;
  local_c0 = uVar10;
  local_bc = uVar10;
  local_b0 = uVar10;
  local_80 = uVar10;
  (**(code **)(*(longlong *)param_1[1] + 0x160))((longlong *)param_1[1],1,&local_c0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],0,1,param_1 + 0xe);
  (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],1,param_1 + 0x14,0);
  (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_1[6],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],3,0);
  (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],1,param_1 + 0x15,0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],1,1,param_1 + 0x12);
  (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_1[7],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],3,0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],1,1,&local_110);
  (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],1,&local_108,0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],1,1,param_1 + 0x13);
  (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_1[4],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],3,0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],0,1,&local_110);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],1,1,&local_110);
  (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],1,param_1 + 0xf,0);
  (**(code **)(*(longlong *)param_1[1] + 0x160))((longlong *)param_1[1],1,&local_90);
  (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_1[5],0,0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],0,1,&local_100);
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],3,0);
  (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],0,1,&local_110);
  (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],0,0,0);
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x40;
  local_98 = 0x40;
  local_94 = 1;
  local_198 = (int *)&local_a8;
  local_1a0 = 0;
  local_1a8 = (longlong *)param_1[0xd];
  local_1b0 = 0;
  local_1b8 = (float *)CONCAT44(local_1b8._4_4_,4);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],local_160,0,0);
  (**(code **)(*plVar7 + 0x418))(plVar7,plVar1,0);
  plVar7 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    local_f8 = (longlong *)0x0;
    (**(code **)(*plVar7 + 0x10))();
  }
}



