// FUN_18039f720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039f720 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_18039f720(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int local_res10;
  ulonglong local_res18;
  longlong local_res20;
  undefined4 local_218;
  undefined1 local_214 [12];
  undefined4 uStack_208;
  uint uStack_204;
  undefined4 local_200;
  undefined1 local_1fc [16];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  ulonglong local_188;
  ulonglong local_170;
  ulonglong local_158;
  ulonglong local_140;
  ulonglong local_128;
  undefined8 local_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined1 local_100 [32];
  undefined8 local_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_78;
  undefined1 local_68 [12];
  uint uStack_5c;
  
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar8 = (ulonglong)uVar2;
  if ((uVar2 < 0x21) && ((int)uVar2 <= *(int *)(param_2 + 0x34))) {
    lVar10 = *(longlong *)(param_2 + 0x38);
    local_res10 = (int)param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (lVar10 == 0) {
      if ((uVar2 != 0) || (*(int *)(param_2 + 0x34) != 0)) goto LAB_18039f77e;
    }
    else {
      lVar7 = FUN_18017ea70();
      local_res18 = local_res18 & 0xffffffff00000000;
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      cVar6 = FUN_1804514f0(&local_res18,lVar10,4);
      iVar13 = local_res10;
      if (cVar6 != '\0') {
        iVar13 = (int)local_res18;
      }
      uVar8 = FUN_18017ea70();
      if (*(int *)(uVar8 + 4) != 0) {
        *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1;
      }
      if (((cVar6 == '\0') || (iVar13 < *(int *)(param_2 + 0x30))) ||
         (*(int *)(param_2 + 0x34) < iVar13)) goto LAB_18039f77e;
    }
    lVar10 = *(longlong *)(param_2 + 0x38);
    if (lVar10 != 0) {
      lVar7 = FUN_18017ea70();
      local_res18 = local_res18 & 0xffffffff00000000;
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      cVar6 = FUN_1804514f0(&local_res18,lVar10,4);
      if (cVar6 != '\0') {
        local_res10 = (int)local_res18;
      }
      uVar8 = FUN_18017ea70();
      if (*(int *)(uVar8 + 4) != 0) {
        *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1;
      }
      if (cVar6 != '\0') {
        uVar2 = *(uint *)(param_1 + 0x8c);
        uVar8 = (ulonglong)uVar2;
        if ((int)uVar2 <= local_res10) {
          iVar13 = 0;
          if (0 < (int)uVar2) {
            local_1d8 = 0;
            uVar14 = param_2;
            do {
              lVar7 = local_1d8;
              lVar10 = *(longlong *)(param_2 + 0x38) + ((longlong)iVar13 + 1) * 8;
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              bVar3 = false;
              if (lVar10 != 0) {
                local_res18 = 0;
                cVar6 = FUN_1804514f0(&local_res18,lVar10,8);
                if (cVar6 == '\0') {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                  uVar14 = local_res18;
                }
              }
              lVar10 = FUN_18017ea70();
              if (*(int *)(lVar10 + 4) != 0) {
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
              }
              if ((bVar3) && (uVar14 != 0)) {
                FUN_18024eed0(&local_e0,uVar14 + 0x10);
                local_100._8_8_ = uStack_98;
                local_100._0_8_ = local_a0;
                local_100._16_8_ = uStack_90;
                local_100._24_8_ = uStack_88;
              }
              else {
                local_100._8_8_ = uStack_98;
                local_100._0_8_ = local_a0;
                local_100._16_8_ = uStack_90;
                local_100._24_8_ = uStack_88;
                cStack_78 = '\0';
              }
              lVar10 = lStack_d8;
              uVar2 = uStack_204;
              uVar8 = 0;
              local_120 = local_e0;
              lStack_118 = lStack_d8;
              lStack_110 = lStack_d0;
              lStack_108 = lStack_c8;
              if (cStack_78 == '\0') goto LAB_18039f77e;
              plVar15 = (longlong *)(param_4 + lVar7 * 0x50);
              uVar8 = lVar7 * 0x148;
              *plVar15 = uVar14 + 0x10;
              lVar7 = param_1 + uVar8;
              local_1b8 = local_c0;
              lStack_1b0 = lStack_b8;
              lStack_1a8 = lStack_b0;
              lStack_1a0 = lStack_a8;
              if (*(char *)(lVar7 + 0x11c) != '\0') {
                if (lStack_d8 == 0) {
                  uStack_204 = uStack_204 & 0xffffff00;
                  local_188 = CONCAT44(uVar2,uStack_208) & 0xffffff00ffffffff;
                }
                else {
                  lVar9 = lStack_d8 + 0x10;
                  lVar11 = FUN_18017ea70();
                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                  if (lVar9 == 0) {
LAB_18039f9e4:
                    uStack_204 = uStack_204 & 0xffffff00;
                  }
                  else {
                    local_200 = 0;
                    local_1fc = (undefined1  [16])0x0;
                    cVar6 = FUN_1804514f0(&local_200,lVar9,0x14);
                    if (cVar6 == '\0') goto LAB_18039f9e4;
                    uStack_208 = local_1fc._12_4_;
                    uStack_204 = CONCAT31(uStack_204._1_3_,1);
                  }
                  lVar9 = FUN_18017ea70();
                  if (*(int *)(lVar9 + 4) != 0) {
                    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                  }
                  local_188 = CONCAT44(uStack_204,uStack_208);
                }
                uVar8 = local_188 >> 0x20;
                if ((char)(local_188 >> 0x20) == '\0') goto LAB_18039f77e;
                uVar8 = lVar10 + 0x10;
                uVar12 = 0;
                if (lVar10 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[1] = uVar12;
              }
              lVar10 = lStack_110;
              if (*(char *)(lVar7 + 300) != '\0') {
                if (lStack_110 == 0) {
                  uStack_5c = uStack_5c & 0xffffff00;
                  auVar1._12_4_ = uStack_5c;
                  auVar1._0_12_ = local_68;
                }
                else {
                  lVar9 = lStack_110 + 0x10;
                  lVar11 = FUN_18017ea70();
                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                  if (lVar9 == 0) {
LAB_18039faac:
                    uStack_1bc = uStack_1bc & 0xffffff00;
                  }
                  else {
                    local_1e8 = 0;
                    uStack_1e4 = 0;
                    uStack_1e0 = 0;
                    cVar6 = FUN_1804514f0(&local_1e8,lVar9,0xc);
                    if (cVar6 == '\0') goto LAB_18039faac;
                    local_1c8 = CONCAT44(uStack_1e4,local_1e8);
                    uStack_1c0 = uStack_1e0;
                    uStack_1bc = CONCAT31(uStack_1bc._1_3_,1);
                  }
                  lVar9 = FUN_18017ea70();
                  if (*(int *)(lVar9 + 4) != 0) {
                    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                  }
                  auVar1._8_4_ = uStack_1c0;
                  auVar1._0_8_ = local_1c8;
                  auVar1._12_4_ = uStack_1bc;
                }
                uVar8 = auVar1._8_8_ >> 0x20;
                if (auVar1[0xc] == '\0') goto LAB_18039f77e;
                uVar8 = lVar10 + 0x10;
                uVar12 = 0;
                if (lVar10 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[2] = uVar12;
              }
              lVar10 = lStack_108;
              uVar2 = uStack_204;
              if (*(char *)(lVar7 + 0x144) != '\0') {
                if (lStack_108 == 0) {
                  uStack_204 = uStack_204 & 0xffffff00;
                  local_170 = CONCAT44(uVar2,uStack_208) & 0xffffff00ffffffff;
                }
                else {
                  lVar9 = lStack_108 + 0x10;
                  lVar11 = FUN_18017ea70();
                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                  if (lVar9 == 0) {
LAB_18039fb6a:
                    uStack_204 = uStack_204 & 0xffffff00;
                  }
                  else {
                    local_200 = 0;
                    local_1fc = (undefined1  [16])0x0;
                    cVar6 = FUN_1804514f0(&local_200,lVar9,0x14);
                    if (cVar6 == '\0') goto LAB_18039fb6a;
                    uStack_208 = local_1fc._12_4_;
                    uStack_204 = CONCAT31(uStack_204._1_3_,1);
                  }
                  lVar9 = FUN_18017ea70();
                  if (*(int *)(lVar9 + 4) != 0) {
                    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                  }
                  local_170 = CONCAT44(uStack_204,uStack_208);
                }
                uVar8 = local_170 >> 0x20;
                if ((char)(local_170 >> 0x20) == '\0') goto LAB_18039f77e;
                uVar8 = lVar10 + 0x10;
                uVar12 = 0;
                if (lVar10 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[3] = uVar12;
              }
              uVar2 = uStack_204;
              if (*(char *)(lVar7 + 0x15c) != '\0') {
                if (local_1b8 == 0) {
                  uStack_204 = uStack_204 & 0xffffff00;
                  local_158 = CONCAT44(uVar2,uStack_208) & 0xffffff00ffffffff;
                }
                else {
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  if (local_1b8 + 0x10 == 0) {
LAB_18039fc1f:
                    uStack_204 = uStack_204 & 0xffffff00;
                  }
                  else {
                    local_200 = 0;
                    local_1fc = (undefined1  [16])0x0;
                    cVar6 = FUN_1804514f0(&local_200,local_1b8 + 0x10,0x14);
                    if (cVar6 == '\0') goto LAB_18039fc1f;
                    uStack_208 = local_1fc._12_4_;
                    uStack_204 = CONCAT31(uStack_204._1_3_,1);
                  }
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                  local_158 = CONCAT44(uStack_204,uStack_208);
                }
                uVar8 = local_158 >> 0x20;
                if ((char)(local_158 >> 0x20) == '\0') goto LAB_18039f77e;
                uVar8 = local_1b8 + 0x10;
                uVar12 = 0;
                if (local_1b8 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[4] = uVar12;
              }
              uVar2 = uStack_204;
              if (*(char *)(lVar7 + 0x174) != '\0') {
                if (lStack_1b0 == 0) {
                  uStack_204 = uStack_204 & 0xffffff00;
                  local_140 = CONCAT44(uVar2,uStack_208) & 0xffffff00ffffffff;
                }
                else {
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  if (lStack_1b0 + 0x10 == 0) {
LAB_18039fcdb:
                    uStack_204 = uStack_204 & 0xffffff00;
                  }
                  else {
                    local_200 = 0;
                    local_1fc = (undefined1  [16])0x0;
                    cVar6 = FUN_1804514f0(&local_200,lStack_1b0 + 0x10,0x14);
                    if (cVar6 == '\0') goto LAB_18039fcdb;
                    uStack_208 = local_1fc._12_4_;
                    uStack_204 = CONCAT31(uStack_204._1_3_,1);
                  }
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                  local_140 = CONCAT44(uStack_204,uStack_208);
                }
                uVar8 = local_140 >> 0x20;
                if ((char)(local_140 >> 0x20) == '\0') goto LAB_18039f77e;
                uVar8 = lStack_1b0 + 0x10;
                uVar12 = 0;
                if (lStack_1b0 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[5] = uVar12;
              }
              if (*(char *)(lVar7 + 400) != '\0') {
                if (lStack_1a8 == 0) goto LAB_18039f77e;
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                if (lStack_1a8 + 0x10 == 0) {
                  bVar4 = false;
                  bVar3 = false;
                }
                else {
                  local_218 = 0;
                  uStack_204 = 0;
                  local_214 = SUB1612((undefined1  [16])0x0,0);
                  uStack_208 = 0;
                  cVar6 = FUN_1804514f0(&local_218,lStack_1a8 + 0x10,0x18);
                  if (cVar6 == '\0') {
                    bVar3 = false;
                    bVar4 = false;
                  }
                  else {
                    bVar3 = true;
                    bVar4 = true;
                  }
                }
                uVar8 = FUN_18017ea70();
                if (*(int *)(uVar8 + 4) != 0) {
                  *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1;
                  bVar3 = bVar4;
                }
                if (!bVar3) goto LAB_18039f77e;
                uVar8 = lStack_1a8 + 0x10;
                uVar12 = 0;
                if (lStack_1a8 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[6] = uVar12;
              }
              if (*(char *)(lVar7 + 0x1ac) != '\0') {
                if (lStack_1a0 == 0) goto LAB_18039f77e;
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                if (lStack_1a0 + 0x10 == 0) {
                  bVar4 = false;
                  bVar3 = false;
                }
                else {
                  local_218 = 0;
                  uStack_204 = 0;
                  local_214 = SUB1612((undefined1  [16])0x0,0);
                  uStack_208 = 0;
                  cVar6 = FUN_1804514f0(&local_218,lStack_1a0 + 0x10,0x18);
                  if (cVar6 == '\0') {
                    bVar3 = false;
                    bVar4 = false;
                  }
                  else {
                    bVar3 = true;
                    bVar4 = true;
                  }
                }
                uVar8 = FUN_18017ea70();
                if (*(int *)(uVar8 + 4) != 0) {
                  *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1;
                  bVar3 = bVar4;
                }
                if (!bVar3) goto LAB_18039f77e;
                uVar8 = lStack_1a0 + 0x10;
                uVar12 = 0;
                if (lStack_1a0 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[7] = uVar12;
              }
              if (*(char *)(lVar7 + 0x1c8) != '\0') {
                uVar5 = local_100._0_8_;
                if (local_100._0_8_ == 0) goto LAB_18039f77e;
                lVar10 = local_100._0_8_ + 0x10;
                lVar9 = FUN_18017ea70();
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
                if (lVar10 == 0) {
                  bVar4 = false;
                  bVar3 = false;
                }
                else {
                  local_218 = 0;
                  uStack_204 = 0;
                  local_214 = SUB1612((undefined1  [16])0x0,0);
                  uStack_208 = 0;
                  cVar6 = FUN_1804514f0(&local_218,lVar10,0x18);
                  if (cVar6 == '\0') {
                    bVar3 = false;
                    bVar4 = false;
                  }
                  else {
                    bVar3 = true;
                    bVar4 = true;
                  }
                }
                uVar8 = FUN_18017ea70();
                if (*(int *)(uVar8 + 4) != 0) {
                  *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1;
                  bVar3 = bVar4;
                }
                if (!bVar3) goto LAB_18039f77e;
                uVar8 = uVar5 + 0x10;
                uVar12 = 0;
                if (uVar5 != 0) {
                  uVar12 = uVar8;
                }
                plVar15[8] = uVar12;
              }
              uVar2 = uStack_204;
              if (*(char *)(lVar7 + 0x1e0) != '\0') {
                if (local_100._8_8_ == 0) {
                  uStack_204 = uStack_204 & 0xffffff00;
                  local_128 = CONCAT44(uVar2,uStack_208) & 0xffffff00ffffffff;
                }
                else {
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  if (local_100._8_8_ + 0x10 == 0) {
LAB_18039ff7b:
                    uStack_204 = uStack_204 & 0xffffff00;
                  }
                  else {
                    local_200 = 0;
                    local_1fc = (undefined1  [16])0x0;
                    cVar6 = FUN_1804514f0(&local_200,local_100._8_8_ + 0x10,0x14);
                    if (cVar6 == '\0') goto LAB_18039ff7b;
                    uStack_208 = local_1fc._12_4_;
                    uStack_204 = CONCAT31(uStack_204._1_3_,1);
                  }
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                  local_128 = CONCAT44(uStack_204,uStack_208);
                }
                uVar8 = local_128 >> 0x20;
                if ((char)(local_128 >> 0x20) == '\0') goto LAB_18039f77e;
                uVar8 = local_100._8_8_ + 0x10;
                uVar12 = 0;
                if (local_100._8_8_ != 0) {
                  uVar12 = uVar8;
                }
                plVar15[9] = uVar12;
              }
              iVar13 = iVar13 + 1;
              local_1d8 = local_1d8 + 1;
              param_4 = local_res20;
            } while (iVar13 < *(int *)(param_1 + 0x8c));
          }
          return CONCAT71((int7)(uVar8 >> 8),1);
        }
      }
    }
  }
LAB_18039f77e:
  return uVar8 & 0xffffffffffffff00;
}



