// FUN_18008dc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18008dc10 */

void FUN_18008dc10(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  if (param_2 != 0) {
    uVar6 = *param_4;
    local_60 = 0;
    local_78 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_7c = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    uVar15 = 0;
    local_80 = param_2;
    local_70 = param_1;
    local_68 = param_3;
    do {
      uVar11 = (ulonglong)uVar15;
      uVar12 = (ulonglong)local_80 + (ulonglong)((ulonglong)local_80 == 0);
      lVar1 = local_70 + uVar11;
      if (0xf < uVar12) {
        uVar12 = 0x10;
      }
      uVar14 = param_2 + (int)local_60 * -0x10;
      uVar16 = uVar14 + (uVar14 == 0);
      uVar17 = (ulonglong)uVar16;
      if (0xf < uVar16) {
        uVar17 = 0x10;
      }
      uStack_a0 = CONCAT13((char)local_b4,
                           CONCAT12((char)local_b0,CONCAT11((char)local_ac,(char)local_78)));
      uStack_9c = CONCAT13((char)local_60,
                           CONCAT12((char)local_c0,CONCAT11((char)local_bc,(char)local_b8)));
      local_a8 = uVar6;
      FUN_18008dfb0(local_68,&local_a8);
      uVar9 = (ulonglong)(param_2 - uVar15);
      if (0xf < param_2 - uVar15) {
        uVar9 = 0x10;
      }
      if (uVar14 < 8) {
        uVar10 = 0;
LAB_18008de20:
        do {
          pbVar5 = (byte *)(lVar1 + uVar10);
          *pbVar5 = *pbVar5 ^ *(byte *)((longlong)&local_a8 + uVar10);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar9);
      }
      else {
        uVar16 = (uint)uVar17;
        if (uVar14 < 0x10) {
          uVar10 = 0;
LAB_18008ddb7:
          do {
            puVar4 = (ulonglong *)(lVar1 + uVar10);
            *puVar4 = *puVar4 ^ *(ulonglong *)((longlong)&local_a8 + uVar10);
            uVar10 = uVar10 + 8;
          } while (((uint)uVar12 & 0x18) != uVar10);
          uVar10 = (ulonglong)(uVar16 & 0x18);
          if ((uVar16 & 0x18) != uVar16) goto LAB_18008de20;
        }
        else {
          uVar10 = (ulonglong)(uVar16 & 0x10);
          puVar2 = (uint *)(local_70 + uVar11);
          uVar14 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (uint *)(local_70 + uVar11);
          *puVar3 = *puVar2 ^ (uint)local_a8;
          puVar3[1] = uVar14 ^ local_a8._4_4_;
          puVar3[2] = uVar7 ^ uStack_a0;
          puVar3[3] = uVar8 ^ uStack_9c;
          if (uVar10 != uVar17) {
            if ((uVar17 & 8) == 0) goto LAB_18008de20;
            goto LAB_18008ddb7;
          }
        }
      }
      uVar15 = uVar15 + 0x10;
      uVar14 = (int)local_60 + 1;
      local_60 = (ulonglong)uVar14;
      if ((char)uVar14 == '\0') {
        cVar13 = (char)local_94 + '\x01';
        local_c0 = CONCAT31((int3)((uint)local_94 >> 8),cVar13);
        if (cVar13 == '\0') {
          cVar13 = (char)local_90 + '\x01';
          local_bc = CONCAT31((int3)((uint)local_90 >> 8),cVar13);
          if (cVar13 == '\0') {
            cVar13 = (char)local_8c + '\x01';
            local_b8 = CONCAT31((int3)((uint)local_8c >> 8),cVar13);
            if (cVar13 == '\0') {
              cVar13 = (char)local_88 + '\x01';
              local_b4 = CONCAT31((int3)((uint)local_88 >> 8),cVar13);
              if (cVar13 == '\0') {
                cVar13 = (char)local_84 + '\x01';
                local_b0 = CONCAT31((int3)((uint)local_84 >> 8),cVar13);
                if (cVar13 == '\0') {
                  cVar13 = (char)local_7c + '\x01';
                  local_ac = CONCAT31((int3)((uint)local_7c >> 8),cVar13);
                  if (cVar13 == '\0') {
                    local_78 = CONCAT71((int7)((ulonglong)local_78 >> 8),(char)local_78 + '\x01');
                    local_ac = 0;
                  }
                  local_b0 = 0;
                  local_7c = local_ac;
                }
                local_b4 = 0;
                local_84 = local_b0;
              }
              local_b8 = 0;
              local_88 = local_b4;
            }
            else {
            }
            local_bc = 0;
            local_8c = local_b8;
          }
          local_c0 = 0;
          local_90 = local_bc;
          local_94 = 0;
        }
        else {
          local_94 = local_c0;
        }
      }
      else {
      }
      local_80 = local_80 - 0x10;
    } while (uVar15 < param_2);
  }
  return;
}



