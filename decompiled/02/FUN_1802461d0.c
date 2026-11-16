// FUN_1802461d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802461d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802461d0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ULONGLONG UVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auVar12 [64];
  undefined *puVar13;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_98 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb8890;
  lStack_88 = lRam0000000180bb8898;
  uStack_80 = uRam0000000180bb88a0;
  uStack_78 = uRam0000000180bb88a8;
  local_70 = _DAT_180bb88b0;
  uStack_68 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (param_1[0x1c] != lStack_88) {
    FUN_180249d40(param_1);
  }
  param_1[0x1c] = lStack_88;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *param_1 = DAT_180b0dfc8;
  uVar10 = DAT_180b0dfd0;
  *(undefined4 *)(param_1 + 1) = DAT_180b0dfd0;
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar10;
  param_1[3] = *param_1;
  *(undefined4 *)(param_1 + 4) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xd4) = DAT_180b0dfe0;
  local_b8 = &local_98;
  local_b0 = &local_90;
  if ((((local_98 == 0) || (DAT_180cad2e0 != 1)) || (DAT_180cad6b8 == '\0')) ||
     (((lStack_88 == 0 || (local_90 == 0)) || ((char)uStack_68 == '\0')))) {
    FUN_1802466d0(&local_b8,"inactive_or_local_unavailable");
    *(undefined4 *)(param_1 + 0x1b) = 0;
    *(undefined2 *)((longlong)param_1 + 0xdd) = 0;
    *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  }
  *(uint *)(local_98 + 0x20) = *(uint *)(local_98 + 0x20) | 1;
  puVar7 = (uint *)0x0;
  if (*(longlong *)(local_98 + 0x40) != 0) {
    puVar7 = (uint *)(*(longlong *)(local_98 + 0x40) + 0x10);
  }
  if ((puVar7 != (uint *)0x0) && ((*puVar7 & 4) != 0)) {
    *puVar7 = *puVar7 | 4;
    puVar8 = (uint *)0x0;
    if (*(longlong *)(puVar7 + 0xc) != 0) {
      puVar8 = (uint *)(*(longlong *)(puVar7 + 0xc) + 0x10);
    }
    if (puVar8 != (uint *)0x0) {
      if ((DAT_180bb88c9 != '\0') || (DAT_180bb88ca != '\0')) {
        FUN_1802466d0(&local_b8,"cinematic_or_freeze");
      }
      if ((DAT_180cad880 != '\0') && (DAT_180cad8e8 != '\0')) {
        DAT_180cad8e8 = '\0';
        DAT_180cad8f8 = 0;
      }
      uVar9 = 0xffffffffffffffff;
      if (DAT_180cad880 == '\0') {
        *(uint *)(param_1 + 0x19) = (uint)(DAT_180cad8e8 != '\0');
      }
      else {
        *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
      }
      puVar13 = (undefined *)*param_1;
      uVar10 = *(undefined4 *)(param_1 + 1);
      local_a8 = puVar13;
      if ((DAT_180cc9372 != '\0') && (DAT_180cc9330 != 0)) {
        local_a8._0_4_ = (uint)puVar13;
        auVar12 = ZEXT464((uint)local_a8);
        sVar4 = thunk_FUN_180624430((ulonglong)puVar13 & 0xffffffff);
        if (sVar4 < 1) {
          sVar4 = thunk_FUN_180624430(local_a8._4_4_);
          iVar5 = DAT_180c646e0;
          fVar11 = auVar12._0_4_;
          if (sVar4 < 1) {
            if (DAT_180c646e0 == 0) {
              UVar6 = GetTickCount64();
              fVar11 = auVar12._0_4_;
              if (DAT_180c646d8 <= UVar6) {
                local_a8 = &DAT_1808eeda0;
                iVar5 = FUN_1805f68d0(&DAT_1808eeda0);
                if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808eedec == 0x7fffffff) {
                  DAT_1808eedec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c646e0 == 0) && (DAT_180c646d8 <= UVar6)) {
                  DAT_180c646e0 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
                  if (DAT_180c646e0 == 0) {
                    uVar9 = UVar6 + 1000;
                  }
                  DAT_180c646d8 = uVar9;
                }
                iVar5 = DAT_180c646e0;
                FUN_1805f68fc(&DAT_1808eeda0);
                fVar11 = auVar12._0_4_;
              }
            }
            if ((*(char *)(iVar5 + lStack_88) == '\t') || (*(char *)(iVar5 + lStack_88) == '\a')) {
              FUN_1802466d0(&local_b8,"ladder_or_noclip");
            }
            if (((DAT_180cc8a30 != '\0') &&
                ((DAT_180b0dfd8 & 0x18) != 0 && (DAT_180b0dfd8 & 0x600) != 0)) &&
               (70.0 < ABS(fVar11))) {
              FUN_1802466d0(&local_b8,"ladder_attach");
            }
            *param_1 = puVar13;
            *(undefined4 *)(param_1 + 1) = uVar10;
            *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
            *(undefined **)((longlong)param_1 + 0xc) = puVar13;
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar10;
            if (DAT_180cad720 == '\x01') {
              uVar10 = 0x42b20000;
            }
            else if (DAT_180cad720 == '\x02') {
              uVar10 = 0xc2b20000;
            }
            else if (DAT_180cad720 == '\x03') {
              uVar10 = FUN_1800b4ef0(DAT_180cad724,0x41f00000,0xc2b20000,0x42b20000);
            }
            else {
              uVar10 = *(undefined4 *)param_1;
            }
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
            uVar10 = FUN_180247660(param_1,param_1,&local_90);
            *(undefined4 *)(param_1 + 2) = uVar10;
            *(undefined4 *)((longlong)param_1 + 0x14) = 0;
            FUN_180451150((longlong)param_1 + 0xc);
            param_1[3] = *(undefined8 *)((longlong)param_1 + 0xc);
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_1 + 0x14);
            if ((((*(char *)((longlong)param_1 + 0xcd) != '\0') && (DAT_180cc9372 != '\0')) &&
                (((DAT_180cc9348 & 0xfffffff7) == 0 || (DAT_180cc9348 - 1 < 6)))) ||
               (cVar3 = FUN_18024a3b0(*(undefined8 *)((longlong)param_1 + 0xc),local_98),
               cVar3 == '\0')) {
              uVar1 = *(uint *)((longlong)param_1 + 0xc);
              *puVar8 = *puVar8 | 1;
              uVar2 = *puVar8;
              puVar8[2] = uVar1;
              uVar1 = *(uint *)(param_1 + 2);
              *puVar8 = uVar2 | 2;
              puVar8[3] = uVar1;
              uVar1 = *(uint *)((longlong)param_1 + 0x14);
              *puVar8 = uVar2 | 6;
              puVar8[4] = uVar1;
            }
            *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
          }
        }
      }
      FUN_1802466d0(&local_b8,"invalid_weapon_or_camera");
    }
  }
  FUN_1802466d0(&local_b8,"command_angles_unavailable");
}



