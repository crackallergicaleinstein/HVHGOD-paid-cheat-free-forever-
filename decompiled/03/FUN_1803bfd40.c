// FUN_1803bfd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803bfd40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bfd40(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  float fVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined4 uVar12;
  undefined1 auStackY_348 [32];
  longlong **local_2f0;
  undefined1 *local_2e8;
  longlong local_2e0;
  longlong *local_2d8 [2];
  undefined8 local_2c8;
  uint local_2c0;
  float local_2bc;
  float local_2b8 [48];
  longlong *local_1f8;
  undefined4 local_1f0;
  float local_1ec [13];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 local_180 [2];
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_128 [12];
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStackY_348;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (param_2 == (longlong *)0x0) {
  }
  if (param_3 == (longlong *)0x0) {
  }
  if (param_4 == (longlong *)0x0) {
  }
  local_1a0 = (longlong *)0x0;
  local_1f8 = (longlong *)0x0;
  local_2d8[0] = param_3;
  iVar6 = (**(code **)*param_2)(param_2,&DAT_18080cdd8,&local_1a0);
  plVar1 = local_1f8;
  if (iVar6 < 0) goto LAB_1803c09ad;
  pcVar2 = *(code **)*local_2d8[0];
  if (local_1f8 != (longlong *)0x0) {
    local_1f8 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar6 = (*pcVar2)(local_2d8[0],&DAT_18080cde8,&local_1f8);
  if (iVar6 < 0) goto LAB_1803c09ad;
  local_1a8 = (longlong *)0x0;
  (**(code **)(*param_4 + 0x38))(param_4,&local_1a8);
  local_1b0 = (longlong *)0x0;
  iVar6 = (**(code **)*local_1a8)(local_1a8,&DAT_180806ff8,&local_1b0);
  if (-1 < iVar6) {
    local_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    local_138 = 0;
    (**(code **)(*local_1b0 + 0x50))(local_1b0,&local_160);
    if (((((uint)local_160 != 0) && (local_160._4_4_ != 0.0)) && ((uint)local_160 < 0x801)) &&
       ((uint)local_160._4_4_ < 0x801)) {
      plVar1 = (longlong *)(param_1 + 0x60);
      if (*plVar1 == 0) {
        local_180[0] = (**(code **)(*param_2 + 0x128))(param_2);
        plVar3 = local_1a0;
        pcVar2 = *(code **)(*local_1a0 + 0x178);
        plVar7 = (longlong *)*plVar1;
        if (plVar7 != (longlong *)0x0) {
          *plVar1 = 0;
          (**(code **)(*plVar7 + 0x10))();
        }
        iVar6 = (*pcVar2)(plVar3,0,local_180,1);
        if (iVar6 < 0) goto LAB_1803c0964;
      }
      if (((((*(longlong *)(param_1 + 0x68) != 0) ||
            (iVar6 = (**(code **)(*param_2 + 0x60))(param_2,&DAT_180702dc0,0x2e0,0), -1 < iVar6)) &&
           ((*(longlong *)(param_1 + 0x70) != 0 ||
            (iVar6 = (**(code **)(*param_2 + 0x78))(param_2,&DAT_1807025d0,0x2d8,0), -1 < iVar6))))
          && ((*(longlong *)(param_1 + 0x78) != 0 ||
              (iVar6 = (**(code **)(*param_2 + 0x78))(param_2,&DAT_180701f90,0x638,0), -1 < iVar6)))
          ) && ((*(longlong *)(param_1 + 0x80) != 0 ||
                (iVar6 = (**(code **)(*param_2 + 0x78))(param_2,&DAT_1807028b0,0x504,0), -1 < iVar6)
                ))) {
        local_2c8 = 0;
        local_2c0 = 0;
        uVar12 = 0;
        local_2bc = 0.0;
        FUN_18063ab10(local_2b8,0,0xc0);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          uStack_18c = 0;
          uStack_188 = 0;
          local_184 = 0;
          local_198 = (longlong *)0xd0;
          local_190 = 4;
          iVar6 = (**(code **)(*param_2 + 0x18))(param_2,&local_198,0);
          if (iVar6 < 0) goto LAB_1803c0964;
        }
        if (*(longlong *)(param_1 + 0x90) == 0) {
          uStack_18c = 0;
          uStack_188 = 0;
          local_184 = 0;
          local_198 = (longlong *)&DAT_00000010;
          local_190 = 4;
          iVar6 = (**(code **)(*param_2 + 0x18))(param_2,&local_198,0);
          if (iVar6 < 0) goto LAB_1803c0964;
        }
        if (*(longlong *)(param_1 + 0x98) == 0) {
          local_1ec[3] = 0.0;
          local_1ec[4] = 0.0;
          local_1ec[5] = 0.0;
          local_1ec[6] = 0.0;
          local_1ec[7] = 0.0;
          local_1ec[8] = 0.0;
          local_1ec[9] = 0.0;
          local_1ec[10] = 0.0;
          local_1f0 = 0x15;
          local_1ec[2] = 4.2039e-45;
          local_1ec[1] = 4.2039e-45;
          local_1ec[0] = 4.2039e-45;
          local_1ec[0xb] = 3.4028235e+38;
          iVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&local_1f0);
          if (iVar6 < 0) goto LAB_1803c0964;
        }
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          local_1ec[1] = 0.0;
          local_1ec[2] = 0.0;
          local_1ec[3] = 0.0;
          local_1ec[4] = 0.0;
          local_1ec[6] = 0.0;
          local_1ec[7] = 0.0;
          local_1ec[8] = 0.0;
          local_1f0 = 3;
          local_1ec[0] = 1.4013e-45;
          local_1ec[5] = 1.4013e-45;
          iVar6 = (**(code **)(*param_2 + 0xb0))(param_2,&local_1f0,param_1 + 0xa0);
          if (iVar6 < 0) goto LAB_1803c0964;
        }
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          local_1ec[0] = 0.0;
          local_1ec[1] = 0.0;
          local_1ec[3] = 0.0;
          local_1ec[4] = 0.0;
          local_1ec[5] = 0.0;
          local_1ec[6] = 0.0;
          local_1ec[7] = 0.0;
          local_1ec[8] = 0.0;
          local_1ec[9] = 0.0;
          local_1ec[10] = 0.0;
          local_1ec[0xb] = 0.0;
          local_1f0 = 0;
          local_1ec[2] = 0.0;
          iVar6 = (**(code **)(*param_2 + 0xa8))(param_2,&local_1f0);
          if (iVar6 < 0) goto LAB_1803c0964;
        }
        if ((*(int *)(param_1 + 0xb0) != (uint)local_160) ||
           ((float)*(int *)(param_1 + 0xb4) != local_160._4_4_)) {
          _eh_vector_constructor_iterator_(local_128,0x18,4,FUN_1801d7dc0,FUN_1801d7480);
          local_1ec[4] = 1.4013e-45;
          local_1ec[5] = 0.0;
          local_1ec[8] = 0.0;
          local_1ec[9] = 0.0;
          local_1f0 = (uint)local_160;
          local_1ec[0] = local_160._4_4_;
          local_1ec[2] = 1.4013e-45;
          local_1ec[1] = 1.4013e-45;
          local_1ec[3] = 1.4013e-44;
          local_1ec[6] = 0.0;
          local_1ec[7] = 5.60519e-44;
          plVar7 = local_128;
          do {
            pcVar2 = *(code **)(*param_2 + 0x28);
            plVar3 = (longlong *)*plVar7;
            if (plVar3 != (longlong *)0x0) {
              *plVar7 = 0;
              (**(code **)(*plVar3 + 0x10))();
            }
            iVar6 = (*pcVar2)(param_2,&local_1f0,0,plVar7);
            if (iVar6 < 0) {
LAB_1803c0943:
              _eh_vector_destructor_iterator_(local_128,0x18,4,FUN_1801d7480);
              goto LAB_1803c0964;
            }
            pcVar2 = *(code **)(*param_2 + 0x38);
            plVar3 = (longlong *)plVar7[1];
            if (plVar3 != (longlong *)0x0) {
              plVar7[1] = 0;
              (**(code **)(*plVar3 + 0x10))();
            }
            iVar6 = (*pcVar2)(param_2,*plVar7,0,plVar7 + 1);
            if (iVar6 < 0) goto LAB_1803c0943;
            pcVar2 = *(code **)(*param_2 + 0x48);
            plVar3 = (longlong *)plVar7[2];
            if (plVar3 != (longlong *)0x0) {
              plVar7[2] = 0;
              (**(code **)(*plVar3 + 0x10))();
            }
            iVar6 = (*pcVar2)(param_2,*plVar7,0,plVar7 + 2);
            if (iVar6 < 0) goto LAB_1803c0943;
            plVar7 = plVar7 + 3;
          } while (plVar7 != (longlong *)local_c8);
          FUN_1803bfc40(param_1,local_128);
          *(uint *)(param_1 + 0xb0) = (uint)local_160;
          *(float *)(param_1 + 0xb4) = local_160._4_4_;
          _eh_vector_destructor_iterator_(local_128,0x18,4,FUN_1801d7480);
        }
        local_1b8 = (longlong *)0x0;
        (**(code **)(*local_1f8 + 0x418))(local_1f8,*plVar1,&local_1b8);
        plVar7 = local_1b8;
        plVar1 = local_1f8;
        local_198 = local_1f8;
        local_190 = SUB84(local_1b8,0);
        uStack_18c = (undefined4)((ulonglong)local_1b8 >> 0x20);
        local_170 = (float)*(uint *)(param_1 + 0xb0);
        local_16c = (float)*(uint *)(param_1 + 0xb4);
        auVar11 = ZEXT464(0x3f800000);
        local_164 = 0x3f800000;
        local_178 = uVar12;
        local_174 = uVar12;
        local_168 = uVar12;
        (**(code **)(*local_2d8[0] + 0x160))(local_2d8[0],1,&local_178);
        (**(code **)(*local_2d8[0] + 0x158))(local_2d8[0],*(undefined8 *)(param_1 + 0xa0));
        (**(code **)(*local_2d8[0] + 0x120))(local_2d8[0],*(undefined8 *)(param_1 + 0xa8),0);
        (**(code **)(*local_2d8[0] + 0x118))(local_2d8[0],0,0,0xffffffff);
        (**(code **)(*local_2d8[0] + 0x88))(local_2d8[0],0);
        (**(code **)(*local_2d8[0] + 0xc0))(local_2d8[0],4);
        (**(code **)(*local_2d8[0] + 0x58))(local_2d8[0],*(undefined8 *)(param_1 + 0x68),0,0);
        (**(code **)(*local_2d8[0] + 0x50))(local_2d8[0],0,1,param_1 + 0x98);
        local_c8 = (undefined1  [16])0x0;
        local_2f0 = local_2d8;
        local_2e8 = local_c8;
        local_2e0 = param_1;
        FUN_1803c0a70(&local_2f0,0,*(undefined8 *)(param_1 + 0x70),param_4);
        local_1f0 = auVar11._0_4_;
        local_1ec[0] = 0.0;
        local_1ec[1] = 0.0;
        local_1ec[2] = 0.0;
        local_1ec[3] = 0.0;
        local_1ec[4] = 0.0;
        local_1ec[5] = 0.0;
        local_1ec[6] = 0.0;
        local_1ec[7] = 0.0;
        auVar10 = ZEXT1664(auVar11._0_16_);
        iVar6 = 1;
        pfVar8 = local_1ec;
        do {
          auVar10 = ZEXT1664(auVar10._0_16_);
          auVar11 = ZEXT1664(auVar11._0_16_);
          fVar9 = (float)FUN_180627ae0();
          *pfVar8 = fVar9;
          fVar9 = auVar10._0_4_ + fVar9 + fVar9;
          auVar10 = ZEXT464((uint)fVar9);
          iVar6 = iVar6 + 1;
          pfVar8 = pfVar8 + 1;
        } while (iVar6 < 9);
        local_2bc = auVar11._0_4_ / fVar9;
        iVar6 = 1;
        pfVar8 = local_1ec + 1;
        do {
          fVar4 = pfVar8[-1] + *pfVar8;
          local_2b8[(ulonglong)local_2c0 * 4] =
               ((float)(iVar6 + 1) * *pfVar8 + (float)iVar6 * pfVar8[-1]) / fVar4;
          uVar5 = (ulonglong)local_2c0;
          local_2c0 = local_2c0 + 1;
          local_2b8[uVar5 * 4 + 1] = fVar4 / fVar9;
          iVar6 = iVar6 + 2;
          pfVar8 = pfVar8 + 2;
        } while (iVar6 < 9);
        local_2c8 = CONCAT44(uVar12,auVar11._0_4_ / (float)*(uint *)(param_1 + 0xb0));
        (**(code **)(*local_2d8[0] + 0x180))(local_2d8[0],*(undefined8 *)(param_1 + 0x88),0,0);
        (**(code **)(*local_2d8[0] + 0x80))(local_2d8[0],0,1,param_1 + 0x88);
        FUN_1803c0a70(&local_2f0,1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8));
        local_2c8 = CONCAT44(auVar11._0_4_ / (float)*(uint *)(param_1 + 0xb4),uVar12);
        (**(code **)(*local_2d8[0] + 0x180))(local_2d8[0],*(undefined8 *)(param_1 + 0x88),0,0);
        (**(code **)(*local_2d8[0] + 0x80))(local_2d8[0],0,1,param_1 + 0x88);
        FUN_1803c0a70(&local_2f0,2,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x20));
        (**(code **)(*local_2d8[0] + 0x180))(local_2d8[0],*(undefined8 *)(param_1 + 0x90),0,0);
        (**(code **)(*local_2d8[0] + 0x80))(local_2d8[0],1,1,param_1 + 0x90);
        (**(code **)(*local_2d8[0] + 0x40))(local_2d8[0],0,2,local_c8);
        (**(code **)(*local_2d8[0] + 0x108))(local_2d8[0],1,param_1 + 0x58,0);
        (**(code **)(*local_2d8[0] + 0x48))(local_2d8[0],*(undefined8 *)(param_1 + 0x80),0,0);
        local_b0 = *(undefined8 *)(param_1 + 0x38);
        local_b8 = param_4;
        (**(code **)(*local_2d8[0] + 0x40))(local_2d8[0],0,2,&local_b8);
        (**(code **)(*local_2d8[0] + 0x68))(local_2d8[0],3,0);
        (**(code **)(*local_2d8[0] + 0x40))(local_2d8[0],0,2,local_c8);
        (**(code **)(*local_2d8[0] + 0x108))(local_2d8[0],0,0,0);
        *(undefined1 *)(param_1 + 0xb8) = 1;
        (**(code **)(*plVar1 + 0x418))(plVar1,plVar7,0);
        plVar1 = local_1b8;
        if (local_1b8 != (longlong *)0x0) {
          local_1b8 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
      }
    }
  }
LAB_1803c0964:
  plVar1 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    local_1b0 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = local_1a8;
  if (local_1a8 != (longlong *)0x0) {
    local_1a8 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
LAB_1803c09ad:
  plVar1 = local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    local_1f8 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    local_1a0 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
}



