// FUN_18016b8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016b8b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016b8b0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  ULONGLONG UVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char *pcVar20;
  void *_Buf2;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 *******local_190;
  longlong local_188;
  undefined1 local_178 [16];
  undefined1 auStack_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined8 *******local_88 [2];
  longlong local_78;
  ulonglong local_70;
  undefined8 *******local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  auVar6._12_4_ = 0;
  auVar6._0_12_ = local_178._4_12_;
  local_178 = auVar6 << 0x20;
  puVar12 = *(undefined8 **)(param_1 + 0x30);
  puVar22 = *(undefined8 **)(param_1 + 0x28);
  puVar19 = puVar22;
  if (puVar22 != puVar12) {
    uVar1 = param_2[3];
    sVar2 = param_2[2];
    do {
      puVar17 = param_2;
      if (0xf < uVar1) {
        puVar17 = (undefined8 *)*param_2;
      }
      sVar3 = puVar19[2];
      puVar15 = puVar19;
      if (0xf < (ulonglong)puVar19[3]) {
        puVar15 = (undefined8 *)*puVar19;
      }
    } while (((sVar3 != sVar2) ||
             ((sVar3 != 0 && (iVar10 = memcmp(puVar15,puVar17,sVar3), iVar10 != 0)))) &&
            (puVar19 = puVar19 + 0x2d, puVar19 != puVar12));
  }
  if (puVar19 == puVar12) {
    uVar23 = 0x1a;
    pcVar20 = "Config could not be found.";
  }
  else {
    if (*(char *)((longlong)puVar19 + 0xe1) == '\0') {
      if (*(char *)((longlong)puVar19 + 0xe3) != '\0') {
        FUN_1800e60e0(local_b8,"action");
        FUN_1800e60e0(local_a0,"delete");
        local_178._8_8_ = local_88;
        local_178._0_8_ = local_b8;
        FUN_1800f4e90(local_158,local_178,1,2);
        local_148 = 0;
        FUN_1800e60e0(local_e8,&DAT_1806bc068);
        FUN_1800e64d0(local_d0,param_2);
        local_c0 = 0;
        local_178._0_8_ = local_e8;
        local_178._8_8_ = local_b8;
        FUN_1800f4e90(local_140,local_178,1,2);
        local_130 = 0;
        local_178._8_8_ = local_128;
        local_178._0_8_ = local_158;
        uVar23 = FUN_1800f4e90(local_88,local_178,1,2);
        FUN_180172820(param_1,uVar23);
        _eh_vector_destructor_iterator_(local_158,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_e8,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_b8,0x18,2,FUN_1800aab30);
      }
      lVar16 = 0;
      if (puVar22 != puVar12) {
        do {
          lVar11 = lVar16 + 1;
          if (*(char *)((longlong)puVar22 + 0xe3) != '\0') {
            lVar11 = lVar16;
          }
          puVar22 = puVar22 + 0x2d;
          lVar16 = lVar11;
        } while (puVar22 != puVar12);
        if (1 < lVar11) {
          if (*(char *)((longlong)puVar19 + 0xe2) == '\0') {
            FUN_18015b360(local_68,puVar19 + 4);
            local_188 = param_2[2];
            if (0x7fffffffffffffffU - local_188 < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            local_190 = (undefined8 *******)param_2;
            if (0xf < (ulonglong)param_2[3]) {
              local_190 = (undefined8 *******)*param_2;
            }
            local_198 = 7;
            FUN_18015a9c0(local_158);
            cVar9 = FUN_18016e0a0(param_1,local_158);
            FUN_18015c010(local_158);
            if (cVar9 != '\0') {
              local_118 = 0;
              local_110 = 0xf;
              local_128._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar8[0xf] = 0;
              auVar8._0_15_ = local_128._1_15_;
              local_128 = auVar8 << 8;
              *(undefined4 *)(param_1 + 0x4a4) = 2;
              if ((undefined8 *)(param_1 + 0x4a8) != param_2) {
                puVar12 = param_2 + 2;
                if (0xf < (ulonglong)param_2[3]) {
                  param_2 = (undefined8 *)*param_2;
                }
                FUN_180113930((undefined8 *)(param_1 + 0x4a8),param_2,*puVar12);
              }
              if ((undefined8 ********)(param_1 + 0x4c8) != local_68) {
                pppppppuVar21 = local_68;
                if (0xf < local_50) {
                  pppppppuVar21 = local_68[0];
                }
                FUN_180113930((undefined8 *******)(param_1 + 0x4c8),pppppppuVar21,local_58);
              }
              if ((undefined1 *)(param_1 + 0x4e8) != local_128) {
                FUN_180113930((undefined1 *)(param_1 + 0x4e8),local_128,0);
              }
              UVar14 = GetTickCount64();
              *(ULONGLONG *)(param_1 + 0x508) = UVar14;
              FUN_18015c010(local_128);
            }
            FUN_18015c010(local_68);
          }
          FUN_18015b360(local_88,puVar19 + 4);
          puVar12 = (undefined8 *)(param_1 + 0x3c0);
          if (0xf < *(ulonglong *)(param_1 + 0x3d8)) {
            puVar12 = (undefined8 *)*puVar12;
          }
          sVar2 = puVar19[2];
          if (0xf < (ulonglong)puVar19[3]) {
            puVar19 = (undefined8 *)*puVar19;
          }
          if (sVar2 == *(size_t *)(param_1 + 0x3d0)) {
            if (sVar2 == 0) {
              bVar24 = true;
            }
            else {
              iVar10 = memcmp(puVar19,puVar12,sVar2);
              bVar24 = iVar10 == 0;
            }
          }
          else {
            bVar24 = false;
          }
          puVar12 = *(undefined8 **)(param_1 + 0x48);
          puVar22 = *(undefined8 **)(param_1 + 0x40);
          if (puVar22 != puVar12) {
            uVar1 = param_2[3];
            sVar2 = param_2[2];
            do {
              puVar19 = param_2;
              if (0xf < uVar1) {
                puVar19 = (undefined8 *)*param_2;
              }
              sVar3 = puVar22[2];
              puVar17 = puVar22;
              if (0xf < (ulonglong)puVar22[3]) {
                puVar17 = (undefined8 *)*puVar22;
              }
            } while (((sVar3 != sVar2) ||
                     ((sVar3 != 0 && (iVar10 = memcmp(puVar17,puVar19,sVar3), iVar10 != 0)))) &&
                    (puVar22 = puVar22 + 0x2d, puVar22 != puVar12));
            puVar19 = puVar22;
            if (puVar22 != puVar12) {
              while (puVar17 = puVar19 + 0x2d, puVar17 != puVar12) {
                puVar15 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  puVar15 = (undefined8 *)*param_2;
                }
                sVar2 = puVar19[0x2f];
                puVar18 = puVar17;
                if (0xf < (ulonglong)puVar19[0x30]) {
                  puVar18 = (undefined8 *)*puVar17;
                }
                puVar19 = puVar17;
                if ((sVar2 != param_2[2]) ||
                   ((sVar2 != 0 && (iVar10 = memcmp(puVar18,puVar15,sVar2), iVar10 != 0)))) {
                  FUN_180175280(puVar22,puVar17);
                  puVar22 = puVar22 + 0x2d;
                }
              }
              if (puVar22 != puVar12) {
                puVar19 = *(undefined8 **)(param_1 + 0x48);
                for (; puVar12 != puVar19; puVar12 = puVar12 + 0x2d) {
                  FUN_180175280(puVar22,puVar12);
                  puVar22 = puVar22 + 0x2d;
                }
                puVar12 = *(undefined8 **)(param_1 + 0x48);
                for (puVar19 = puVar22; puVar19 != puVar12; puVar19 = puVar19 + 0x2d) {
                  FUN_180152210(puVar19);
                }
                *(undefined8 **)(param_1 + 0x48) = puVar22;
              }
            }
          }
          puVar12 = *(undefined8 **)(param_1 + 0x30);
          puVar22 = *(undefined8 **)(param_1 + 0x28);
          if (puVar22 != puVar12) {
            uVar1 = param_2[3];
            sVar2 = param_2[2];
            do {
              puVar19 = param_2;
              if (0xf < uVar1) {
                puVar19 = (undefined8 *)*param_2;
              }
              sVar3 = puVar22[2];
              puVar17 = puVar22;
              if (0xf < (ulonglong)puVar22[3]) {
                puVar17 = (undefined8 *)*puVar22;
              }
            } while (((sVar3 != sVar2) ||
                     ((sVar3 != 0 && (iVar10 = memcmp(puVar17,puVar19,sVar3), iVar10 != 0)))) &&
                    (puVar22 = puVar22 + 0x2d, puVar22 != puVar12));
            puVar19 = puVar22;
            if (puVar22 != puVar12) {
              while (puVar17 = puVar19 + 0x2d, puVar17 != puVar12) {
                puVar15 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  puVar15 = (undefined8 *)*param_2;
                }
                sVar2 = puVar19[0x2f];
                puVar18 = puVar17;
                if (0xf < (ulonglong)puVar19[0x30]) {
                  puVar18 = (undefined8 *)*puVar17;
                }
                puVar19 = puVar17;
                if ((sVar2 != param_2[2]) ||
                   ((sVar2 != 0 && (iVar10 = memcmp(puVar18,puVar15,sVar2), iVar10 != 0)))) {
                  FUN_180175280(puVar22,puVar17);
                  puVar22 = puVar22 + 0x2d;
                }
              }
              if (puVar22 != puVar12) {
                puVar19 = *(undefined8 **)(param_1 + 0x30);
                for (; puVar12 != puVar19; puVar12 = puVar12 + 0x2d) {
                  FUN_180175280(puVar22,puVar12);
                  puVar22 = puVar22 + 0x2d;
                }
                puVar12 = *(undefined8 **)(param_1 + 0x30);
                for (puVar19 = puVar22; puVar19 != puVar12; puVar19 = puVar19 + 0x2d) {
                  FUN_180152210(puVar19);
                }
                *(undefined8 **)(param_1 + 0x30) = puVar22;
              }
            }
          }
          if (bVar24) {
            bVar24 = *(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x30);
            if (bVar24) {
              puVar12 = (undefined8 *)FUN_18015b360(local_158);
            }
            else {
              uStack_f8 = 0;
              uStack_f0 = 0xf;
              local_108._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar7[0xf] = 0;
              auVar7._0_15_ = local_108._1_15_;
              local_108 = auVar7 << 8;
              puVar12 = (undefined8 *)local_108;
            }
            puVar22 = (undefined8 *)(param_1 + 0x3c0);
            if (puVar22 != puVar12) {
              FUN_18015c010(puVar22);
              uVar23 = puVar12[1];
              uVar4 = puVar12[2];
              uVar5 = puVar12[3];
              *puVar22 = *puVar12;
              *(undefined8 *)(param_1 + 0x3c8) = uVar23;
              *(undefined8 *)(param_1 + 0x3d0) = uVar4;
              *(undefined8 *)(param_1 + 0x3d8) = uVar5;
              puVar12[2] = 0;
              puVar12[3] = 0xf;
              *(undefined1 *)puVar12 = 0;
            }
            if (bVar24) {
              FUN_18015c010(local_158);
            }
            else {
              FUN_18015c010(local_108);
            }
            puVar12 = *(undefined8 **)(param_1 + 0x30);
            for (puVar22 = *(undefined8 **)(param_1 + 0x28); puVar22 != puVar12;
                puVar22 = puVar22 + 0x2d) {
              _Buf2 = (void *)(param_1 + 0x3c0);
              if (0xf < *(ulonglong *)(param_1 + 0x3d8)) {
                _Buf2 = *(void **)(param_1 + 0x3c0);
              }
              sVar2 = puVar22[2];
              puVar19 = puVar22;
              if (0xf < (ulonglong)puVar22[3]) {
                puVar19 = (undefined8 *)*puVar22;
              }
              if (sVar2 == *(size_t *)(param_1 + 0x3d0)) {
                if (sVar2 == 0) {
                  bVar24 = true;
                }
                else {
                  iVar10 = memcmp(puVar19,_Buf2,sVar2);
                  bVar24 = iVar10 == 0;
                }
              }
              else {
                bVar24 = false;
              }
              *(bool *)(puVar22 + 0x1c) = bVar24;
            }
          }
          FUN_180113930(param_1 + 0x460,"Dummy config deleted.",0x15);
          if (0x7fffffffffffffffU - local_78 < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_190 = local_88;
          if (0xf < local_70) {
            local_190 = local_88[0];
          }
          local_188 = local_78;
          local_198 = 9;
          FUN_18015a9c0(local_158);
          pauVar13 = (undefined1 (*) [16])FUN_18015b2a0(local_158,&DAT_180700f08,1);
          local_178 = *pauVar13;
          auStack_168 = pauVar13[1];
          (*pauVar13)[0] = 0;
          *(undefined8 *)pauVar13[1] = 0;
          *(undefined8 *)(pauVar13[1] + 8) = 0xf;
          FUN_18016df60(param_1,local_178,1);
          FUN_18015c010(local_178);
          FUN_18015c010(local_158);
          FUN_18015c010(local_88);
        }
      }
      pcVar20 = "Keep at least one config in the library.";
    }
    else {
      pcVar20 = "Workshop configs cannot be deleted here.";
    }
    uVar23 = 0x28;
  }
  FUN_180113930(param_1 + 0x460,pcVar20,uVar23);
}



