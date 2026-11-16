// FUN_180170a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180170a80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180170a80(undefined8 param_1,HANDLE param_2,char param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  int ****ppppiVar7;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  LARGE_INTEGER local_98;
  DWORD local_90 [2];
  int ****local_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  char local_48;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_f8;
  local_a8 = 0;
  local_98.QuadPart = 0;
  local_a0 = param_1;
  BVar2 = GetFileSizeEx(param_2,&local_98);
  if ((BVar2 == 0) || (0x40fffff < local_98.QuadPart - 1U)) {
    FUN_18015c090(local_c8,"Invalid local fork file size.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_c8,&DAT_1808d12a8);
  }
  FUN_18015ae30(&local_88,local_98.QuadPart,0);
  local_90[0] = 0;
  ppppiVar7 = (int ****)&local_88;
  if (0xf < uStack_70) {
    ppppiVar7 = local_88;
  }
  BVar2 = ReadFile(param_2,ppppiVar7,(DWORD)uStack_78,local_90,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_90[0] != uStack_78)) {
    FUN_18015c090(local_c8,"Could not read the local fork library.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_c8,&DAT_1808d12a8);
  }
  if (param_3 == '\0') {
LAB_180170be2:
    local_30 = 0;
    FUN_180175670(param_1,&local_88,local_68,1);
    local_a8 = 1;
    uVar3 = FUN_1801757b0(param_1,"version");
    local_c8 = ZEXT816(0);
    FUN_1801409d0(local_c8 + 8,0);
    local_c8[0] = 5;
    local_c8._8_8_ = 1;
    cVar1 = FUN_1800f3780(uVar3,local_c8);
    FUN_1801409d0(local_c8 + 8,local_c8[0]);
    if (cVar1 != '\0') {
      pcVar4 = (char *)FUN_1801757b0(param_1,"forks");
      if (*pcVar4 == '\x02') {
        local_c8 = (undefined1  [16])0x0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_18015ba30(local_c8,"forks",5);
        uVar3 = FUN_1800f43d0(param_1,local_c8);
        uVar5 = FUN_1800f3d40(uVar3);
        if (uVar5 < 0x33) {
          FUN_18015c010(&local_88);
        }
      }
    }
    FUN_18015c090(local_c8,"Invalid local fork library.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_c8,&DAT_1808d12a8);
  }
  ppppiVar7 = (int ****)&local_88;
  if (0xf < uStack_70) {
    ppppiVar7 = local_88;
  }
  if (6 < uStack_78) {
    iVar6 = *(int *)ppppiVar7 + -0x43485648;
    if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)ppppiVar7 + 4) - 0x4746, iVar6 == 0)) {
      iVar6 = *(byte *)((longlong)ppppiVar7 + 6) - 2;
    }
    if (iVar6 == 0) {
      ppppiVar7 = (int ****)&local_88;
      if (0xf < uStack_70) {
        ppppiVar7 = local_88;
      }
      FUN_1800abd30(local_68,(longlong)ppppiVar7 + 7,uStack_78 - 7);
      if (local_48 == '\0') {
        FUN_18015c090(local_c8,"The local fork file could not be decoded.");
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_c8,&DAT_1808d12a8);
      }
      FUN_18015c010(&local_88);
      uStack_80 = uStack_60;
      uStack_78 = uStack_58;
      uStack_70 = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0xf;
      local_68[0] = 0;
      if (local_48 != '\0') {
        FUN_18015c010(local_68);
      }
      goto LAB_180170be2;
    }
  }
  FUN_18015c090(local_c8,"Unknown local fork format.");
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_c8,&DAT_1808d12a8);
}



