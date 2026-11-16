// FUN_1802c0b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c0b80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c0b80(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  ULONGLONG UVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  size_t sVar19;
  size_t _Size;
  ulonglong uVar20;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  undefined8 *local_b0;
  char local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (param_3 != 0) {
    uVar20 = 0xffffffffffffffff;
    iVar12 = DAT_180c6e8d0;
    local_b0 = param_2;
    if (DAT_180c6e8d0 == 0) {
      UVar13 = GetTickCount64();
      if (UVar13 < DAT_180c6e8b0) {
        iVar12 = 0;
      }
      else {
        local_b0 = (undefined8 *)&DAT_1808f5a10;
        iVar12 = FUN_1805f68d0(&DAT_1808f5a10);
        if (iVar12 != 0) goto LAB_1802c1140;
        if (DAT_1808f5a5c == 0x7fffffff) {
          DAT_1808f5a5c = 0x7ffffffe;
          goto LAB_1802c1155;
        }
        if ((DAT_180c6e8d0 == 0) && (DAT_180c6e8b0 <= UVar13)) {
          DAT_180c6e8d0 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
          if (DAT_180c6e8d0 == 0) {
            DAT_180c6e8b0 = UVar13 + 1000;
          }
          else {
            DAT_180c6e8b0 = 0xffffffffffffffff;
          }
        }
        iVar12 = DAT_180c6e8d0;
        FUN_1805f68fc(&DAT_1808f5a10);
      }
    }
    lVar14 = FUN_18017ea70();
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
    param_3 = (longlong)iVar12 + 8 + param_3;
    bVar2 = false;
    if (param_3 != 0) {
      local_b0 = (undefined8 *)0x0;
      cVar10 = FUN_1804514f0(&local_b0,param_3,8);
      if (cVar10 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    puVar5 = local_b0;
    lVar14 = FUN_18017ea70();
    if (*(int *)(lVar14 + 4) != 0) {
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
    }
    if ((bVar2) && (puVar5 != (undefined8 *)0x0)) {
      iVar12 = DAT_180c6e8b8;
      if (DAT_180c6e8b8 == 0) {
        UVar13 = GetTickCount64();
        if (UVar13 < DAT_180c6e8c0) {
          iVar12 = 0;
        }
        else {
          local_b0 = (undefined8 *)&DAT_1808f5970;
          iVar12 = FUN_1805f68d0(&DAT_1808f5970);
          if (iVar12 != 0) {
LAB_1802c1140:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808f59bc == 0x7fffffff) {
            DAT_1808f59bc = 0x7ffffffe;
LAB_1802c1155:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6e8b8 == 0) && (DAT_180c6e8c0 <= UVar13)) {
            DAT_180c6e8b8 = FUN_1804174b0("CCSWeaponBaseVData",0x6750bacb);
            if (DAT_180c6e8b8 == 0) {
              DAT_180c6e8c0 = UVar13 + 1000;
            }
            else {
              DAT_180c6e8c0 = 0xffffffffffffffff;
            }
          }
          iVar12 = DAT_180c6e8b8;
          FUN_1805f68fc(&DAT_1808f5970);
        }
      }
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      bVar2 = false;
      if ((undefined *)((longlong)iVar12 + (longlong)puVar5) != (undefined *)0x0) {
        local_b0 = (undefined8 *)0x0;
        cVar10 = FUN_1804514f0(&local_b0,(undefined *)((longlong)iVar12 + (longlong)puVar5),8);
        if (cVar10 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      puVar6 = local_b0;
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
        uStack_40 = 0;
        uStack_38 = 0xf;
        local_50._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar1[0xf] = 0;
        auVar1._0_15_ = local_50._1_15_;
        local_50 = auVar1 << 8;
        FUN_1800f5540(local_50,0x20);
        puVar17 = puVar6;
        cVar10 = local_b8[0];
        do {
          lVar14 = FUN_18017ea70();
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
          if (puVar17 == (undefined8 *)0x0) {
            bVar2 = false;
          }
          else {
            local_b8[0] = '\0';
            cVar11 = FUN_1804514f0(local_b8,puVar17,1);
            if (cVar11 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
              cVar10 = local_b8[0];
            }
          }
          lVar14 = FUN_18017ea70();
          if (*(int *)(lVar14 + 4) != 0) {
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
          }
          if (!bVar2) goto LAB_1802c10f7;
          if (cVar10 == '\0') break;
          FUN_18015af80(local_50,cVar10);
          puVar17 = (undefined8 *)((longlong)puVar17 + 1);
        } while ((ulonglong)((longlong)puVar17 - (longlong)puVar6) < 0x40);
        uVar9 = uStack_38;
        uVar18 = uStack_40;
        local_88 = 0xdb35e39b27e1c185;
        local_b0 = (undefined8 *)0xa05181ee77d57a06;
        uStack_80 = 0xa05181ee77d57a06;
        builtin_strncpy(local_a8,"weapon_",8);
        local_a8[8] = '\0';
        local_a8[9] = '\0';
        local_a8[10] = '\0';
        local_a8[0xb] = '\0';
        local_a8[0xc] = '\0';
        local_a8[0xd] = '\0';
        local_a8[0xe] = '\0';
        local_a8[0xf] = '\0';
        uVar7 = local_50._0_8_;
        puVar16 = local_50;
        if (0xf < uStack_38) {
          puVar16 = (undefined1 *)local_50._0_8_;
        }
        sVar19 = 0xffffffffffffffff;
        do {
          _Size = sVar19 + 1;
          lVar14 = sVar19 + 1;
          sVar19 = _Size;
        } while (local_a8[lVar14] != '\0');
        if ((_Size <= uStack_40) && (iVar12 = memcmp(puVar16,local_a8,_Size), iVar12 == 0)) {
          uVar15 = 7;
          if (uVar18 < 7) {
            uVar15 = uVar18;
          }
          puVar16 = local_50;
          if (0xf < uVar9) {
            puVar16 = (undefined1 *)uVar7;
          }
          uVar18 = uVar18 - uVar15;
          FUN_18063aed0(puVar16,puVar16 + uVar15,uVar18 + 1);
          iVar12 = DAT_180c6e8a4;
          uStack_40 = uVar18;
          if (DAT_180c6e8a4 == 0) {
            UVar13 = GetTickCount64();
            if (UVar13 < DAT_180c6e8a8) {
              iVar12 = 0;
            }
            else {
              local_b0 = (undefined8 *)&DAT_1808f59c0;
              iVar12 = FUN_1805f68d0(&DAT_1808f59c0);
              if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808f5a0c == 0x7fffffff) {
                DAT_1808f5a0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c6e8a4 == 0) && (DAT_180c6e8a8 <= UVar13)) {
                DAT_180c6e8a4 = FUN_1804174b0("CCSWeaponBaseVData",0xb2a4b729);
                if (DAT_180c6e8a4 == 0) {
                  uVar20 = UVar13 + 1000;
                }
                DAT_180c6e8a8 = uVar20;
              }
              iVar12 = DAT_180c6e8a4;
              FUN_1805f68fc(&DAT_1808f59c0);
            }
          }
          lVar14 = FUN_18017ea70();
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
          if ((undefined *)((longlong)iVar12 + (longlong)puVar5) == (undefined *)0x0) {
            bVar2 = false;
          }
          else {
            local_b0 = (undefined8 *)((ulonglong)local_b0 & 0xffffffff00000000);
            cVar10 = FUN_1804514f0(&local_b0,(undefined *)((longlong)iVar12 + (longlong)puVar5),4);
            if (cVar10 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          uVar4 = local_b0._0_4_;
          lVar14 = FUN_18017ea70();
          uVar18 = uStack_38;
          uVar20 = uStack_40;
          auVar1 = local_50;
          if (*(int *)(lVar14 + 4) != 0) {
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
          }
          if (bVar2) {
            uVar7 = local_50._0_8_;
            uVar8 = local_50._8_8_;
            uStack_70 = local_50._8_8_;
            uStack_40 = 0;
            uStack_38 = 0xf;
            auVar3[0xf] = 0;
            auVar3._0_15_ = local_50._1_15_;
            local_50 = auVar3 << 8;
            local_58 = uVar4;
            *param_2 = uVar7;
            param_2[1] = uVar8;
            param_2[2] = uVar20;
            param_2[3] = uVar18;
            uStack_68 = 0;
            uStack_60 = 0xf;
            local_78._1_7_ = auVar1._1_7_;
            local_78 = (ulonglong)local_78._1_7_ << 8;
            *(undefined4 *)(param_2 + 4) = uVar4;
            *(undefined1 *)(param_2 + 5) = 1;
            FUN_18015c010(&local_78);
            FUN_18015c010(local_50);
          }
        }
LAB_1802c10f7:
        *(undefined1 *)(param_2 + 5) = 0;
        FUN_18015c010(local_50);
      }
    }
  }
  *(undefined1 *)(param_2 + 5) = 0;
}



