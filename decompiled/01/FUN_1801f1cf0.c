// FUN_1801f1cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f1cf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f1cf0(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 param_3,
                  undefined8 *param_4,longlong param_5,int param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 *local_190;
  longlong local_188;
  char local_178 [4];
  int local_174;
  longlong local_170;
  undefined8 *local_168;
  longlong local_160;
  undefined8 *local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_118;
  undefined1 (*local_110) [16];
  undefined1 local_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  longlong lStack_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  local_170 = param_5;
  local_174 = param_6;
  local_148 = param_1;
  local_118 = param_3;
  local_110 = param_2;
  if ((*(longlong *)*param_1 == 0) || ((*(uint *)(*(longlong *)*param_1 + 4) & 1) == 0)) {
    local_168 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      local_168 = (undefined8 *)*param_4;
    }
    local_160 = param_4[2];
    cVar4 = FUN_1801856e0(&local_168);
    if (cVar4 == '\0') {
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      *(undefined8 *)(param_2[1] + 8) = 0;
      FUN_18015ba30(param_2,"Unsafe resource path",0x14);
    }
    else {
      puVar17 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar17 = (undefined8 *)*param_4;
      }
      if ((ulonglong)param_4[2] < 2) {
        bVar21 = false;
      }
      else {
        bVar21 = *(short *)((longlong)puVar17 + (param_4[2] - 2)) == 0x635f;
      }
      ppuVar15 = (undefined **)&DAT_1807c2514;
      if (bVar21) {
        ppuVar15 = &PTR_180700558;
      }
      puVar17 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar17 = (undefined8 *)*param_4;
      }
      local_140 = (undefined1  [16])0x0;
      local_130 = (undefined1  [16])0x0;
      FUN_18015ba30(local_140,puVar17);
      pcVar18 = local_140;
      if (0xf < (ulonglong)local_130._8_8_) {
        pcVar18 = (char *)local_140._0_8_;
      }
      pcVar11 = pcVar18 + local_130._0_8_;
      for (; pcVar18 != pcVar11; pcVar18 = pcVar18 + 1) {
        cVar4 = *pcVar18;
        if (('@' < cVar4) && (cVar4 < '[')) {
          *pcVar18 = cVar4 + ' ';
        }
      }
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (*(char *)((longlong)ppuVar15 + lVar19) != '\0');
      pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_140,ppuVar15);
      local_e8 = *pauVar5;
      auStack_d8 = pauVar5[1];
      (*pauVar5)[0] = 0;
      *(undefined8 *)pauVar5[1] = 0;
      *(undefined8 *)(pauVar5[1] + 8) = 0xf;
      FUN_18015c010(local_140);
      uVar2 = local_e8._0_8_;
      puVar14 = local_e8;
      if (0xf < (ulonglong)auStack_d8._8_8_) {
        puVar14 = (undefined1 *)local_e8._0_8_;
      }
      uVar16 = 0xcbf29ce484222325;
      uVar20 = 0xcbf29ce484222325;
      uVar9 = 0;
      uVar3 = auStack_d8._0_8_;
      if (auStack_d8._0_8_ != 0) {
        do {
          uVar20 = (uVar20 ^ (byte)puVar14[uVar9]) * 0x100000001b3;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)auStack_d8._0_8_);
      }
      lVar19 = FUN_180177b00(param_1[1],&local_168,local_e8,uVar20);
      if (*(longlong *)(lVar19 + 8) == 0) {
        lVar19 = param_1[2];
        puVar14 = local_e8;
        if (0xf < (ulonglong)auStack_d8._8_8_) {
          puVar14 = (undefined1 *)uVar2;
        }
        uVar9 = 0;
        if (uVar3 != 0) {
          do {
            uVar16 = (uVar16 ^ (byte)puVar14[uVar9]) * 0x100000001b3;
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulonglong)uVar3);
        }
        lVar6 = FUN_180177b00(lVar19,local_c8,local_e8,uVar16);
        puVar17 = local_148;
        lVar10 = local_170;
        lVar6 = *(longlong *)(lVar6 + 8);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(lVar19 + 8);
        }
        if (lVar6 == *(longlong *)(local_148[2] + 8)) {
          if ((local_174 < 0x19) && (*(ulonglong *)(local_170 + 0x10) < 0x401)) {
            local_168 = param_4;
            if (0xf < (ulonglong)param_4[3]) {
              local_168 = (undefined8 *)*param_4;
            }
            local_160 = param_4[2];
            FUN_1801ed780(local_148[3],local_78,&local_168);
            if (local_68 == 0) {
              plVar7 = (longlong *)FUN_180177bd0(puVar17[2],local_c8);
              puVar17 = (undefined8 *)(*plVar7 + 0x30);
              if (puVar17 != param_4) {
                puVar13 = param_4 + 2;
                if (0xf < (ulonglong)param_4[3]) {
                  param_4 = (undefined8 *)*param_4;
                }
                FUN_180113930(puVar17,param_4,*puVar13);
              }
              FUN_18015b360(param_2,puVar17);
              FUN_18015b930(local_78);
            }
            else {
              FUN_1801d4690(lVar10,&local_168,local_e8);
              if ((char)local_160 == '\0') {
                *param_2 = (undefined1  [16])0x0;
                *(undefined8 *)param_2[1] = 0;
                *(undefined8 *)(param_2[1] + 8) = 0xf;
                (*param_2)[0] = 0;
                FUN_18015b930(local_78);
              }
              else {
                local_b0 = (undefined1  [16])0x0;
                local_a0 = 0;
                local_c8 = (undefined1  [16])0x0;
                local_b8 = 0;
                local_178[0] = '\0';
                local_168 = (undefined8 *)&DAT_1807c46f4;
                local_160 = 4;
                cVar4 = FUN_1801857a0(local_78,&local_168,local_c8,local_178);
                if (cVar4 == '\0') {
                  cVar4 = local_178[0];
                }
                else {
                  local_168 = (undefined8 *)local_c8._0_8_;
                  local_160 = local_c8._8_8_ - local_c8._0_8_;
                  cVar4 = FUN_180185ad0(&local_168,local_b0);
                }
                FUN_180113710(local_c8);
                uVar2 = local_118;
                lVar19 = local_170;
                if (cVar4 == '\0') {
                  local_188 = param_4[2];
                  if (0x7fffffffffffffffU - local_188 < 0x12) {
                    /* WARNING: Subroutine does not return */
                    FUN_18015bb70();
                  }
                  if (0xf < (ulonglong)param_4[3]) {
                    param_4 = (undefined8 *)*param_4;
                  }
                  local_198 = 0x12;
                  local_190 = param_4;
                  FUN_18015a9c0(&local_108);
                  plVar7 = (longlong *)FUN_180177bd0(puVar17[2],local_c8,local_e8);
                  lVar19 = *plVar7;
                  puVar17 = (undefined8 *)(lVar19 + 0x30);
                  if (puVar17 != (undefined8 *)&local_108) {
                    FUN_18015c010(puVar17);
                    *puVar17 = CONCAT71(uStack_107,local_108);
                    *(undefined8 *)(lVar19 + 0x38) = uStack_100;
                    *(undefined8 *)(lVar19 + 0x40) = uStack_f8;
                    *(undefined8 *)(lVar19 + 0x48) = uStack_f0;
                    uStack_f8 = 0;
                    uStack_f0 = 0xf;
                    local_108 = 0;
                  }
                  FUN_18015b360(param_2,puVar17);
                  puVar17 = (undefined8 *)&local_108;
                }
                else {
                  lVar6 = 0;
                  lStack_88 = 0;
                  uStack_80 = 0xf;
                  local_98._1_15_ = SUB1615((undefined1  [16])0x0,1);
                  auVar1[0xf] = 0;
                  auVar1._0_15_ = local_98._1_15_;
                  local_98 = auVar1 << 8;
                  uVar3 = local_b0._8_8_;
                  puVar13 = (undefined8 *)local_b0._0_8_;
                  if (local_b0._0_8_ != local_b0._8_8_) {
                    do {
                      puVar17 = puVar13;
                      if (0xf < (ulonglong)puVar13[3]) {
                        puVar17 = (undefined8 *)*puVar13;
                      }
                      uVar9 = puVar13[2];
                      if (uVar9 < 9) {
LAB_1801f2289:
                        puVar17 = puVar13;
                        if (0xf < (ulonglong)puVar13[3]) {
                          puVar17 = (undefined8 *)*puVar13;
                        }
                        if (5 < uVar9) {
                          iVar8 = *(int *)((longlong)puVar17 + (uVar9 - 6)) + -0x6761762e;
                          if (iVar8 == 0) {
                            iVar8 = *(ushort *)((longlong)puVar17 + (uVar9 - 2)) - 0x7072;
                          }
                          if (iVar8 == 0) goto LAB_1801f233c;
                        }
                        local_190 = (undefined8 *)CONCAT44(local_190._4_4_,local_174 + 1);
                        local_198 = lVar19;
                        pauVar5 = (undefined1 (*) [16])FUN_1801f1cf0(uVar2,&local_168,uVar2,puVar13)
                        ;
                        if (&local_98 != pauVar5) {
                          FUN_18015c010(local_98);
                          local_98 = *pauVar5;
                          lVar6 = *(longlong *)pauVar5[1];
                          uStack_80 = *(ulonglong *)(pauVar5[1] + 8);
                          (*pauVar5)[0] = 0;
                          *(undefined8 *)pauVar5[1] = 0;
                          *(undefined8 *)(pauVar5[1] + 8) = 0xf;
                          lStack_88 = lVar6;
                        }
                        FUN_18015c010(&local_168);
                        if (lVar6 != 0) break;
                      }
                      else {
                        lVar10 = *(longlong *)((uVar9 - 9) + (longlong)puVar17) +
                                 -0x7072676d6e61762e;
                        if (lVar10 == 0) {
                          lVar10 = (ulonglong)*(byte *)((uVar9 - 1) + (longlong)puVar17) - 0x68;
                        }
                        if (lVar10 != 0) goto LAB_1801f2289;
                      }
LAB_1801f233c:
                      puVar13 = puVar13 + 4;
                    } while (puVar13 != (undefined8 *)uVar3);
                    param_2 = local_110;
                    puVar17 = local_148;
                  }
                  uVar9 = uStack_80;
                  FUN_1801d42f0(local_170,local_e8);
                  plVar7 = (longlong *)FUN_180177bd0(puVar17[2],local_c8,local_e8);
                  puVar14 = (undefined1 *)(*plVar7 + 0x30);
                  if (puVar14 != local_98) {
                    puVar12 = local_98;
                    if (0xf < uVar9) {
                      puVar12 = (undefined1 *)local_98._0_8_;
                    }
                    FUN_180113930(puVar14,puVar12,lVar6);
                  }
                  FUN_18015b360(param_2,puVar14);
                  puVar17 = (undefined8 *)local_98;
                }
                FUN_18015c010(puVar17);
                FUN_180111b90(local_b0);
                FUN_18015b930(local_78);
              }
            }
          }
          else {
            *param_2 = (undefined1  [16])0x0;
            *(undefined8 *)param_2[1] = 0;
            *(undefined8 *)(param_2[1] + 8) = 0;
            FUN_18015ba30(param_2,"Dependency budget exceeded",0x1a);
          }
        }
        else {
          FUN_18015b360(param_2,lVar6 + 0x30);
        }
      }
      else {
        *param_2 = (undefined1  [16])0x0;
        *(undefined8 *)param_2[1] = 0;
        *(undefined8 *)(param_2[1] + 8) = 0xf;
        (*param_2)[0] = 0;
      }
      FUN_18015c010(local_e8);
    }
  }
  else {
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    FUN_18015ba30(param_2,"Scan cancelled",0xe);
  }
}



