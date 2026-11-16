// FUN_1803cb860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cb860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1803cb860(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_108 [48];
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  longlong local_48;
  longlong lStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_2 + 0x30) == 0) || (*(longlong *)(param_2 + 0x50) == 0)) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  local_d8 = param_1;
  FUN_18015b360(&local_48);
  FUN_18015b360(&local_68,param_2 + 0x20);
  plVar6 = &local_48;
  if (0xf < uStack_30) {
    plVar6 = (longlong *)CONCAT71(local_48._1_7_,(undefined1)local_48);
  }
  if (uStack_38 < 10) {
LAB_1803cba1f:
    plVar6 = &local_48;
    if (0xf < uStack_30) {
      plVar6 = (longlong *)CONCAT71(local_48._1_7_,(undefined1)local_48);
    }
    if (10 < uStack_38) {
      lVar9 = *plVar6 + -0x746f62746967656c;
      if ((lVar9 == 0) && (lVar9 = (ulonglong)*(ushort *)(plVar6 + 1) - 0x2d20, lVar9 == 0)) {
        lVar9 = (ulonglong)*(byte *)((longlong)plVar6 + 10) - 0x20;
      }
      if (lVar9 == 0) {
        uVar12 = 8;
        pcVar11 = "legitbot";
        puVar10 = (undefined1 *)&local_48;
LAB_1803cba7c:
        FUN_180113930(puVar10,pcVar11,uVar12);
      }
    }
  }
  else {
    lVar9 = *plVar6 + -0x20746f6265676172;
    if (lVar9 == 0) {
      lVar9 = (ulonglong)*(ushort *)(plVar6 + 1) - 0x202d;
    }
    if (lVar9 != 0) goto LAB_1803cba1f;
    FUN_180113930(&local_48,"ragebot",7);
    piVar7 = (int *)&local_68;
    if (0xf < uStack_50) {
      piVar7 = (int *)CONCAT71(local_68._1_7_,(undefined1)local_68);
    }
    if (uStack_58 == 6) {
      iVar8 = *piVar7 + -0x656c6973;
      if (iVar8 == 0) {
        iVar8 = *(ushort *)(piVar7 + 1) - 0x746e;
      }
      if (iVar8 != 0) goto LAB_1803cb945;
LAB_1803cb980:
      *(undefined1 *)(param_1 + 9) = 0;
      goto LAB_1803cb984;
    }
LAB_1803cb945:
    plVar6 = &local_68;
    if (0xf < uStack_50) {
      plVar6 = (longlong *)CONCAT71(local_68._1_7_,(undefined1)local_68);
    }
    if (uStack_58 == 9) {
      lVar9 = *plVar6 + -0x6165727073206f6e;
      if (lVar9 == 0) {
        lVar9 = (ulonglong)*(byte *)(plVar6 + 1) - 100;
      }
      if (lVar9 == 0) goto LAB_1803cb980;
    }
    puVar10 = (undefined1 *)&local_68;
    if (0xf < uStack_50) {
      puVar10 = (undefined1 *)CONCAT71(local_68._1_7_,(undefined1)local_68);
    }
    if ((0x12 < uStack_58) && (iVar8 = memcmp(puVar10,"min damage override",0x13), iVar8 == 0)) {
      FUN_180113930(&local_68,"min damage override",0x13);
    }
    puVar10 = (undefined1 *)&local_68;
    if (0xf < uStack_50) {
      puVar10 = (undefined1 *)CONCAT71(local_68._1_7_,(undefined1)local_68);
    }
    if ((0x12 < uStack_58) && (iVar8 = memcmp(puVar10,"hit chance override",0x13), iVar8 == 0)) {
      uVar12 = 0x13;
      pcVar11 = "hit chance override";
      puVar10 = (undefined1 *)&local_68;
      goto LAB_1803cba7c;
    }
  }
  local_d8 = &local_68;
  if (0xf < uStack_50) {
    local_d8 = (longlong *)CONCAT71(local_68._1_7_,(undefined1)local_68);
  }
  local_c8 = &local_48;
  if (0xf < uStack_30) {
    local_c8 = (longlong *)CONCAT71(local_48._1_7_,(undefined1)local_48);
  }
  local_d0 = uStack_58;
  local_c0 = uStack_38;
  local_b8 = FUN_1800aa290(&local_c8,&local_d8);
  uVar5 = uStack_30;
  uVar4 = uStack_38;
  uVar3 = uStack_50;
  uVar2 = uStack_58;
  lVar1 = CONCAT71(local_48._1_7_,(undefined1)local_48);
  lStack_a8 = lStack_40;
  uStack_38 = 0;
  uStack_30 = 0xf;
  local_48._0_1_ = 0;
  lVar9 = CONCAT71(local_68._1_7_,(undefined1)local_68);
  lStack_88 = lStack_60;
  uStack_58 = 0;
  uStack_50 = 0xf;
  local_68._0_1_ = 0;
  *(undefined4 *)param_1 = local_b8;
  param_1[1] = lVar1;
  param_1[2] = lStack_40;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  uStack_a0 = 0;
  uStack_98 = 0xf;
  local_b0 = (ulonglong)local_48._1_7_ << 8;
  param_1[5] = lVar9;
  param_1[6] = lStack_60;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  uStack_80 = 0;
  uStack_78 = 0xf;
  local_90 = (ulonglong)local_68._1_7_ << 8;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_18015c010(&local_90);
  FUN_18015c010(&local_b0);
LAB_1803cb984:
  FUN_18015c010(&local_68);
  FUN_18015c010(&local_48);
}



