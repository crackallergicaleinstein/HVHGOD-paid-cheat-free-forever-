// FUN_18036bf00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036bf00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036bf00(undefined1 (*param_1) [16])

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  ulonglong *puVar11;
  undefined8 ******ppppppuVar12;
  byte *pbVar13;
  undefined8 ******ppppppuVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  uint local_178;
  undefined1 local_170 [16];
  undefined1 local_158 [16];
  undefined1 auStack_148 [16];
  ulonglong local_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined1 (*local_b8) [16];
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined8 ******local_70 [2];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  uVar15 = 1;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  local_178 = 1;
  local_b8 = param_1;
  FUN_18036be20(local_d8);
  if (local_c8 != 0) {
    local_170 = (undefined1  [16])0x0;
    iVar7 = FUN_1801c5780(local_170,local_d8,0);
    local_108 = (undefined1  [16])0x0;
    if (iVar7 == 0) {
      uVar17 = 0;
      uVar18 = 0xf;
      do {
        if (local_170._0_8_ == 0) break;
        lVar9 = local_170._0_8_ + 0x20;
        cVar6 = FUN_18036bda0(lVar9);
        if (cVar6 != '\0') {
          puVar8 = (undefined8 *)FUN_1801e9e90(lVar9,&local_50);
          local_118 = puVar8;
          if (7 < (ulonglong)puVar8[3]) {
            local_118 = (undefined8 *)*puVar8;
          }
          local_110 = puVar8[2];
          FUN_1801a4fb0(local_70);
          uVar16 = uVar15 | 2;
          local_178 = uVar16;
          FUN_18015b930(&local_50);
          ppppppuVar14 = local_70;
          if (0xf < local_58) {
            ppppppuVar14 = local_70[0];
          }
          ppppppuVar12 = local_70;
          if (0xf < local_58) {
            ppppppuVar12 = local_70[0];
          }
          FUN_1802ec710(&local_90,ppppppuVar12,(longlong)ppppppuVar14 + local_60);
          pbVar13 = &local_90;
          if (0xf < uStack_78) {
            pbVar13 = (byte *)CONCAT71(uStack_8f,local_90);
          }
          if ((((uStack_80 != 0) && (uStack_80 < 0xf1)) && ((uStack_80 != 1 || (*pbVar13 != 0x2e))))
             && ((uStack_80 != 2 || (*(short *)pbVar13 != 0x2e2e)))) {
            pbVar1 = pbVar13 + uStack_80;
            bVar2 = pbVar1[-1];
            if ((bVar2 != 0x2e) && (bVar2 != 0x20)) {
              local_188 = 10;
              lVar9 = FUN_18010fae0(pbVar13);
              if (lVar9 == -1) {
                for (; pbVar13 != pbVar1; pbVar13 = pbVar13 + 1) {
                  if (*pbVar13 < 0x20) goto LAB_18036c249;
                }
                local_158 = (undefined1  [16])0x0;
                auStack_148 = (undefined1  [16])0x0;
                FUN_18015ba30(local_158,"skyboxes/",9);
                pbVar13 = &local_90;
                if (0xf < uStack_78) {
                  pbVar13 = (byte *)CONCAT71(uStack_8f,local_90);
                }
                pauVar10 = (undefined1 (*) [16])FUN_18015b2a0(local_158,pbVar13,uStack_80);
                local_f8 = *pauVar10;
                auStack_e8 = pauVar10[1];
                *(undefined8 *)(pauVar10[1] + 8) = 0xf;
                (*pauVar10)[0] = 0;
                *(undefined8 *)pauVar10[1] = 0;
                local_178 = uVar15 | 6;
                puVar11 = (ulonglong *)FUN_18015b2a0(local_f8,&DAT_1808055d8,5);
                local_b0 = *puVar11;
                uStack_a8 = puVar11[1];
                uStack_a0 = puVar11[2];
                uStack_98 = puVar11[3];
                *(undefined1 *)puVar11 = 0;
                puVar11[2] = 0;
                puVar11[3] = 0xf;
                local_178 = uVar15 | 0xe;
                local_50 = local_b0;
                uStack_48 = uStack_a8;
                uStack_40 = uStack_a0;
                uStack_38 = uStack_98;
                FUN_18015c010(local_f8);
                FUN_18015c010(local_158);
                uVar5 = uStack_78;
                uVar4 = uStack_80;
                local_158._0_8_ = CONCAT71(uStack_8f,local_90);
                local_158._8_8_ = uStack_88;
                auStack_148._8_8_ = uStack_78;
                auStack_148._0_8_ = uStack_80;
                uStack_80 = 0;
                uStack_78 = 0xf;
                local_90 = 0;
                local_138 = local_b0;
                uStack_130 = uStack_a8;
                uStack_128 = uStack_a0;
                uStack_120 = uStack_98;
                local_50 = local_50 & 0xffffffffffffff00;
                puVar8 = *(undefined8 **)(*param_1 + 8);
                uStack_40 = uVar17;
                uStack_38 = uVar18;
                if (puVar8 == *(undefined8 **)param_1[1]) {
                  FUN_18036f9a0(param_1,puVar8,local_158);
                }
                else {
                  *puVar8 = local_158._0_8_;
                  puVar8[1] = uStack_88;
                  puVar8[2] = uVar4;
                  puVar8[3] = uVar5;
                  auStack_148._8_8_ = uVar18;
                  auStack_148._0_8_ = uVar17;
                  auVar3[0xf] = 0;
                  auVar3._0_15_ = local_158._1_15_;
                  local_158 = auVar3 << 8;
                  puVar8[4] = local_b0;
                  puVar8[5] = uStack_a8;
                  puVar8[6] = uStack_a0;
                  puVar8[7] = uStack_98;
                  local_138 = local_b0 & 0xffffffffffffff00;
                  *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x40;
                  uStack_128 = uVar17;
                  uStack_120 = uVar18;
                }
                FUN_18015c010(&local_138);
                FUN_18015c010(local_158);
                FUN_18015c010(&local_50);
                uVar16 = uVar15 | 0xe;
              }
            }
          }
LAB_18036c249:
          uVar15 = uVar16;
          FUN_18015c010(&local_90);
          FUN_18015c010(local_70);
        }
        iVar7 = FUN_1801bde70(local_170);
      } while (iVar7 == 0);
    }
    FUN_1800efed0(local_108);
    FUN_1800efed0(local_170);
    local_188 = local_188 & 0xffffffff00000000;
    FUN_18036ef50(*(longlong *)*param_1,*(longlong *)(*param_1 + 8),
                  *(longlong *)(*param_1 + 8) - *(longlong *)*param_1 >> 6,0);
  }
  FUN_18015b930(local_d8);
}



