// FUN_180189e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180189e50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180189e50(longlong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8 [6];
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong local_68;
  uint local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_58 = (undefined1  [16])0x0;
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar8 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar8 = 0;
  }
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar8;
  local_d8 = param_2;
  local_d0 = param_4;
  if ((*(uint *)(lVar6 + 0x14 + (longlong)param_1) & uVar8) != 0) {
    uVar4 = FUN_1801597e0(&local_c8,1);
    FUN_1801596c0(local_b8,"ios_base::badbit set",uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_b8,&DAT_1808d0f18);
  }
  lStack_80 = 0;
  local_78 = 0;
  local_88 = param_2;
  FUN_180176fb0(0,&local_88);
  FUN_1801771e0(param_1,local_58,0x10);
  uVar7 = (ulonglong)(uint)local_58._8_4_ + 8;
  if ((((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) &&
      (0xf < param_3)) && (local_58._4_2_ == 0xc)) {
    if (((0xf < (uint)local_58._0_4_) && ((uint)local_58._0_4_ <= param_3)) &&
       ((local_58._12_4_ - 1 < 0x80 &&
        ((0xf < uVar7 && ((uint)(local_58._12_4_ * 0xc) + uVar7 <= (ulonglong)(uint)local_58._0_4_))
        )))) {
      bVar1 = false;
      uVar8 = 0;
      if (local_58._12_4_ != 0) {
        while( true ) {
          lVar6 = uVar8 * 0xc + uVar7;
          local_68 = 0;
          local_60 = 0;
          local_b8[0] = lVar6 + param_2;
          local_b8[1] = 0;
          local_b8[2] = 0;
          FUN_180176fb0(param_1,local_b8);
          FUN_1801771e0(param_1,&local_68,0xc);
          uVar2 = local_60;
          uVar9 = (local_68 >> 0x20) + 4 + lVar6;
          uVar5 = (ulonglong)local_60;
          if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) != 0)
          break;
          if ((uint)local_58._0_4_ < uVar9) {
          }
          if ((uint)local_58._0_4_ - uVar9 < uVar5) {
          }
          if ((int)local_68 == 0x4c524552) {
            if (bVar1) {
            }
            if (0x800000 < uVar5) {
            }
            bVar1 = true;
            local_88 = 0;
            lStack_80 = 0;
            local_78 = 0;
            if (uVar5 != 0) {
              lVar6 = FUN_18015bca0(uVar5);
              local_88 = lVar6;
              local_78 = lVar6 + uVar5;
              FUN_18063ab10(lVar6,0,uVar2);
              lStack_80 = lVar6 + uVar5;
            }
            local_b8[0] = local_d8 + uVar9;
            local_b8[1] = 0;
            local_b8[2] = 0;
            FUN_180176fb0(param_1,local_b8);
            FUN_1801771e0(param_1,local_88,uVar5);
            if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) != 0) {
LAB_18018a0ca:
              FUN_180113710(&local_88);
            }
            local_c8 = local_88;
            local_c0 = lStack_80 - local_88;
            cVar3 = FUN_180185ad0(&local_c8,local_d0);
            if (cVar3 == '\0') goto LAB_18018a0ca;
            FUN_180113710(&local_88);
          }
          uVar8 = uVar8 + 1;
          if ((uint)local_58._12_4_ <= uVar8) {
          }
          param_2 = local_d8;
        }
      }
    }
  }
}



