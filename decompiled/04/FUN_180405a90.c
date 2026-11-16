// FUN_180405a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180405a90 */

longlong * FUN_180405a90(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = DAT_180c7d510;
  uVar6 = 0xffffffffffffffff;
  if ((DAT_180c7d510 == 0) && (UVar3 = GetTickCount64(), DAT_180c7d508 <= UVar3)) {
    iVar2 = FUN_1805f68d0(&DAT_1809bfde0);
    if (iVar2 != 0) goto LAB_180405c50;
    if (DAT_1809bfe2c == 0x7fffffff) {
      DAT_1809bfe2c = 0x7ffffffe;
      goto LAB_180405c45;
    }
    if ((DAT_180c7d510 == 0) && (DAT_180c7d508 <= UVar3)) {
      DAT_180c7d510 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
      if (DAT_180c7d510 == 0) {
        DAT_180c7d508 = UVar3 + 1000;
      }
      else {
        DAT_180c7d508 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c7d510;
    FUN_1805f68fc(&DAT_1809bfde0);
  }
  iVar5 = DAT_180c7d514;
  lVar1 = *(longlong *)(iVar2 + param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    if ((DAT_180c7d514 == 0) && (UVar3 = GetTickCount64(), DAT_180c7d4e0 <= UVar3)) {
      iVar2 = FUN_1805f68d0(&DAT_1809bfc90);
      if (iVar2 != 0) {
LAB_180405c50:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809bfcdc == 0x7fffffff) {
        DAT_1809bfcdc = 0x7ffffffe;
LAB_180405c45:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c7d514 == 0) && (DAT_180c7d4e0 <= UVar3)) {
        DAT_180c7d514 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c7d514 == 0) {
          uVar6 = UVar3 + 1000;
        }
        DAT_180c7d4e0 = uVar6;
      }
      iVar5 = DAT_180c7d514;
      FUN_1805f68fc(&DAT_1809bfc90);
    }
    if (*(int *)(iVar5 + lVar1) != 0) {
      lVar4 = FUN_1803d4150();
      *param_2 = lVar1;
      param_2[1] = lVar4;
      return param_2;
    }
    *param_2 = lVar1;
  }
  param_2[1] = 0;
  return param_2;
}



