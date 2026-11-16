// FUN_1803313a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803313a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803313a0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,undefined1 *param_6,undefined8 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14,undefined8 *param_15)

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
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined8 local_138;
  ulonglong *puStack_130;
  undefined1 local_118 [16];
  undefined1 auStack_108 [16];
  ulonglong local_f8 [10];
  undefined1 local_a8;
  undefined1 local_a7 [8];
  undefined4 uStack_9f;
  undefined4 uStack_9b;
  undefined8 local_97;
  undefined8 local_8f;
  undefined8 local_87;
  undefined8 local_7f;
  undefined8 local_77;
  undefined8 local_6f;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_40;
  undefined8 ****local_38;
  longlong lStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  if (DAT_180bbeabc != '\0') {
    if (((param_3 < 0) || (DAT_1808e3ba8 < 0)) || (DAT_1808e3ba8 <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((DAT_1808e3bbc == '\0') || (bVar1)) ||
       ((DAT_1808e3bb0 != 0 || ((param_3 < 0 || (0x3f < param_3 - DAT_1808e3ba8)))))) {
      local_a8 = *param_6;
      local_f8[0] = 0x5000000000000000;
      local_a7 = (undefined1  [8])*param_7;
      local_f8[1] = 0x8000000000000001;
      uStack_9f = *param_8;
      local_f8[2] = 0x1000000000000009;
      uStack_9b = *param_9;
      local_f8[3] = 0x100000000000000d;
      local_97 = *param_10;
      local_f8[4] = 0x8000000000000011;
      local_8f = *param_11;
      local_f8[5] = 0x8000000000000019;
      local_87 = *param_12;
      local_f8[6] = 0x8000000000000021;
      local_7f = *param_13;
      local_f8[7] = 0x8000000000000029;
      local_77 = *param_14;
      local_f8[8] = 0x8000000000000031;
      local_6f = *param_15;
      local_f8[9] = 0x8000000000000039;
      local_138 = 10;
      puStack_130 = local_f8;
      local_48 = 0;
      local_40 = 0xf;
      local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_58._1_15_;
      local_58 = auVar2 << 8;
      local_148 = 1;
      uVar6 = 0;
      uVar11 = 0;
      do {
        bVar7 = (byte)(local_f8[uVar11] >> 0x3c);
        if (bVar7 == 0xc) {
          uVar6 = uVar6 + *(longlong *)(local_a7 + (local_f8[uVar11] & 0xfffffffffffffff) + 7);
        }
        else if (bVar7 == 0xb) {
          uVar6 = uVar6 + 0x20;
        }
        else {
          uVar6 = uVar6 + 8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 10);
      lVar9 = param_5[1] + uVar6;
      if (CARRY8(param_5[1],uVar6)) {
        lVar9 = -1;
      }
      FUN_1800f5540(local_58,lVar9);
      local_118._8_8_ = puStack_130;
      local_118._0_8_ = local_138;
      local_38 = (undefined8 ****)*param_5;
      lStack_30 = param_5[1];
      local_158 = 0;
      FUN_1801da050(&local_138,local_58,&local_38,local_118);
      if (DAT_1808e3bb8 != 0) {
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
        uVar8 = DAT_1808e3bb8;
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar8 + (char)((ulonglong)uVar8 / 10) * -10 + '0';
          uVar8 = (uint)((ulonglong)uVar8 / 10);
        } while (uVar8 != 0);
        FUN_18015bdb0(&local_138,pcVar12,(longlong)&uStack_28 + 5);
        local_148 = 7;
        pauVar4 = (undefined1 (*) [16])FUN_180141490(&local_138,0,&DAT_180802d54,3);
        local_118 = *pauVar4;
        auStack_108 = pauVar4[1];
        *(undefined8 *)(pauVar4[1] + 8) = 0xf;
        (*pauVar4)[0] = 0;
        *(undefined8 *)pauVar4[1] = 0;
        local_148 = 0xf;
        plVar5 = (longlong *)FUN_18015b2a0(local_118," repeats)\n",10);
        local_38 = (undefined8 ****)*plVar5;
        lStack_30 = plVar5[1];
        uStack_28 = plVar5[2];
        uStack_20 = plVar5[3];
        *(undefined1 *)plVar5 = 0;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_148 = 0x1f;
        ppppuVar10 = &local_38;
        if (0xf < uStack_20) {
          ppppuVar10 = local_38;
        }
        FUN_18015b2a0(local_58,ppppuVar10,uStack_28);
        FUN_18015c010(&local_38);
        FUN_18015c010(local_118);
        FUN_18015c010(&local_138);
      }
      FUN_18030e280(local_58);
      DAT_1808e3bbc = '\x01';
      DAT_1808e3bb0 = 0;
      DAT_1808e3bb8 = 0;
      DAT_1808e3ba8 = param_3;
      FUN_18015c010(local_58);
    }
    else {
      DAT_1808e3bb8 = DAT_1808e3bb8 + 1;
      DAT_180bda178 = DAT_180bda178 + 1;
    }
  }
}



