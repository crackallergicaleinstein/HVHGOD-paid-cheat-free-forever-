// FUN_1805c59a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c59a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c59a0(longlong param_1,uint param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_78;
  int local_70 [5];
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar4 != 0) && (pcVar1 = *(char **)(lVar4 + 0x38), pcVar1 != (char *)0x0)) {
    lVar7 = *(longlong *)(lVar4 + 0x80) + (ulonglong)*(uint *)(lVar4 + 0x88);
    if ((pcVar1 <= (char *)(lVar7 - 5U)) && (*pcVar1 == '\x01')) {
      uVar11 = CONCAT31(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]),pcVar1[4]);
      if (((uVar11 <= *(uint *)(lVar4 + 0x88) / 7) &&
          (pcVar1 + 5 <= (char *)(lVar7 - (ulonglong)(uVar11 * 7)))) &&
         (uVar13 = 0, pcVar9 = pcVar1 + 5, uVar11 != 0)) {
        do {
          if ((CONCAT11(*pcVar9,pcVar9[1]) <= param_2) && (param_2 <= CONCAT11(pcVar9[2],pcVar9[3]))
             ) {
            pbVar14 = (byte *)(pcVar1 + CONCAT21(CONCAT11(pcVar9[4],pcVar9[5]),pcVar9[6]));
            if ((byte *)(lVar7 - 1U) < pbVar14) {
            }
            if (2 < *pbVar14) {
            }
            if ((byte *)(lVar7 - 8U) < pbVar14 + 1) {
            }
            lVar8 = 4;
            lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
            lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
            lVar3 = ((longlong)(short)((ushort)pbVar14[1] << 8) | (ulonglong)pbVar14[2]) * lVar12;
            iVar5 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
            lVar3 = ((longlong)(short)((ushort)pbVar14[3] << 8) | (ulonglong)pbVar14[4]) * lVar10;
            iVar17 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
            lVar12 = ((longlong)(short)((ushort)pbVar14[5] << 8) | (ulonglong)pbVar14[6]) * lVar12;
            iVar15 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
            lVar10 = ((longlong)(short)((ushort)pbVar14[7] << 8) | (ulonglong)pbVar14[8]) * lVar10;
            iVar16 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
            local_78 = param_3;
            if (*pbVar14 == 2) {
              local_50 = 0;
              uStack_48 = 0;
              if ((byte *)(lVar7 - 4U) < pbVar14 + 9) {
              }
              local_88 = &local_50;
              cVar2 = FUN_1805c9fe0(param_1,lVar4,
                                    CONCAT31(CONCAT21(CONCAT11(pbVar14[9],pbVar14[10]),pbVar14[0xb])
                                             ,pbVar14[0xc]),4);
              if (cVar2 == '\0') {
              }
              lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
              lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
              lVar4 = (int)local_50 * lVar7;
              iVar5 = iVar5 + (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
              lVar4 = local_50._4_4_ * lVar3;
              iVar17 = iVar17 + (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
              lVar7 = (int)uStack_48 * lVar7;
              iVar15 = iVar15 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
              lVar3 = uStack_48._4_4_ * lVar3;
              iVar16 = iVar16 + (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
            }
            local_70[0] = iVar5;
            local_70[2] = iVar5;
            piVar6 = local_70;
            local_70[4] = iVar15;
            local_58 = iVar15;
            local_70[1] = iVar17;
            local_70[3] = iVar16;
            iStack_5c = iVar16;
            iStack_54 = iVar17;
            do {
              if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
                FUN_180578cc0(piVar6);
              }
              lVar4 = *(longlong *)(param_1 + 0xd0);
              if ((*(byte *)(lVar4 + 0x18) & 2) != 0) {
                *piVar6 = *piVar6 + *(int *)(lVar4 + 0x10);
                piVar6[1] = piVar6[1] + *(int *)(lVar4 + 0x14);
              }
              piVar6 = piVar6 + 2;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            *local_78 = CONCAT44(local_70[1],local_70[0]);
            local_78[1] = CONCAT44(local_70[3],local_70[2]);
            local_78[2] = CONCAT44(iStack_5c,local_70[4]);
            local_78[3] = CONCAT44(iStack_54,local_58);
          }
          uVar13 = uVar13 + 1;
          pcVar9 = pcVar9 + 7;
        } while (uVar13 < uVar11);
      }
    }
  }
}



