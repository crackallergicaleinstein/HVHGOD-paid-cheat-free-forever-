// FUN_18057eb50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057eb50 */

int FUN_18057eb50(longlong param_1,int param_2,int param_3,char param_4,undefined8 param_5,
                 ulonglong *param_6)

{
  uint uVar1;
  short *psVar2;
  bool bVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  short *psVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(uint *)(param_1 + 0x10) < 0xc) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xc;
      *(longlong *)(param_1 + 0x18) = param_1 + 0x538;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 <= *(uint *)(param_1 + 0x10)) {
      if (0x1c71c70 < uVar1) {
        *param_6 = 0;
        return 0x40;
      }
      uVar16 = (uVar1 >> 2) + 4 + uVar1;
      if ((uVar16 < uVar1) || (0x1c71c71 < uVar16)) {
        uVar16 = 0x1c71c71;
      }
      if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)(param_1 + 0x538)) {
        puVar10 = (undefined8 *)FUN_18057ad10(param_5,0x48,0,uVar16,0,local_res8);
        *(undefined8 **)(param_1 + 0x18) = puVar10;
        if (local_res8[0] != 0) {
          *param_6 = 0;
          return local_res8[0];
        }
        lVar13 = 6;
        puVar8 = (undefined8 *)(param_1 + 0x538);
        do {
          puVar15 = puVar8;
          puVar11 = puVar10;
          uVar12 = puVar15[1];
          *puVar11 = *puVar15;
          puVar11[1] = uVar12;
          uVar12 = puVar15[3];
          puVar11[2] = puVar15[2];
          puVar11[3] = uVar12;
          uVar12 = puVar15[5];
          puVar11[4] = puVar15[4];
          puVar11[5] = uVar12;
          uVar12 = puVar15[7];
          puVar11[6] = puVar15[6];
          puVar11[7] = uVar12;
          uVar12 = puVar15[9];
          puVar11[8] = puVar15[8];
          puVar11[9] = uVar12;
          uVar12 = puVar15[0xb];
          puVar11[10] = puVar15[10];
          puVar11[0xb] = uVar12;
          uVar12 = puVar15[0xd];
          puVar11[0xc] = puVar15[0xc];
          puVar11[0xd] = uVar12;
          uVar12 = puVar15[0xf];
          puVar11[0xe] = puVar15[0xe];
          puVar11[0xf] = uVar12;
          lVar13 = lVar13 + -1;
          puVar10 = puVar11 + 0x10;
          puVar8 = puVar15 + 0x10;
        } while (lVar13 != 0);
        uVar12 = puVar15[0x11];
        puVar11[0x10] = puVar15[0x10];
        puVar11[0x11] = uVar12;
        uVar12 = puVar15[0x13];
        puVar11[0x12] = puVar15[0x12];
        puVar11[0x13] = uVar12;
        uVar12 = puVar15[0x15];
        puVar11[0x14] = puVar15[0x14];
        puVar11[0x15] = uVar12;
        uVar12 = puVar15[0x17];
        puVar11[0x16] = puVar15[0x16];
        puVar11[0x17] = uVar12;
        uVar12 = puVar15[0x19];
        puVar11[0x18] = puVar15[0x18];
        puVar11[0x19] = uVar12;
        uVar12 = puVar15[0x1b];
        puVar11[0x1a] = puVar15[0x1a];
        puVar11[0x1b] = uVar12;
        *(uint *)(param_1 + 0x14) = uVar16;
      }
      else {
        uVar12 = FUN_18057ad10(param_5,0x48,uVar1,uVar16,*(undefined8 **)(param_1 + 0x18),local_res8
                              );
        *(undefined8 *)(param_1 + 0x18) = uVar12;
        if (local_res8[0] != 0) {
          *param_6 = 0;
          return local_res8[0];
        }
        *(uint *)(param_1 + 0x14) = uVar16;
      }
    }
  }
  psVar2 = *(short **)(param_1 + 0x18);
  psVar14 = psVar2 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x24;
  psVar4 = psVar14;
  if (psVar2 < psVar14) {
    do {
      psVar9 = psVar4 + -0x24;
      iVar17 = (int)*psVar9;
      if (param_4 == '\0') {
        bVar3 = iVar17 < param_2;
      }
      else {
        bVar3 = param_2 < iVar17;
      }
      if ((bVar3) || ((iVar17 == param_2 && (param_3 == *(int *)(param_1 + 0x20))))) break;
      uVar12 = *(undefined8 *)(psVar4 + -0x20);
      uVar5 = *(undefined8 *)(psVar4 + -0x1c);
      uVar6 = *(undefined8 *)(psVar4 + -0x18);
      *(undefined8 *)psVar14 = *(undefined8 *)psVar9;
      *(undefined8 *)(psVar14 + 4) = uVar12;
      uVar12 = *(undefined8 *)(psVar4 + -0x14);
      uVar7 = *(undefined8 *)(psVar4 + -0x10);
      *(undefined8 *)(psVar14 + 8) = uVar5;
      *(undefined8 *)(psVar14 + 0xc) = uVar6;
      uVar5 = *(undefined8 *)(psVar4 + -0xc);
      uVar6 = *(undefined8 *)(psVar4 + -8);
      *(undefined8 *)(psVar14 + 0x10) = uVar12;
      *(undefined8 *)(psVar14 + 0x14) = uVar7;
      uVar12 = *(undefined8 *)(psVar4 + -4);
      *(undefined8 *)(psVar14 + 0x18) = uVar5;
      *(undefined8 *)(psVar14 + 0x1c) = uVar6;
      *(undefined8 *)(psVar14 + 0x20) = uVar12;
      psVar14 = psVar14 + -0x24;
      psVar4 = psVar9;
    } while (psVar2 < psVar14);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *param_6 = (ulonglong)psVar14;
  return local_res8[0];
}



