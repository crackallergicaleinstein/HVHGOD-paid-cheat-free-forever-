// FUN_180184460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180184460 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180184460(undefined1 (*param_1) [16],ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined1 local_e8;
  undefined1 (*local_e0) [16];
  longlong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  longlong lStack_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  lStack_98 = 0;
  uStack_90 = 0xf;
  local_a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_a8._1_15_;
  local_a8 = auVar1 << 8;
  uVar11 = 0;
  local_e0 = param_1;
  local_c8 = param_2;
  if (param_2 != 0) {
    for (; uVar4 = uStack_90, lVar3 = lStack_98, uVar11 < 0x100; uVar11 = uVar11 + local_d0) {
      if (~local_c8 < uVar11) {
LAB_180184636:
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0xf;
        (*param_1)[0] = 0;
        goto LAB_18018466b;
      }
      lVar8 = local_c8 + uVar11;
      local_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_c0 = 0x40;
      local_b8 = 0x100 - uVar11;
      local_b0 = 0x1000 - (ulonglong)((uint)lVar8 & 0xfff);
      lVar6 = thunk_FUN_1805f8430(&local_c0,local_a8);
      local_d0 = lVar6;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      cVar5 = FUN_1804514f0(&local_88,lVar8,lVar6);
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      if (cVar5 == '\0') goto LAB_180184636;
      local_e0 = (undefined1 (*) [16])thunk_FUN_1805f7e70(&local_88,(longlong)&local_88 + lVar6,0);
      uVar10 = (longlong)local_e0 - (longlong)&local_88;
      if (uVar4 - lVar3 < uVar10) {
        local_f8 = uVar10;
        FUN_18015b150(local_a8,uVar10,local_e8,&local_88);
      }
      else {
        lStack_98 = lVar3 + uVar10;
        puVar9 = local_a8;
        if (0xf < uVar4) {
          puVar9 = (undefined1 *)local_a8._0_8_;
        }
        FUN_18063aed0(puVar9 + lVar3,&local_88,uVar10);
        (puVar9 + lVar3)[uVar10] = 0;
      }
      if (local_e0 != (undefined1 (*) [16])((longlong)&local_88 + local_d0)) {
        *(undefined8 *)*param_1 = local_a8._0_8_;
        *(undefined8 *)(*param_1 + 8) = local_a8._8_8_;
        *(longlong *)param_1[1] = lStack_98;
        *(ulonglong *)(param_1[1] + 8) = uStack_90;
        lStack_98 = 0;
        uStack_90 = 0xf;
        auVar2[0xf] = 0;
        auVar2._0_15_ = local_a8._1_15_;
        local_a8 = auVar2 << 8;
        goto LAB_18018466b;
      }
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
LAB_18018466b:
  FUN_18015c010(local_a8);
}



