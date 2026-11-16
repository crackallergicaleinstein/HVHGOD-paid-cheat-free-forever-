// FUN_1803baa20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803baa20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803baa20(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong **ppuVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  ulonglong *local_d8 [13];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0x21c) != '\0') && (*(char *)(param_1 + 0x21d) == '\0')) {
    uVar3 = *(uint *)(param_1 + 0x214);
    *(uint *)(param_1 + 0x214) = uVar3 + 1;
    lVar11 = (ulonglong)(uVar3 % 6) * 0x58;
    if (*(int *)(lVar11 + 0x50 + param_1) == 2) {
      local_68 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_e8 = 1;
      iVar9 = (**(code **)(**(longlong **)(param_3 + 8) + 0xe8))
                        (*(longlong **)(param_3 + 8),*(undefined8 *)(lVar11 + param_1),local_58,0x10
                        );
      if (iVar9 == 0) {
        if (((local_58._8_4_ != 0) || (uVar8 = local_58._0_8_, local_58._0_8_ == 0)) ||
           (*(char *)(lVar11 + 0x54 + param_1) == '\0')) {
          *(undefined4 *)(lVar11 + 0x50 + param_1) = 0;
          *(longlong *)(param_1 + 0x228) = *(longlong *)(param_1 + 0x228) + 1;
          *(undefined1 *)(param_2 + 7) = 0;
        }
        ppuVar10 = local_d8;
        local_d8[0] = *(ulonglong **)(lVar11 + 8 + param_1);
        local_d8[1] = &local_68;
        local_d8[2] = (ulonglong *)*(undefined8 *)(lVar11 + 0x10 + param_1);
        local_d8[3] = &local_70;
        local_d8[4] = (ulonglong *)*(undefined8 *)(lVar11 + 0x18 + param_1);
        local_d8[5] = &local_60;
        do {
          local_e8 = 1;
          iVar9 = (**(code **)(**(longlong **)(param_3 + 8) + 0xe8))
                            (*(longlong **)(param_3 + 8),*ppuVar10,ppuVar10[1],8);
          if (iVar9 != 0) goto LAB_1803bacf1;
          ppuVar10 = ppuVar10 + 2;
        } while (ppuVar10 != local_d8 + 6);
        *(undefined4 *)(lVar11 + 0x50 + param_1) = 0;
        if ((local_68 <= local_70) && (local_70 <= local_60)) {
          uVar4 = *(ulonglong *)(lVar11 + 0x38 + param_1);
          uVar5 = *(ulonglong *)(lVar11 + 0x40 + param_1);
          if ((uVar4 <= uVar5) &&
             ((uVar6 = *(ulonglong *)(lVar11 + 0x48 + param_1), uVar5 <= uVar6 &&
              (uVar6 - uVar4 < 0xf4241)))) {
            puVar1 = (undefined8 *)(lVar11 + 0x20 + param_1);
            uVar7 = puVar1[1];
            uVar2 = *(undefined8 *)(lVar11 + 0x30 + param_1);
            auVar13._0_8_ = ((double)(local_60 - local_70) * 1000.0) / (double)(ulonglong)uVar8;
            auVar13._8_8_ = 0;
            auVar12._0_8_ = (double)(uVar5 - uVar4) / 1000.0;
            auVar12._8_8_ = 0;
            *param_2 = *puVar1;
            param_2[1] = uVar7;
            param_2[2] = uVar2;
            param_2[3] = ((double)(local_70 - local_68) * 1000.0) / (double)(ulonglong)uVar8;
            auVar12 = vunpcklpd_avx(auVar13,auVar12);
            *(undefined1 (*) [16])(param_2 + 4) = auVar12;
            param_2[6] = (double)(uVar6 - uVar5) / 1000.0;
            *(undefined1 *)(param_2 + 7) = 1;
          }
        }
      }
      else {
LAB_1803bacf1:
        if (iVar9 == 1) goto LAB_1803bad1c;
        *(undefined1 *)(param_1 + 0x21d) = 1;
      }
      *(longlong *)(param_1 + 0x228) = *(longlong *)(param_1 + 0x228) + 1;
      *(undefined1 *)(param_2 + 7) = 0;
    }
  }
LAB_1803bad1c:
  *(undefined1 *)(param_2 + 7) = 0;
}



