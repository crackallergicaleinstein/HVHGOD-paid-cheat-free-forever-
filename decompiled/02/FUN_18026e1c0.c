// FUN_18026e1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026e1c0 */

void FUN_18026e1c0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_1c;
  
  iVar6 = DAT_180c65050;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar10 = 0xffffffffffffffff;
    if ((DAT_180c65050 == 0) && (UVar8 = GetTickCount64(), DAT_180c65048 <= UVar8)) {
      iVar6 = FUN_1805f68d0(&DAT_1808f1760);
      if (iVar6 != 0) goto LAB_18026e688;
      if (DAT_1808f17ac == 0x7fffffff) {
        DAT_1808f17ac = 0x7ffffffe;
        goto LAB_18026e67d;
      }
      if ((DAT_180c65050 == 0) && (DAT_180c65048 <= UVar8)) {
        DAT_180c65050 = FUN_1804174b0("CCSWeaponBaseVData",0x1c56d69c);
        if (DAT_180c65050 == 0) {
          DAT_180c65048 = UVar8 + 1000;
        }
        else {
          DAT_180c65048 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c65050;
      FUN_1805f68fc(&DAT_1808f1760);
    }
    iVar7 = DAT_180c65054;
    iVar6 = *(int *)(iVar6 + param_2);
    if ((DAT_180c65054 == 0) && (UVar8 = GetTickCount64(), DAT_180c65030 <= UVar8)) {
      iVar7 = FUN_1805f68d0(&DAT_1808f1710);
      if (iVar7 != 0) goto LAB_18026e688;
      if (DAT_1808f175c == 0x7fffffff) {
        DAT_1808f175c = 0x7ffffffe;
        goto LAB_18026e67d;
      }
      if ((DAT_180c65054 == 0) && (DAT_180c65030 <= UVar8)) {
        DAT_180c65054 = FUN_1804174b0("CCSWeaponBaseVData",0xc4163f78);
        if (DAT_180c65054 == 0) {
          DAT_180c65030 = UVar8 + 1000;
        }
        else {
          DAT_180c65030 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c65054;
      FUN_1805f68fc(&DAT_1808f1710);
    }
    iVar9 = DAT_180c65040;
    uVar1 = *(undefined4 *)(iVar7 + param_2);
    if ((DAT_180c65040 == 0) && (UVar8 = GetTickCount64(), DAT_180c65038 <= UVar8)) {
      iVar7 = FUN_1805f68d0(&DAT_1808f1670);
      if (iVar7 != 0) goto LAB_18026e688;
      if (DAT_1808f16bc == 0x7fffffff) {
        DAT_1808f16bc = 0x7ffffffe;
        goto LAB_18026e67d;
      }
      if ((DAT_180c65040 == 0) && (DAT_180c65038 <= UVar8)) {
        DAT_180c65040 = FUN_1804174b0("CCSWeaponBaseVData",0x556fea15);
        if (DAT_180c65040 == 0) {
          DAT_180c65038 = UVar8 + 1000;
        }
        else {
          DAT_180c65038 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c65040;
      FUN_1805f68fc(&DAT_1808f1670);
    }
    iVar7 = DAT_180c65020;
    uVar2 = *(undefined4 *)(iVar9 + param_2);
    if ((DAT_180c65020 == 0) && (UVar8 = GetTickCount64(), DAT_180c65028 <= UVar8)) {
      iVar7 = FUN_1805f68d0(&DAT_1808f16c0);
      if (iVar7 != 0) goto LAB_18026e688;
      if (DAT_1808f170c == 0x7fffffff) {
        DAT_1808f170c = 0x7ffffffe;
        goto LAB_18026e67d;
      }
      if ((DAT_180c65020 == 0) && (DAT_180c65028 <= UVar8)) {
        DAT_180c65020 = FUN_1804174b0("CCSWeaponBaseVData",0x3fc92844);
        if (DAT_180c65020 == 0) {
          DAT_180c65028 = UVar8 + 1000;
        }
        else {
          DAT_180c65028 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c65020;
      FUN_1805f68fc(&DAT_1808f16c0);
    }
    iVar9 = DAT_180c65018;
    uVar3 = *(undefined4 *)(iVar7 + param_2);
    if ((DAT_180c65018 == 0) && (UVar8 = GetTickCount64(), DAT_180c65010 <= UVar8)) {
      iVar7 = FUN_1805f68d0(&DAT_1808f1620);
      if (iVar7 != 0) goto LAB_18026e688;
      if (DAT_1808f166c == 0x7fffffff) {
        DAT_1808f166c = 0x7ffffffe;
        goto LAB_18026e67d;
      }
      if ((DAT_180c65018 == 0) && (DAT_180c65010 <= UVar8)) {
        DAT_180c65018 = FUN_1804174b0("CCSWeaponBaseVData",0xc023cfd);
        if (DAT_180c65018 == 0) {
          DAT_180c65010 = UVar8 + 1000;
        }
        else {
          DAT_180c65010 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c65018;
      FUN_1805f68fc(&DAT_1808f1620);
    }
    iVar7 = DAT_180c6501c;
    uVar4 = *(undefined4 *)(iVar9 + param_2);
    if ((DAT_180c6501c == 0) && (UVar8 = GetTickCount64(), DAT_180c64ff8 <= UVar8)) {
      iVar7 = FUN_1805f68d0(&DAT_1808f15d0);
      if (iVar7 != 0) {
LAB_18026e688:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f161c == 0x7fffffff) {
        DAT_1808f161c = 0x7ffffffe;
LAB_18026e67d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6501c == 0) && (DAT_180c64ff8 <= UVar8)) {
        DAT_180c6501c = FUN_1804174b0("CCSWeaponBaseVData",0xb47ff686);
        if (DAT_180c6501c == 0) {
          uVar10 = UVar8 + 1000;
        }
        DAT_180c64ff8 = uVar10;
      }
      iVar7 = DAT_180c6501c;
      FUN_1805f68fc(&DAT_1808f15d0);
    }
    uVar5 = *(uint *)(iVar7 + param_2);
    *param_1 = CONCAT44(uVar1,(float)iVar6);
    param_1[1] = CONCAT44(uVar3,uVar2);
    auVar11._4_4_ = uStack_1c;
    auVar11._0_4_ = uVar4;
    auVar11._8_8_ = 0;
    auVar11 = vinsertps_avx(auVar11,ZEXT416(uVar5),0x10);
    param_1[2] = auVar11._0_8_;
  }
  return;
}



