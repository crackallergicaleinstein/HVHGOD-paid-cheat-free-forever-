// FUN_180439e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180439e30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180439e30(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  undefined *_Size;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  undefined *puVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  char local_78;
  char local_77;
  undefined4 local_74;
  byte *local_70;
  undefined1 (*local_68) [16];
  undefined1 local_60 [16];
  undefined *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  pbVar9 = (byte *)*param_2;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  local_74 = 1;
  uVar1 = param_2[1];
  local_68 = param_1;
  FUN_1800f5540(0,uVar1);
  local_70 = pbVar9;
  for (pbVar5 = pbVar9; pbVar5 != pbVar9 + uVar1; pbVar5 = pbVar5 + 1) {
    iVar3 = islower((uint)*pbVar5);
    if (iVar3 != 0) {
      local_78 = '\0';
      goto LAB_180439ebf;
    }
  }
  local_78 = '\x01';
LAB_180439ebf:
  local_77 = '\x01';
  uVar10 = 0;
  if (uVar1 == 0) {
  }
LAB_180439ed0:
  pbVar5 = pbVar9 + uVar10;
  iVar3 = isalnum((uint)*pbVar5);
  if (iVar3 != 0) {
    local_50 = (undefined *)0x0;
    local_48 = 0xf;
    local_60._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_60._1_15_;
    local_60 = auVar2 << 8;
    while ((uVar10 < uVar1 && (iVar3 = isalnum((uint)pbVar9[uVar10]), iVar3 != 0))) {
      iVar3 = tolower((uint)pbVar9[uVar10]);
      FUN_18015af80(local_60,iVar3);
      uVar10 = uVar10 + 1;
    }
    uVar7 = local_48;
    puVar8 = local_50;
    pbVar9 = (byte *)local_60._0_8_;
    pbVar5 = local_60;
    if (0xf < local_48) {
      pbVar5 = (byte *)local_60._0_8_;
    }
    ppuVar6 = &PTR_DAT_18081ed20;
LAB_180439f76:
    _Size = ppuVar6[1];
    if ((_Size != puVar8) ||
       ((_Size != (undefined *)0x0 && (iVar3 = memcmp(*ppuVar6,pbVar5,(size_t)_Size), iVar3 != 0))))
    goto LAB_180439fa2;
    if (ppuVar6 != (undefined **)" {1to4}") {
      pbVar5 = local_60;
      if (0xf < uVar7) {
        pbVar5 = pbVar9;
      }
      pbVar9 = pbVar5 + (longlong)puVar8;
      for (; pbVar5 != pbVar9; pbVar5 = pbVar5 + 1) {
        iVar3 = toupper((uint)*pbVar5);
        FUN_18015af80(param_1,iVar3);
      }
      goto LAB_18043a008;
    }
    goto LAB_180439fab;
  }
  uVar10 = uVar10 + 1;
  FUN_18015af80(param_1,*pbVar5);
  goto LAB_18043a01c;
LAB_180439fa2:
  ppuVar6 = ppuVar6 + 2;
  if (ppuVar6 == (undefined **)" {1to4}") goto LAB_180439fab;
  goto LAB_180439f76;
LAB_180439fab:
  if ((local_78 != '\0') || (local_77 != '\0')) {
    pbVar5 = local_60;
    if (0xf < uVar7) {
      pbVar5 = pbVar9;
    }
    iVar3 = toupper((uint)*pbVar5);
    puVar4 = local_60;
    if (0xf < local_48) {
      puVar4 = (undefined1 *)local_60._0_8_;
    }
    *puVar4 = (char)iVar3;
    uVar7 = local_48;
    puVar8 = local_50;
    pbVar9 = (byte *)local_60._0_8_;
  }
  pbVar5 = local_60;
  if (0xf < uVar7) {
    pbVar5 = pbVar9;
  }
  FUN_18015b2a0(param_1,pbVar5,puVar8);
LAB_18043a008:
  local_77 = '\0';
  FUN_18015c010(local_60);
  pbVar9 = local_70;
LAB_18043a01c:
  if (uVar1 <= uVar10) {
  }
  goto LAB_180439ed0;
}



