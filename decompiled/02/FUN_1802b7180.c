// FUN_1802b7180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b7180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b7180(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auStack_c8 [32];
  byte local_a8 [4];
  float local_a4 [3];
  undefined **local_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  if ((DAT_180b0cba0 != '\0') || (DAT_180b0cc10 != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_98 = _DAT_180bb8890;
    lStack_90 = lRam0000000180bb8898;
    uStack_88 = uRam0000000180bb88a0;
    uStack_80 = uRam0000000180bb88a8;
    cVar2 = cRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (param_2 == 0) {
    }
    if (cVar2 == '\0') {
    }
    if (param_2 != lStack_90) {
    }
    uVar8 = 0xffffffffffffffff;
    iVar4 = DAT_180c6e704;
    if (DAT_180c6e704 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e6e0) {
        iVar4 = 0;
      }
      else {
        local_78 = &DAT_1808f4fa0;
        iVar4 = FUN_1805f68d0(&DAT_1808f4fa0);
        if (iVar4 != 0) goto LAB_1802b75d2;
        if (DAT_1808f4fec == 0x7fffffff) {
          DAT_1808f4fec = 0x7ffffffe;
          goto LAB_1802b75c7;
        }
        if ((DAT_180c6e704 == 0) && (DAT_180c6e6e0 <= UVar6)) {
          DAT_180c6e704 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
          if (DAT_180c6e704 == 0) {
            DAT_180c6e6e0 = UVar6 + 1000;
          }
          else {
            DAT_180c6e6e0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6e704;
        FUN_1805f68fc(&DAT_1808f4fa0);
      }
    }
    iVar5 = DAT_180c6e6e8;
    if (DAT_180c6e6e8 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e6f0) {
        iVar5 = 0;
      }
      else {
        local_78 = &DAT_1808f4f50;
        iVar5 = FUN_1805f68d0(&DAT_1808f4f50);
        if (iVar5 != 0) {
LAB_1802b75d2:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808f4f9c == 0x7fffffff) {
          DAT_1808f4f9c = 0x7ffffffe;
LAB_1802b75c7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6e6e8 == 0) && (DAT_180c6e6f0 <= UVar6)) {
          DAT_180c6e6e8 = FUN_1804174b0("C_BasePlayerPawn",0x741b343e);
          if (DAT_180c6e6e8 == 0) {
            uVar8 = UVar6 + 1000;
          }
          DAT_180c6e6f0 = uVar8;
        }
        iVar5 = DAT_180c6e6e8;
        FUN_1805f68fc(&DAT_1808f4f50);
      }
    }
    if (((iVar4 != 0) && (iVar5 != 0)) && (iVar4 + param_2 != 0)) {
      local_a8[0] = 0;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      cVar2 = FUN_1804514c0(local_a8,iVar4 + param_2,1);
      if (cVar2 != '\0') {
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if ((local_a8[0] != 0) && (DAT_180b0cc7c == 1)) {
        }
        auVar1 = vpcmpeqd_avx(ZEXT116(local_a8[0]),SUB6416(ZEXT464(0),0));
        auVar1 = vblendvps_avx(ZEXT416(DAT_180b0cc78),ZEXT416(DAT_180b0cc08),auVar1);
        auVar10 = ZEXT1664(auVar1);
        cVar2 = DAT_180b0cba0;
        if (local_a8[0] != 0) {
          cVar2 = DAT_180b0cc10;
        }
        if (cVar2 == '\0') {
        }
        sVar3 = thunk_FUN_180624430(auVar1._0_8_);
        fVar11 = auVar10._0_4_;
        if (0 < sVar3) {
        }
        fVar9 = 0.0;
        if (fVar11 <= 0.0) {
        }
        if (180.0 <= fVar11) {
        }
        if ((DAT_180cd3e18 & 1) == 0) {
          DAT_180cd3e18 = DAT_180cd3e18 | 1;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0xd5fa7f72);
          local_70 = 0;
          local_98 = &local_78;
          lStack_90 = 1;
          FUN_18044c9c0(DAT_180c64058,&local_98);
          fVar11 = auVar10._0_4_;
          DAT_180cd3e20 = local_70;
        }
        if (DAT_180cd3e20 == 0) {
        }
        fVar11 = (fVar11 / 90.0) * *(float *)(DAT_180cd3e20 + 0x58);
        local_78 = (undefined *)CONCAT44(local_78._4_4_,fVar11);
        sVar3 = thunk_FUN_180624430(fVar11);
        if (0 < sVar3) {
        }
        param_2 = iVar5 + param_2;
        if (param_2 == 0) {
        }
        local_a4[0] = fVar9;
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        cVar2 = FUN_1804514c0(local_a4,param_2,4);
        if (cVar2 != '\0') {
          lVar7 = FUN_18017ea70();
          if (*(int *)(lVar7 + 4) != 0) {
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
          }
          fVar9 = local_a4[0];
          sVar3 = thunk_FUN_180624430(local_a4[0]);
          if ((sVar3 < 1) && (ABS(fVar9 - fVar11) < 0.0001)) {
          }
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          FUN_1801ad800(param_2,&local_78);
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
  }
}



