// FUN_18023eb30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023eb30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023eb30(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  ulonglong local_6c8;
  undefined8 local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  uint local_6a8;
  undefined4 local_6a0;
  undefined4 local_698;
  undefined4 local_690;
  undefined4 local_688;
  undefined4 local_680;
  double local_678;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  uint local_658;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  uVar2 = *(ulonglong *)*param_1;
  if (DAT_180c64200 <= uVar2) {
    DAT_180c64200 = uVar2 + 1000;
    pfVar3 = (float *)param_1[8];
    uVar1 = *(undefined4 *)param_1[7];
    local_668 = *(undefined4 *)param_1[6];
    local_664 = *(undefined4 *)param_1[5];
    local_660 = *(undefined4 *)param_1[4];
    local_65c = *(undefined4 *)param_1[3];
    lVar8 = param_1[1];
    lVar4 = *(longlong *)(lVar8 + 0xa8);
    local_658 = (uint)*(byte *)param_1[2];
    lVar9 = *(ulonglong *)(lVar8 + 0xc0) - uVar2;
    if (*(ulonglong *)(lVar8 + 0xc0) <= uVar2) {
      lVar9 = 0;
    }
    uVar6 = uVar2 - *(ulonglong *)(lVar8 + 0xb0);
    uVar5 = uVar6;
    if (uVar2 < *(ulonglong *)(lVar8 + 0xb0)) {
      uVar5 = 0;
    }
    if ((lVar4 == 0) || (*(ulonglong *)(lVar8 + 0xb8) <= uVar5)) {
      uVar7 = *(undefined8 *)(lVar8 + 0xb8);
      lVar8 = 0;
      if (lVar4 == 0) {
        uVar6 = 0;
      }
    }
    else {
      uVar7 = *(undefined8 *)(lVar8 + 0xb8);
      lVar8 = *(ulonglong *)(lVar8 + 0xb8) - uVar5;
    }
    FUN_18063ab10(local_648,0,0x600);
    local_678 = (double)*pfVar3;
    local_688 = local_668;
    local_690 = local_664;
    local_698 = local_660;
    local_6a0 = local_65c;
    local_6a8 = local_658;
    local_6d8 = (undefined **)param_2;
    local_6d0 = (char *)lVar4;
    local_6c8 = uVar6;
    local_6c0 = uVar7;
    local_6b8 = lVar8;
    local_6b0 = lVar9;
    local_680 = uVar1;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "state=%s clock=monotonic_ms target=0x%llx elapsed_ms=%llu reaction_ms=%llu reaction_remaining_ms=%llu interval_remaining_ms=%llu auto_wall=%d min_damage=%d hit_chance=%d ray_hits=%u blocked_paths=%u low_damage=%u last_damage=%.2f"
                 );
    local_6d8 = &PTR_180700558;
    if (local_648[0] != '\0') {
      local_6d8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6d0 = local_648;
    FUN_1800f6900(0);
  }
}



