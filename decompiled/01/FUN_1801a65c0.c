// FUN_1801a65c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a65c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a65c0(undefined8 *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  ulonglong uVar23;
  size_t sVar24;
  undefined1 auStack_258 [32];
  longlong local_238;
  int *local_230;
  longlong local_228;
  char local_218 [16];
  int *local_208;
  longlong local_200;
  undefined1 local_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 local_1d8 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int *local_118;
  undefined1 local_110 [16];
  size_t local_100;
  ulonglong uStack_f8;
  undefined1 local_f0 [16];
  longlong local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined8 uStack_90;
  size_t sStack_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_258;
  local_118 = param_3;
  if (((*(longlong *)*param_1 == 0) || ((*(uint *)(*(longlong *)*param_1 + 4) & 1) == 0)) &&
     (param_4 < 0x19)) {
    piVar12 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 6)) {
      piVar12 = *(int **)param_3;
    }
    local_1f8 = (undefined1  [16])0x0;
    auStack_1e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1f8,piVar12,*(undefined8 *)(param_3 + 4));
    pcVar22 = local_1f8;
    if (0xf < (ulonglong)auStack_1e8._8_8_) {
      pcVar22 = (char *)local_1f8._0_8_;
    }
    pcVar19 = pcVar22 + auStack_1e8._0_8_;
    for (; pcVar22 != pcVar19; pcVar22 = pcVar22 + 1) {
      cVar10 = *pcVar22;
      if (('@' < cVar10) && (cVar10 < '[')) {
        *pcVar22 = cVar10 + ' ';
      }
    }
    if (param_3 != (int *)local_1f8) {
      FUN_18015c010(param_3);
      *(undefined8 *)param_3 = local_1f8._0_8_;
      *(undefined8 *)(param_3 + 2) = local_1f8._8_8_;
      *(undefined8 *)(param_3 + 4) = auStack_1e8._0_8_;
      *(undefined8 *)(param_3 + 6) = auStack_1e8._8_8_;
      auStack_1e8 = ZEXT816(0xf) << 0x40;
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_1f8._1_15_;
      local_1f8 = auVar3 << 8;
    }
    FUN_18015c010(local_1f8);
    piVar12 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 6)) {
      piVar12 = *(int **)param_3;
    }
    if ((*(ulonglong *)(param_3 + 4) < 2) ||
       (*(short *)((*(ulonglong *)(param_3 + 4) - 2) + (longlong)piVar12) != 0x635f)) {
      FUN_18015b2a0(param_3,&DAT_1807c2514,2);
    }
    local_208 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 6)) {
      local_208 = *(int **)param_3;
    }
    local_200 = *(longlong *)(param_3 + 4);
    cVar10 = FUN_18017eed0(&local_208);
    if (cVar10 != '\0') {
      piVar12 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 6)) {
        piVar12 = *(int **)param_3;
      }
      uVar23 = 0xcbf29ce484222325;
      uVar20 = 0;
      if (*(ulonglong *)(param_3 + 4) != 0) {
        do {
          uVar23 = (uVar23 ^ *(byte *)(uVar20 + (longlong)piVar12)) * 0x100000001b3;
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ulonglong *)(param_3 + 4));
      }
      lVar13 = FUN_180177b00(param_1[2],&local_208,param_3,uVar23);
      if ((*(longlong *)(lVar13 + 8) != 0) ||
         (lVar13 = FUN_1801a6460(param_1[3],&local_208,param_3), *(char *)(lVar13 + 8) == '\0'))
      goto LAB_1801a6f35;
      if (0x400 < *(ulonglong *)(param_1[3] + 8)) {
        puVar21 = (undefined8 *)param_1[1];
        local_1d8 = (undefined1  [16])0x0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        FUN_18015ba30(local_1d8,"dependency_count_exceeded",0x19);
        puVar21 = *(undefined8 **)*puVar21;
        if ((puVar21 != (undefined8 *)0x0) && (puVar21 != (undefined8 *)local_1d8)) {
          FUN_18015c010(puVar21);
          *puVar21 = local_1d8._0_8_;
          puVar21[1] = local_1d8._8_8_;
          puVar21[2] = uStack_1c8;
          puVar21[3] = uStack_1c0;
          uStack_1c8 = 0;
          uStack_1c0 = 0xf;
          auVar4[0xf] = 0;
          auVar4._0_15_ = local_1d8._1_15_;
          local_1d8 = auVar4 << 8;
        }
        puVar18 = local_1d8;
        goto LAB_1801a7033;
      }
      local_e0 = 0;
      local_d8 = 7;
      local_f0._2_14_ = SUB1614((undefined1  [16])0x0,2);
      auVar5._14_2_ = 0;
      auVar5._0_14_ = local_f0._2_14_;
      local_f0 = auVar5 << 0x10;
      if (0x7fffffffffffffffU - *(longlong *)(param_1[4] + 0x10) < 2) goto LAB_1801a7072;
      local_228 = 2;
      local_230 = (int *)&DAT_1807c2514;
      local_238 = *(longlong *)(param_1[4] + 0x10);
      FUN_18015a9c0(local_110);
      puVar18 = local_110;
      if (0xf < uStack_f8) {
        puVar18 = (undefined1 *)local_110._0_8_;
      }
      sVar24 = *(size_t *)(param_3 + 4);
      piVar12 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 6)) {
        piVar12 = *(int **)param_3;
      }
      if (sVar24 == local_100) {
        if (sVar24 == 0) {
          FUN_18015c010(local_110);
        }
        else {
          iVar11 = memcmp(piVar12,puVar18,sVar24);
          FUN_18015c010(local_110);
          if (iVar11 != 0) goto LAB_1801a6954;
        }
        lVar13 = param_1[5];
        puVar21 = (undefined8 *)(lVar13 + 0xa0);
        if ((undefined8 *)local_f0 != puVar21) {
          if (7 < *(ulonglong *)(lVar13 + 0xb8)) {
            puVar21 = (undefined8 *)*puVar21;
          }
          FUN_1800f5190(local_f0,puVar21,*(undefined8 *)(lVar13 + 0xb0));
        }
LAB_1801a6aec:
        lVar1 = *(longlong *)(param_1[6] + 0x28);
        sVar24 = 0;
        uVar20 = 7;
        for (lVar13 = *(longlong *)(param_1[6] + 0x20); local_100 = sVar24, uStack_f8 = uVar20,
            lVar13 != lVar1; lVar13 = lVar13 + 0x20) {
          local_110._2_14_ = SUB1614((undefined1  [16])0x0,2);
          auVar6._14_2_ = 0;
          auVar6._0_14_ = local_110._2_14_;
          local_110 = auVar6 << 0x10;
          local_208 = param_3;
          if (0xf < *(ulonglong *)(param_3 + 6)) {
            local_208 = *(int **)param_3;
          }
          local_200 = *(longlong *)(param_3 + 4);
          cVar10 = FUN_1801864b0(lVar13,&local_208,local_110,param_1[7]);
          if (cVar10 != '\0') {
            puVar18 = local_f0;
            if (7 < local_d8) {
              puVar18 = (undefined1 *)local_f0._0_8_;
            }
            puVar17 = local_110;
            if (7 < uStack_f8) {
              puVar17 = (undefined1 *)local_110._0_8_;
            }
            uVar15 = FUN_1805fb4dc(puVar17,puVar18);
            if (((char)uVar15 != '\0') && ((int)((ulonglong)uVar15 >> 0x20) == 0)) {
              FUN_18015b930(local_110);
              goto LAB_1801a6c48;
            }
          }
          FUN_18015b930(local_110);
        }
        local_110._2_14_ = SUB1614((undefined1  [16])0x0,2);
        auVar7._14_2_ = 0;
        auVar7._0_14_ = local_110._2_14_;
        local_110 = auVar7 << 0x10;
        local_208 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 6)) {
          local_208 = *(int **)param_3;
        }
        local_200 = *(longlong *)(param_3 + 4);
        cVar10 = FUN_1801864b0(param_1[6],&local_208,local_110,param_1[7]);
        if (cVar10 == '\0') {
LAB_1801a6c35:
          bVar8 = false;
        }
        else {
          puVar18 = local_f0;
          if (7 < local_d8) {
            puVar18 = (undefined1 *)local_f0._0_8_;
          }
          puVar17 = local_110;
          if (7 < uStack_f8) {
            puVar17 = (undefined1 *)local_110._0_8_;
          }
          uVar15 = FUN_1805fb4dc(puVar17,puVar18);
          if (((char)uVar15 == '\0') || ((int)((ulonglong)uVar15 >> 0x20) != 0)) goto LAB_1801a6c35;
          bVar8 = true;
        }
        FUN_18015b930(local_110);
        if (bVar8) {
LAB_1801a6c48:
          FUN_18015b360(&local_b8,param_3);
          FUN_1800f5370(&local_98,local_f0);
          local_78 = 0;
          local_70 = 0;
          local_208 = *(int **)*param_1;
          if (local_208 != (int *)0x0) {
            LOCK();
            *local_208 = *local_208 + 1;
            UNLOCK();
          }
          cVar10 = FUN_180187c80(&local_b8,&local_208);
          if (cVar10 == '\0') {
LAB_1801a6f44:
            puVar21 = (undefined8 *)param_1[1];
            if (0x7fffffffffffffffU - *(longlong *)(param_3 + 4) < 0x20) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            local_230 = param_3;
            if (0xf < *(ulonglong *)(param_3 + 6)) {
              local_230 = *(int **)param_3;
            }
            local_238 = 0x20;
            local_228 = *(longlong *)(param_3 + 4);
            FUN_18015a9c0(&local_138);
            puVar21 = *(undefined8 **)*puVar21;
            if ((puVar21 != (undefined8 *)0x0) && (puVar21 != &local_138)) {
              FUN_18015c010(puVar21);
              *puVar21 = CONCAT71(local_138._1_7_,(undefined1)local_138);
              puVar21[1] = uStack_130;
              puVar21[2] = uStack_128;
              puVar21[3] = uStack_120;
              uStack_128 = 0;
              uStack_120 = 0xf;
              local_138._0_1_ = 0;
            }
            FUN_18015c010(&local_138);
          }
          else {
            uVar23 = *(ulonglong *)param_1[8];
            if (0x10000000 - (local_78 & 0xffffffff) < uVar23) goto LAB_1801a6f44;
            *(ulonglong *)param_1[8] = (local_78 & 0xffffffff) + uVar23;
            local_d0 = (undefined1  [16])0x0;
            local_c0 = 0;
            local_110 = (undefined1  [16])0x0;
            local_100 = 0;
            local_218[0] = '\0';
            local_208 = (int *)&DAT_1807c46f4;
            local_200 = 4;
            cVar10 = FUN_1801857a0(local_f0,&local_208,local_110,local_218);
            if (cVar10 == '\0') {
              cVar10 = local_218[0];
            }
            else {
              local_208 = (int *)local_110._0_8_;
              local_200 = local_110._8_8_ - local_110._0_8_;
              cVar10 = FUN_180185ad0(&local_208,local_d0);
            }
            FUN_180113710(local_110);
            if (cVar10 != '\0') {
              lVar13 = param_1[9];
              pauVar2 = *(undefined1 (**) [16])(lVar13 + 8);
              if (pauVar2 == *(undefined1 (**) [16])(lVar13 + 0x10)) {
                FUN_1801ba170(lVar13,pauVar2,&local_b8);
              }
              else {
                *pauVar2 = (undefined1  [16])0x0;
                *(undefined8 *)pauVar2[1] = 0;
                *(undefined8 *)(pauVar2[1] + 8) = 0;
                *(ulonglong *)*pauVar2 = CONCAT71(uStack_b7,local_b8);
                *(undefined8 *)(*pauVar2 + 8) = uStack_b0;
                *(undefined8 *)pauVar2[1] = uStack_a8;
                *(undefined8 *)(pauVar2[1] + 8) = uStack_a0;
                uStack_a8 = 0;
                uStack_a0 = 0xf;
                local_b8 = 0;
                pauVar2[2] = (undefined1  [16])0x0;
                *(undefined8 *)pauVar2[3] = 0;
                *(undefined8 *)(pauVar2[3] + 8) = 0;
                *(ulonglong *)pauVar2[2] = CONCAT62(uStack_96,local_98);
                *(undefined8 *)(pauVar2[2] + 8) = uStack_90;
                *(size_t *)pauVar2[3] = sStack_88;
                *(ulonglong *)(pauVar2[3] + 8) = uStack_80;
                local_98 = 0;
                *(undefined4 *)pauVar2[4] = (undefined4)local_78;
                *(undefined4 *)(pauVar2[4] + 4) = local_78._4_4_;
                *(undefined8 *)(pauVar2[4] + 8) = local_70;
                *(longlong *)(lVar13 + 8) = *(longlong *)(lVar13 + 8) + 0x50;
                sStack_88 = sVar24;
                uStack_80 = uVar20;
              }
              uVar15 = local_d0._8_8_;
              for (lVar13 = local_d0._0_8_; lVar13 != uVar15; lVar13 = lVar13 + 0x20) {
                uVar16 = FUN_18015b360(local_110,lVar13);
                cVar10 = FUN_1801a65c0(param_2,param_2,uVar16,param_4 + 1);
                if (cVar10 == '\0') goto LAB_1801a6de4;
              }
              FUN_180111b90(local_d0);
              FUN_18015b930(&local_98);
              FUN_18015c010(&local_b8);
              FUN_18015b930(local_f0);
LAB_1801a6f35:
              FUN_18015c010(param_3);
            }
            puVar21 = (undefined8 *)param_1[1];
            if (0x7fffffffffffffffU - *(longlong *)(param_3 + 4) < 0x1a) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            local_230 = param_3;
            if (0xf < *(ulonglong *)(param_3 + 6)) {
              local_230 = *(int **)param_3;
            }
            local_238 = 0x1a;
            local_228 = *(longlong *)(param_3 + 4);
            FUN_18015a9c0(&local_158);
            puVar21 = *(undefined8 **)*puVar21;
            if ((puVar21 != (undefined8 *)0x0) && (puVar21 != (undefined8 *)&local_158)) {
              FUN_18015c010(puVar21);
              *puVar21 = CONCAT71(uStack_157,local_158);
              puVar21[1] = uStack_150;
              puVar21[2] = uStack_148;
              puVar21[3] = uStack_140;
              uStack_148 = 0;
              uStack_140 = 0xf;
              local_158 = 0;
            }
            FUN_18015c010(&local_158);
LAB_1801a6de4:
            FUN_180111b90(local_d0);
          }
          FUN_18015b930(&local_98);
          FUN_18015c010(&local_b8);
          FUN_18015b930(local_f0);
          goto LAB_1801a703c;
        }
      }
      else {
        FUN_18015c010(local_110);
LAB_1801a6954:
        lVar1 = *(longlong *)(param_1[6] + 0x28);
        for (lVar13 = *(longlong *)(param_1[6] + 0x20); lVar13 != lVar1; lVar13 = lVar13 + 0x20) {
          local_208 = param_3;
          if (0xf < *(ulonglong *)(param_3 + 6)) {
            local_208 = *(int **)param_3;
          }
          local_200 = *(longlong *)(param_3 + 4);
          cVar10 = FUN_1801864b0(lVar13,&local_208,local_f0,param_1[7]);
          if (cVar10 != '\0') break;
          local_e0 = 0;
          puVar14 = (undefined2 *)local_f0;
          if (7 < local_d8) {
            puVar14 = (undefined2 *)local_f0._0_8_;
          }
          *puVar14 = 0;
        }
        if (local_e0 != 0) goto LAB_1801a6aec;
        local_208 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 6)) {
          local_208 = *(int **)param_3;
        }
        local_200 = *(longlong *)(param_3 + 4);
        cVar10 = FUN_1801864b0(param_1[6],&local_208,local_f0,param_1[7]);
        if (cVar10 != '\0') goto LAB_1801a6aec;
        puVar21 = (undefined8 *)param_1[1];
        if (0x7fffffffffffffffU - *(longlong *)(param_3 + 4) < 0x13) {
LAB_1801a7072:
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        local_230 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 6)) {
          local_230 = *(int **)param_3;
        }
        local_238 = 0x13;
        local_228 = *(longlong *)(param_3 + 4);
        FUN_18015a9c0(&local_178);
        puVar21 = *(undefined8 **)*puVar21;
        if ((puVar21 != (undefined8 *)0x0) && (puVar21 != &local_178)) {
          FUN_18015c010(puVar21);
          *puVar21 = CONCAT71(local_178._1_7_,(undefined1)local_178);
          puVar21[1] = uStack_170;
          puVar21[2] = uStack_168;
          puVar21[3] = uStack_160;
          uStack_168 = 0;
          uStack_160 = 0xf;
          local_178._0_1_ = 0;
        }
        FUN_18015c010(&local_178);
      }
      FUN_18015b930(local_f0);
      goto LAB_1801a703c;
    }
    puVar21 = (undefined8 *)param_1[1];
    local_228 = *(longlong *)(param_3 + 4);
    if (0x7fffffffffffffffU - local_228 < 0x17) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_230 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 6)) {
      local_230 = *(int **)param_3;
    }
    local_238 = 0x17;
    FUN_18015a9c0(&local_198);
    puVar21 = *(undefined8 **)*puVar21;
    if ((puVar21 != (undefined8 *)0x0) && (puVar21 != &local_198)) {
      FUN_18015c010(puVar21);
      *puVar21 = CONCAT71(local_198._1_7_,(undefined1)local_198);
      puVar21[1] = uStack_190;
      puVar21[2] = uStack_188;
      puVar21[3] = uStack_180;
      uStack_188 = 0;
      uStack_180 = 0xf;
      local_198._0_1_ = 0;
    }
    puVar18 = (undefined1 *)&local_198;
  }
  else {
    puVar21 = (undefined8 *)param_1[1];
    local_1b8 = (undefined1  [16])0x0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    FUN_18015ba30(local_1b8,"cancelled_or_dependency_depth_exceeded",0x26);
    puVar21 = *(undefined8 **)*puVar21;
    if ((puVar21 != (undefined8 *)0x0) && (puVar21 != (undefined8 *)local_1b8)) {
      FUN_18015c010(puVar21);
      *puVar21 = local_1b8._0_8_;
      puVar21[1] = local_1b8._8_8_;
      puVar21[2] = uStack_1a8;
      puVar21[3] = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0xf;
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_1b8._1_15_;
      local_1b8 = auVar9 << 8;
    }
    puVar18 = local_1b8;
  }
LAB_1801a7033:
  FUN_18015c010(puVar18);
LAB_1801a703c:
  FUN_18015c010(param_3);
}



