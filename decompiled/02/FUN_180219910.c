// FUN_180219910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180219910 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180219910(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auVar9 [32];
  char cVar10;
  HMODULE pHVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  byte *pbVar20;
  ulonglong uVar21;
  byte *pbVar22;
  undefined1 auStack_328 [32];
  longlong local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  uint uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  ulonglong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [32];
  int local_268;
  ushort uStack_262;
  ushort uStack_254;
  uint uStack_218;
  undefined8 local_158 [34];
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  pHVar11 = GetModuleHandleW(L"client.dll");
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (pHVar11 == (HMODULE)0x0) {
    bVar8 = false;
  }
  else {
    local_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    cVar10 = FUN_1804514f0(&local_2f8,pHVar11,0x40);
    if (cVar10 == '\0') {
      bVar8 = false;
    }
    else {
      local_298._4_4_ = uStack_2d4;
      local_298._0_4_ = local_2d8;
      local_298._8_8_ = uStack_2d0;
      local_298._16_8_ = uStack_2c8;
      local_298._24_8_ = uStack_2c0;
      local_2b8 = local_2f8;
      uStack_2b0 = uStack_2f0;
      uStack_2a8 = uStack_2e8;
      uStack_2a0 = uStack_2e0;
      bVar8 = true;
    }
  }
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  if ((bVar8) && ((short)local_2b8 == 0x5a4d)) {
    lVar12 = (longlong)(int)local_298._28_4_;
    if (local_298._28_4_ - 1 < 0x1000) {
      lVar15 = (longlong)&pHVar11->unused + lVar12;
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      bVar8 = false;
      if (lVar15 != 0) {
        FUN_18063ab10(local_158,0,0x108);
        cVar10 = FUN_1804514f0(local_158,lVar15,0x108);
        if (cVar10 == '\0') {
          bVar8 = false;
        }
        else {
          lVar15 = 2;
          puVar14 = local_158;
          piVar17 = &local_268;
          do {
            piVar1 = piVar17 + 0x20;
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            auVar4 = *(undefined1 (*) [16])(puVar14 + 0xe);
            puVar2 = puVar14 + 0x10;
            *(undefined8 *)piVar17 = *puVar14;
            *(undefined8 *)(piVar17 + 2) = uVar5;
            *(undefined8 *)(piVar17 + 4) = uVar6;
            *(undefined8 *)(piVar17 + 6) = uVar7;
            uVar5 = puVar14[5];
            uVar6 = puVar14[6];
            uVar7 = puVar14[7];
            *(undefined8 *)(piVar17 + 8) = puVar14[4];
            *(undefined8 *)(piVar17 + 10) = uVar5;
            *(undefined8 *)(piVar17 + 0xc) = uVar6;
            *(undefined8 *)(piVar17 + 0xe) = uVar7;
            uVar5 = puVar14[9];
            uVar6 = puVar14[10];
            uVar7 = puVar14[0xb];
            *(undefined8 *)(piVar17 + 0x10) = puVar14[8];
            *(undefined8 *)(piVar17 + 0x12) = uVar5;
            *(undefined8 *)(piVar17 + 0x14) = uVar6;
            *(undefined8 *)(piVar17 + 0x16) = uVar7;
            uVar5 = puVar14[0xd];
            *(undefined8 *)(piVar17 + 0x18) = puVar14[0xc];
            *(undefined8 *)(piVar17 + 0x1a) = uVar5;
            *(undefined1 (*) [16])(piVar17 + 0x1c) = auVar4;
            lVar15 = lVar15 + -1;
            puVar14 = puVar2;
            piVar17 = piVar1;
          } while (lVar15 != 0);
          bVar8 = true;
          *(undefined8 *)piVar1 = *puVar2;
        }
      }
      lVar15 = FUN_18017ea70();
      if (*(int *)(lVar15 + 4) != 0) {
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
      }
      if (((bVar8) && (local_268 == 0x4550)) && (uStack_262 < 0x21)) {
        lVar15 = *param_1;
        local_308 = (longlong)&pHVar11[6].unused + lVar12 + (ulonglong)uStack_254;
        lVar12 = param_1[1] - lVar15;
        local_38 = 0;
        uVar18 = lVar12 >> 2;
        pbVar22 = (byte *)0x0;
        local_48 = (undefined1  [16])0x0;
        if (uVar18 != 0) {
          if (0x3fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          local_48._8_8_ = FUN_18015bca0(uVar18 * 4);
          lVar13 = uVar18 * 4 + local_48._8_8_;
          local_48._0_8_ = local_48._8_8_;
          local_38 = lVar13;
          FUN_18063aed0(local_48._8_8_,lVar15,lVar12);
          local_48._8_8_ = lVar13;
        }
        uVar19 = 0;
        if (uStack_262 != 0) {
          do {
            lVar12 = local_308 + (ulonglong)uVar19 * 0x28;
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            bVar8 = false;
            if (lVar12 != 0) {
              local_2b8 = 0;
              uStack_2b0 = 0;
              uStack_2a8 = 0;
              uStack_2a0 = 0;
              auVar9._24_8_ = 0;
              auVar9._0_24_ = local_298._8_24_;
              local_298 = auVar9 << 0x40;
              cVar10 = FUN_1804514f0(&local_2b8,lVar12,0x28);
              if (cVar10 == '\0') {
                bVar8 = false;
              }
              else {
                local_2f8 = local_2b8;
                uStack_2f0 = uStack_2b0;
                uStack_2e8 = uStack_2a8;
                uStack_2e0 = uStack_2a0;
                local_2d8 = local_298._0_4_;
                uStack_2d4 = local_298._4_4_;
                bVar8 = true;
              }
            }
            lVar12 = FUN_18017ea70();
            if (*(int *)(lVar12 + 4) != 0) {
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
            }
            if ((bVar8) && ((uStack_2d4 & 0x20000000) != 0)) {
              uVar18 = uStack_2f0 & 0xffffffff;
              if ((uStack_2f0 & 0xffffffff) <
                  (ulonglong)((longlong)(local_48._8_8_ - local_48._0_8_) >> 2)) break;
              if ((uStack_218 < uStack_2f0._4_4_) ||
                 (uStack_218 - uStack_2f0._4_4_ < (uint)uStack_2f0)) break;
              pbVar3 = (byte *)((longlong)&pHVar11->unused + (ulonglong)uStack_2f0._4_4_);
              cVar10 = FUN_1804513c0(pbVar3,uStack_2f0 & 0xffffffff,0);
              if (cVar10 == '\0') break;
              uVar21 = (longlong)(local_48._8_8_ - local_48._0_8_) >> 2;
              pbVar20 = pbVar3;
              do {
                if ((uint)*pbVar20 == *(uint *)local_48._0_8_) {
                  uVar16 = 1;
                  if (1 < uVar21) {
                    do {
                      if ((-1 < (int)*(uint *)(local_48._0_8_ + uVar16 * 4)) &&
                         ((uint)pbVar20[uVar16] != *(uint *)(local_48._0_8_ + uVar16 * 4)))
                      goto LAB_180219cb8;
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < uVar21);
                  }
                  if (pbVar22 != (byte *)0x0) goto LAB_180219cda;
                  pbVar22 = pbVar20;
                }
LAB_180219cb8:
                pbVar20 = pbVar20 + 1;
              } while ((ulonglong)((longlong)pbVar20 - (longlong)pbVar3) <= uVar18 - uVar21);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < uStack_262);
        }
LAB_180219cda:
        FUN_180159650(local_48);
      }
    }
  }
}



