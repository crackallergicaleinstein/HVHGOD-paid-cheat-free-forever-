// FUN_18026e6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026e6a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026e6a0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  ULONGLONG UVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong **ppuVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auStack_418 [32];
  undefined8 ***local_3f8;
  undefined8 local_3f0;
  longlong local_3e8 [100];
  undefined4 local_c8;
  ulonglong **local_b8;
  longlong local_b0;
  undefined8 ***local_a8;
  longlong local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined4 local_88 [2];
  longlong local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_418;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 (*) [16])((longlong)param_2 + 0x14) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  plVar1 = (longlong *)((longlong)param_2 + 0x2c);
  FUN_18063ab10(plVar1,0,800);
  FUN_180233c60(plVar1);
  *(undefined4 *)((longlong)param_2 + 0x34c) = 0;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  *(undefined4 *)(param_2 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 900) = 0;
  param_2[0x71] = 0;
  *param_2 = param_3;
  param_2[0x6a] = (longlong)param_4;
  if ((param_4 == (longlong *)0x0) || (*param_4 != param_3)) {
    FUN_18063ab10(local_3e8,0,800);
    FUN_180233c60(local_3e8);
    local_c8 = 0;
  }
  else {
    lVar16 = 6;
    plVar6 = param_4 + 9;
    plVar13 = local_3e8;
    do {
      plVar15 = plVar13;
      plVar12 = plVar6;
      lVar3 = plVar12[1];
      lVar4 = plVar12[2];
      lVar5 = plVar12[3];
      *plVar15 = *plVar12;
      plVar15[1] = lVar3;
      plVar15[2] = lVar4;
      plVar15[3] = lVar5;
      lVar3 = plVar12[5];
      lVar4 = plVar12[6];
      lVar5 = plVar12[7];
      plVar15[4] = plVar12[4];
      plVar15[5] = lVar3;
      plVar15[6] = lVar4;
      plVar15[7] = lVar5;
      lVar3 = plVar12[9];
      lVar4 = plVar12[10];
      lVar5 = plVar12[0xb];
      plVar15[8] = plVar12[8];
      plVar15[9] = lVar3;
      plVar15[10] = lVar4;
      plVar15[0xb] = lVar5;
      lVar3 = plVar12[0xd];
      plVar15[0xc] = plVar12[0xc];
      plVar15[0xd] = lVar3;
      lVar3 = plVar12[0xf];
      plVar15[0xe] = plVar12[0xe];
      plVar15[0xf] = lVar3;
      lVar16 = lVar16 + -1;
      plVar6 = plVar12 + 0x10;
      plVar13 = plVar15 + 0x10;
    } while (lVar16 != 0);
    lVar16 = plVar12[0x11];
    lVar3 = plVar12[0x12];
    lVar4 = plVar12[0x13];
    plVar15[0x10] = plVar12[0x10];
    plVar15[0x11] = lVar16;
    plVar15[0x12] = lVar3;
    plVar15[0x13] = lVar4;
    *(int *)(plVar15 + 0x14) = (int)plVar12[0x14];
  }
  lVar16 = 6;
  plVar6 = local_3e8;
  do {
    plVar12 = plVar1;
    plVar13 = plVar6;
    lVar3 = plVar13[1];
    lVar4 = plVar13[2];
    lVar5 = plVar13[3];
    *plVar12 = *plVar13;
    plVar12[1] = lVar3;
    plVar12[2] = lVar4;
    plVar12[3] = lVar5;
    lVar3 = plVar13[5];
    lVar4 = plVar13[6];
    lVar5 = plVar13[7];
    plVar12[4] = plVar13[4];
    plVar12[5] = lVar3;
    plVar12[6] = lVar4;
    plVar12[7] = lVar5;
    lVar3 = plVar13[9];
    lVar4 = plVar13[10];
    lVar5 = plVar13[0xb];
    plVar12[8] = plVar13[8];
    plVar12[9] = lVar3;
    plVar12[10] = lVar4;
    plVar12[0xb] = lVar5;
    lVar3 = plVar13[0xd];
    plVar12[0xc] = plVar13[0xc];
    plVar12[0xd] = lVar3;
    lVar3 = plVar13[0xf];
    plVar12[0xe] = plVar13[0xe];
    plVar12[0xf] = lVar3;
    lVar16 = lVar16 + -1;
    plVar6 = plVar13 + 0x10;
    plVar1 = plVar12 + 0x10;
  } while (lVar16 != 0);
  lVar16 = plVar13[0x11];
  lVar3 = plVar13[0x12];
  lVar4 = plVar13[0x13];
  plVar12[0x10] = plVar13[0x10];
  plVar12[0x11] = lVar16;
  plVar12[0x12] = lVar3;
  plVar12[0x13] = lVar4;
  *(int *)(plVar12 + 0x14) = (int)plVar13[0x14];
  if (param_4 != (longlong *)0x0) {
    lVar16 = param_4[4];
    lVar3 = param_4[5];
    lVar4 = param_4[6];
    param_2[0x6b] = param_4[3];
    param_2[0x6c] = lVar16;
    param_2[0x6d] = lVar3;
    param_2[0x6e] = lVar4;
    lVar16 = param_4[8];
    param_2[0x6f] = param_4[7];
    param_2[0x70] = lVar16;
  }
  uVar18 = 0xffffffffffffffff;
  iVar11 = DAT_180c65008;
  if (DAT_180c65008 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c65000) {
      iVar11 = 0;
    }
    else {
      local_b8 = (ulonglong **)&DAT_1808f1530;
      iVar11 = FUN_1805f68d0(&DAT_1808f1530);
      if (iVar11 != 0) goto LAB_18026ef32;
      if (DAT_1808f157c == 0x7fffffff) {
        DAT_1808f157c = 0x7ffffffe;
        goto LAB_18026ef27;
      }
      if ((DAT_180c65008 == 0) && (DAT_180c65000 <= UVar14)) {
        DAT_180c65008 = FUN_1804174b0("C_CSPlayerPawn",0x8937152d);
        if (DAT_180c65008 == 0) {
          DAT_180c65000 = UVar14 + 1000;
        }
        else {
          DAT_180c65000 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c65008;
      FUN_1805f68fc(&DAT_1808f1530);
    }
  }
  bVar19 = false;
  if (iVar11 + param_3 != 0) {
    local_b8 = (ulonglong **)((ulonglong)local_b8 & 0xffffffff00000000);
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    cVar7 = FUN_1804514c0(&local_b8,iVar11 + param_3,4);
    bVar19 = cVar7 != '\0';
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
  }
  uVar10 = local_b8._0_4_;
  if (!bVar19) {
    uVar10 = 0;
  }
  *(undefined4 *)(param_2 + 1) = uVar10;
  iVar11 = DAT_180c64fe8;
  if (DAT_180c64fe8 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c64ff0) {
      iVar11 = 0;
    }
    else {
      local_b8 = (ulonglong **)&DAT_1808f1580;
      iVar11 = FUN_1805f68d0(&DAT_1808f1580);
      if (iVar11 != 0) goto LAB_18026ef32;
      if (DAT_1808f15cc == 0x7fffffff) {
        DAT_1808f15cc = 0x7ffffffe;
        goto LAB_18026ef27;
      }
      if ((DAT_180c64fe8 == 0) && (DAT_180c64ff0 <= UVar14)) {
        DAT_180c64fe8 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
        if (DAT_180c64fe8 == 0) {
          DAT_180c64ff0 = UVar14 + 1000;
        }
        else {
          DAT_180c64ff0 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c64fe8;
      FUN_1805f68fc(&DAT_1808f1580);
    }
  }
  bVar19 = false;
  if (iVar11 + param_3 != 0) {
    local_b8 = (ulonglong **)((ulonglong)local_b8 & 0xffffffffffffff00);
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    cVar7 = FUN_1804514c0(&local_b8,iVar11 + param_3,1);
    bVar19 = cVar7 != '\0';
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
  }
  bVar8 = (byte)local_b8;
  if (!bVar19) {
    bVar8 = 0;
  }
  *(uint *)((longlong)param_2 + 0xc) = (uint)bVar8;
  if (0 < (int)param_2[1]) {
    iVar11 = DAT_180c64fe0;
    if (DAT_180c64fe0 == 0) {
      UVar14 = GetTickCount64();
      if (UVar14 < DAT_180c64fd8) {
        iVar11 = 0;
      }
      else {
        local_b8 = (ulonglong **)&DAT_1808f14e0;
        iVar11 = FUN_1805f68d0(&DAT_1808f14e0);
        if (iVar11 != 0) goto LAB_18026ef32;
        if (DAT_1808f152c == 0x7fffffff) {
          DAT_1808f152c = 0x7ffffffe;
          goto LAB_18026ef27;
        }
        if ((DAT_180c64fe0 == 0) && (DAT_180c64fd8 <= UVar14)) {
          DAT_180c64fe0 = FUN_1804174b0("C_BasePlayerPawn",0xaabbb9b8);
          if (DAT_180c64fe0 == 0) {
            DAT_180c64fd8 = UVar14 + 1000;
          }
          else {
            DAT_180c64fd8 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c64fe0;
        FUN_1805f68fc(&DAT_1808f14e0);
      }
    }
    if (iVar11 + param_3 == 0) {
      bVar19 = false;
    }
    else {
      local_b8 = (ulonglong **)0x0;
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      cVar7 = FUN_1804514c0(&local_b8,iVar11 + param_3,8);
      if (cVar7 == '\0') {
        bVar19 = false;
        lVar16 = FUN_18017ea70();
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
      }
      else {
        bVar19 = true;
        lVar16 = FUN_18017ea70();
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
        local_3f8 = (undefined8 ***)local_b8;
      }
    }
    ppuVar17 = (ulonglong **)local_3f8;
    if (!bVar19) {
      ppuVar17 = (ulonglong **)0x0;
    }
    if (ppuVar17 != (ulonglong **)0x0) {
      iVar11 = DAT_180c64fe4;
      if (DAT_180c64fe4 == 0) {
        UVar14 = GetTickCount64();
        if (UVar14 < DAT_180c64fd0) {
          iVar11 = 0;
        }
        else {
          local_b8 = (ulonglong **)&DAT_1808f1490;
          iVar11 = FUN_1805f68d0(&DAT_1808f1490);
          if (iVar11 != 0) {
LAB_18026ef32:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808f14dc == 0x7fffffff) {
            DAT_1808f14dc = 0x7ffffffe;
LAB_18026ef27:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c64fe4 == 0) && (DAT_180c64fd0 <= UVar14)) {
            DAT_180c64fe4 = FUN_1804174b0("CCSPlayer_ItemServices",0x4240b6f6);
            if (DAT_180c64fe4 == 0) {
              uVar18 = UVar14 + 1000;
            }
            DAT_180c64fd0 = uVar18;
          }
          iVar11 = DAT_180c64fe4;
          FUN_1805f68fc(&DAT_1808f1490);
        }
      }
      bVar19 = false;
      if ((undefined *)((longlong)iVar11 + (longlong)ppuVar17) != (undefined *)0x0) {
        local_b8 = (ulonglong **)((ulonglong)local_b8 & 0xffffffffffffff00);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        cVar7 = FUN_1804514c0(&local_b8,(undefined *)((longlong)iVar11 + (longlong)ppuVar17),1);
        bVar19 = cVar7 != '\0';
        lVar16 = FUN_18017ea70();
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
      }
      uVar9 = (byte)local_b8;
      if (!bVar19) {
        uVar9 = 0;
      }
      *(undefined1 *)(param_2 + 2) = uVar9;
    }
  }
  if ((DAT_180cd3c80 & 1) == 0) {
    DAT_180cd3c80 = DAT_180cd3c80 | 1;
    local_b8 = (ulonglong **)CONCAT44(local_b8._4_4_,0x51c2378);
    local_b0 = 0;
    local_a8 = &local_b8;
    local_a0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_a8);
    DAT_180cd3c88 = local_b0;
  }
  auVar24 = ZEXT416(*(uint *)(DAT_180cd3c88 + 0x58));
  if ((DAT_180cd3c90 & 1) == 0) {
    DAT_180cd3c90 = DAT_180cd3c90 | 1;
    local_98[0] = 0x2d45f02d;
    local_90 = 0;
    local_a8 = (undefined8 ***)local_98;
    local_a0 = 1;
    auVar22 = ZEXT464(*(uint *)(DAT_180cd3c88 + 0x58));
    FUN_18044c9c0(DAT_180c64058,&local_a8);
    auVar24 = auVar22._0_16_;
    DAT_180cd3c98 = local_90;
  }
  auVar21 = ZEXT416(*(uint *)(DAT_180cd3c98 + 0x58));
  if ((DAT_180cd3ca0 & 1) == 0) {
    DAT_180cd3ca0 = DAT_180cd3ca0 | 1;
    local_88[0] = 0x874b1932;
    local_80 = 0;
    local_a8 = (undefined8 ***)local_88;
    local_a0 = 1;
    auVar22 = ZEXT464(*(uint *)(DAT_180cd3c98 + 0x58));
    auVar25 = ZEXT1664(auVar24);
    FUN_18044c9c0(DAT_180c64058,&local_a8);
    auVar21 = auVar22._0_16_;
    auVar24 = auVar25._0_16_;
    DAT_180cd3ca8 = local_80;
  }
  uVar20 = auVar21._0_4_;
  uVar23 = auVar24._0_4_;
  uVar10 = *(undefined4 *)(DAT_180cd3ca8 + 0x58);
  if ((DAT_180cd3cb0 & 1) == 0) {
    DAT_180cd3cb0 = DAT_180cd3cb0 | 1;
    local_a8 = (undefined8 ***)CONCAT44(local_a8._4_4_,0x227932f);
    local_a0 = 0;
    local_3f8 = &local_a8;
    local_3f0 = 1;
    auVar22 = ZEXT1664(auVar21);
    auVar25 = ZEXT1664(auVar24);
    FUN_18044c9c0(DAT_180c64058,&local_3f8);
    uVar20 = auVar22._0_4_;
    uVar23 = auVar25._0_4_;
    DAT_180cd3cb8 = local_a0;
  }
  uVar2 = *(undefined4 *)(DAT_180cd3cb8 + 0x58);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar23;
  *(undefined4 *)(param_2 + 3) = uVar20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar10;
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x14);
}



