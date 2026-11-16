// FUN_180331fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180331fd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180331fd0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7)

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
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined8 local_b8;
  ulonglong *puStack_b0;
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  ulonglong local_78 [4];
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_40;
  undefined8 ****local_38;
  longlong lStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if (DAT_180bbeabc != '\0') {
    if (((param_3 < 0) || (DAT_1808e3bd8 < 0)) || (DAT_1808e3bd8 <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((DAT_1808e3bec == '\0') || (bVar1)) ||
       ((DAT_1808e3be0 != 0 || ((param_3 < 0 || (0x7f < param_3 - DAT_1808e3bd8)))))) {
      local_78[2] = *param_6;
      local_78[0] = 0x3000000000000000;
      local_78[3] = *param_7;
      local_78[1] = 0xb000000000000008;
      local_b8 = 2;
      puStack_b0 = local_78;
      local_48 = 0;
      local_40 = 0xf;
      local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_58._1_15_;
      local_58 = auVar2 << 8;
      local_c8 = 1;
      uVar6 = 0;
      uVar11 = 0;
      do {
        bVar7 = (byte)(local_78[uVar11] >> 0x3c);
        if (bVar7 == 0xc) {
          uVar6 = uVar6 + *(longlong *)
                           ((longlong)local_78 + (local_78[uVar11] & 0xfffffffffffffff) + 0x18);
        }
        else if (bVar7 == 0xb) {
          uVar6 = uVar6 + 0x20;
        }
        else {
          uVar6 = uVar6 + 8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 2);
      lVar9 = param_5[1] + uVar6;
      if (CARRY8(param_5[1],uVar6)) {
        lVar9 = -1;
      }
      FUN_1800f5540(local_58,lVar9);
      local_98._8_8_ = puStack_b0;
      local_98._0_8_ = local_b8;
      local_38 = (undefined8 ****)*param_5;
      lStack_30 = param_5[1];
      local_d8 = 0;
      FUN_1801da050(&local_b8,local_58,&local_38,local_98);
      if (DAT_1808e3be8 != 0) {
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
        uVar8 = DAT_1808e3be8;
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar8 + (char)((ulonglong)uVar8 / 10) * -10 + '0';
          uVar8 = (uint)((ulonglong)uVar8 / 10);
        } while (uVar8 != 0);
        FUN_18015bdb0(&local_b8,pcVar12,(longlong)&uStack_28 + 5);
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
        ppppuVar10 = &local_38;
        if (0xf < uStack_20) {
          ppppuVar10 = local_38;
        }
        FUN_18015b2a0(local_58,ppppuVar10,uStack_28);
        FUN_18015c010(&local_38);
        FUN_18015c010(local_98);
        FUN_18015c010(&local_b8);
      }
      FUN_18030e280(local_58);
      DAT_1808e3bec = '\x01';
      DAT_1808e3be0 = 0;
      DAT_1808e3be8 = 0;
      DAT_1808e3bd8 = param_3;
      FUN_18015c010(local_58);
    }
    else {
      DAT_1808e3be8 = DAT_1808e3be8 + 1;
      DAT_180bda178 = DAT_180bda178 + 1;
    }
  }
}



