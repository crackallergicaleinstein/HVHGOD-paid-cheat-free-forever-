// FUN_1803f80e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f80e0 */

longlong FUN_1803f80e0(undefined8 param_1,undefined8 *param_2,ulonglong param_3,undefined1 param_4)

{
  size_t _Size;
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *_Buf2;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  void *pvVar16;
  undefined1 local_res20 [8];
  ulonglong local_128;
  void *local_120;
  ulonglong local_118;
  ulonglong local_110;
  int local_108;
  void *local_f8;
  size_t sStack_f0;
  undefined8 *local_e8;
  undefined1 local_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  void *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  if ((DAT_1808e4b5c != '\0') && (DAT_1808e4b30 != 0)) {
    lVar11 = (ulonglong)DAT_1808e4b40 + DAT_1808e4b30;
    local_res20[0] = param_4;
    local_110 = param_3;
    local_e8 = param_2;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (lVar11 == 0) {
      bVar1 = false;
      iVar6 = (uint)local_128;
    }
    else {
      local_120 = (void *)((ulonglong)local_120 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_120,lVar11,4);
      if (cVar5 == '\0') {
        bVar1 = false;
        iVar6 = (uint)local_128;
      }
      else {
        bVar1 = true;
        iVar6 = (uint)local_120;
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    iVar14 = 0;
    if (bVar1) {
      iVar14 = iVar6;
    }
    lVar11 = (ulonglong)DAT_1808e4b44 + DAT_1808e4b30;
    local_108 = iVar14;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (lVar11 == 0) {
      bVar1 = false;
      uVar13 = (uint)local_128;
    }
    else {
      local_120 = (void *)((ulonglong)local_120 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_120,lVar11,4);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar13 = (uint)local_128;
      }
      else {
        bVar1 = true;
        uVar13 = (uint)local_120;
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if ((bVar1) && ((uVar13 & 0x7fffffff) != 0)) {
      lVar11 = (ulonglong)DAT_1808e4b48 + DAT_1808e4b30;
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      if (lVar11 == 0) {
        bVar1 = false;
        uVar9 = local_110;
      }
      else {
        local_118 = 0;
        cVar5 = FUN_1804514f0(&local_118,lVar11,8);
        if (cVar5 == '\0') {
          bVar1 = false;
          uVar9 = local_110;
        }
        else {
          bVar1 = true;
          uVar9 = local_118;
        }
      }
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      uVar15 = 0;
      if (bVar1) {
        uVar15 = uVar9;
      }
    }
    else {
      uVar15 = (ulonglong)DAT_1808e4b48 + DAT_1808e4b30;
    }
    if ((uVar15 != 0) && (iVar14 - 1U < 0x8000)) {
      pvVar16 = (void *)*param_2;
      _Size = param_2[1];
      local_58 = local_res20;
      puVar12 = (undefined8 *)&DAT_1808e4ba8;
      local_48 = &DAT_1808e4b30;
      local_118 = uVar15;
      local_f8 = pvVar16;
      sStack_f0 = _Size;
      local_50 = param_2;
      do {
        _Buf2 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          _Buf2 = (undefined8 *)*puVar12;
        }
      } while (((_Size != puVar12[2]) ||
               ((_Size != 0 && (iVar6 = memcmp(pvVar16,_Buf2,_Size), iVar6 != 0)))) &&
              (puVar12 = puVar12 + 8, puVar12 != &DAT_1808e4ca8));
      if (puVar12 == &DAT_1808e4ca8) {
        uVar9 = (ulonglong)((uint)DAT_1808e4ca8 & 3);
        lVar8 = uVar9 * 0x40;
        puVar12 = (undefined8 *)(&DAT_1808e4ba8 + lVar8);
        local_d8 = (undefined1  [16])0x0;
        auStack_c8 = (undefined1  [16])0x0;
        DAT_1808e4ca8 = DAT_1808e4ca8 + 1;
        FUN_18015ba30(local_d8,*param_2,param_2[1]);
        local_b8 = 0;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0;
        local_a8 = 0;
        local_a0 = 0;
        if (puVar12 != (undefined8 *)local_d8) {
          FUN_18015c010(puVar12);
          *puVar12 = local_d8._0_8_;
          *(undefined8 *)(lVar8 + 0x1808e4bb0) = local_d8._8_8_;
          (&DAT_1808e4bb8)[uVar9 * 8] = auStack_c8._0_8_;
          (&DAT_1808e4bc0)[uVar9 * 8] = auStack_c8._8_8_;
          auStack_c8 = ZEXT816(0xf) << 0x40;
          auVar2[0xf] = 0;
          auVar2._0_15_ = local_d8._1_15_;
          local_d8 = auVar2 << 8;
        }
        *(undefined8 *)(&DAT_1808e4bc8 + lVar8) = local_b8;
        *(ulonglong *)(&DAT_1808e4bd0 + uVar9 * 0x10) = CONCAT44(uStack_ac,uStack_b0);
        *(undefined8 *)(&DAT_1808e4bd8 + lVar8) = 0;
        *(undefined4 *)(&DAT_1808e4be0 + lVar8) = 0;
        FUN_18015c010(local_d8);
      }
      else {
        iVar6 = *(int *)(puVar12 + 5);
        if ((-1 < iVar6) && (iVar6 < iVar14)) {
          lVar11 = uVar15 + (longlong)iVar6 * 0x20;
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          if (lVar11 == 0) {
            bVar1 = false;
            iVar6 = (uint)local_128;
          }
          else {
            local_120 = (void *)((ulonglong)local_120 & 0xffffffff00000000);
            cVar5 = FUN_1804514f0(&local_120,lVar11,4);
            if (cVar5 == '\0') {
              bVar1 = false;
              iVar6 = (uint)local_128;
            }
            else {
              bVar1 = true;
              iVar6 = (uint)local_120;
            }
          }
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          if ((bVar1) && (iVar6 != *(int *)(puVar12 + 5))) {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (lVar11 + 0x18 == 0) {
              bVar1 = false;
              iVar6 = (uint)local_128;
            }
            else {
              local_120 = (void *)((ulonglong)local_120 & 0xffffffff00000000);
              cVar5 = FUN_1804514f0(&local_120,lVar11 + 0x18,4);
              if (cVar5 == '\0') {
                bVar1 = false;
                iVar6 = (uint)local_128;
              }
              else {
                bVar1 = true;
                iVar6 = (uint)local_120;
              }
            }
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            iVar7 = 0;
            if (bVar1) {
              iVar7 = iVar6;
            }
            if (iVar7 == *(int *)((longlong)puVar12 + 0x2c)) {
              lVar8 = FUN_18017ea70();
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
              if (lVar11 + 0x10 == 0) {
                bVar1 = false;
                uVar15 = local_110;
              }
              else {
                local_128 = 0;
                cVar5 = FUN_1804514f0(&local_128,lVar11 + 0x10,8);
                if (cVar5 == '\0') {
                  bVar1 = false;
                  uVar15 = local_110;
                }
                else {
                  bVar1 = true;
                  uVar15 = local_128;
                }
              }
              lVar8 = FUN_18017ea70();
              if (*(int *)(lVar8 + 4) != 0) {
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
              }
              uVar9 = 0;
              if (bVar1) {
                uVar9 = uVar15;
              }
              if ((uVar9 == puVar12[4]) && (lVar8 = FUN_1803f8790(&local_58), lVar8 != 0)) {
                return lVar8;
              }
            }
          }
          uVar15 = local_118;
        }
        if (puVar12[4] != 0) {
          puVar12[4] = 0;
          *(undefined4 *)(puVar12 + 5) = 0xffffffff;
          *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
          puVar12[6] = 0;
        }
        if (local_110 < (ulonglong)puVar12[6]) {
          return 0;
        }
      }
      iVar6 = *(int *)(puVar12 + 7);
      if (iVar14 <= iVar6) {
        *(undefined4 *)(puVar12 + 7) = 0;
        iVar6 = 0;
      }
      iVar7 = iVar14;
      if (iVar6 + 0x100 < iVar14) {
        iVar7 = iVar6 + 0x100;
      }
      if (iVar6 < iVar7) {
        while( true ) {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          lVar8 = (longlong)iVar6 * 0x20 + uVar15;
          if (lVar8 == 0) {
            bVar1 = false;
            iVar14 = (uint)local_128;
          }
          else {
            local_120 = (void *)((ulonglong)local_120 & 0xffffffff00000000);
            cVar5 = FUN_1804514f0(&local_120,lVar8,4);
            if (cVar5 == '\0') {
              bVar1 = false;
              iVar14 = (uint)local_128;
            }
            else {
              bVar1 = true;
              local_128 = CONCAT44(local_128._4_4_,(uint)local_120);
              iVar14 = (uint)local_120;
            }
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          if ((bVar1) && (iVar14 != iVar6)) {
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            bVar1 = false;
            if (lVar8 + 0x10 != 0) {
              local_120 = (void *)0x0;
              cVar5 = FUN_1804514f0(&local_120,lVar8 + 0x10,8);
              if (cVar5 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
                local_f8 = local_120;
              }
            }
            lVar11 = FUN_18017ea70();
            if (*(int *)(lVar11 + 4) != 0) {
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
            }
            pvVar16 = (void *)0x0;
            if (bVar1) {
              pvVar16 = local_f8;
            }
            lVar11 = FUN_1803f8790(&local_58,pvVar16);
            if (lVar11 != 0) {
              local_98 = (undefined1  [16])0x0;
              auStack_88 = (undefined1  [16])0x0;
              FUN_18015ba30(local_98,*local_e8,local_e8[1]);
              local_78 = pvVar16;
              iStack_70 = iVar6;
              lVar10 = FUN_18017ea70();
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
              if (lVar8 + 0x18 == 0) {
                bVar1 = false;
              }
              else {
                local_128 = local_128 & 0xffffffff00000000;
                cVar5 = FUN_1804514f0(&local_128,lVar8 + 0x18,4);
                if (cVar5 == '\0') {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
              }
              uVar4 = (uint)local_128;
              lVar8 = FUN_18017ea70();
              if (*(int *)(lVar8 + 4) != 0) {
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
              }
              local_68 = 0;
              local_60 = 0;
              uStack_6c = 0;
              if (bVar1) {
                uStack_6c = uVar4;
              }
              if (puVar12 != (undefined8 *)local_98) {
                FUN_18015c010(puVar12);
                *puVar12 = local_98._0_8_;
                puVar12[1] = local_98._8_8_;
                puVar12[2] = auStack_88._0_8_;
                puVar12[3] = auStack_88._8_8_;
                auStack_88 = ZEXT816(0xf) << 0x40;
                auVar3[0xf] = 0;
                auVar3._0_15_ = local_98._1_15_;
                local_98 = auVar3 << 8;
              }
              puVar12[4] = local_78;
              puVar12[5] = CONCAT44(uStack_6c,iStack_70);
              puVar12[6] = 0;
              *(undefined4 *)(puVar12 + 7) = 0;
              FUN_18015c010(local_98);
              return lVar11;
            }
          }
          iVar6 = iVar6 + 1;
          if (iVar7 <= iVar6) break;
          uVar15 = local_118;
        }
        iVar14 = local_108;
      }
      iVar6 = 0;
      if (iVar7 < iVar14) {
        iVar6 = iVar7;
      }
      *(int *)(puVar12 + 7) = iVar6;
      lVar8 = 0;
      if (iVar14 <= iVar7) {
        lVar8 = local_110 + 100;
      }
      puVar12[6] = lVar8;
    }
  }
  return 0;
}



