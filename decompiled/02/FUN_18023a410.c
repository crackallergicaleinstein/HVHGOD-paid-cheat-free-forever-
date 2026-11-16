// FUN_18023a410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023a410 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023a410(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 *param_6)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 **ppuVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  byte bVar18;
  undefined4 *puVar19;
  float fVar20;
  float fVar21;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auStack_7d8 [32];
  undefined **local_7b8;
  char *local_7b0;
  uint local_7a8;
  int local_7a0;
  undefined4 local_798;
  uint local_790;
  uint local_788;
  uint local_780;
  double local_778;
  uint local_770;
  byte local_768;
  byte local_767;
  undefined8 local_760;
  undefined4 local_758;
  int local_750 [2];
  undefined *local_748;
  longlong local_740;
  ULONGLONG local_738;
  undefined4 ***local_728;
  undefined4 uStack_720;
  uint uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  longlong local_708 [2];
  undefined4 **local_6f8;
  longlong local_6f0;
  undefined4 *local_6e8;
  longlong local_6e0;
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_7d8;
  local_740 = param_5;
  local_6e8 = param_6;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  local_6f8 = *(undefined4 ***)(param_2 + 0x40);
  local_767 = 0;
  local_708[0] = param_2;
  local_738 = GetTickCount64();
  iVar10 = DAT_180c64288;
  if (DAT_180c64288 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180c64280 <= UVar11) {
      local_748 = &DAT_1808ed440;
      iVar10 = FUN_1805f68d0(&DAT_1808ed440);
      if (iVar10 != 0) goto LAB_18023b1bc;
      if (DAT_1808ed48c == 0x7fffffff) {
        DAT_1808ed48c = 0x7ffffffe;
        goto LAB_18023b1a7;
      }
      if ((DAT_180c64288 == 0) && (DAT_180c64280 <= UVar11)) {
        DAT_180c64288 = FUN_1804174b0("CCSWeaponBaseVData",0xf3dfb3e5);
        if (DAT_180c64288 == 0) {
          DAT_180c64280 = UVar11 + 1000;
        }
        else {
          DAT_180c64280 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64288;
      FUN_1805f68fc(&DAT_1808ed440);
      if (iVar10 != 0) goto LAB_18023a56e;
    }
LAB_18023a5d9:
    local_750[0] = 0;
  }
  else {
LAB_18023a56e:
    if (DAT_180cc9340 == 0) goto LAB_18023a5d9;
    lVar16 = iVar10 + DAT_180cc9340;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (lVar16 == 0) {
      bVar1 = false;
      iVar10 = (int)local_748;
    }
    else {
      local_750[0] = 0;
      cVar6 = FUN_1804514f0(local_750,lVar16,4);
      if (cVar6 == '\0') {
        bVar1 = false;
        iVar10 = (int)local_748;
      }
      else {
        bVar1 = true;
        iVar10 = local_750[0];
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    local_750[0] = 0;
    if (bVar1) {
      local_750[0] = iVar10;
    }
  }
  iVar10 = DAT_180c64268;
  if (DAT_180c64268 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180c64270 <= UVar11) {
      local_748 = &DAT_1808ed490;
      iVar10 = FUN_1805f68d0(&DAT_1808ed490);
      if (iVar10 != 0) goto LAB_18023b1bc;
      if (DAT_1808ed4dc == 0x7fffffff) {
        DAT_1808ed4dc = 0x7ffffffe;
        goto LAB_18023b1a7;
      }
      if ((DAT_180c64268 == 0) && (DAT_180c64270 <= UVar11)) {
        DAT_180c64268 = FUN_1804174b0("C_CSWeaponBaseGun",0x444e63a0);
        if (DAT_180c64268 == 0) {
          DAT_180c64270 = UVar11 + 1000;
        }
        else {
          DAT_180c64270 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64268;
      FUN_1805f68fc(&DAT_1808ed490);
      if (iVar10 != 0) goto LAB_18023a697;
    }
    iVar15 = 0;
  }
  else {
LAB_18023a697:
    lVar16 = iVar10 + DAT_180cc9330;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (lVar16 == 0) {
      iVar10 = (int)local_748;
      bVar1 = false;
    }
    else {
      local_760 = (undefined *)((ulonglong)local_760 & 0xffffffff00000000);
      cVar6 = FUN_1804514f0(&local_760,lVar16,4);
      if (cVar6 == '\0') {
        bVar1 = false;
        iVar10 = (int)local_748;
      }
      else {
        iVar10 = (int)local_760;
        bVar1 = true;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar15 = 0;
    if (bVar1) {
      iVar15 = iVar10;
    }
  }
  local_748 = (undefined *)CONCAT44(local_748._4_4_,iVar15);
  uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710);
  if (*(char *)(local_740 + 0x2a9) != '\0') {
    if (2 < local_750[0] - 1U) {
      uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710);
      switch(DAT_180cc934c) {
      case 8:
      case 9:
      case 0xb:
      case 0x26:
      case 0x27:
      case 0x28:
        break;
      default:
        goto switchD_18023a748_caseD_a;
      }
    }
    uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710);
    if ((DAT_180cc9371 == '\0') &&
       (uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710), iVar15 < 1)) {
      local_767 = 1;
      iVar10 = DAT_180c64260;
      if (DAT_180c64260 == 0) {
        UVar11 = GetTickCount64();
        if (DAT_180c64258 <= UVar11) {
          local_760 = &DAT_1808ed3f0;
          iVar10 = FUN_1805f68d0(&DAT_1808ed3f0);
          if (iVar10 != 0) goto LAB_18023b1bc;
          if (DAT_1808ed43c == 0x7fffffff) {
            DAT_1808ed43c = 0x7ffffffe;
            goto LAB_18023b1a7;
          }
          if ((DAT_180c64260 == 0) && (DAT_180c64258 <= UVar11)) {
            DAT_180c64260 = FUN_1804174b0("C_BasePlayerWeapon",0xde66c257);
            if (DAT_180c64260 == 0) {
              DAT_180c64258 = UVar11 + 1000;
            }
            else {
              DAT_180c64258 = 0xffffffffffffffff;
            }
          }
          iVar10 = DAT_180c64260;
          FUN_1805f68fc(&DAT_1808ed3f0);
          if (iVar10 != 0) goto LAB_18023a81c;
        }
        local_760._0_5_ = (uint5)(uint)local_760;
      }
      else {
LAB_18023a81c:
        lVar16 = iVar10 + DAT_180cc9330;
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        if (lVar16 == 0) {
LAB_18023a85e:
          local_760._0_5_ = (uint5)(uint)local_760;
        }
        else {
          local_760 = (undefined *)((ulonglong)local_760 & 0xffffffff00000000);
          cVar6 = FUN_1804514f0(&local_760,lVar16,4);
          if (cVar6 == '\0') goto LAB_18023a85e;
          local_760._0_5_ = CONCAT14(1,(uint)local_760);
        }
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
      }
      uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710);
      if (((DAT_180b0dfd8._1_7_ & 8) == 0) &&
         (uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710),
         DAT_180b8f7b8 <= local_738)) {
        if ((char)((ulonglong)local_760 >> 0x20) != '\0') {
          piVar13 = (int *)&DAT_00000044;
          if (local_6f8 != (undefined4 **)0x0) {
            piVar13 = (int *)((longlong)local_6f8 + 0x54);
          }
          uStack_710 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710);
          if (*piVar13 < (int)local_760) goto switchD_18023a748_caseD_a;
        }
        local_718 = (undefined4)param_3;
        uStack_714 = (undefined4)((ulonglong)param_3 >> 0x20);
        uStack_710 = local_708;
        lVar12 = FUN_180240bb0(local_708[0],param_4,&local_718,local_708);
        DAT_180b8f80a = lVar12 != 0;
      }
    }
  }
switchD_18023a748_caseD_a:
  auVar27 = ZEXT864(0);
  iVar10 = DAT_180c64264;
  if (DAT_180c64264 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180c64240 <= UVar11) {
      local_760 = &DAT_1808ed3a0;
      iVar10 = FUN_1805f68d0(&DAT_1808ed3a0);
      if (iVar10 != 0) goto LAB_18023b1bc;
      if (DAT_1808ed3ec == 0x7fffffff) {
        DAT_1808ed3ec = 0x7ffffffe;
        goto LAB_18023b1a7;
      }
      if ((DAT_180c64264 == 0) && (DAT_180c64240 <= UVar11)) {
        DAT_180c64264 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
        if (DAT_180c64264 == 0) {
          DAT_180c64240 = UVar11 + 1000;
        }
        else {
          DAT_180c64240 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64264;
      FUN_1805f68fc(&DAT_1808ed3a0);
      if (iVar10 != 0) goto LAB_18023a9a3;
    }
    uStack_71c = uStack_71c & 0xffffff00;
    auVar25 = ZEXT1664(CONCAT412(uStack_71c,CONCAT48(uStack_720,local_728)));
    cVar6 = FUN_1802351c0(*(undefined8 *)(param_6 + 2));
    auVar23 = auVar25._0_16_;
LAB_18023aac9:
    auVar33 = ZEXT1664(auVar23);
    auVar23 = vshufps_avx(auVar25._0_16_,auVar25._0_16_,0x55);
    auVar32 = ZEXT1664(auVar23);
LAB_18023aace:
    auVar30 = ZEXT464(0x7fc00000);
  }
  else {
LAB_18023a9a3:
    lVar12 = *(longlong *)(param_6 + 2);
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    if (iVar10 + lVar12 == 0) {
      uStack_710._4_4_ = uStack_710._4_4_ & 0xffffff00;
      bVar2 = false;
      bVar1 = false;
    }
    else {
      local_758 = auVar27._0_4_;
      local_760 = (undefined *)CONCAT44(local_758,local_758);
      cVar6 = FUN_1804514f0(&local_760,iVar10 + lVar12,0xc);
      if (cVar6 == '\0') {
        uStack_710._4_4_ = (uint)uStack_710._5_3_ << 8;
        bVar1 = false;
        bVar2 = false;
      }
      else {
        local_718 = SUB84(local_760,0);
        uStack_714 = (undefined4)((ulonglong)local_760 >> 0x20);
        uStack_710._0_4_ = local_758;
        uStack_710._4_4_ = CONCAT31(uStack_710._5_3_,1);
        bVar1 = true;
        bVar2 = true;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      bVar1 = bVar2;
    }
    auVar25 = ZEXT1664(CONCAT412(uStack_710._4_4_,
                                 CONCAT48((undefined4)uStack_710,CONCAT44(uStack_714,local_718))));
    cVar6 = FUN_1802351c0(*(undefined8 *)(param_6 + 2));
    auVar23 = auVar25._0_16_;
    if (!bVar1) goto LAB_18023aac9;
    auVar33 = ZEXT1664(auVar23);
    sVar8 = thunk_FUN_180624430(auVar25._0_8_);
    auVar23 = vshufps_avx(auVar25._0_16_,auVar25._0_16_,0x55);
    auVar32 = ZEXT1664(auVar23);
    if (0 < sVar8) goto LAB_18023aace;
    sVar8 = thunk_FUN_180624430(auVar23._0_8_);
    if (0 < sVar8) goto LAB_18023aace;
    auVar23 = vshufps_avx(auVar25._0_16_,auVar25._0_16_,0xaa);
    sVar8 = thunk_FUN_180624430(auVar23._0_8_);
    if (0 < sVar8) goto LAB_18023aace;
    fVar20 = auVar32._0_4_ * auVar32._0_4_ + auVar25._0_4_ * auVar25._0_4_;
    if (fVar20 == auVar27._0_4_) {
      auVar30 = ZEXT864(0);
    }
    else if (fVar20 < 0.0) {
      auVar30._0_8_ = FUN_18061e150(fVar20);
      auVar30._8_56_ = extraout_var;
      auVar30 = ZEXT1664(auVar30._0_16_);
    }
    else {
      auVar30 = ZEXT464((uint)SQRT(fVar20));
    }
  }
  fVar20 = 5.0;
  bVar18 = 0;
  if ((*(char *)(local_740 + 0x278) == '\0') || (cVar6 != '\0')) {
LAB_18023afeb:
    bVar17 = 0;
  }
  else {
    sVar8 = thunk_FUN_180624430(auVar30._0_8_);
    if ((((sVar8 < 1) && (auVar30._0_4_ <= fVar20)) ||
        ((((((byte)DAT_180b0dfd8 & 2) != 0 || (DAT_180b8e554 != '\0')) || (DAT_180b90050 != '\0'))
         || (((DAT_180b900c0 != '\0' || (DAT_180b8fc30 != '\0')) || (DAT_180b8fe80 != '\0')))))) ||
       ((DAT_180b8fffc != '\0' || (DAT_180b90028 != '\0')))) {
      bVar18 = 0;
      goto LAB_18023afeb;
    }
    local_768 = 1;
    iVar10 = DAT_180c64250;
    if (DAT_180c64250 == 0) {
      UVar11 = GetTickCount64();
      if (DAT_180c64248 <= UVar11) {
        local_760 = &DAT_1808ed350;
        iVar10 = FUN_1805f68d0(&DAT_1808ed350);
        if (iVar10 != 0) {
LAB_18023b1bc:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ed39c == 0x7fffffff) {
          DAT_1808ed39c = 0x7ffffffe;
LAB_18023b1a7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c64250 == 0) && (DAT_180c64248 <= UVar11)) {
          DAT_180c64250 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
          if (DAT_180c64250 == 0) {
            DAT_180c64248 = UVar11 + 1000;
          }
          else {
            DAT_180c64248 = 0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c64250;
        FUN_1805f68fc(&DAT_1808ed350);
        if (iVar10 != 0) goto LAB_18023ac2c;
      }
      local_760._0_2_ = (ushort)(byte)local_760;
    }
    else {
LAB_18023ac2c:
      lVar12 = *(longlong *)(local_6e8 + 2);
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      if (iVar10 + lVar12 == 0) {
LAB_18023ac70:
        local_760._0_2_ = (ushort)(byte)local_760;
      }
      else {
        local_760 = (undefined *)((ulonglong)local_760 & 0xffffffffffffff00);
        cVar7 = FUN_1804514f0(&local_760,iVar10 + lVar12,1);
        if (cVar7 == '\0') goto LAB_18023ac70;
        local_760._0_2_ = CONCAT11(1,(byte)local_760);
      }
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
    }
    uVar5 = (ushort)local_760;
    ppuVar14 = (undefined4 **)&DAT_00000030;
    if (local_6f8 != (undefined4 **)0x0) {
      ppuVar14 = local_6f8 + 8;
    }
    puVar19 = (undefined4 *)0x0;
    if (*ppuVar14 != (undefined4 *)0x0) {
      puVar19 = *ppuVar14 + 4;
    }
    if ((DAT_180cd3b90 & 1) == 0) {
      DAT_180cd3b90 = DAT_180cd3b90 | 1;
      local_718 = 0x16cc57ac;
      uStack_710._0_4_ = 0;
      uStack_710._4_4_ = 0;
      local_6e8 = &local_718;
      local_6e0 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_6e8);
      DAT_180cd3b98 = (longlong *)CONCAT44(uStack_710._4_4_,(undefined4)uStack_710);
      uStack_710 = DAT_180cd3b98;
    }
    else {
    }
    plVar3 = DAT_180cd3b98;
    if ((DAT_180cd3ba0 & 1) == 0) {
      DAT_180cd3ba0 = DAT_180cd3ba0 | 1;
      local_6e8 = (undefined4 *)CONCAT44(local_6e8._4_4_,0xad8af3df);
      local_6e0 = 0;
      local_6f8 = &local_6e8;
      local_6f0 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_6f8);
      DAT_180cd3ba8 = local_6e0;
    }
    lVar12 = DAT_180cd3ba8;
    auVar23 = auVar25._0_16_;
    if ((DAT_180cd3bb0 & 1) == 0) {
      DAT_180cd3bb0 = DAT_180cd3bb0 | 1;
      local_6f8 = (undefined4 **)CONCAT44(local_6f8._4_4_,0xa84213b4);
      local_6f0 = 0;
      local_728 = &local_6f8;
      uStack_720 = 1;
      uStack_71c = 0;
      FUN_18044c9c0(DAT_180c64058,&local_728);
      auVar23 = auVar25._0_16_;
      DAT_180cd3bb8 = local_6f0;
    }
    if ((((local_760._1_1_ == '\0') || (((char)uVar5 - 7U & 0xfd) == 0)) || (auVar23[0xc] == '\0'))
       || (((puVar19 == (undefined4 *)0x0 || (plVar3 == (longlong *)0x0)) ||
           ((lVar12 == 0 || (DAT_180cd3bb8 == 0)))))) {
LAB_18023afe5:
      bVar18 = local_768;
      goto LAB_18023afeb;
    }
    auVar25 = ZEXT464(*(uint *)(DAT_180cd3bb8 + 0x58));
    auVar28 = ZEXT464(*(uint *)(lVar12 + 0x58));
    auVar29 = ZEXT464(DAT_180cc9368);
    auVar31 = ZEXT464((uint)puVar19[3]);
    sVar9 = thunk_FUN_180624430(auVar33._0_8_);
    if (0 < sVar9) {
LAB_18023afdd:
      fVar20 = 5.0;
      goto LAB_18023afe5;
    }
    sVar9 = thunk_FUN_180624430(auVar32._0_8_);
    if (0 < sVar9) goto LAB_18023afdd;
    sVar9 = thunk_FUN_180624430(auVar31._0_8_);
    if (0 < sVar9) goto LAB_18023afdd;
    sVar9 = thunk_FUN_180624430((int)plVar3[0xb]);
    if ((0 < sVar9) || (*(float *)(plVar3 + 0xb) <= auVar27._0_4_)) goto LAB_18023afdd;
    sVar9 = thunk_FUN_180624430(auVar29._0_8_);
    if ((0 < sVar9) || (auVar29._0_4_ <= auVar27._0_4_)) goto LAB_18023afdd;
    sVar9 = thunk_FUN_180624430(auVar28._0_8_);
    if ((0 < sVar9) || (auVar28._0_4_ < auVar27._0_4_)) goto LAB_18023afdd;
    sVar9 = thunk_FUN_180624430(auVar25._0_8_);
    if ((0 < sVar9) || (auVar25._0_4_ < auVar27._0_4_)) goto LAB_18023afdd;
    auVar26 = ZEXT464(DAT_180b8e154);
    sVar9 = thunk_FUN_180624430(DAT_180b8e154);
    if ((0 < sVar9) || (auVar26._0_4_ <= auVar27._0_4_)) goto LAB_18023afdd;
    auVar22._0_8_ = FUN_180636420(auVar33._0_8_,auVar32._0_8_);
    auVar22._8_56_ = extraout_var_00;
    auVar23 = vmaxss_avx(auVar25._0_16_,auVar22._0_16_);
    fVar20 = (float)auVar22._0_8_;
    auVar24 = auVar27._0_16_;
    auVar23 = vmaxss_avx(ZEXT416((uint)(fVar20 - auVar23._0_4_ * auVar28._0_4_ * auVar26._0_4_ *
                                                 0.015625)),auVar24);
    if (auVar29._0_4_ * *(float *)(plVar3 + 0xb) * auVar26._0_4_ * 0.015625 + 5.0 < auVar23._0_4_) {
      fVar21 = auVar31._0_4_ * 0.017453292;
      auVar27 = ZEXT464((uint)fVar21);
      auVar23._0_8_ = CONCAT44(auVar33._4_4_,-auVar33._0_4_) ^ 0x8000000000000000;
      auVar23._8_4_ = auVar33._8_4_ ^ 0x80000000;
      auVar23._12_4_ = auVar33._12_4_ ^ 0x80000000;
      auVar33 = ZEXT1664(CONCAT124(auVar23._4_12_,-auVar33._0_4_ / fVar20));
      auVar24._0_8_ = CONCAT44(auVar32._4_4_,-auVar32._0_4_) ^ 0x8000000000000000;
      auVar24._8_4_ = auVar32._8_4_ ^ 0x80000000;
      auVar24._12_4_ = auVar32._12_4_ ^ 0x80000000;
      auVar25 = ZEXT1664(CONCAT124(auVar24._4_12_,-auVar32._0_4_ / fVar20));
      fVar20 = (float)FUN_180638e00(fVar21,auVar23._0_8_,auVar24._0_8_);
      fVar21 = (float)FUN_180637540(auVar27._0_8_);
      auVar24 = ZEXT416((uint)(fVar20 * auVar25._0_4_ + fVar21 * auVar33._0_4_));
      auVar23 = ZEXT416((uint)(fVar21 * auVar25._0_4_ - fVar20 * auVar33._0_4_));
    }
    else {
      auVar23 = ZEXT416(0);
    }
    fVar20 = 5.0;
    auVar23 = vunpcklps_avx(auVar24,auVar23);
    cVar7 = FUN_180240dc0(local_708[0],auVar23._0_8_);
    if (cVar7 == '\0') goto LAB_18023afe5;
    DAT_180b8e4f4 = puVar19[3];
    DAT_180b0dfe8 = 1;
    bVar17 = 1;
    if ((0 < sVar8) || (fVar20 < auVar30._0_4_)) {
      bVar18 = 1;
    }
    else {
      bVar18 = 0;
    }
  }
  lVar12 = local_740;
  if (*(char *)(local_740 + 0x2a8) != '\0') {
    if (cVar6 == '\0') {
      sVar8 = thunk_FUN_180624430(auVar30._0_8_);
      if ((sVar8 < 1) && (auVar30._0_4_ <= fVar20)) goto LAB_18023b01a;
    }
    bVar18 = 1;
  }
LAB_18023b01a:
  bVar4 = local_767;
  if ((DAT_180c64238 <= local_738) && (((local_767 != 0 || (bVar17 != 0)) || (bVar18 != 0)))) {
    DAT_180c64238 = local_738 + 1000;
    FUN_18063ab10(local_6d8,0,0x600);
    local_778 = (double)auVar30._0_4_;
    local_7a8 = (uint)DAT_180b8f80a;
    local_770 = (uint)bVar18;
    local_780 = (uint)bVar17;
    local_788 = (uint)*(byte *)(lVar12 + 0x278);
    local_790 = (uint)bVar4;
    local_798 = (int)local_748;
    local_7a0 = local_750[0];
    local_7b0 = (char *)CONCAT44(local_7b0._4_4_,(uint)*(byte *)(lVar12 + 0x2a9));
    local_7b8 = *(undefined ***)(local_708[0] + 8);
    FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                  "command=%lld auto_scope=%d scope_pulse=%d zoom_levels=%d zoom=%d wait_scope=%d auto_stop=%d brake_owned=%d speed=%.3f wait_stop=%d"
                 );
    local_7b8 = &PTR_180700558;
    if (local_6d8[0] != '\0') {
      local_7b8 = (undefined **)&DAT_1806bcfc0;
    }
    local_7b0 = local_6d8;
    FUN_1800f6900(0);
  }
}



