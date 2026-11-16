// FUN_18044dad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044dad0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044dad0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  bool bVar1;
  ulonglong *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  HANDLE pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong *puVar15;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  char local_f8 [8];
  ulonglong *local_f0;
  char *local_e8;
  undefined8 local_e0;
  ulonglong *local_d8;
  ulonglong *local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  if ((*param_1 != 0) && (param_1[2] != 0)) {
  }
  if (param_2 == (ulonglong *)0x0) {
  }
  if (param_3 == (ulonglong *)0x0) {
  }
  iVar11 = 0;
  cVar4 = local_f8[0];
  cVar14 = local_f8[0];
  local_d8 = param_3;
  do {
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    lStack_a8 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_90 = 0;
    pvVar6 = GetCurrentProcess();
    if (DAT_180c7def0 == 0) {
      local_e8 = "ntdll.dll:NtQueryVirtualMemory";
      local_e0 = 0x1e;
      DAT_180c7def0 = FUN_180451750(&local_e8);
    }
    local_110 = &local_90;
    local_118 = 0x30;
    iVar5 = (*(code *)DAT_180c7def0)(pvVar6,param_2,0,&local_c0);
    if (iVar5 < 0) {
    }
    if (local_a0._0_4_ != 0x1000) {
    }
    if ((local_a0[4] & 0xf0) == 0) {
    }
    if ((ulonglong *)(lStack_a8 + local_c0) < param_2) {
    }
    if ((ulonglong)((lStack_a8 + local_c0) - (longlong)param_2) < 6) {
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (param_2 == (ulonglong *)0x0) {
      bVar1 = false;
    }
    else {
      local_f8[0] = '\0';
      cVar3 = FUN_1804514f0(local_f8,param_2);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        cVar14 = local_f8[0];
      }
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (!bVar1) {
    }
    if (cVar14 == -0x17) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      bVar1 = false;
      if ((longlong)param_2 + 1U != 0) {
        local_f0 = (ulonglong *)((ulonglong)local_f0 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_f0,(longlong)param_2 + 1U);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_f0._0_4_);
          bVar1 = true;
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if (!bVar1) {
      }
      param_2 = (ulonglong *)((longlong)param_2 + (longlong)(int)local_d0 + 5);
    }
    else {
      if (cVar14 != -1) break;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      bVar1 = false;
      if ((longlong)param_2 + 1U != 0) {
        local_f8[0] = '\0';
        cVar3 = FUN_1804514f0(local_f8,(longlong)param_2 + 1U);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          cVar4 = local_f8[0];
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((!bVar1) || (cVar4 != '%')) break;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      bVar1 = false;
      if ((longlong)param_2 + 2U != 0) {
        local_f0 = (ulonglong *)((ulonglong)local_f0 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_f0,(longlong)param_2 + 2U);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,local_f0._0_4_);
          bVar1 = true;
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if (!bVar1) {
      }
      lVar9 = (longlong)(int)local_c8;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      lVar7 = lVar9 + 6 + (longlong)param_2;
      bVar1 = false;
      param_2 = param_3;
      if (lVar7 != 0) {
        local_f0 = (ulonglong *)0x0;
        cVar3 = FUN_1804514f0(&local_f0,lVar7);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          param_2 = local_f0;
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if (!bVar1) {
      }
      if (param_2 == (ulonglong *)0x0) {
      }
      param_3 = param_2;
    }
    if (iVar11 == 7) {
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_88 = 0;
  pvVar6 = GetCurrentProcess();
  if (DAT_180c7def0 == 0) {
    local_e8 = "ntdll.dll:NtQueryVirtualMemory";
    local_e0 = 0x1e;
    DAT_180c7def0 = FUN_180451750(&local_e8);
  }
  local_110 = &local_88;
  local_118 = 0x30;
  iVar11 = (*(code *)DAT_180c7def0)(pvVar6,param_2,0,&local_70);
  if (iVar11 < 0) {
  }
  if (local_50._0_4_ != 0x1000) {
  }
  if ((local_50[4] & 0xf0) == 0) {
  }
  puVar12 = param_2 + -0xfffe000;
  if (param_2 < (ulonglong *)0x7fff0001) {
    puVar12 = (ulonglong *)0x10000;
  }
  puVar15 = (ulonglong *)((ulonglong)param_2 & 0xffffffffffff0000);
  puVar2 = puVar15;
  do {
    puVar2 = puVar2 + -0x2000;
    if (puVar2 < puVar12) goto joined_r0x00018044df56;
    local_80 = 0x40;
    local_c8 = puVar2;
    pvVar6 = GetCurrentProcess();
    if (DAT_180c7ded8 == 0) {
      local_e8 = "ntdll.dll:NtAllocateVirtualMemory";
      local_e0 = 0x21;
      DAT_180c7ded8 = FUN_180451750(&local_e8);
    }
    local_110 = (undefined8 *)CONCAT44(local_110._4_4_,0x40);
    local_118 = CONCAT44(local_118._4_4_,0x3000);
    iVar11 = (*(code *)DAT_180c7ded8)(pvVar6,&local_c8,0,&local_80);
  } while ((iVar11 < 0) || (puVar10 = local_c8, local_c8 == (ulonglong *)0x0));
LAB_18044dfed:
  local_f0 = (ulonglong *)0x0;
  local_e8 = (char *)0x0;
  cVar4 = FUN_18044d740(param_2,puVar10,&local_f0,&local_e8);
  puVar2 = local_d8;
  puVar12 = local_f0;
  if ((cVar4 != '\0') && (local_f0 < (ulonglong *)0x21)) {
    if (((longlong)local_d8 - (longlong)param_2) + 0x7ffffffbU < 0x100000000) {
      *(undefined1 *)(param_1 + 7) = 0xe9;
      *(int *)((longlong)param_1 + 0x39) = (int)((longlong)local_d8 - (longlong)param_2) + -5;
      uVar13 = 5;
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0x25ff;
      *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
      *(ulonglong **)((longlong)param_1 + 0x3e) = local_d8;
      uVar13 = 0xe;
    }
    cVar4 = FUN_1804514f0(param_1 + 3,param_2,local_f0);
    if (cVar4 != '\0') {
      *param_1 = (ulonglong)param_2;
      param_1[1] = (ulonglong)puVar2;
      param_1[2] = (ulonglong)puVar10;
      param_1[9] = (ulonglong)puVar12;
      param_1[10] = uVar13;
      *(undefined1 *)(param_1 + 0xb) = 0;
      local_e8 = &DAT_1808e4e40;
      local_d8 = param_1;
      iVar11 = FUN_1805f68d0(&DAT_1808e4e40);
      if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e4e8c == 0x7fffffff) {
        DAT_1808e4e8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      puVar8 = (undefined8 *)
               thunk_FUN_1805f8160(DAT_180c62bc8,
                                   DAT_180c62bc8 +
                                   ((longlong)DAT_180c62bd0 - DAT_180c62bc8 >> 3) * 8,param_1);
      if (puVar8 == DAT_180c62bd0) {
        if (DAT_180c62bd0 == DAT_180c62bd8) {
          FUN_18044f370(extraout_XMM0_Qa,DAT_180c62bd0,&local_d8);
        }
        else {
          *DAT_180c62bd0 = param_1;
          DAT_180c62bd0 = DAT_180c62bd0 + 1;
        }
      }
      FUN_1805f68fc(&DAT_1808e4e40);
    }
  }
  FUN_18044d6a0(puVar10);
joined_r0x00018044df56:
  do {
    puVar15 = puVar15 + 0x2000;
    if (param_2 + 0xfffe000 < puVar15) {
    }
    local_78 = 0x40;
    local_d0 = puVar15;
    pvVar6 = GetCurrentProcess();
    if (DAT_180c7ded8 == 0) {
      local_e8 = "ntdll.dll:NtAllocateVirtualMemory";
      local_e0 = 0x21;
      DAT_180c7ded8 = FUN_180451750(&local_e8);
    }
    local_110 = (undefined8 *)CONCAT44(local_110._4_4_,0x40);
    local_118 = CONCAT44(local_118._4_4_,0x3000);
    iVar11 = (*(code *)DAT_180c7ded8)(pvVar6,&local_d0,0,&local_78);
  } while ((iVar11 < 0) || (puVar10 = local_d0, local_d0 == (ulonglong *)0x0));
  goto LAB_18044dfed;
}



