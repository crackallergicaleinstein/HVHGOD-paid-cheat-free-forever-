// FUN_180330900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180330900 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180330900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined4 *param_14)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  longlong *plVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_138;
  undefined8 local_128;
  ulonglong *puStack_120;
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  ulonglong local_e8 [10];
  longlong local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_40;
  undefined8 ****local_38;
  longlong lStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  if (DAT_180bbeabc != '\0') {
    if (((param_3 < 0) || (DAT_1808e3bc0 < 0)) || (DAT_1808e3bc0 <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((DAT_1808e3bd4 == '\0') || (bVar1)) ||
       ((param_2 != DAT_1808e3bc8 || ((param_3 < 0 || (0x3f < param_3 - DAT_1808e3bc0)))))) {
      local_e8[9] = *param_6;
      local_e8[0] = 0x3000000000000000;
      local_98[0] = *param_7;
      local_e8[1] = 0x8000000000000008;
      local_98[1] = *param_8;
      local_e8[2] = 0x8000000000000010;
      local_98[2] = *param_9;
      local_e8[3] = 0xb000000000000018;
      local_98[3] = *param_10;
      local_e8[4] = 0x8000000000000020;
      local_78 = *param_11;
      local_e8[5] = 0x8000000000000028;
      local_70 = *param_12;
      local_e8[6] = 0x8000000000000030;
      local_68 = *param_13;
      local_e8[7] = 0x8000000000000038;
      local_60 = *param_14;
      local_e8[8] = 0x1000000000000040;
      local_128 = 9;
      puStack_120 = local_e8;
      local_48 = 0;
      local_40 = 0xf;
      local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_58._1_15_;
      local_58 = auVar2 << 8;
      local_138 = 1;
      uVar6 = 0;
      uVar11 = 0;
      do {
        bVar7 = (byte)(local_e8[uVar11] >> 0x3c);
        if (bVar7 == 0xc) {
          uVar6 = uVar6 + *(longlong *)((longlong)local_98 + (local_e8[uVar11] & 0xfffffffffffffff))
          ;
        }
        else if (bVar7 == 0xb) {
          uVar6 = uVar6 + 0x20;
        }
        else {
          uVar6 = uVar6 + 8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 9);
      lVar9 = param_5[1] + uVar6;
      if (CARRY8(param_5[1],uVar6)) {
        lVar9 = -1;
      }
      FUN_1800f5540(local_58,lVar9);
      local_108._8_8_ = puStack_120;
      local_108._0_8_ = local_128;
      local_38 = (undefined8 ****)*param_5;
      lStack_30 = param_5[1];
      local_148 = 0;
      FUN_1801da050(&local_128,local_58,&local_38,local_108);
      if (DAT_1808e3bd0 != 0) {
        while (local_48 != 0) {
          puVar3 = local_58;
          if (0xf < local_40) {
            puVar3 = (undefined1 *)local_58._0_8_;
          }
          if (puVar3[local_48 + -1] != '\n') break;
          local_48 = local_48 + -1;
          puVar3 = local_58;
          if (0xf < local_40) {
            puVar3 = (undefined1 *)local_58._0_8_;
          }
          puVar3[local_48] = 0;
        }
        pcVar12 = (char *)((longlong)&uStack_28 + 5);
        uVar8 = DAT_1808e3bd0;
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar8 + (char)((ulonglong)uVar8 / 10) * -10 + '0';
          uVar8 = (uint)((ulonglong)uVar8 / 10);
        } while (uVar8 != 0);
        FUN_18015bdb0(&local_128,pcVar12,(longlong)&uStack_28 + 5);
        local_138 = 7;
        pauVar4 = (undefined1 (*) [16])FUN_180141490(&local_128,0,&DAT_180802d54,3);
        local_108 = *pauVar4;
        auStack_f8 = pauVar4[1];
        *(undefined8 *)(pauVar4[1] + 8) = 0xf;
        (*pauVar4)[0] = 0;
        *(undefined8 *)pauVar4[1] = 0;
        local_138 = 0xf;
        plVar5 = (longlong *)FUN_18015b2a0(local_108," repeats)\n",10);
        local_38 = (undefined8 ****)*plVar5;
        lStack_30 = plVar5[1];
        uStack_28 = plVar5[2];
        uStack_20 = plVar5[3];
        *(undefined1 *)plVar5 = 0;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_138 = 0x1f;
        ppppuVar10 = &local_38;
        if (0xf < uStack_20) {
          ppppuVar10 = local_38;
        }
        FUN_18015b2a0(local_58,ppppuVar10,uStack_28);
        FUN_18015c010(&local_38);
        FUN_18015c010(local_108);
        FUN_18015c010(&local_128);
      }
      FUN_18030e280(local_58);
      DAT_1808e3bd4 = '\x01';
      DAT_1808e3bd0 = 0;
      DAT_1808e3bc0 = param_3;
      DAT_1808e3bc8 = param_2;
      FUN_18015c010(local_58);
    }
    else {
      DAT_1808e3bd0 = DAT_1808e3bd0 + 1;
      DAT_180bda178 = DAT_180bda178 + 1;
    }
  }
}



