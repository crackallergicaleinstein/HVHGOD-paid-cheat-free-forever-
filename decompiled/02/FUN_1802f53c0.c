// FUN_1802f53c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f53c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f53c0(undefined1 (*param_1) [16],longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auStack_168 [32];
  undefined1 (*local_148 [2]) [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  if (param_2 == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  iVar3 = DAT_180c6efe0;
  local_148[0] = param_1;
  if (DAT_180c6efe0 == 0) {
    UVar4 = GetTickCount64();
    if (DAT_180c6efd0 <= UVar4) {
      local_148[0] = (undefined1 (*) [16])&DAT_1808feca0;
      iVar3 = FUN_1805f68d0(&DAT_1808feca0);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fecec == 0x7fffffff) {
        DAT_1808fecec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6efe0 == 0) && (DAT_180c6efd0 <= UVar4)) {
        DAT_180c6efe0 = FUN_1804174b0("CCSPlayerController",0xde63b6d1);
        if (DAT_180c6efe0 == 0) {
          DAT_180c6efd0 = UVar4 + 1000;
        }
        else {
          DAT_180c6efd0 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c6efe0;
      FUN_1805f68fc(&DAT_1808feca0);
      if (iVar3 != 0) goto LAB_1802f54c8;
    }
LAB_1802f5655:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
LAB_1802f5661:
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
LAB_1802f54c8:
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (iVar3 + param_2 == 0) {
      bVar1 = false;
    }
    else {
      local_148[0] = (undefined1 (*) [16])0x0;
      cVar2 = FUN_1804514f0(local_148,iVar3 + param_2,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    pauVar7 = local_148[0];
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (bVar1) {
      if ((pauVar7 != (undefined1 (*) [16])0x0) &&
         (0x7e < 0x1000 - (ulonglong)((uint)pauVar7 & 0xfff))) {
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        local_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        local_d8 = (undefined1  [16])0x0;
        local_c8 = 0;
        local_c0 = 0;
        local_bc = 0;
        local_ba = 0;
        cVar2 = FUN_1804514f0(&local_138,pauVar7,0x7f);
        local_39 = cVar2 != '\0';
        if ((bool)local_39) {
          local_b8 = local_138;
          uStack_b0 = uStack_130;
          uStack_a8 = uStack_128;
          uStack_a0 = uStack_120;
          local_98 = local_118;
          uStack_90 = uStack_110;
          uStack_88 = uStack_108;
          uStack_80 = uStack_100;
          local_78 = local_f8;
          uStack_70 = uStack_f0;
          uStack_68 = uStack_e8;
          uStack_60 = uStack_e0;
          local_58 = local_d8._0_8_;
          uStack_50 = local_d8._8_8_;
          local_48 = local_c8;
          local_40 = local_c0;
          local_3c = local_bc;
          local_3a = local_ba;
        }
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (local_39 == '\0') goto LAB_1802f5655;
        puVar6 = (undefined8 *)thunk_FUN_1805f7e70(&local_b8,&local_39,0);
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0;
        if (&local_b8 != puVar6) {
          FUN_18015ba30(param_1,&local_b8,(longlong)puVar6 - (longlong)&local_b8);
        }
        goto LAB_1802f5661;
      }
    }
    else {
      pauVar7 = (undefined1 (*) [16])0x0;
    }
    FUN_180454280(param_1,pauVar7,0x7f);
  }
}



