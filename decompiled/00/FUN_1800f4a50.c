// FUN_1800f4a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f4a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800f4a50(undefined1 (*param_1) [16],undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined1 local_58 [16];
  undefined1 (*local_48) [16];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  *param_1 = (undefined1  [16])0x0;
  (*param_1)[0] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  uVar1 = *param_2;
  (*param_1)[0] = uVar1;
  local_48 = param_1;
  switch(uVar1) {
  case 1:
    plVar3 = *(longlong **)(param_2 + 8);
    local_78 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_88 = (longlong *)0x180827288;
      local_80 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_88);
    }
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x10);
    local_78._8_8_ = plVar5;
    local_78._0_8_ = local_40;
    *plVar5 = 0;
    plVar5[1] = 0;
    local_58._8_8_ = plVar5;
    local_58._0_8_ = plVar5;
    lVar9 = FUN_180158ad0();
    *plVar5 = lVar9;
    uVar6 = FUN_180158c10(plVar5,*(undefined8 *)(*plVar3 + 8),lVar9);
    *(undefined8 *)(*plVar5 + 8) = uVar6;
    plVar5[1] = plVar3[1];
    plVar3 = (longlong *)*plVar5;
    plVar8 = (longlong *)plVar3[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar8 + 0x19);
      plVar4 = (longlong *)*plVar8;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
      *plVar3 = (longlong)plVar8;
      lVar9 = *(longlong *)(*plVar5 + 8);
      lVar11 = *(longlong *)(lVar9 + 0x10);
      cVar2 = *(char *)(lVar11 + 0x19);
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*(longlong *)(lVar11 + 0x10) + 0x19);
        lVar9 = lVar11;
        lVar11 = *(longlong *)(lVar11 + 0x10);
      }
      *(longlong *)(*plVar5 + 0x10) = lVar9;
    }
    else {
      *plVar3 = (longlong)plVar3;
      *(longlong *)(*plVar5 + 0x10) = *plVar5;
    }
    *(longlong **)(*param_1 + 8) = plVar5;
    break;
  case 2:
    plVar3 = *(longlong **)(param_2 + 8);
    local_58 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_78._8_8_ = 0x15;
      local_78._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_78);
    }
    plVar8 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
    local_58._8_8_ = plVar8;
    local_58._0_8_ = local_40;
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    uVar10 = plVar3[1] - *plVar3 >> 4;
    if (uVar10 != 0) {
      if (0xfffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar7 = FUN_18015bca0(uVar10 * 0x10);
      *plVar8 = lVar7;
      plVar8[1] = lVar7;
      plVar8[2] = lVar7 + uVar10 * 0x10;
      lVar9 = plVar3[1];
      lVar11 = *plVar3;
      local_78._8_8_ = lVar7;
      local_78._0_8_ = lVar7;
      local_88 = plVar8;
      local_68 = plVar8;
      for (; lVar11 != lVar9; lVar11 = lVar11 + 0x10) {
        FUN_1800f4a50(lVar7,lVar11);
        lVar7 = lVar7 + 0x10;
        local_78._8_8_ = lVar7;
      }
      plVar8[1] = lVar7;
    }
    goto LAB_1800f4dcf;
  case 3:
    FUN_180111c50(&local_88,*(undefined8 *)(param_2 + 8));
    *(longlong **)(*param_1 + 8) = local_88;
    break;
  case 4:
    local_88 = (longlong *)CONCAT71(local_88._1_7_,param_2[8]);
    *(longlong **)(*param_1 + 8) = local_88;
    break;
  case 5:
  case 6:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2 + 8);
    break;
  case 7:
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2 + 8);
    break;
  case 8:
    plVar3 = *(longlong **)(param_2 + 8);
    local_78 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_58._8_8_ = 0x15;
      local_58._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_58);
    }
    plVar8 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
    local_78._8_8_ = plVar8;
    local_78._0_8_ = local_40;
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    uVar10 = plVar3[1] - *plVar3;
    if (uVar10 != 0) {
      if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar9 = FUN_18015bca0(uVar10);
      *plVar8 = lVar9;
      plVar8[1] = lVar9;
      plVar8[2] = lVar9 + uVar10;
      lVar11 = plVar3[1] - *plVar3;
      FUN_18063aed0(lVar9,*plVar3,lVar11);
      plVar8[1] = lVar9 + lVar11;
    }
    plVar8[3] = plVar3[3];
    *(char *)(plVar8 + 4) = (char)plVar3[4];
LAB_1800f4dcf:
    *(longlong **)(*param_1 + 8) = plVar8;
  }
}



