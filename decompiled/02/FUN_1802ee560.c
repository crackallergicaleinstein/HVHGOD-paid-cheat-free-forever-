// FUN_1802ee560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ee560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ee560(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar8;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar9 [64];
  undefined1 extraout_var_02 [56];
  ulonglong uVar10;
  char cVar12;
  undefined1 auVar11 [64];
  float fVar13;
  float fVar14;
  float fVar15;
  float local_c8 [4];
  longlong local_b8;
  undefined *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  char cStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_78 = _DAT_180bb8890;
  uStack_70 = uRam0000000180bb8898;
  uStack_68 = uRam0000000180bb88a0;
  uStack_60 = uRam0000000180bb88a8;
  local_a8 = _DAT_180bb8890;
  uStack_a0 = uRam0000000180bb8898;
  uStack_98 = uRam0000000180bb88a0;
  uStack_90 = uRam0000000180bb88a8;
  local_88 = DAT_180bb88b0;
  uStack_87 = uRam0000000180bb88b1;
  uStack_86 = uRam0000000180bb88b2;
  uStack_85 = uRam0000000180bb88b3;
  uStack_84 = uRam0000000180bb88b4;
  uStack_83 = uRam0000000180bb88b5;
  uStack_82 = uRam0000000180bb88b6;
  uStack_81 = uRam0000000180bb88b7;
  cStack_80 = cRam0000000180bb88b8;
  uStack_7f = uRam0000000180bb88b9;
  uStack_7e = uRam0000000180bb88ba;
  uStack_7d = uRam0000000180bb88bb;
  uStack_7c = uRam0000000180bb88bc;
  uStack_7b = uRam0000000180bb88bd;
  uStack_7a = uRam0000000180bb88be;
  uStack_79 = uRam0000000180bb88bf;
  cVar12 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar7 = local_78;
  if ((((DAT_180b0bd28 != '\0') && (DAT_180bb88c9 == '\0')) && (cVar12 != '\0')) && (local_78 != 0))
  {
    auVar9._0_8_ = FUN_18017bf40(&local_b8);
    iVar3 = DAT_180c6ee70;
    auVar9._8_56_ = extraout_var;
    if (DAT_180c6ee70 == 0) {
      UVar4 = GetTickCount64();
      auVar9._8_56_ = extraout_var_00;
      auVar9._0_8_ = extraout_XMM0_Qa;
      if (DAT_180c6ee78 <= UVar4) {
        local_b0 = &DAT_1808fe520;
        iVar3 = FUN_1805f68d0(&DAT_1808fe520);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808fe56c == 0x7fffffff) {
          DAT_1808fe56c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6ee70 == 0) && (DAT_180c6ee78 <= UVar4)) {
          DAT_180c6ee70 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
          if (DAT_180c6ee70 == 0) {
            DAT_180c6ee78 = UVar4 + 1000;
          }
          else {
            DAT_180c6ee78 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c6ee70;
        auVar9._0_8_ = FUN_1805f68fc(&DAT_1808fe520);
        auVar9._8_56_ = extraout_var_01;
      }
    }
    lVar2 = DAT_180b8f970;
    uVar8 = auVar9._0_8_;
    iVar3 = *(int *)(iVar3 + lVar7);
    if (iVar3 != 0) {
      if (DAT_180b8f968 != DAT_180b8f970) {
        fVar13 = 1e+09;
        auVar11 = ZEXT464(0x3f800000);
        fVar14 = 0.0;
        fVar15 = 0.75;
        lVar7 = DAT_180b8f968;
        do {
          if ((*(char *)(lVar7 + 100) != '\0') && (*(int *)(lVar7 + 0x10) == iVar3)) {
            bVar1 = *(byte *)(lVar7 + 0x81);
            pfVar6 = (float *)(ulonglong)bVar1;
            if ((bVar1 != 0) ||
               ((float)(local_b8 - *(longlong *)(lVar7 + 0x68)) / fVar13 < *(float *)(lVar7 + 0x5c))
               ) {
              uVar10 = auVar11._0_8_;
              if (bVar1 != 0) goto LAB_1802ee74e;
            }
            else {
              *(undefined1 *)(lVar7 + 0x81) = 1;
              *(longlong *)(lVar7 + 0x78) = local_b8;
LAB_1802ee74e:
              local_c8[2] = auVar11._0_4_;
              local_c8[0] = fVar14;
              local_c8[1] = local_c8[2] -
                            ((float)(local_b8 - *(longlong *)(lVar7 + 0x78)) / fVar13) / fVar15;
              auVar9 = ZEXT464((uint)local_c8[1]);
              pfVar6 = local_c8;
              if (fVar14 <= local_c8[1]) {
                pfVar6 = local_c8 + 1;
              }
              pfVar5 = local_c8 + 2;
              if (local_c8[1] <= local_c8[2]) {
                pfVar5 = pfVar6;
              }
              uVar10 = (ulonglong)(uint)*pfVar5;
              if (*pfVar5 <= fVar14) goto LAB_1802ee7c2;
            }
            auVar9._0_8_ = FUN_1802f35d0(pfVar6,param_2,lVar7 + 0x18,uVar10,1,&local_a8);
            auVar9._8_56_ = extraout_var_02;
          }
LAB_1802ee7c2:
          uVar8 = auVar9._0_8_;
          lVar7 = lVar7 + 0x88;
        } while (lVar7 != lVar2);
      }
      FUN_1802f2b10(uVar8,param_2,&local_a8);
    }
  }
  return;
}



