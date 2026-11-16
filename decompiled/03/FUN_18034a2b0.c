// FUN_18034a2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034a2b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18034a2b0(undefined8 *param_1,byte param_2,int param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined1 auStack_228 [32];
  char local_208;
  byte local_207;
  int local_200 [2];
  int local_1f8 [2];
  char local_1f0;
  undefined8 *local_1e8;
  int *local_1e0;
  int local_1d8;
  uint local_1d4;
  int local_120 [3];
  undefined1 local_114 [16];
  undefined8 local_104;
  undefined2 local_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 local_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  undefined1 local_78 [16];
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_228;
  local_1f0 = param_4;
  local_1d8 = param_3;
  piVar14 = (int *)((undefined8 *)*param_1)[1];
  iVar13 = 0;
  piVar8 = *(int **)*param_1;
  local_1e8 = param_1;
  local_1e0 = piVar14;
  if (piVar8 != piVar14) {
    uVar12 = (uint)param_2;
    uVar15 = 0;
    local_1d4 = (uint)param_2;
    local_207 = param_2;
    do {
      if (((*piVar8 == 0) == uVar12) &&
         (((*(char *)param_1[1] != '\0' || (*piVar8 != 1)) &&
          (*(char *)((longlong)piVar8 + 0x15) == '\0')))) {
        if ((0 < piVar8[0x36]) || (cVar6 = '\0', *(char *)((longlong)piVar8 + 0xdd) != '\0')) {
          cVar6 = '\x01';
        }
        if ((cVar6 == param_4) && (DAT_180bda1d8 < 0x168)) {
          local_120[0] = 1;
          if (1 < piVar8[7]) {
            local_120[0] = piVar8[7];
          }
          if (local_120[0] < 0x61) {
            local_104 = 0;
            uVar10 = 1;
            local_114 = (undefined1  [16])0x0;
            if (param_2 == 0) {
              local_200[0] = piVar8[4];
              local_1f8[0] = 1;
              piVar7 = local_1f8;
              if (0 < local_200[0]) {
                piVar7 = local_200;
              }
              piVar5 = local_120;
              if (local_200[0] <= local_120[0]) {
                piVar5 = piVar7;
              }
              lVar4 = param_1[2];
              local_120[2] = *piVar5;
              if ((*(char *)(lVar4 + 1) != '\0') && (*(int *)(lVar4 + 0x1c) == 1)) {
                local_1f8[0] = 1;
                if (*(char *)(lVar4 + 4) == '\0') {
                  local_1f8[0] = *(int *)(lVar4 + 0x20);
                }
                local_200[0] = 1;
                piVar7 = local_200;
                if (0 < local_1f8[0]) {
                  piVar7 = local_1f8;
                }
                piVar5 = local_120;
                if (local_1f8[0] <= local_120[0]) {
                  piVar5 = piVar7;
                }
                lVar4 = 0;
                do {
                  if (local_120[lVar4 + 2] == *piVar5) goto LAB_18034a486;
                  lVar4 = lVar4 + 1;
                } while (lVar4 < 1);
                uVar10 = 2;
                local_114._4_12_ = SUB1612((undefined1  [16])0x0,4);
                local_114._0_4_ = *piVar5;
              }
LAB_18034a486:
              lVar4 = 0;
              iVar9 = 1;
              if (local_120[0] < 1) {
                iVar9 = local_120[0];
              }
              if ((int)uVar10 != 0) {
                do {
                  uVar11 = uVar10;
                  if (local_120[lVar4 + 2] == iVar9) goto LAB_18034a4b4;
                  lVar4 = lVar4 + 1;
                } while (lVar4 < (longlong)uVar10);
              }
              uVar11 = (ulonglong)((int)uVar10 + 1);
              local_120[uVar10 + 2] = iVar9;
LAB_18034a4b4:
              local_1f8[0] = local_120[0] + -8;
              local_200[0] = 1;
              piVar7 = local_200;
              if (0 < local_1f8[0]) {
                piVar7 = local_1f8;
              }
              piVar5 = local_120;
              if (local_1f8[0] <= local_120[0]) {
                piVar5 = piVar7;
              }
              lVar4 = 0;
              if ((int)uVar11 != 0) {
                do {
                  uVar10 = uVar11;
                  if (local_120[lVar4 + 2] == *piVar5) goto LAB_18034a504;
                  lVar4 = lVar4 + 1;
                } while (lVar4 < (longlong)uVar11);
              }
              uVar10 = (ulonglong)((int)uVar11 + 1);
              local_120[uVar11 + 2] = *piVar5;
LAB_18034a504:
              local_1f8[0] = local_120[0] + -4;
              local_200[0] = 1;
              piVar7 = local_200;
              if (0 < local_1f8[0]) {
                piVar7 = local_1f8;
              }
              piVar5 = local_120;
              if (local_1f8[0] <= local_120[0]) {
                piVar5 = piVar7;
              }
              lVar4 = 0;
              if ((int)uVar10 != 0) {
                do {
                  uVar11 = uVar10;
                  if (local_120[lVar4 + 2] == *piVar5) goto LAB_18034a554;
                  lVar4 = lVar4 + 1;
                } while (lVar4 < (longlong)uVar10);
              }
              uVar11 = (ulonglong)((int)uVar10 + 1);
              local_120[uVar10 + 2] = *piVar5;
LAB_18034a554:
              local_1f8[0] = local_120[0] + -1;
              local_200[0] = 1;
              piVar7 = local_200;
              if (0 < local_1f8[0]) {
                piVar7 = local_1f8;
              }
              piVar5 = local_120;
              if (local_1f8[0] <= local_120[0]) {
                piVar5 = piVar7;
              }
              lVar4 = 0;
              if ((int)uVar11 != 0) {
                do {
                  uVar10 = uVar11;
                  if (local_120[lVar4 + 2] == *piVar5) goto LAB_18034a5a4;
                  lVar4 = lVar4 + 1;
                } while (lVar4 < (longlong)uVar11);
              }
              uVar10 = (ulonglong)((int)uVar11 + 1);
              local_120[uVar11 + 2] = *piVar5;
LAB_18034a5a4:
              if ((int)uVar10 != 0) goto LAB_18034a5bb;
            }
            else {
              local_120[2] = 1;
              if (local_120[0] < 1) {
                local_120[2] = local_120[0];
              }
LAB_18034a5bb:
              local_208 = '\0';
              iVar9 = 0;
              bVar1 = false;
              bVar2 = false;
              piVar14 = local_120 + 2;
              local_200[0] = iVar13;
              do {
                iVar13 = local_200[0];
                if (param_3 <= local_200[0]) break;
                local_200[0] = local_200[0] + 1;
                _auStack_e8 = ZEXT816(0);
                local_d8 = ZEXT816(0);
                uStack_4c = 0;
                iVar13 = *piVar14;
                local_f8 = 0;
                uStack_f4 = 0;
                uStack_f0 = 0;
                uStack_ec = uVar15;
                auStack_c8 = _auStack_e8;
                local_b8 = local_d8;
                auStack_a8 = _auStack_e8;
                local_98 = local_d8;
                auStack_88 = _auStack_e8;
                local_78 = local_d8;
                auStack_68 = _auStack_e8;
                local_58 = uVar15;
                uStack_54 = uVar15;
                uStack_50 = uVar15;
                iVar3 = FUN_180349bd0(param_1[3],piVar8,iVar13,&local_f8);
                if (iVar3 == 3) {
                  if (*(float *)local_1e8[4] <= (float)uStack_e0) {
                    FUN_18034e780(local_1e8[5],piVar8);
                    if (local_207 != 0) {
                      iVar13 = 0;
                    }
                    *(int *)(local_1e8[5] + 0x10) = iVar13;
                    lVar4 = local_1e8[5];
                    *(ulonglong *)(lVar4 + 0x18) = CONCAT44(uStack_f4,CONCAT22(uStack_f6,local_f8));
                    *(ulonglong *)(lVar4 + 0x20) = CONCAT44(uStack_ec,uStack_f0);
                    *(undefined1 (*) [8])(lVar4 + 0x28) = auStack_e8;
                    *(undefined8 *)(lVar4 + 0x30) = uStack_e0;
                    *(undefined8 *)(lVar4 + 0x38) = local_d8._0_8_;
                    *(undefined8 *)(lVar4 + 0x40) = local_d8._8_8_;
                    *(undefined8 *)(lVar4 + 0x48) = auStack_c8._0_8_;
                    *(undefined8 *)(lVar4 + 0x50) = auStack_c8._8_8_;
                    *(undefined8 *)(lVar4 + 0x58) = local_b8._0_8_;
                    *(undefined8 *)(lVar4 + 0x60) = local_b8._8_8_;
                    *(undefined8 *)(lVar4 + 0x68) = auStack_a8._0_8_;
                    *(undefined8 *)(lVar4 + 0x70) = auStack_a8._8_8_;
                    *(undefined8 *)(lVar4 + 0x78) = local_98._0_8_;
                    *(undefined8 *)(lVar4 + 0x80) = local_98._8_8_;
                    *(undefined8 *)(lVar4 + 0x88) = auStack_88._0_8_;
                    *(undefined8 *)(lVar4 + 0x90) = auStack_88._8_8_;
                    *(undefined8 *)(lVar4 + 0x98) = local_78._0_8_;
                    *(undefined8 *)(lVar4 + 0xa0) = local_78._8_8_;
                    *(undefined8 *)(lVar4 + 0xa8) = auStack_68._0_8_;
                    *(undefined8 *)(lVar4 + 0xb0) = auStack_68._8_8_;
                    *(ulonglong *)(lVar4 + 0xb8) = CONCAT44(uStack_54,local_58);
                    *(ulonglong *)(lVar4 + 0xc0) = CONCAT44(uStack_4c,uStack_50);
                    *(undefined1 *)(local_1e8[5] + 0x14) = 1;
                    *(undefined1 *)local_1e8[6] = 1;
                  }
                }
                else if (iVar3 == 4) {
                  bVar1 = true;
                  if ((char)piVar8[0x32] == '\0') {
                    piVar8[0x34] = auStack_e8._4_4_;
                    *(undefined1 *)(piVar8 + 0x32) = 1;
                    piVar8[0x33] = iVar13;
                  }
                }
                else if (iVar3 - 1U < 2) {
                  local_208 = '\x01';
                }
                else {
                  bVar2 = true;
                }
                iVar9 = iVar9 + 1;
                piVar14 = piVar14 + 1;
                param_1 = local_1e8;
                iVar13 = local_200[0];
                param_3 = local_1d8;
              } while (iVar9 < (int)uVar10);
              if ((bVar1) && (!bVar2)) {
                *(undefined1 *)((longlong)piVar8 + 0x15) = 1;
              }
              piVar14 = local_1e0;
              if (((local_208 != '\0') && (!bVar1)) && (!bVar2)) {
                *(undefined1 *)((longlong)piVar8 + 0x16) = 1;
              }
            }
            if (param_3 <= iVar13) {
            }
            param_4 = local_1f0;
            param_2 = local_207;
            uVar12 = local_1d4;
          }
          else {
            uVar12 = (uint)param_2;
          }
        }
      }
      piVar8 = piVar8 + 0x3a;
    } while (piVar8 != piVar14);
  }
}



