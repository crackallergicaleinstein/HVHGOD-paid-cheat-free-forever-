// FUN_1805e3160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e3160 */

ulonglong FUN_1805e3160(uint *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       ulonglong param_5,undefined4 param_6)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar15;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  byte bVar11;
  byte bVar10;
  byte bVar9;
  undefined2 uVar16;
  byte bVar17;
  longlong *plVar18;
  char cVar19;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  undefined2 *puVar23;
  ushort *puVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  char cVar30;
  int iVar31;
  char *pcVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  byte *pbVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *plVar38;
  uint uVar39;
  uint uVar40;
  ushort uVar41;
  char cVar43;
  char cVar44;
  uint uVar42;
  uint uVar45;
  undefined4 local_res8;
  uint local_res20;
  uint local_88 [4];
  int *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined4 local_58;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res8 = 0;
  local_88[0] = 0;
  if (0x5d3 < param_5) {
    piVar20 = param_4 + 0x135;
    local_68 = thunk_FUN_1805dd9e0(piVar20,0x100,param_4,local_88,&local_res8,param_2,param_3,
                                   param_4 + 0x1a,0x36c,param_6);
    uVar39 = local_88[0];
    if (0xffffffffffffff88 < local_68) {
      return local_68;
    }
    uVar27 = *param_1;
    uVar40 = (uVar27 & 0xff) + 1;
    param_5._0_1_ = (byte)uVar27;
    param_5._3_1_ = (undefined1)(uVar27 >> 0x18);
    local_res20 = local_res8;
    uVar29 = 0xb;
    if (uVar40 < 0xb) {
      uVar29 = (ulonglong)uVar40;
    }
    uVar27 = (uint)uVar29;
    if (local_res8 <= uVar27) {
      if (local_res8 < uVar27) {
        uVar21 = uVar27 - local_res8;
        uVar33 = 0;
        if (local_88[0] != 0) {
          cVar30 = (char)uVar21;
          if (7 < local_88[0]) {
            uVar6 = (ushort)uVar21;
            uVar2 = uVar6 & 0xff;
            uVar3 = uVar6 & 0xff;
            uVar4 = uVar6 & 0xff;
            uVar6 = uVar6 & 0xff;
            bVar17 = ((uVar21 & 0xff) != 0) * (uVar2 < 0x100) * cVar30 - (0xff < uVar2);
            uVar41 = (ushort)bVar17;
            bVar9 = ((uVar21 & 0xff) != 0) * (uVar3 < 0x100) * cVar30 - (0xff < uVar3);
            bVar10 = ((uVar21 & 0xff) != 0) * (uVar4 < 0x100) * cVar30 - (0xff < uVar4);
            bVar11 = ((uVar21 & 0xff) != 0) * (uVar6 < 0x100) * cVar30 - (0xff < uVar6);
            bVar12 = ((uVar21 & 0xff) != 0) * (uVar2 < 0x100) * cVar30 - (0xff < uVar2);
            bVar13 = ((uVar21 & 0xff) != 0) * (uVar3 < 0x100) * cVar30 - (0xff < uVar3);
            bVar14 = ((uVar21 & 0xff) != 0) * (uVar4 < 0x100) * cVar30 - (0xff < uVar4);
            bVar15 = ((uVar21 & 0xff) != 0) * (uVar6 < 0x100) * cVar30 - (0xff < uVar6);
            uVar2 = (ushort)bVar9;
            uVar3 = (ushort)bVar10;
            uVar4 = (ushort)bVar11;
            uVar6 = (ushort)bVar12;
            cStack_54 = (bVar12 != 0) * (uVar6 < 0x100) * bVar12 - (0xff < uVar6);
            uVar5 = (ushort)bVar13;
            cStack_53 = (bVar13 != 0) * (uVar5 < 0x100) * bVar13 - (0xff < uVar5);
            uVar7 = (ushort)bVar14;
            cStack_52 = (bVar14 != 0) * (uVar7 < 0x100) * bVar14 - (0xff < uVar7);
            uVar8 = (ushort)bVar15;
            cStack_51 = (bVar15 != 0) * (uVar8 < 0x100) * bVar15 - (0xff < uVar8);
            cStack_50 = (bVar17 != 0) * (uVar41 < 0x100) * bVar17 - (0xff < uVar41);
            cStack_4f = (bVar9 != 0) * (uVar2 < 0x100) * bVar9 - (0xff < uVar2);
            cStack_4e = (bVar10 != 0) * (uVar3 < 0x100) * bVar10 - (0xff < uVar3);
            cStack_4d = (bVar11 != 0) * (uVar4 < 0x100) * bVar11 - (0xff < uVar4);
            cStack_4c = (bVar12 != 0) * (uVar6 < 0x100) * bVar12 - (0xff < uVar6);
            cStack_4b = (bVar13 != 0) * (uVar5 < 0x100) * bVar13 - (0xff < uVar5);
            cStack_4a = (bVar14 != 0) * (uVar7 < 0x100) * bVar14 - (0xff < uVar7);
            cStack_49 = (bVar15 != 0) * (uVar8 < 0x100) * bVar15 - (0xff < uVar8);
            local_58 = CONCAT13((bVar11 != 0) * (uVar4 < 0x100) * bVar11 - (0xff < uVar4),
                                CONCAT12((bVar10 != 0) * (uVar3 < 0x100) * bVar10 - (0xff < uVar3),
                                         CONCAT11((bVar9 != 0) * (uVar2 < 0x100) * bVar9 -
                                                  (0xff < uVar2),
                                                  (bVar17 != 0) * (uVar41 < 0x100) * bVar17 -
                                                  (0xff < uVar41))));
            local_48 = 0;
            uStack_40 = 0;
            local_78 = (int *)0x0;
            uStack_70 = 0;
            do {
              uVar1 = *(undefined4 *)(uVar33 + (longlong)piVar20);
              uVar34 = (ulonglong)((int)uVar33 + 4);
              cVar43 = (char)((uint)uVar1 >> 8);
              cVar44 = (char)((uint)uVar1 >> 0x10);
              cVar19 = (char)((uint)uVar1 >> 0x18);
              uVar42 = ~CONCAT13(-(cVar19 == '\0'),
                                 CONCAT12(-(cVar44 == '\0'),
                                          CONCAT11(-(cVar43 == '\0'),-((char)uVar1 == '\0')))) &
                       local_58;
              *(uint *)(uVar33 + (longlong)piVar20) =
                   CONCAT13((char)(uVar42 >> 0x18) + cVar19,
                            CONCAT12((char)(uVar42 >> 0x10) + cVar44,
                                     CONCAT11((char)(uVar42 >> 8) + cVar43,
                                              (char)uVar42 + (char)uVar1)));
              uVar42 = (int)uVar33 + 8;
              uVar33 = (ulonglong)uVar42;
              uVar1 = *(undefined4 *)(uVar34 + (longlong)piVar20);
              cVar43 = (char)((uint)uVar1 >> 8);
              cVar44 = (char)((uint)uVar1 >> 0x10);
              cVar19 = (char)((uint)uVar1 >> 0x18);
              uVar45 = ~CONCAT13(-(cVar19 == '\0'),
                                 CONCAT12(-(cVar44 == '\0'),
                                          CONCAT11(-(cVar43 == '\0'),-((char)uVar1 == '\0')))) &
                       local_58;
              *(uint *)(uVar34 + (longlong)piVar20) =
                   CONCAT13((char)(uVar45 >> 0x18) + cVar19,
                            CONCAT12((char)(uVar45 >> 0x10) + cVar44,
                                     CONCAT11((char)(uVar45 >> 8) + cVar43,
                                              (char)uVar45 + (char)uVar1)));
            } while (uVar42 < (local_88[0] & 0xfffffff8));
          }
          if ((uint)uVar33 < local_88[0]) {
            uVar34 = (ulonglong)(local_88[0] - (uint)uVar33);
            pcVar32 = (char *)(uVar33 + (longlong)piVar20);
            do {
              cVar19 = cVar30;
              if (*pcVar32 == '\0') {
                cVar19 = '\0';
              }
              *pcVar32 = cVar19 + *pcVar32;
              uVar34 = uVar34 - 1;
              pcVar32 = pcVar32 + 1;
            } while (uVar34 != 0);
          }
        }
        if (uVar21 < uVar27) {
          piVar20 = param_4 + uVar29;
          do {
            iVar25 = (int)uVar29;
            uVar42 = iVar25 - 1;
            uVar29 = (ulonglong)uVar42;
            *piVar20 = param_4[iVar25 - uVar21];
            piVar20 = piVar20 + -1;
          } while (uVar21 < uVar42);
        }
        if (uVar21 != 0) {
          FUN_18063ab10(param_4 + 1,0,(ulonglong)uVar21 * 4);
        }
      }
      local_res20 = uVar27;
    }
    if (local_res20 <= uVar40) {
      iVar25 = uVar39 - 3;
      *param_1 = CONCAT13(param_5._3_1_,CONCAT12((char)local_res20,(ushort)(byte)param_5));
      if (0 < (int)(local_res20 + 1)) {
        uVar29 = (ulonglong)(local_res20 + 1);
        piVar20 = param_4;
        iVar31 = 0;
        do {
          iVar28 = *piVar20;
          piVar20[0xd] = iVar31;
          piVar20 = piVar20 + 1;
          uVar29 = uVar29 - 1;
          iVar31 = iVar31 + iVar28;
        } while (uVar29 != 0);
      }
      iVar31 = 0;
      if (0 < iVar25) {
        pbVar35 = (byte *)((longlong)param_4 + 0x4d5);
        do {
          bVar17 = pbVar35[-1];
          cVar30 = (char)iVar31;
          *(char *)((ulonglong)(uint)param_4[(ulonglong)bVar17 + 0xd] + 0x3d4 + (longlong)param_4) =
               cVar30;
          param_4[(ulonglong)bVar17 + 0xd] = param_4[(ulonglong)bVar17 + 0xd] + 1;
          bVar17 = *pbVar35;
          *(char *)((ulonglong)(uint)param_4[(ulonglong)bVar17 + 0xd] + 0x3d4 + (longlong)param_4) =
               cVar30 + '\x01';
          param_4[(ulonglong)bVar17 + 0xd] = param_4[(ulonglong)bVar17 + 0xd] + 1;
          bVar17 = pbVar35[1];
          *(char *)((ulonglong)(uint)param_4[(ulonglong)bVar17 + 0xd] + 0x3d4 + (longlong)param_4) =
               cVar30 + '\x02';
          param_4[(ulonglong)bVar17 + 0xd] = param_4[(ulonglong)bVar17 + 0xd] + 1;
          iVar31 = iVar31 + 4;
          bVar17 = pbVar35[2];
          *(char *)((ulonglong)(uint)param_4[(ulonglong)bVar17 + 0xd] + 0x3d4 + (longlong)param_4) =
               cVar30 + '\x03';
          param_4[(ulonglong)bVar17 + 0xd] = param_4[(ulonglong)bVar17 + 0xd] + 1;
          pbVar35 = pbVar35 + 4;
        } while (iVar31 < iVar25);
        uVar39 = local_88[0];
      }
      if (iVar31 < (int)uVar39) {
        do {
          uVar29 = (ulonglong)*(byte *)((longlong)iVar31 + 0x4d4 + (longlong)param_4);
          *(char *)((ulonglong)(uint)param_4[uVar29 + 0xd] + 0x3d4 + (longlong)param_4) =
               (char)iVar31;
          iVar31 = iVar31 + 1;
          param_4[uVar29 + 0xd] = param_4[uVar29 + 0xd] + 1;
        } while (iVar31 < (int)local_88[0]);
      }
      iVar25 = *param_4;
      uVar39 = 1;
      local_88[0] = 0;
      if (1 < local_res20 + 1) {
        local_78 = param_4;
        do {
          local_78 = local_78 + 1;
          lVar36 = 0;
          iVar31 = *local_78;
          lVar26 = (longlong)iVar31;
          lVar37 = (longlong)(int)local_88[0];
          iVar28 = (1 << ((byte)uVar39 & 0x1f)) >> 1;
          bVar17 = ((char)local_res20 - (byte)uVar39) + 1;
          if (iVar28 == 1) {
            if (0 < iVar31) {
              local_res8._0_2_ = (ushort)bVar17;
              puVar24 = (ushort *)((longlong)param_1 + lVar37 * 2 + 4);
              do {
                local_res8._0_2_ =
                     CONCAT11(*(undefined1 *)((longlong)param_4 + lVar36 + (longlong)iVar25 + 0x3d4)
                              ,(undefined1)(ushort)local_res8);
                lVar36 = lVar36 + 1;
                *puVar24 = (ushort)local_res8;
                puVar24 = puVar24 + 1;
              } while (lVar36 < lVar26);
            }
          }
          else if (iVar28 == 2) {
            if (0 < iVar31) {
              puVar23 = (undefined2 *)((longlong)param_1 + lVar37 * 2 + 4);
              do {
                lVar37 = lVar36 + (longlong)iVar25 + 0x3d4;
                lVar36 = lVar36 + 1;
                uVar16 = CONCAT11(*(undefined1 *)((longlong)param_4 + lVar37),bVar17);
                *puVar23 = uVar16;
                puVar23[1] = uVar16;
                puVar23 = puVar23 + 2;
              } while (lVar36 < lVar26);
            }
          }
          else if (iVar28 == 4) {
            if (0 < iVar31) {
              plVar38 = (longlong *)((longlong)param_1 + lVar37 * 2 + 4);
              do {
                lVar37 = lVar36 + (longlong)iVar25 + 0x3d4;
                lVar36 = lVar36 + 1;
                *plVar38 = (ulonglong)CONCAT11(*(undefined1 *)((longlong)param_4 + lVar37),bVar17) *
                           0x1000100010001;
                plVar38 = plVar38 + 1;
              } while (lVar36 < lVar26);
            }
          }
          else if (iVar28 == 8) {
            if (0 < iVar31) {
              plVar38 = (longlong *)((longlong)param_1 + lVar37 * 2 + 4);
              do {
                lVar37 = lVar36 + (longlong)iVar25 + 0x3d4;
                lVar36 = lVar36 + 1;
                lVar37 = (ulonglong)CONCAT11(*(undefined1 *)((longlong)param_4 + lVar37),bVar17) *
                         0x1000100010001;
                *plVar38 = lVar37;
                plVar38[1] = lVar37;
                plVar38 = plVar38 + 2;
              } while (lVar36 < lVar26);
            }
          }
          else if (0 < iVar31) {
            plVar38 = (longlong *)((longlong)param_1 + lVar37 * 2 + 0x14);
            do {
              lVar37 = (ulonglong)
                       CONCAT11(*(undefined1 *)
                                 ((longlong)param_4 + lVar36 + (longlong)iVar25 + 0x3d4),bVar17) *
                       0x1000100010001;
              if (0 < iVar28) {
                lVar22 = ((longlong)iVar28 - 1U >> 4) + 1;
                plVar18 = plVar38;
                do {
                  plVar18[-2] = lVar37;
                  plVar18[-1] = lVar37;
                  *plVar18 = lVar37;
                  plVar18[1] = lVar37;
                  plVar18 = plVar18 + 4;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              plVar38 = (longlong *)((longlong)plVar38 + (longlong)iVar28 * 2);
              lVar36 = lVar36 + 1;
            } while (lVar36 < lVar26);
          }
          iVar25 = iVar25 + iVar31;
          uVar39 = uVar39 + 1;
          local_88[0] = local_88[0] + iVar28 * iVar31;
        } while (uVar39 < local_res20 + 1);
      }
      return local_68;
    }
  }
  return 0xffffffffffffffd4;
}



