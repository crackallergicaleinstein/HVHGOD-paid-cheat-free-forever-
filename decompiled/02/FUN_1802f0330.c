// FUN_1802f0330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f0330 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f0330(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char ****ppppcVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  char ****local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  iVar3 = DAT_180c6ede8;
  if (param_3 == 0) {
    return;
  }
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (param_3 == DAT_180b8f940) {
  }
  fVar11 = 10000.0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x461c4000);
  fVar12 = 1.0;
  local_78._0_4_ = 0x3f800000;
  uVar10 = 0xffffffffffffffff;
  DAT_180b8f940 = param_3;
  if (DAT_180c6ede8 == 0) {
    fVar11 = 10000.0;
    fVar12 = 1.0;
    UVar4 = GetTickCount64();
    if (DAT_180c6edf0 <= UVar4) {
      local_70 = &DAT_1808fe1b0;
      iVar3 = FUN_1805f68d0(&DAT_1808fe1b0);
      if (iVar3 != 0) goto LAB_1802f0653;
      if (DAT_1808fe1fc == 0x7fffffff) {
        DAT_1808fe1fc = 0x7ffffffe;
        goto LAB_1802f0648;
      }
      if ((DAT_180c6ede8 == 0) && (DAT_180c6edf0 <= UVar4)) {
        DAT_180c6ede8 = FUN_1804174b0("CCSWeaponBaseVData",0x22c82b26);
        if (DAT_180c6ede8 == 0) {
          DAT_180c6edf0 = UVar4 + 1000;
        }
        else {
          DAT_180c6edf0 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c6ede8;
      FUN_1805f68fc(&DAT_1808fe1b0);
    }
  }
  iVar9 = DAT_180c6edd4;
  fVar1 = *(float *)(iVar3 + param_3);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,fVar1);
  ppuVar6 = &local_78;
  if (fVar12 <= fVar1) {
    ppuVar6 = &local_70;
  }
  ppuVar5 = &local_68;
  if (fVar1 <= fVar11) {
    ppuVar5 = ppuVar6;
  }
  DAT_180b8f950 = *(undefined4 *)ppuVar5;
  if ((DAT_180c6edd4 == 0) && (UVar4 = GetTickCount64(), DAT_180c6edd8 <= UVar4)) {
    local_68 = &DAT_1808fe200;
    iVar3 = FUN_1805f68d0(&DAT_1808fe200);
    if (iVar3 != 0) {
LAB_1802f0653:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fe24c == 0x7fffffff) {
      DAT_1808fe24c = 0x7ffffffe;
LAB_1802f0648:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6edd4 == 0) && (DAT_180c6edd8 <= UVar4)) {
      DAT_180c6edd4 = FUN_1804174b0("CCSWeaponBaseVData",0x6750bacb);
      if (DAT_180c6edd4 == 0) {
        uVar10 = UVar4 + 1000;
      }
      DAT_180c6edd8 = uVar10;
    }
    iVar9 = DAT_180c6edd4;
    FUN_1805f68fc(&DAT_1808fe200);
  }
  if (*(longlong *)(iVar9 + param_3) == 0) {
    DAT_180b8f948 = 0;
    DAT_180b8f954 = 0x3fc00000;
    DAT_180b8f958 = 0x3dcccccd;
  }
  FUN_180454280(local_60,*(longlong *)(iVar9 + param_3),0x40);
  ppppcVar7 = (char ****)local_60;
  if (0xf < local_48) {
    ppppcVar7 = local_60[0];
  }
  if (ppppcVar7 == (char ****)0x0) {
    DAT_180b8f948 = 0;
LAB_1802f05f7:
    DAT_180b8f954 = 0x3fc00000;
    DAT_180b8f958 = 0x3dcccccd;
    goto LAB_1802f061f;
  }
  uVar8 = 0x811c9dc5;
  cVar2 = *(char *)ppppcVar7;
  while (cVar2 != '\0') {
    ppppcVar7 = (char ****)((longlong)ppppcVar7 + 1);
    uVar8 = ((int)cVar2 ^ uVar8) * 0x1000193;
    cVar2 = *(char *)ppppcVar7;
  }
  DAT_180b8f948 = (ulonglong)uVar8;
  if (uVar8 == 0x1d8fded0) {
LAB_1802f0613:
    DAT_180b8f958 = 0;
  }
  else {
    if (uVar8 != 0x488e8052) {
      if (uVar8 != 0xf7b68f78) goto LAB_1802f05f7;
      goto LAB_1802f0613;
    }
    DAT_180b8f958 = 0x3e4ccccd;
  }
  DAT_180b8f954 = 0x40000000;
LAB_1802f061f:
  FUN_18015c010(local_60);
}



