// FUN_1802768c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802768c0 */

float * FUN_1802768c0(undefined8 param_1,float *param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  ULONGLONG UVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  float local_40;
  float fStack_3c;
  
  iVar5 = DAT_180c64d00;
  uVar8 = 0xffffffffffffffff;
  if ((DAT_180c64d00 == 0) && (UVar6 = GetTickCount64(), DAT_180c64cf8 <= UVar6)) {
    iVar5 = FUN_1805f68d0(&DAT_1808f0560);
    if (iVar5 != 0) goto LAB_180276b5a;
    if (DAT_1808f05ac == 0x7fffffff) {
      DAT_1808f05ac = 0x7ffffffe;
      goto LAB_180276b4f;
    }
    if ((DAT_180c64d00 == 0) && (DAT_180c64cf8 <= UVar6)) {
      DAT_180c64d00 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c64d00 == 0) {
        DAT_180c64cf8 = UVar6 + 1000;
      }
      else {
        DAT_180c64cf8 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c64d00;
    FUN_1805f68fc(&DAT_1808f0560);
  }
  iVar7 = DAT_180c64d04;
  lVar4 = *(longlong *)(iVar5 + param_3);
  if ((DAT_180c64d04 == 0) && (UVar6 = GetTickCount64(), DAT_180c64ce0 <= UVar6)) {
    iVar5 = FUN_1805f68d0(&DAT_1808f0510);
    if (iVar5 != 0) goto LAB_180276b5a;
    if (DAT_1808f055c == 0x7fffffff) {
      DAT_1808f055c = 0x7ffffffe;
      goto LAB_180276b4f;
    }
    if ((DAT_180c64d04 == 0) && (DAT_180c64ce0 <= UVar6)) {
      DAT_180c64d04 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c64d04 == 0) {
        DAT_180c64ce0 = UVar6 + 1000;
      }
      else {
        DAT_180c64ce0 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c64d04;
    FUN_1805f68fc(&DAT_1808f0510);
  }
  iVar5 = DAT_180c64cf0;
  uVar1 = *(undefined8 *)(iVar7 + lVar4);
  fVar2 = *(float *)((longlong)iVar7 + 8 + lVar4);
  if ((DAT_180c64cf0 == 0) && (UVar6 = GetTickCount64(), DAT_180c64ce8 <= UVar6)) {
    iVar5 = FUN_1805f68d0(&DAT_1808f04b0);
    if (iVar5 != 0) {
LAB_180276b5a:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f04fc == 0x7fffffff) {
      DAT_1808f04fc = 0x7ffffffe;
LAB_180276b4f:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c64cf0 == 0) && (DAT_180c64ce8 <= UVar6)) {
      DAT_180c64cf0 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
      if (DAT_180c64cf0 == 0) {
        uVar8 = UVar6 + 1000;
      }
      DAT_180c64ce8 = uVar8;
    }
    iVar5 = DAT_180c64cf0;
    FUN_1805f68fc(&DAT_1808f04b0);
  }
  uVar8 = *(ulonglong *)(iVar5 + param_3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar8;
  fVar3 = *(float *)((longlong)iVar5 + 8 + param_3);
  local_40 = (float)uVar1;
  *param_2 = (float)uVar8 + local_40;
  auVar9 = vshufps_avx(auVar9,auVar9,0x55);
  fStack_3c = (float)((ulonglong)uVar1 >> 0x20);
  param_2[1] = auVar9._0_4_ + fStack_3c;
  param_2[2] = fVar3 + fVar2;
  return param_2;
}



