// FUN_1801938f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801938f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801938f0(undefined8 *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_6c8 [32];
  undefined **local_6a8;
  char *local_6a0;
  undefined1 local_698 [16];
  undefined1 local_688 [16];
  undefined4 local_678;
  undefined4 local_674;
  undefined8 local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_65c;
  undefined8 uStack_654;
  undefined8 uStack_64c;
  undefined8 uStack_644;
  undefined8 local_63c;
  undefined8 uStack_634;
  undefined8 uStack_62c;
  undefined8 uStack_624;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_6c8;
  puVar1 = (ulonglong *)param_1[1];
  plVar7 = *(longlong **)*param_1;
  plVar5 = (longlong *)plVar7[1];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    do {
      if ((ulonglong)plVar5[4] < *puVar1) {
        plVar5 = plVar5 + 2;
      }
      else {
        plVar7 = plVar5;
      }
      plVar5 = (longlong *)*plVar5;
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (*puVar1 < (ulonglong)plVar7[4])) {
    local_698._0_8_ = *puVar1;
    if ((*(char *)(param_1[3] + 8) != '\0') &&
       ((*(longlong *)(param_1[2] + 0x88) != 0 &&
        (lVar6 = FUN_1801a7100(param_1[2] + 0xb8,local_688,local_698), *(char *)(lVar6 + 8) != '\0')
        ))) {
      bVar2 = true;
      goto LAB_1801939a3;
    }
  }
  bVar2 = false;
LAB_1801939a3:
  lVar6 = FUN_1801a7100(*param_1,local_688,param_1[1]);
  if ((*(char *)(lVar6 + 8) != '\0') || (bVar2)) {
    FUN_18063ab10(local_618,0,0x600);
    local_6a0 = "messages";
    if (*(char *)(param_1[3] + 8) != '\0') {
      local_6a0 = "p2p_compatibility";
    }
    local_6a8 = *(undefined ***)param_1[1];
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"peer=%llu route=%s");
    local_6a8 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_6a8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6a0 = local_618;
    FUN_1800f6900(0);
    if ((bVar2) && (*(short *)(param_1[4] + 6) == 3)) {
      lVar6 = param_1[5];
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_698._8_8_;
      local_698 = auVar3 << 0x40;
      FUN_1801aad00(lVar6,local_698,param_1[1]);
      uVar4 = local_698._0_8_;
      if (local_698._0_8_ != *(longlong *)(lVar6 + 8)) {
        plVar7 = (longlong *)(local_698._0_8_ + 0x18);
        local_678 = 0x4d534748;
        local_674 = 0x10001;
        local_660 = 0;
        local_65c = 0;
        uStack_654 = 0;
        uStack_64c = 0;
        uStack_644 = 0;
        local_63c = 0;
        uStack_634 = 0;
        uStack_62c = 0;
        uStack_624 = 0;
        local_670 = *(undefined8 *)(local_698._0_8_ + 0x58);
        local_668 = *(undefined8 *)(local_698._0_8_ + 0x80);
        if (0xf < *(ulonglong *)(local_698._0_8_ + 0x30)) {
          plVar7 = (longlong *)*plVar7;
        }
        FUN_18063aed0(&local_65c,plVar7,*(undefined8 *)(local_698._0_8_ + 0x28));
        local_698 = (undefined1  [16])0x0;
        local_6a8 = (undefined **)((ulonglong)local_6a8 & 0xffffffffffffff00);
        FUN_18018e7b0(param_1[2],*(undefined8 *)param_1[1],&local_678,local_698);
        *(undefined8 *)(uVar4 + 0x90) = *(undefined8 *)param_1[6];
      }
    }
  }
}



