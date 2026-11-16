// FUN_180244510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180244510(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,float param_5
                  )

{
  bool bVar1;
  int iVar2;
  ULONGLONG UVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [64];
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong local_48;
  
  iVar2 = DAT_180c643e0;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar5 = 0xffffffffffffffff;
  if ((DAT_180c643e0 == 0) && (UVar3 = GetTickCount64(), DAT_180c643d8 <= UVar3)) {
    local_58 = &DAT_1808edc90;
    iVar2 = FUN_1805f68d0(&DAT_1808edc90);
    if (iVar2 != 0) goto LAB_1802447d9;
    if (DAT_1808edcdc == 0x7fffffff) {
      DAT_1808edcdc = 0x7ffffffe;
      goto LAB_1802447ce;
    }
    if ((DAT_180c643e0 == 0) && (DAT_180c643d8 <= UVar3)) {
      DAT_180c643e0 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
      if (DAT_180c643e0 == 0) {
        DAT_180c643d8 = UVar3 + 1000;
      }
      else {
        DAT_180c643d8 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c643e0;
    FUN_1805f68fc(&DAT_1808edc90);
  }
  iVar4 = DAT_180c643c8;
  auVar8 = ZEXT464(*(uint *)(iVar2 + param_3));
  uVar6 = (ulonglong)*(uint *)(iVar2 + param_3);
  if (DAT_180c643c8 == 0) {
    UVar3 = GetTickCount64();
    uVar6 = auVar8._0_8_;
    if (DAT_180c643d0 <= UVar3) {
      local_58 = &DAT_1808edce0;
      iVar2 = FUN_1805f68d0(&DAT_1808edce0);
      if (iVar2 != 0) {
LAB_1802447d9:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808edd2c == 0x7fffffff) {
        DAT_1808edd2c = 0x7ffffffe;
LAB_1802447ce:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c643c8 == 0) && (DAT_180c643d0 <= UVar3)) {
        DAT_180c643c8 = FUN_1804174b0("CPlayer_MovementServices",0x8b221170);
        if (DAT_180c643c8 == 0) {
          uVar5 = UVar3 + 1000;
        }
        DAT_180c643d0 = uVar5;
      }
      iVar4 = DAT_180c643c8;
      FUN_1805f68fc(&DAT_1808edce0);
      uVar6 = auVar8._0_8_;
    }
  }
  if (((param_4 & 4) == 0) && (*(char *)(iVar4 + param_3) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_180615630(0x437a0000,uVar6);
  auVar8 = ZEXT464(0x3f800000);
  if ((DAT_180cd3bf0 & 1) == 0) {
    DAT_180cd3bf0 = DAT_180cd3bf0 | 1;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0xe01f2035);
    local_50 = 0;
    local_68 = &local_58;
    local_60 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_68);
    DAT_180cd3bf8 = local_50;
  }
  uVar7 = auVar8._0_8_;
  if (*(char *)(DAT_180cd3bf8 + 0x58) != '\0') {
    FUN_1806156a0(uVar7,param_5 / 250.0);
    uVar7 = auVar8._0_8_;
  }
  if (bVar1) {
    FUN_1806156a0(0x3eae147b,uVar7);
  }
}



