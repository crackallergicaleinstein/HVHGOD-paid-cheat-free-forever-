// FUN_1802d0510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d0510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d0510(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar11;
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  double local_6c8;
  undefined1 local_6b8 [16];
  undefined8 local_6a8;
  longlong lStack_6a0;
  ULONGLONG UStack_698;
  undefined8 uStack_690;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  if (param_2 != 0) {
    sVar5 = thunk_FUN_180624430(param_3);
    fVar14 = (float)param_3;
    if (0 < sVar5) {
    }
    fVar13 = 0.0;
    if (fVar14 < 0.0) {
    }
    iVar6 = DAT_180c6eb00;
    uVar11 = extraout_XMM0_Qa;
    if (DAT_180c6eb00 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6eb08) {
        iVar6 = 0;
        uVar11 = extraout_XMM0_Qa_00;
      }
      else {
        local_6b8._0_8_ = &DAT_1808fd040;
        iVar6 = FUN_1805f68d0(&DAT_1808fd040);
        if (iVar6 != 0) goto LAB_1802d0a39;
        if (DAT_1808fd08c == 0x7fffffff) {
          DAT_1808fd08c = 0x7ffffffe;
          goto LAB_1802d0a2e;
        }
        if ((DAT_180c6eb00 == 0) && (DAT_180c6eb08 <= UVar7)) {
          DAT_180c6eb00 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c6eb00 == 0) {
            DAT_180c6eb08 = UVar7 + 1000;
          }
          else {
            DAT_180c6eb08 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6eb00;
        uVar11 = FUN_1805f68fc(&DAT_1808fd040);
      }
    }
    lVar8 = FUN_1803d4150(uVar11,*(undefined4 *)(iVar6 + param_2));
    if (lVar8 != 0) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_6a8 = _DAT_180bb8890;
      lStack_6a0 = lRam0000000180bb8898;
      UStack_698 = URam0000000180bb88a0;
      uStack_690 = uRam0000000180bb88a8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      if (lVar8 == lStack_6a0) {
        local_6b8 = ZEXT816(0x180cc9b08);
        iVar6 = FUN_1805f68d0(&DAT_180cc9b08);
        if (iVar6 != 0) {
LAB_1802d0a39:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180cc9b54 == 0x7fffffff) {
          DAT_180cc9b54 = 0x7ffffffe;
LAB_1802d0a2e:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_6b8[8] = 1;
        UVar7 = GetTickCount64();
        puVar3 = DAT_180cc9a98;
        DAT_180cc9bac = 0;
        DAT_180cc9bae = 1;
        DAT_180cc9b88 = UVar7;
        if ((DAT_180cc9bad != '\0') && (UVar7 - DAT_180cc9b80 < 0x33)) {
          _DAT_180cc9b60 = DAT_180cc9b6c;
          _DAT_180cc9b68 = DAT_180cc9b74;
          DAT_180cc9bac = 1;
          DAT_180cc9bae = 0;
          local_6a8 = DAT_180cc9b6c;
          lStack_6a0 = CONCAT44(lStack_6a0._4_4_,DAT_180cc9b74);
          _DAT_180cc9b78 = UVar7;
          UStack_698 = UVar7;
          if (DAT_180cc9a98 == DAT_180cc9aa0) {
            FUN_180231380(&DAT_180cc9a90,DAT_180cc9a98,&local_6a8);
          }
          else {
            *DAT_180cc9a98 = DAT_180cc9b6c;
            puVar3[1] = lStack_6a0;
            puVar3[2] = UVar7;
            DAT_180cc9a98 = DAT_180cc9a98 + 3;
          }
          if (0x20 < (ulonglong)(((longlong)DAT_180cc9a98 - DAT_180cc9a90) / 0x18)) {
            FUN_18063aed0(DAT_180cc9a90,DAT_180cc9a90 + 0x18,
                          (longlong)DAT_180cc9a98 - (DAT_180cc9a90 + 0x18));
            DAT_180cc9a98 = DAT_180cc9a98 + -3;
          }
        }
        lVar8 = DAT_180bb8958;
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (lVar8 == 0) {
          bVar2 = false;
        }
        else {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_6b8._8_8_;
          local_6b8 = auVar1 << 0x40;
          cVar4 = FUN_1804514f0(local_6b8,lVar8,8);
          if (cVar4 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        uVar11 = local_6b8._0_8_;
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        if ((!bVar2) || (uVar11 == 0)) {
          auVar12 = ZEXT464(0xbf800000);
        }
        else {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          lVar8 = uVar11 + 0x30;
          uVar10 = 0;
          if (lVar8 != 0) {
            local_6b8._0_4_ = fVar13;
            cVar4 = FUN_1804514f0(local_6b8,lVar8,4);
            if (cVar4 == '\0') {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
          }
          auVar12 = ZEXT464((uint)local_6b8._0_4_);
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          auVar1 = vpcmpeqd_avx(ZEXT416(uVar10),SUB6416(ZEXT464(0),0));
          auVar1 = vblendvps_avx(auVar12._0_16_,SUB6416(ZEXT464(0xbf800000),0),auVar1);
          auVar12 = ZEXT1664(auVar1);
        }
        sVar5 = thunk_FUN_180624430(auVar12._0_8_);
        if (sVar5 < 1) {
          lVar8 = DAT_180cc9a08;
          if (fVar13 <= auVar12._0_4_) {
            for (; lVar8 != DAT_180cc9a10; lVar8 = lVar8 + 0x13d0) {
              fVar13 = auVar12._0_4_ - *(float *)(lVar8 + 0x68);
              if ((((*(char *)(lVar8 + 0x13a0) != '\0') && (*(char *)(lVar8 + 0x13a7) == '\0')) &&
                  (*(char *)(lVar8 + 0x13a1) == '\0')) &&
                 (((*(char *)(lVar8 + 0x13a8) == '\0' && (-0.05 <= fVar13)) && (fVar13 <= 0.25)))) {
                *(float *)(lVar8 + 0x24) = fVar14;
                *(undefined1 *)(lVar8 + 0x13a8) = 1;
                FUN_18063ab10(local_658,0,0x600);
                local_6c8 = (double)fVar14;
                local_6d0 = (char *)(double)*(float *)(lVar8 + 0x1c);
                local_6d8 = *(undefined ***)(lVar8 + 0x1398);
                FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                              "command=%lld planned=%.7f observed=%.7f source=client_fire");
                local_6d8 = &PTR_180700558;
                if (local_658[0] != '\0') {
                  local_6d8 = (undefined **)&DAT_1806bcfc0;
                }
                local_6d0 = local_658;
                FUN_1800f6900(0,local_6d0,"Shots","SHOT_NATIVE_ACCURACY");
                break;
              }
            }
          }
        }
        FUN_1805f68fc(&DAT_180cc9b08);
      }
    }
  }
}



