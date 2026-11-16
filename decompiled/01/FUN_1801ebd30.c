// FUN_1801ebd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ebd30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ebd30(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_98 [32];
  char *local_78;
  ulonglong local_70;
  undefined1 local_60 [16];
  ulonglong local_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_60 = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = 0;
  FUN_18015ba30(local_60,*param_1,param_1[1]);
  pcVar9 = local_60;
  if (0xf < local_48) {
    pcVar9 = (char *)local_60._0_8_;
  }
  pcVar10 = pcVar9 + local_50;
  if (pcVar9 != pcVar10) {
    do {
      cVar6 = *pcVar9;
      if (('@' < cVar6) && (cVar6 < '[')) {
        *pcVar9 = cVar6 + ' ';
      }
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 != pcVar10);
  }
  local_78 = local_60;
  if (0xf < local_48) {
    local_78 = (char *)local_60._0_8_;
  }
  local_70 = local_50;
  cVar6 = FUN_1801856e0(&local_78);
  if (cVar6 != '\0') {
    pcVar9 = local_60;
    if (0xf < local_48) {
      pcVar9 = (char *)local_60._0_8_;
    }
    if (6 < local_50) {
      iVar8 = *(int *)(pcVar9 + (local_50 - 7)) + -0x646d762e;
      if ((iVar8 == 0) && (iVar8 = *(ushort *)(pcVar9 + (local_50 - 3)) - 0x5f6c, iVar8 == 0)) {
        iVar8 = (byte)pcVar9[local_50 - 1] - 99;
      }
      if (iVar8 == 0) {
        local_30 = 0;
        local_28 = 0xf;
        local_40._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar1[0xf] = 0;
        auVar1._0_15_ = local_40._1_15_;
        local_40 = auVar1 << 8;
        pcVar9 = local_60;
        if (0xf < local_48) {
          pcVar9 = (char *)local_60._0_8_;
        }
        pcVar10 = pcVar9 + local_50;
        uVar5 = local_30;
        uVar2 = local_28;
        uVar3 = local_70;
        for (; local_70 = uVar5, uVar4 = local_40._0_8_, local_30 = local_70, local_28 = uVar2,
            pcVar9 != pcVar10; pcVar9 = pcVar9 + 1) {
          cVar6 = *pcVar9;
          if (((cVar6 == '/') || (cVar6 == '_')) || ((byte)(cVar6 - 0x2dU) < 2)) {
            local_78 = local_40;
            if (0xf < uVar2) {
              local_78 = (char *)local_40._0_8_;
            }
            cVar6 = FUN_1801ebf50(local_70,&local_78);
            if (cVar6 != '\0') goto LAB_1801ebeff;
            local_30 = 0;
            pcVar7 = local_40;
            if (0xf < uVar2) {
              pcVar7 = (char *)uVar4;
            }
            *pcVar7 = '\0';
          }
          else {
            local_70 = uVar3;
            FUN_18015af80(local_40);
          }
          uVar5 = local_30;
          uVar2 = local_28;
          uVar3 = local_70;
        }
        local_78 = local_40;
        if (0xf < uVar2) {
          local_78 = (char *)local_40._0_8_;
        }
        FUN_1801ebf50(local_70,&local_78);
LAB_1801ebeff:
        FUN_18015c010(local_40);
      }
    }
  }
  FUN_18015c010(local_60);
}



