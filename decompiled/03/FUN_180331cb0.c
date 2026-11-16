// FUN_180331cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180331cb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180331cb0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  char *pcVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_48;
  undefined8 ****local_38;
  longlong lStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if (DAT_180bbeabc != '\0') {
    if (((param_3 < 0) || (DAT_1808e3b90 < 0)) || (DAT_1808e3b90 <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((DAT_1808e3ba4 == '\0') || (bVar1)) ||
       ((DAT_1808e3b98 != 0 || ((param_3 < 0 || (0x1ff < param_3 - DAT_1808e3b90)))))) {
      local_70 = param_6;
      if (0xf < (ulonglong)param_6[3]) {
        local_70 = (undefined8 *)*param_6;
      }
      local_68 = param_6[2];
      local_78 = 0xc000000000000000;
      local_b8 = 1;
      puStack_b0 = &local_78;
      local_50 = 0;
      local_48 = 0xf;
      local_60._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_60._1_15_;
      local_60 = auVar2 << 8;
      local_c8 = 1;
      lVar7 = param_5[1] + local_68;
      if (CARRY8(param_5[1],local_68)) {
        lVar7 = -1;
      }
      FUN_1800f5540(local_60,lVar7);
      local_98._8_8_ = puStack_b0;
      local_98._0_8_ = local_b8;
      local_38 = (undefined8 ****)*param_5;
      lStack_30 = param_5[1];
      local_d8 = 0;
      FUN_1801da050(&local_b8,local_60,&local_38,local_98);
      if (DAT_1808e3ba0 != 0) {
        while (local_50 != 0) {
          puVar3 = local_60;
          if (0xf < local_48) {
            puVar3 = (undefined1 *)local_60._0_8_;
          }
          if (puVar3[local_50 + -1] != '\n') break;
          local_50 = local_50 + -1;
          puVar3 = local_60;
          if (0xf < local_48) {
            puVar3 = (undefined1 *)local_60._0_8_;
          }
          puVar3[local_50] = 0;
        }
        pcVar9 = (char *)((longlong)&uStack_28 + 5);
        uVar6 = DAT_1808e3ba0;
        do {
          pcVar9 = pcVar9 + -1;
          *pcVar9 = (char)uVar6 + (char)((ulonglong)uVar6 / 10) * -10 + '0';
          uVar6 = (uint)((ulonglong)uVar6 / 10);
        } while (uVar6 != 0);
        FUN_18015bdb0(&local_b8,pcVar9,(longlong)&uStack_28 + 5);
        local_c8 = 7;
        pauVar4 = (undefined1 (*) [16])FUN_180141490(&local_b8,0,&DAT_180802d54,3);
        local_98 = *pauVar4;
        auStack_88 = pauVar4[1];
        *(undefined8 *)(pauVar4[1] + 8) = 0xf;
        (*pauVar4)[0] = 0;
        *(undefined8 *)pauVar4[1] = 0;
        local_c8 = 0xf;
        plVar5 = (longlong *)FUN_18015b2a0(local_98," repeats)\n",10);
        local_38 = (undefined8 ****)*plVar5;
        lStack_30 = plVar5[1];
        uStack_28 = plVar5[2];
        uStack_20 = plVar5[3];
        *(undefined1 *)plVar5 = 0;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_c8 = 0x1f;
        ppppuVar8 = &local_38;
        if (0xf < uStack_20) {
          ppppuVar8 = local_38;
        }
        FUN_18015b2a0(local_60,ppppuVar8,uStack_28);
        FUN_18015c010(&local_38);
        FUN_18015c010(local_98);
        FUN_18015c010(&local_b8);
      }
      FUN_18030e280(local_60);
      DAT_1808e3ba4 = '\x01';
      DAT_1808e3b98 = 0;
      DAT_1808e3ba0 = 0;
      DAT_1808e3b90 = param_3;
      FUN_18015c010(local_60);
    }
    else {
      DAT_1808e3ba0 = DAT_1808e3ba0 + 1;
      DAT_180bda178 = DAT_180bda178 + 1;
    }
  }
}



