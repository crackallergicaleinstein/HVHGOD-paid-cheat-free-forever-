// FUN_1805e37e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e37e0 */

ulonglong FUN_1805e37e0(uint *param_1,ulonglong param_2,undefined8 param_3,uint *param_4,
                       ulonglong param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint *local_70;
  uint local_68;
  int local_64;
  uint local_60;
  longlong local_58;
  uint *local_50;
  uint *local_48;
  ulonglong local_40;
  
  uVar1 = *param_1;
  local_88 = uVar1 & 0xff;
  if (param_5 < 0x84c) {
    return 0xffffffffffffffff;
  }
  puVar9 = param_4 + 0x9c;
  puVar9[0] = 0;
  puVar9[1] = 0;
  param_4[0x9e] = 0;
  param_4[0x9f] = 0;
  param_4[0xa0] = 0;
  param_4[0xa1] = 0;
  param_4[0xa2] = 0;
  param_4[0xa3] = 0;
  param_4[0xa4] = 0;
  param_4[0xa5] = 0;
  param_4[0xa6] = 0;
  param_4[0xa7] = 0;
  param_4[0xa8] = 0;
  param_4[0xa9] = 0;
  param_4[0xaa] = 0;
  param_4[0xab] = 0;
  param_4[0xac] = 0;
  param_4[0xad] = 0;
  param_4[0xae] = 0;
  param_4[0xaf] = 0;
  param_4[0xb0] = 0;
  param_4[0xb1] = 0;
  param_4[0xb2] = 0;
  param_4[0xb3] = 0;
  param_4[0xb4] = 0;
  param_4[0xb5] = 0;
  param_4[0xb6] = 0;
  param_4[0xb7] = 0;
  if (local_88 < 0xd) {
    puVar12 = param_4 + 0xf8;
    local_40 = thunk_FUN_1805dd9e0(puVar12,0x100,puVar9,&local_68,&local_80,param_2,param_3,
                                   param_4 + 0x138,0x36c,param_6);
    if (0xffffffffffffff88 < local_40) {
      return local_40;
    }
    uVar17 = (ulonglong)local_80;
    if (local_80 <= local_88) {
      if ((local_80 < 0xc) && (0xb < local_88)) {
        local_88 = 0xb;
      }
      uVar10 = param_4[uVar17 + 0x9c];
      uVar18 = local_80;
      while (uVar10 == 0) {
        uVar18 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar18;
        uVar10 = param_4[uVar17 + 0x9c];
      }
      uVar14 = uVar18 + 1;
      uVar10 = 0;
      if (1 < uVar14) {
        puVar9 = param_4 + 0xab;
        uVar17 = (ulonglong)uVar18;
        uVar15 = uVar10;
        do {
          uVar10 = uVar15 + puVar9[-0xe];
          *puVar9 = uVar15;
          puVar9 = puVar9 + 1;
          uVar17 = uVar17 - 1;
          uVar15 = uVar10;
        } while (uVar17 != 0);
      }
      uVar15 = 0;
      param_4[0xaa] = uVar10;
      param_4[(ulonglong)uVar14 + 0xaa] = uVar10;
      if (local_68 != 0) {
        do {
          uVar7 = *puVar12;
          puVar12 = (uint *)((longlong)puVar12 + 1);
          uVar10 = param_4[(ulonglong)(byte)uVar7 + 0xaa];
          param_4[(ulonglong)(byte)uVar7 + 0xaa] = uVar10 + 1;
          *(char *)((ulonglong)uVar10 + 0x2e0 + (longlong)param_4) = (char)uVar15;
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_68);
      }
      uVar10 = 1;
      param_4[0xaa] = 0;
      if (1 < uVar14) {
        uVar15 = 0;
        puVar9 = param_4;
        do {
          cVar2 = (char)uVar10;
          puVar9[1] = uVar15;
          uVar10 = uVar10 + 1;
          uVar15 = uVar15 + (puVar9[0x9d] <<
                            (cVar2 + -1 + ((char)local_88 - (char)local_80) & 0x1fU));
          puVar9 = puVar9 + 1;
        } while (uVar10 < uVar14);
      }
      uVar10 = (local_80 - uVar18) + 1;
      uVar15 = (local_88 - uVar10) + 1;
      if (uVar10 < uVar15) {
        puVar9 = param_4 + (ulonglong)uVar10 * 0xd;
        lVar13 = (ulonglong)uVar10 * -0x34;
        do {
          uVar7 = 1;
          if (1 < uVar14) {
            if (0xf < uVar18) {
              if ((param_4 + uVar18 < puVar9 + 1) || (puVar9 + uVar18 < param_4 + 1)) {
                uVar11 = 9;
                uVar6 = uVar7;
                do {
                  uVar7 = uVar6 + 0x10;
                  puVar12 = param_4 + uVar6;
                  uVar3 = puVar12[1];
                  uVar4 = puVar12[2];
                  uVar5 = puVar12[3];
                  uVar17 = (ulonglong)uVar10;
                  puVar19 = puVar9 + uVar6;
                  *puVar19 = *puVar12 >> uVar17;
                  puVar19[1] = uVar3 >> uVar17;
                  puVar19[2] = uVar4 >> uVar17;
                  puVar19[3] = uVar5 >> uVar17;
                  puVar12 = param_4 + (uVar11 - 4);
                  uVar6 = puVar12[1];
                  uVar3 = puVar12[2];
                  uVar4 = puVar12[3];
                  puVar19 = puVar9 + (uVar11 - 4);
                  *puVar19 = *puVar12 >> uVar17;
                  puVar19[1] = uVar6 >> uVar17;
                  puVar19[2] = uVar3 >> uVar17;
                  puVar19[3] = uVar4 >> uVar17;
                  puVar12 = param_4 + uVar11;
                  uVar6 = puVar12[1];
                  uVar3 = puVar12[2];
                  uVar4 = puVar12[3];
                  uVar17 = (ulonglong)uVar10;
                  puVar19 = puVar9 + uVar11;
                  *puVar19 = *puVar12 >> uVar17;
                  puVar19[1] = uVar6 >> uVar17;
                  puVar19[2] = uVar3 >> uVar17;
                  puVar19[3] = uVar4 >> uVar17;
                  uVar6 = uVar11 + 4;
                  uVar11 = uVar11 + 0x10;
                  puVar12 = param_4 + uVar6;
                  uVar3 = puVar12[1];
                  uVar4 = puVar12[2];
                  uVar5 = puVar12[3];
                  puVar19 = puVar9 + uVar6;
                  *puVar19 = *puVar12 >> uVar17;
                  puVar19[1] = uVar3 >> uVar17;
                  puVar19[2] = uVar4 >> uVar17;
                  puVar19[3] = uVar5 >> uVar17;
                  uVar6 = uVar7;
                } while (uVar7 < uVar14 - (uVar18 & 0xf));
                if (uVar14 <= uVar7) goto LAB_1805e3b07;
              }
            }
            puVar12 = puVar9 + uVar7;
            do {
              uVar7 = uVar7 + 1;
              *puVar12 = *(uint *)(lVar13 + (longlong)puVar12) >> ((byte)uVar10 & 0x1f);
              puVar12 = puVar12 + 1;
            } while (uVar7 < uVar14);
          }
LAB_1805e3b07:
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 0xd;
          lVar13 = lVar13 + -0x34;
        } while (uVar10 < uVar15);
      }
      iVar16 = local_80 + 1;
      uVar18 = iVar16 - uVar18;
      local_48 = param_4 + 0xa9;
      local_74 = 1;
      iVar20 = iVar16 - local_88;
      puVar9 = param_4 + 0xb8;
      if (1 < (longlong)(int)uVar14) {
        local_58 = (longlong)(int)uVar14 + -1;
        local_7c = uVar18;
        local_78 = iVar20;
        puVar12 = param_4;
        do {
          local_70 = puVar12 + 1;
          puVar19 = local_70;
          local_60 = puVar12[0xab];
          lVar13 = (longlong)(int)puVar12[0xaa];
          uVar10 = iVar16 - local_74;
          if (local_88 - uVar10 < uVar18) {
            param_2 = param_2 & 0xffffffffffff0000;
            FUN_1805e2950(param_1 + (ulonglong)*local_70 + 1,lVar13 + (longlong)puVar9,
                          (longlong)(int)local_60 + (longlong)puVar9,uVar10,local_88,param_2,1);
          }
          else {
            uVar18 = *local_70;
            iVar20 = iVar20 + uVar10;
            iVar8 = 1 << ((byte)(local_88 - uVar10) & 0x1f);
            if (iVar20 < 1) {
              iVar20 = 1;
            }
            local_64 = iVar8;
            if (lVar13 != (int)local_60) {
              local_50 = param_4 + (ulonglong)uVar10 * 0xd;
              puVar12 = param_4 + 0xa9;
              do {
                param_2 = CONCAT44((int)(param_2 >> 0x20),uVar14);
                FUN_1805e2d40(param_1 + (longlong)(int)uVar18 + 1,local_88,uVar10,local_50,iVar20,
                              param_2,puVar9,puVar12,iVar16,
                              *(undefined1 *)(lVar13 + (longlong)puVar9));
                uVar18 = uVar18 + iVar8;
                lVar13 = lVar13 + 1;
                puVar12 = local_48;
              } while (lVar13 != (int)local_60);
            }
            puVar19 = local_70;
            uVar18 = local_7c;
            iVar20 = local_78;
          }
          local_74 = local_74 + 1;
          local_58 = local_58 + -1;
          puVar12 = puVar19;
        } while (local_58 != 0);
      }
      local_84._3_1_ = (undefined1)(uVar1 >> 0x18);
      local_84 = CONCAT22(CONCAT11(local_84._3_1_,(char)local_88),CONCAT11(1,(char)uVar1));
      *param_1 = local_84;
      return local_40;
    }
  }
  return 0xffffffffffffffd4;
}



