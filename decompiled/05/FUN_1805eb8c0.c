// FUN_1805eb8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805eb8c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805eb8c0(longlong param_1,int param_2,byte *param_3,uint param_4,longlong param_5,
                  undefined8 *param_6,int param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  undefined4 local_138;
  undefined4 local_134;
  ulonglong local_120;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)&local_138;
  local_120 = (ulonglong)param_4;
  local_98 = *param_6;
  uStack_90 = param_6[1];
  local_88 = param_6[2];
  uStack_80 = param_6[3];
  local_78 = param_6[4];
  uStack_70 = param_6[5];
  local_68 = param_6[6];
  uStack_60 = param_6[7];
  local_58 = *(undefined4 *)(param_6 + 8);
  if (param_4 != 0) {
    pbVar17 = param_3;
    do {
      bVar4 = *pbVar17;
      puVar3 = (uint *)((longlong)&local_98 + (ulonglong)pbVar17[1] * 4);
      uVar10 = *puVar3;
      uVar13 = param_8 - (uint)pbVar17[1];
      uVar18 = 1 << ((byte)(param_2 - uVar13) & 0x1f);
      uVar11 = (ulonglong)uVar18;
      cVar12 = (char)uVar13;
      if (param_2 - uVar13 < (uint)(param_8 - param_7)) {
        uVar18 = uVar18 + uVar10;
        local_134 = CONCAT13(1,CONCAT12(cVar12,(ushort)bVar4));
        if (uVar10 < uVar18) {
          puVar15 = (undefined4 *)(param_1 + (ulonglong)uVar10 * 4);
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar15 = local_134;
            puVar15 = puVar15 + 1;
          }
        }
      }
      else {
        uVar7 = uVar13 + (param_8 - param_2);
        puVar15 = (undefined4 *)(param_1 + (ulonglong)uVar10 * 4);
        uVar11 = (ulonglong)uVar7;
        if ((int)uVar7 < 1) {
          uVar11 = 1;
        }
        uVar7 = *(uint *)(uVar11 * 4 + param_5);
        pbVar16 = param_3 + (ulonglong)uVar7 * 2;
        lVar8 = (ulonglong)uVar13 * 0x44;
        puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_6);
        local_e8 = *(undefined8 *)(lVar8 + (longlong)param_6);
        uStack_e0 = ((undefined8 *)(lVar8 + (longlong)param_6))[1];
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_6);
        puVar2 = (undefined8 *)(lVar8 + 0x30 + (longlong)param_6);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        local_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        local_a8 = *(undefined4 *)(lVar8 + 0x40 + (longlong)param_6);
        if (1 < (uint)uVar11) {
          uVar13 = *(uint *)((longlong)&local_e8 + uVar11 * 4);
          local_138._0_3_ = CONCAT12(cVar12,(ushort)bVar4);
          local_138 = CONCAT13(1,(undefined3)local_138);
          if (uVar13 != 0) {
            puVar14 = puVar15;
            for (uVar11 = (ulonglong)uVar13; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar14 = local_138;
              puVar14 = puVar14 + 1;
            }
          }
        }
        uVar7 = param_4 - uVar7;
        if (uVar7 != 0) {
          local_138 = 0x2000000;
          uVar11 = (ulonglong)uVar7;
          do {
            bVar5 = pbVar16[1];
            cVar6 = (char)param_8 - bVar5;
            uVar10 = *(uint *)((longlong)&local_e8 + (ulonglong)bVar5 * 4);
            uVar13 = (1 << (((char)param_2 - cVar6) - cVar12 & 0x1fU)) + uVar10;
            local_138._0_3_ = CONCAT12(cVar6 + cVar12,CONCAT11(*pbVar16,bVar4));
            do {
              uVar9 = (ulonglong)uVar10;
              uVar10 = uVar10 + 1;
              puVar15[uVar9] = local_138;
            } while (uVar10 < uVar13);
            pbVar16 = pbVar16 + 2;
            *(uint *)((longlong)&local_e8 + (ulonglong)bVar5 * 4) = uVar13;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          uVar10 = *puVar3;
        }
        uVar18 = uVar10 + uVar18;
      }
      pbVar17 = pbVar17 + 2;
      *puVar3 = uVar18;
      local_120 = local_120 - 1;
    } while (local_120 != 0);
  }
}



