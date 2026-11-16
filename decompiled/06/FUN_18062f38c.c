// FUN_18062f38c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062f38c */

/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  __crt_lc_time_data *p_Var17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  __crt_locale_data *local_38;
  undefined8 local_30;
  
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  uVar16 = 0;
  local_30 = 0;
  local_38 = param_2;
  uVar15 = FUN_18061fb50(uVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar15;
  iVar21 = 0x31;
  lVar19 = 7;
  do {
    lVar18 = lVar19;
    p_Var17 = param_1 + (ulonglong)((iVar21 - 0x30U) % 7) * 8;
    uVar2 = FUN_18062c62c(&local_38,1,uVar1,iVar21,p_Var17);
    uVar3 = FUN_18062c62c(&local_38,1,uVar1,iVar21 + -7,p_Var17 + 0x38);
    uVar4 = FUN_18062c62c(&local_38,2,uVar1,iVar21,p_Var17 + 0x160);
    uVar5 = FUN_18062c62c(&local_38,2,uVar1,iVar21 + -7,p_Var17 + 0x198);
    uVar16 = uVar16 | uVar2 | uVar3 | uVar4 | uVar5;
    iVar21 = iVar21 + 1;
    lVar19 = lVar18 + -1;
  } while (lVar19 != 0);
  iVar21 = (int)lVar18;
  iVar22 = iVar21 + 0x37;
  uVar20 = (ulonglong)(iVar21 + 0xb);
  p_Var17 = param_1 + 0xd0;
  do {
    uVar2 = FUN_18062c62c(&local_38,1,uVar1,iVar22 + 0xc,p_Var17 + -0x60);
    uVar3 = FUN_18062c62c(&local_38,1,uVar1,iVar22,p_Var17);
    uVar4 = FUN_18062c62c(&local_38,2,uVar1,iVar22 + 0xc,p_Var17 + 0x100);
    uVar5 = FUN_18062c62c(&local_38,2,uVar1,iVar22,p_Var17 + 0x160);
    uVar16 = uVar16 | uVar2 | uVar3 | uVar4 | uVar5;
    p_Var17 = p_Var17 + 8;
    iVar22 = iVar22 + 1;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
  iVar21 = FUN_18062c62c(&local_38,1,uVar1,0x28,param_1 + 0x130);
  iVar22 = FUN_18062c62c(&local_38,1,uVar1,0x29,param_1 + 0x138);
  iVar6 = FUN_18062c62c(&local_38,2,uVar1,0x28,param_1 + 0x290);
  iVar7 = FUN_18062c62c(&local_38,2,uVar1,0x29,param_1 + 0x298);
  iVar8 = FUN_18062c62c(&local_38,1,uVar1,0x1f,param_1 + 0x140);
  iVar9 = FUN_18062c62c(&local_38,1,uVar1,0x20,param_1 + 0x148);
  iVar10 = FUN_18062c62c(&local_38,1,uVar1,0x1003,param_1 + 0x150);
  iVar11 = FUN_18062c62c(&local_38,0,uVar1,0x1009,param_1 + 0x158);
  iVar12 = FUN_18062c62c(&local_38,2,uVar1,0x1f,param_1 + 0x2a0);
  iVar13 = FUN_18062c62c(&local_38,2,uVar1,0x20,param_1 + 0x2a8);
  iVar14 = FUN_18062c62c(&local_38,2,uVar1,0x1003,param_1 + 0x2b0);
  return iVar14 == 0 &&
         ((((((((((uVar16 == 0 && iVar21 == 0) && iVar22 == 0) && iVar6 == 0) && iVar7 == 0) &&
              iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) &&
         iVar13 == 0);
}



