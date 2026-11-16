// FUN_180331820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180331820 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180331820(ulonglong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined1 *param_12
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
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined8 local_158;
  ulonglong *puStack_150;
  undefined1 local_138 [16];
  undefined1 auStack_128 [16];
  ulonglong local_118 [10];
  undefined4 local_c8;
  undefined1 local_c4 [8];
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_9b;
  undefined8 local_93;
  undefined8 local_8b;
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_60;
  undefined8 ****local_58;
  longlong lStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  if (DAT_180bbeabc != '\0') {
    param_1 = param_1 % 0x18;
    if (((param_3 < 0) || ((longlong)(&DAT_1808e3ad0)[param_1 * 3] < 0)) ||
       ((longlong)(&DAT_1808e3ad0)[param_1 * 3] <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((*(char *)((longlong)&DAT_1808e3ae0 + param_1 * 0x18 + 4) == '\0') || (bVar1)) ||
       ((param_2 != (&DAT_1808e3ad8)[param_1 * 3] ||
        ((param_3 < 0 || (0x3f < param_3 - (&DAT_1808e3ad0)[param_1 * 3])))))) {
      local_c8 = *param_6;
      local_118[0] = 0x1000000000000000;
      local_c4 = (undefined1  [8])*param_7;
      local_118[1] = 0x8000000000000004;
      local_bc = *param_8;
      local_118[2] = 0x800000000000000c;
      local_b4 = *param_9;
      local_118[3] = 0x8000000000000014;
      local_ac = *param_10;
      local_118[4] = 0x800000000000001c;
      local_a4 = *param_11;
      local_118[5] = 0x8000000000000024;
      local_9c = *param_12;
      local_118[6] = 0x500000000000002c;
      local_9b = *param_13;
      local_118[7] = 0x800000000000002d;
      local_93 = *param_14;
      local_118[8] = 0xb000000000000035;
      local_8b = *param_15;
      local_118[9] = 0xb00000000000003d;
      local_158 = 10;
      puStack_150 = local_118;
      local_68 = 0;
      local_60 = 0xf;
      local_78._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_78._1_15_;
      local_78 = auVar2 << 8;
      local_168 = 1;
      uVar6 = 0;
      uVar11 = 0;
      do {
        bVar7 = (byte)(local_118[uVar11] >> 0x3c);
        if (bVar7 == 0xc) {
          uVar6 = uVar6 + *(longlong *)(local_c4 + (local_118[uVar11] & 0xfffffffffffffff) + 4);
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
      FUN_1800f5540(local_78,lVar9);
      local_138._8_8_ = puStack_150;
      local_138._0_8_ = local_158;
      local_58 = (undefined8 ****)*param_5;
      lStack_50 = param_5[1];
      local_178 = 0;
      FUN_1801da050(&local_158,local_78,&local_58,local_138);
      if (*(int *)(&DAT_1808e3ae0 + param_1 * 3) != 0) {
        while (local_68 != 0) {
          puVar3 = local_78;
          if (0xf < local_60) {
            puVar3 = (undefined1 *)local_78._0_8_;
          }
          if (puVar3[local_68 + -1] != '\n') break;
          local_68 = local_68 + -1;
          puVar3 = local_78;
          if (0xf < local_60) {
            puVar3 = (undefined1 *)local_78._0_8_;
          }
          puVar3[local_68] = 0;
        }
        pcVar12 = (char *)((longlong)&uStack_48 + 5);
        uVar8 = *(uint *)(&DAT_1808e3ae0 + param_1 * 3);
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar8 + (char)((ulonglong)uVar8 / 10) * -10 + '0';
          uVar8 = (uint)((ulonglong)uVar8 / 10);
        } while (uVar8 != 0);
        FUN_18015bdb0(&local_158,pcVar12,(longlong)&uStack_48 + 5);
        local_168 = 7;
        pauVar4 = (undefined1 (*) [16])FUN_180141490(&local_158,0,&DAT_180802d54,3);
        local_138 = *pauVar4;
        auStack_128 = pauVar4[1];
        *(undefined8 *)(pauVar4[1] + 8) = 0xf;
        (*pauVar4)[0] = 0;
        *(undefined8 *)pauVar4[1] = 0;
        local_168 = 0xf;
        plVar5 = (longlong *)FUN_18015b2a0(local_138," repeats)\n",10);
        local_58 = (undefined8 ****)*plVar5;
        lStack_50 = plVar5[1];
        uStack_48 = plVar5[2];
        uStack_40 = plVar5[3];
        *(undefined1 *)plVar5 = 0;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_168 = 0x1f;
        ppppuVar10 = &local_58;
        if (0xf < uStack_40) {
          ppppuVar10 = local_58;
        }
        FUN_18015b2a0(local_78,ppppuVar10,uStack_48);
        FUN_18015c010(&local_58);
        FUN_18015c010(local_138);
        FUN_18015c010(&local_158);
      }
      FUN_18030e280(local_78);
      *(undefined1 *)((longlong)&DAT_1808e3ae0 + param_1 * 0x18 + 4) = 1;
      (&DAT_1808e3ad8)[param_1 * 3] = param_2;
      (&DAT_1808e3ad0)[param_1 * 3] = param_3;
      *(undefined4 *)(&DAT_1808e3ae0 + param_1 * 3) = 0;
      FUN_18015c010(local_78);
    }
    else {
      *(int *)(&DAT_1808e3ae0 + param_1 * 3) = *(int *)(&DAT_1808e3ae0 + param_1 * 3) + 1;
      DAT_180bda178 = DAT_180bda178 + 1;
    }
  }
}



