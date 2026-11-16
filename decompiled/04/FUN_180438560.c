// FUN_180438560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180438560 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180438560(undefined8 *param_1,float param_2,int param_3,int param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  int local_88;
  undefined8 local_84;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  local_f0 = CONCAT44(local_f0._4_4_,param_4);
  local_e0 = 0;
  local_f8 = param_3;
  iVar6 = FUN_18057d070(&local_e0);
  if (iVar6 != 0) {
  }
  local_e8 = 0;
  local_108 = &local_e8;
  iVar6 = FUN_1805757f0(local_e0,*param_1,*(undefined4 *)(param_1 + 1),0);
  if (iVar6 != 0) {
    FUN_18057d030(local_e0);
  }
  local_90 = 1;
  local_84 = 0;
  local_88 = (int)(param_2 * 64.0);
  FUN_180577620(local_e8,&local_90);
  local_c8 = (longlong *)0x0;
  FUN_180438a20(&local_c8);
  plVar5 = local_c8;
  *(float *)(local_c8 + 3) = param_2;
  *(int *)(local_c8 + 2) = param_3;
  *(int *)((longlong)local_c8 + 0x14) = param_4;
  iVar6 = FUN_1805754f0((int)*(short *)(local_e8 + 0x6a),
                        *(undefined4 *)(*(longlong *)(local_e8 + 0x80) + 0x20));
  fVar12 = 0.015625;
  *(float *)((longlong)plVar5 + 0x1c) = (float)iVar6 * 0.015625;
  iVar6 = FUN_1805754f0((int)*(short *)(local_e8 + 0x6c),
                        *(undefined4 *)(*(longlong *)(local_e8 + 0x80) + 0x20));
  *(float *)(plVar5 + 4) = (float)iVar6 * fVar12;
  *(float *)((longlong)plVar5 + 0x24) =
       (float)*(int *)(*(longlong *)(local_e8 + 0x80) + 0x2c) * fVar12;
  plVar5[0x12] = local_e0;
  plVar5[0x13] = local_e8;
  plVar3 = plVar5 + 0x16;
  uVar10 = (longlong)(param_4 * param_3) * 4;
  lVar7 = *plVar3;
  lVar1 = plVar5[0x17];
  uVar9 = lVar1 - lVar7;
  if (uVar10 < uVar9) {
    lVar7 = lVar7 + uVar10;
  }
  else {
    if (uVar10 <= uVar9) goto LAB_1804387a0;
    uVar8 = plVar5[0x18] - lVar7;
    if (uVar8 < uVar10) {
      if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar11 = 0x7fffffffffffffff;
      if ((uVar8 <= 0x7fffffffffffffff - (uVar8 >> 1)) &&
         (uVar11 = (uVar8 >> 1) + uVar8, uVar11 < uVar10)) {
        uVar11 = uVar10;
      }
      lVar7 = FUN_18015bca0(uVar11);
      FUN_18063ab10(lVar7 + uVar9,0,uVar10 - uVar9);
      FUN_18063aed0(lVar7,*plVar3,plVar5[0x17] - *plVar3);
      FUN_1801413a0(plVar3,lVar7,uVar10,uVar11);
      param_3 = local_f8;
      goto LAB_1804387a0;
    }
    FUN_18063ab10(lVar1,0,uVar10 - uVar9);
    lVar7 = (uVar10 - uVar9) + lVar1;
  }
  plVar5[0x17] = lVar7;
LAB_1804387a0:
  iVar6 = 0;
  do {
    FUN_180430180(plVar5,iVar6 + 0x20);
    plVar4 = DAT_180bbab70;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x60);
  local_ac = 1;
  local_9c = 0;
  local_bc = (undefined4)local_f0;
  local_b8 = 1;
  local_b4 = 1;
  local_b0 = 0x1c;
  local_a4 = 0;
  local_a0 = 8;
  local_d8._8_4_ = param_3 * 4;
  local_d8._0_8_ = *plVar3;
  local_d8._12_4_ = 0;
  pcVar2 = *(code **)(*DAT_180bbab70 + 0x28);
  plVar3 = (longlong *)*plVar5;
  local_c0 = param_3;
  if (plVar3 != (longlong *)0x0) {
    *plVar5 = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar6 = (*pcVar2)(plVar4,&local_c0,local_d8,plVar5);
  plVar3 = DAT_180bbab70;
  if (-1 < iVar6) {
    local_74 = 4;
    local_68 = 0;
    local_78 = local_b0;
    local_6c = 1;
    pcVar2 = *(code **)(*DAT_180bbab70 + 0x38);
    plVar4 = (longlong *)plVar5[1];
    if (plVar4 != (longlong *)0x0) {
      plVar5[1] = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    iVar6 = (*pcVar2)(plVar3,*plVar5,&local_78,plVar5 + 1);
    if (-1 < iVar6) {
      *(undefined1 *)(plVar5 + 0x19) = 0;
      if (DAT_180bbadb8 == DAT_180bbadc0) {
        FUN_1804392c0(&DAT_180bbadb0,DAT_180bbadb8,&local_c8);
      }
      else {
        local_c8 = (longlong *)0x0;
        *DAT_180bbadb8 = plVar5;
        DAT_180bbadb8 = DAT_180bbadb8 + 1;
      }
      local_f0 = DAT_180bbadb8[-1];
      if (DAT_180bbade0 == 0) {
        DAT_180bbade0 = local_f0;
        if (DAT_180bbadd0 == DAT_180bbadd8) {
          FUN_1801b6250(&DAT_180bbadc8,DAT_180bbadd0,&local_f0);
        }
        else {
          *DAT_180bbadd0 = local_f0;
          DAT_180bbadd0 = DAT_180bbadd0 + 1;
        }
      }
    }
  }
  FUN_180438c70(&local_c8);
}



