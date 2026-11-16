// FUN_1805ce6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ce6f0 */

undefined8
FUN_1805ce6f0(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             undefined1 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char *pcVar7;
  ushort *puVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  
  puVar13 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x2c) + *(longlong *)(param_1 + 0x38));
  pcVar7 = *(char **)(param_1 + 0x40);
  iVar16 = *(int *)(param_1 + 0x30);
  puVar14 = puVar13;
  if (100 < param_5) {
    return 8;
  }
  for (; iVar16 != 0; iVar16 = iVar16 + -1) {
    uVar15 = (uint)CONCAT11(*puVar14,puVar14[1]);
    if ((uVar15 <= param_2) && (param_2 <= CONCAT11(puVar14[2],puVar14[3]))) {
      uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar14[4],puVar14[5]),puVar14[6]),puVar14[7]);
      if ((uint)((int)pcVar7 - (int)puVar13) < uVar10) {
        return 8;
      }
      puVar13 = puVar13 + uVar10;
      if (puVar13 + 8 <= pcVar7) {
        uVar1 = puVar13[3];
        puVar14 = puVar13 + 8;
        uVar2 = puVar13[2];
        uVar3 = puVar13[5];
        uVar4 = puVar13[4];
        uVar5 = puVar13[6];
        uVar6 = puVar13[7];
        switch(CONCAT11(*puVar13,puVar13[1])) {
        case 1:
          puVar14 = puVar14 + (param_2 - uVar15) * 4;
          if (puVar14 + 8 <= pcVar7) {
            uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar14,puVar14[1]),puVar14[2]),puVar14[3]);
            uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar14[4],puVar14[5]),puVar14[6]),puVar14[7]);
            if (uVar10 != uVar15) goto LAB_1805ceb59;
          }
          break;
        case 2:
          if (puVar13 + 0x14 <= pcVar7) {
            puVar8 = *(ushort **)(param_1 + 0x18);
            iVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar14,puVar13[9]),puVar13[10]),puVar13[0xb]);
            if (puVar13 + 0x11 <= pcVar7) {
              *puVar8 = (ushort)(byte)puVar13[0xc];
              puVar8[1] = (ushort)(byte)puVar13[0xd];
              puVar8[2] = (short)(char)puVar13[0xe];
              puVar8[3] = (short)(char)puVar13[0xf];
              puVar8[4] = (ushort)(byte)puVar13[0x10];
              if (puVar13 + 0x14 <= pcVar7) {
                puVar8[5] = (short)(char)puVar13[0x11];
                puVar8[6] = (short)(char)puVar13[0x12];
                uVar10 = (param_2 - uVar15) * iVar16;
                puVar8[7] = (ushort)(byte)puVar13[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                uVar15 = uVar10 + iVar16;
                goto LAB_1805ceb59;
              }
            }
          }
          break;
        case 3:
          uVar12 = (ulonglong)((param_2 - uVar15) * 2);
          pcVar11 = puVar13 + uVar12 + 0xc;
          if (pcVar11 <= pcVar7) {
            uVar10 = (uint)CONCAT11(puVar14[uVar12],puVar13[uVar12 + 9]);
            uVar15 = (uint)CONCAT11(pcVar11[-2],pcVar11[-1]);
            if (uVar10 != uVar15) goto LAB_1805ceb59;
          }
          break;
        case 4:
          pcVar11 = puVar13 + 0xc;
          if ((((pcVar11 <= pcVar7) &&
               (uVar15 = CONCAT31(CONCAT21(CONCAT11(*puVar14,puVar13[9]),puVar13[10]),puVar13[0xb]),
               puVar13 + 0x10 <= pcVar7)) &&
              (uVar15 <= (int)((longlong)pcVar7 - (longlong)pcVar11 >> 2) - 1U)) &&
             (uVar10 = 0, uVar15 != 0)) goto LAB_1805ce9f0;
          break;
        case 5:
        case 0x13:
          if (puVar13 + 0x18 <= pcVar7) {
            puVar8 = *(ushort **)(param_1 + 0x18);
            iVar16 = CONCAT31(CONCAT21(CONCAT11(*puVar14,puVar13[9]),puVar13[10]),puVar13[0xb]);
            if (puVar13 + 0x11 <= pcVar7) {
              *puVar8 = (ushort)(byte)puVar13[0xc];
              puVar8[1] = (ushort)(byte)puVar13[0xd];
              puVar8[2] = (short)(char)puVar13[0xe];
              puVar8[3] = (short)(char)puVar13[0xf];
              puVar8[4] = (ushort)(byte)puVar13[0x10];
              if (puVar13 + 0x14 <= pcVar7) {
                puVar8[5] = (short)(char)puVar13[0x11];
                puVar8[6] = (short)(char)puVar13[0x12];
                puVar8[7] = (ushort)(byte)puVar13[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                puVar14 = puVar13 + 0x17;
                uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar13[0x14],puVar13[0x15]),puVar13[0x16]),
                                  *puVar14);
                if ((uVar15 <= (uint)((longlong)pcVar7 - (longlong)(puVar13 + 0x18) >> 1)) &&
                   (uVar10 = 0, uVar15 != 0)) goto LAB_1805ceb20;
              }
            }
          }
        }
      }
      break;
    }
    puVar14 = puVar14 + 8;
  }
  goto switchD_1805ce82e_caseD_6;
LAB_1805ceb20:
  while (puVar13 = puVar14 + 1, puVar14 = puVar14 + 2, CONCAT11(*puVar13,*puVar14) != param_2) {
    uVar10 = uVar10 + 1;
    if (uVar15 <= uVar10) {
      if (param_5 == 0) {
        return 0x9d;
      }
      return 0x15;
    }
  }
  uVar10 = uVar10 * iVar16;
  uVar15 = uVar10 + iVar16;
  goto LAB_1805ceb59;
LAB_1805ce9f0:
  while (CONCAT11(*pcVar11,pcVar11[1]) != param_2) {
    uVar10 = uVar10 + 1;
    pcVar11 = pcVar11 + 4;
    if (uVar15 <= uVar10) {
      if (param_5 == 0) {
        return 0x9d;
      }
      return 0x15;
    }
  }
  uVar10 = (uint)CONCAT11(pcVar11[2],pcVar11[3]);
  uVar15 = (uint)CONCAT11(pcVar11[6],pcVar11[7]);
LAB_1805ceb59:
  if (uVar10 <= uVar15) {
    uVar9 = FUN_1805cdfb0(param_1,CONCAT11(uVar2,uVar1),
                          CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),uVar5),uVar6) + uVar10,
                          uVar15 - uVar10,param_3,param_4,param_5,param_6);
    return uVar9;
  }
switchD_1805ce82e_caseD_6:
  uVar9 = 0x9d;
  if (param_5 != 0) {
    uVar9 = 0x15;
  }
  return uVar9;
}



