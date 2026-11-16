// FUN_180214fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180214fc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180214fc0(undefined8 param_1,longlong param_2,undefined *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 local_1f8 [4];
  undefined4 local_1f4;
  undefined2 local_1f0 [4];
  undefined *local_1e8;
  char local_1e0;
  char local_1df;
  char local_1de;
  char local_1dd;
  char local_1dc;
  char local_1db;
  char local_1da;
  char local_1d9;
  char local_1d8;
  undefined1 local_1d7;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 local_108;
  char cStack_107;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined2 local_58;
  
  if (DAT_180c7108c == '\0') {
    uVar14 = 0xffffffffffffffff;
    iVar7 = DAT_180c63bac;
    local_1b8 = param_3;
    if (DAT_180c63bac == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63bb0) {
        iVar7 = 0;
      }
      else {
        local_1d0 = &DAT_1808ead30;
        iVar7 = FUN_1805f68d0(&DAT_1808ead30);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808ead7c == 0x7fffffff) {
          DAT_1808ead7c = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63bac == 0) && (DAT_180c63bb0 <= UVar9)) {
          DAT_180c63bac = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
          if (DAT_180c63bac == 0) {
            DAT_180c63bb0 = UVar9 + 1000;
          }
          else {
            DAT_180c63bb0 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63bac;
        FUN_1805f68fc(&DAT_1808ead30);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1de = '\0';
    }
    else {
      local_1f0[0] = 0;
      cVar6 = FUN_1804514f0(local_1f0,param_3 + iVar7,2);
      if (cVar6 == '\0') {
        local_1de = '\0';
      }
      else {
        local_1de = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63ba8;
    if (DAT_180c63ba8 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63ba0) {
        iVar7 = 0;
      }
      else {
        local_1d0 = &DAT_1808eace0;
        iVar7 = FUN_1805f68d0(&DAT_1808eace0);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808ead2c == 0x7fffffff) {
          DAT_1808ead2c = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63ba8 == 0) && (DAT_180c63ba0 <= UVar9)) {
          DAT_180c63ba8 = FUN_1804174b0("C_EconItemView",0x373ee446);
          if (DAT_180c63ba8 == 0) {
            DAT_180c63ba0 = UVar9 + 1000;
          }
          else {
            DAT_180c63ba0 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63ba8;
        FUN_1805f68fc(&DAT_1808eace0);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1dd = '\0';
      local_1c8 = local_1e8._0_4_;
    }
    else {
      local_1f4 = 0;
      cVar6 = FUN_1804514f0(&local_1f4,param_3 + iVar7,4);
      if (cVar6 == '\0') {
        local_1c8 = local_1e8._0_4_;
        local_1dd = '\0';
      }
      else {
        local_1c8 = local_1f4;
        local_1dd = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b94;
    if (DAT_180c63b94 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b98) {
        iVar7 = 0;
      }
      else {
        local_1d0 = &DAT_1808eac90;
        iVar7 = FUN_1805f68d0(&DAT_1808eac90);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eacdc == 0x7fffffff) {
          DAT_1808eacdc = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b94 == 0) && (DAT_180c63b98 <= UVar9)) {
          DAT_180c63b94 = FUN_1804174b0("C_EconItemView",0x34b55816);
          if (DAT_180c63b94 == 0) {
            DAT_180c63b98 = UVar9 + 1000;
          }
          else {
            DAT_180c63b98 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b94;
        FUN_1805f68fc(&DAT_1808eac90);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1e0 = '\0';
      local_1d0 = local_1b8;
    }
    else {
      local_1d0 = (undefined *)0x0;
      cVar6 = FUN_1804514f0(&local_1d0,param_3 + iVar7,8);
      if (cVar6 == '\0') {
        local_1d0 = local_1b8;
        local_1e0 = '\0';
      }
      else {
        local_1e0 = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b90;
    if (DAT_180c63b90 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b88) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eac40;
        iVar7 = FUN_1805f68d0(&DAT_1808eac40);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eac8c == 0x7fffffff) {
          DAT_1808eac8c = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b90 == 0) && (DAT_180c63b88 <= UVar9)) {
          DAT_180c63b90 = FUN_1804174b0("C_EconItemView",0x216db5e3);
          if (DAT_180c63b90 == 0) {
            DAT_180c63b88 = UVar9 + 1000;
          }
          else {
            DAT_180c63b88 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b90;
        FUN_1805f68fc(&DAT_1808eac40);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1df = '\0';
      local_1d7 = local_1f8[0];
    }
    else {
      local_1f8[0] = 0;
      cVar6 = FUN_1804514f0(local_1f8,param_3 + iVar7,1);
      if (cVar6 == '\0') {
        local_1d7 = local_1f8[0];
        local_1df = '\0';
      }
      else {
        local_1d7 = local_1f8[0];
        local_1df = '\x01';
      }
    }
    local_1f8[0] = local_1d7;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b7c;
    if (DAT_180c63b7c == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b80) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eabf0;
        iVar7 = FUN_1805f68d0(&DAT_1808eabf0);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eac3c == 0x7fffffff) {
          DAT_1808eac3c = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b7c == 0) && (DAT_180c63b80 <= UVar9)) {
          DAT_180c63b7c = FUN_1804174b0("C_EconItemView",0xdf29c2c);
          if (DAT_180c63b7c == 0) {
            DAT_180c63b80 = UVar9 + 1000;
          }
          else {
            DAT_180c63b80 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b7c;
        FUN_1805f68fc(&DAT_1808eabf0);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1dc = '\0';
      local_1c4 = local_1e8._0_4_;
    }
    else {
      local_1f4 = 0;
      cVar6 = FUN_1804514f0(&local_1f4,param_3 + iVar7,4);
      if (cVar6 == '\0') {
        local_1c4 = local_1e8._0_4_;
        local_1dc = '\0';
      }
      else {
        local_1c4 = local_1f4;
        local_1dc = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b78;
    if (DAT_180c63b78 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b70) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eaba0;
        iVar7 = FUN_1805f68d0(&DAT_1808eaba0);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eabec == 0x7fffffff) {
          DAT_1808eabec = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b78 == 0) && (DAT_180c63b70 <= UVar9)) {
          DAT_180c63b78 = FUN_1804174b0("C_EconItemView",0xc65de986);
          if (DAT_180c63b78 == 0) {
            DAT_180c63b70 = UVar9 + 1000;
          }
          else {
            DAT_180c63b70 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b78;
        FUN_1805f68fc(&DAT_1808eaba0);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1db = '\0';
      local_1c0 = local_1e8._0_4_;
    }
    else {
      local_1f4 = 0;
      cVar6 = FUN_1804514f0(&local_1f4,param_3 + iVar7,4);
      if (cVar6 == '\0') {
        local_1c0 = local_1e8._0_4_;
        local_1db = '\0';
      }
      else {
        local_1c0 = local_1f4;
        local_1db = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b64;
    if (DAT_180c63b64 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b68) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eab50;
        iVar7 = FUN_1805f68d0(&DAT_1808eab50);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eab9c == 0x7fffffff) {
          DAT_1808eab9c = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b64 == 0) && (DAT_180c63b68 <= UVar9)) {
          DAT_180c63b64 = FUN_1804174b0("C_EconItemView",0x710abdd);
          if (DAT_180c63b64 == 0) {
            DAT_180c63b68 = UVar9 + 1000;
          }
          else {
            DAT_180c63b68 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b64;
        FUN_1805f68fc(&DAT_1808eab50);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (param_3 + iVar7 == (undefined *)0x0) {
      local_1da = '\0';
    }
    else {
      local_1f8[0] = 0;
      cVar6 = FUN_1804514f0(local_1f8,param_3 + iVar7,1);
      if (cVar6 == '\0') {
        local_1da = '\0';
      }
      else {
        local_1da = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b60;
    if (DAT_180c63b60 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b58) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eab00;
        iVar7 = FUN_1805f68d0(&DAT_1808eab00);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eab4c == 0x7fffffff) {
          DAT_1808eab4c = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b60 == 0) && (DAT_180c63b58 <= UVar9)) {
          DAT_180c63b60 = FUN_1804174b0("C_EconEntity",0xa12d48f);
          if (DAT_180c63b60 == 0) {
            DAT_180c63b58 = UVar9 + 1000;
          }
          else {
            DAT_180c63b58 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b60;
        FUN_1805f68fc(&DAT_1808eab00);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (iVar7 + param_2 == 0) {
      local_1d9 = '\0';
      local_1bc = local_1e8._0_4_;
    }
    else {
      local_1f4 = 0;
      cVar6 = FUN_1804514f0(&local_1f4,iVar7 + param_2,4);
      if (cVar6 == '\0') {
        local_1bc = local_1e8._0_4_;
        local_1d9 = '\0';
      }
      else {
        local_1bc = local_1f4;
        local_1d9 = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b4c;
    if (DAT_180c63b4c == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b50) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eaab0;
        iVar7 = FUN_1805f68d0(&DAT_1808eaab0);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eaafc == 0x7fffffff) {
          DAT_1808eaafc = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b4c == 0) && (DAT_180c63b50 <= UVar9)) {
          DAT_180c63b4c = FUN_1804174b0("C_EconEntity",0xa1b165b2);
          if (DAT_180c63b4c == 0) {
            DAT_180c63b50 = UVar9 + 1000;
          }
          else {
            DAT_180c63b50 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b4c;
        FUN_1805f68fc(&DAT_1808eaab0);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (iVar7 + param_2 == 0) {
      local_1d8 = '\0';
      local_1f4 = local_1e8._0_4_;
    }
    else {
      local_1f4 = 0;
      cVar6 = FUN_1804514f0(&local_1f4,iVar7 + param_2,4);
      if (cVar6 == '\0') {
        local_1f4 = local_1e8._0_4_;
        local_1d8 = '\0';
      }
      else {
        local_1d8 = '\x01';
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b48;
    if (DAT_180c63b48 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c63b40) {
        iVar7 = 0;
      }
      else {
        local_1e8 = &DAT_1808eaa60;
        iVar7 = FUN_1805f68d0(&DAT_1808eaa60);
        if (iVar7 != 0) goto LAB_180216205;
        if (DAT_1808eaaac == 0x7fffffff) {
          DAT_1808eaaac = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b48 == 0) && (DAT_180c63b40 <= UVar9)) {
          DAT_180c63b48 = FUN_1804174b0("C_EconEntity",0x86253266);
          if (DAT_180c63b48 == 0) {
            DAT_180c63b40 = UVar9 + 1000;
          }
          else {
            DAT_180c63b40 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63b48;
        FUN_1805f68fc(&DAT_1808eaa60);
      }
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (iVar7 + param_2 == 0) {
      bVar1 = false;
    }
    else {
      local_1e8 = (undefined *)((ulonglong)local_1e8 & 0xffffffff00000000);
      cVar6 = FUN_1804514f0(&local_1e8,iVar7 + param_2,4);
      if (cVar6 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar15 = local_1e8._0_4_;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b34;
    if ((DAT_180c63b34 == 0) && (UVar9 = GetTickCount64(), DAT_180c63b38 <= UVar9)) {
      local_1e8 = &DAT_1808eaa10;
      iVar7 = FUN_1805f68d0(&DAT_1808eaa10);
      if (iVar7 != 0) goto LAB_180216205;
      if (DAT_1808eaa5c == 0x7fffffff) {
        DAT_1808eaa5c = 0x7ffffffe;
        goto LAB_1802161fa;
      }
      if ((DAT_180c63b34 == 0) && (DAT_180c63b38 <= UVar9)) {
        DAT_180c63b34 = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
        DAT_180c63b38 = 0xffffffffffffffff;
        if (DAT_180c63b34 == 0) {
          DAT_180c63b38 = UVar9 + 1000;
        }
      }
      iVar7 = DAT_180c63b34;
      FUN_1805f68fc(&DAT_1808eaa10);
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (iVar7 + param_2 == 0) {
      bVar2 = false;
    }
    else {
      local_1e8 = (undefined *)((ulonglong)local_1e8 & 0xffffffff00000000);
      cVar6 = FUN_1804514f0(&local_1e8,iVar7 + param_2,4);
      if (cVar6 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar4 = local_1e8._0_4_;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = DAT_180c63b30;
    if ((DAT_180c63b30 == 0) && (UVar9 = GetTickCount64(), DAT_180c63b28 <= UVar9)) {
      local_1e8 = &DAT_1808ea9c0;
      iVar7 = FUN_1805f68d0(&DAT_1808ea9c0);
      if (iVar7 != 0) goto LAB_180216205;
      if (DAT_1808eaa0c == 0x7fffffff) {
        DAT_1808eaa0c = 0x7ffffffe;
        goto LAB_1802161fa;
      }
      if ((DAT_180c63b30 == 0) && (DAT_180c63b28 <= UVar9)) {
        DAT_180c63b30 = FUN_1804174b0("C_EconItemView",0xafd12ee8);
        if (DAT_180c63b30 == 0) {
          DAT_180c63b28 = UVar9 + 1000;
        }
        else {
          DAT_180c63b28 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c63b30;
      FUN_1805f68fc(&DAT_1808ea9c0);
    }
    if (DAT_180c63b1c == 0) {
      UVar9 = GetTickCount64();
      if (DAT_180c63b20 <= UVar9) {
        local_1e8 = &DAT_1808ea970;
        iVar8 = FUN_1805f68d0(&DAT_1808ea970);
        if (iVar8 != 0) goto LAB_180216205;
        if (DAT_1808ea9bc == 0x7fffffff) {
          DAT_1808ea9bc = 0x7ffffffe;
          goto LAB_1802161fa;
        }
        if ((DAT_180c63b1c == 0) && (DAT_180c63b20 <= UVar9)) {
          DAT_180c63b1c = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
          DAT_180c63b20 = 0xffffffffffffffff;
          if (DAT_180c63b1c == 0) {
            DAT_180c63b20 = UVar9 + 1000;
          }
        }
        iVar8 = DAT_180c63b1c;
        FUN_1805f68fc(&DAT_1808ea970);
        if (iVar8 != 0) goto LAB_180215d46;
      }
    }
    else {
LAB_180215d46:
      if (DAT_180c63b18 == 0) {
        UVar9 = GetTickCount64();
        if (DAT_180c63b10 <= UVar9) {
          local_1e8 = &DAT_1808ea920;
          iVar8 = FUN_1805f68d0(&DAT_1808ea920);
          if (iVar8 != 0) goto LAB_180216205;
          if (DAT_1808ea96c == 0x7fffffff) {
            DAT_1808ea96c = 0x7ffffffe;
            goto LAB_1802161fa;
          }
          if ((DAT_180c63b18 == 0) && (DAT_180c63b10 <= UVar9)) {
            DAT_180c63b18 = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
            DAT_180c63b10 = 0xffffffffffffffff;
            if (DAT_180c63b18 == 0) {
              DAT_180c63b10 = UVar9 + 1000;
            }
          }
          iVar8 = DAT_180c63b18;
          FUN_1805f68fc(&DAT_1808ea920);
          if (iVar8 != 0) goto LAB_180215dfc;
        }
      }
      else {
LAB_180215dfc:
        puVar13 = local_1b8;
        if (iVar7 == 0) {
          cStack_107 = '\0';
          puVar11 = &local_1a8;
        }
        else {
          puVar11 = (undefined8 *)FUN_180204770(&local_1a8,local_1b8 + iVar7);
        }
        iVar7 = DAT_180c63b04;
        local_f8 = *puVar11;
        uStack_f0 = puVar11[1];
        uStack_e8 = puVar11[2];
        uStack_e0 = puVar11[3];
        local_d8 = puVar11[4];
        uStack_d0 = puVar11[5];
        uStack_c8 = puVar11[6];
        uStack_c0 = puVar11[7];
        local_b8 = puVar11[8];
        uStack_b0 = puVar11[9];
        uStack_a8 = puVar11[10];
        uStack_a0 = puVar11[0xb];
        local_98 = puVar11[0xc];
        uStack_90 = puVar11[0xd];
        uStack_88 = puVar11[0xe];
        uStack_80 = puVar11[0xf];
        local_78 = puVar11[0x10];
        uStack_70 = puVar11[0x11];
        uStack_68 = puVar11[0x12];
        uStack_60 = puVar11[0x13];
        local_58 = *(undefined2 *)(puVar11 + 0x14);
        if ((DAT_180c63b04 == 0) && (UVar9 = GetTickCount64(), DAT_180c63b08 <= UVar9)) {
          local_1b8 = &DAT_1808ea8d0;
          iVar7 = FUN_1805f68d0(&DAT_1808ea8d0);
          if (iVar7 != 0) goto LAB_180216205;
          if (DAT_1808ea91c == 0x7fffffff) {
            DAT_1808ea91c = 0x7ffffffe;
            goto LAB_1802161fa;
          }
          if ((DAT_180c63b04 == 0) && (DAT_180c63b08 <= UVar9)) {
            DAT_180c63b04 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
            DAT_180c63b08 = 0xffffffffffffffff;
            if (DAT_180c63b04 == 0) {
              DAT_180c63b08 = UVar9 + 1000;
            }
          }
          iVar7 = DAT_180c63b04;
          FUN_1805f68fc(&DAT_1808ea8d0);
        }
        FUN_180204770(&local_1a8,puVar13 + iVar7);
        iVar7 = DAT_180c63b00;
        if ((DAT_180c63b00 == 0) && (UVar9 = GetTickCount64(), DAT_180c63af8 <= UVar9)) {
          local_1b8 = &DAT_1808ea880;
          iVar7 = FUN_1805f68d0(&DAT_1808ea880);
          if (iVar7 != 0) {
LAB_180216205:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ea8cc == 0x7fffffff) {
            DAT_1808ea8cc = 0x7ffffffe;
LAB_1802161fa:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c63b00 == 0) && (DAT_180c63af8 <= UVar9)) {
            DAT_180c63b00 = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
            if (DAT_180c63b00 == 0) {
              uVar14 = UVar9 + 1000;
            }
            DAT_180c63af8 = uVar14;
          }
          iVar7 = DAT_180c63b00;
          FUN_1805f68fc(&DAT_1808ea880);
        }
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        puVar13 = puVar13 + iVar7;
        bVar3 = false;
        if (puVar13 != (undefined *)0x0) {
          local_1e8 = (undefined *)((ulonglong)local_1e8 & 0xffffffff00000000);
          cVar6 = FUN_1804514f0(&local_1e8,puVar13,4);
          if (cVar6 == '\0') {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        uVar5 = local_1e8._0_4_;
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if (((((local_1e0 != '\0') && (local_1df != '\0')) && (local_1de != '\0')) &&
            ((((local_1dd != '\0' && (local_1dc != '\0')) &&
              ((local_1db != '\0' && ((local_1da != '\0' && (local_1d9 != '\0')))))) &&
             (local_1d8 != '\0')))) &&
           ((((bVar1 && (bVar2)) && (local_58._1_1_ != '\0')) && ((cStack_107 != '\0' && (bVar3)))))
           ) {
          DAT_180c70f10 = local_1f0[0];
          _DAT_180c70f18 = local_1d0;
          DAT_180c70f20 = local_1d7;
          _DAT_180c70f24 = local_1c8;
          _DAT_180c70f28 = local_1c4;
          _DAT_180c70f2c = local_1c0;
          DAT_180c70f30 = local_1f8[0];
          DAT_180c70f34 = local_1bc;
          _DAT_180c70f38 = local_1f4;
          _DAT_180c70f40 = uVar4;
          _DAT_180c70f44 = local_f8;
          uRam0000000180c70f4c = uStack_f0;
          uRam0000000180c70f54 = uStack_e8;
          uRam0000000180c70f5c = uStack_e0;
          _DAT_180c70f64 = local_d8;
          uRam0000000180c70f6c = uStack_d0;
          uRam0000000180c70f74 = uStack_c8;
          uRam0000000180c70f7c = uStack_c0;
          _DAT_180c70f84 = local_b8;
          uRam0000000180c70f8c = uStack_b0;
          uRam0000000180c70f94 = uStack_a8;
          uRam0000000180c70f9c = uStack_a0;
          _DAT_180c70fa4 = local_98;
          uRam0000000180c70fac = uStack_90;
          uRam0000000180c70fb4 = uStack_88;
          uRam0000000180c70fbc = uStack_80;
          _DAT_180c70fc4 = local_78;
          uRam0000000180c70fcc = uStack_70;
          uRam0000000180c70fd4 = uStack_68;
          uRam0000000180c70fdc = uStack_60;
          DAT_180c70fe4 = (undefined1)local_58;
          _DAT_180c70fe5 = local_1a8;
          uRam0000000180c70fed = uStack_1a0;
          uRam0000000180c70ff5 = uStack_198;
          uRam0000000180c70ffd = uStack_190;
          _DAT_180c71005 = local_188;
          uRam0000000180c7100d = uStack_180;
          uRam0000000180c71015 = uStack_178;
          uRam0000000180c7101d = uStack_170;
          _DAT_180c71025 = local_168;
          uRam0000000180c7102d = uStack_160;
          uRam0000000180c71035 = uStack_158;
          uRam0000000180c7103d = uStack_150;
          _DAT_180c71045 = local_148;
          uRam0000000180c7104d = uStack_140;
          uRam0000000180c71055 = uStack_138;
          uRam0000000180c7105d = uStack_130;
          _DAT_180c71065 = local_128;
          uRam0000000180c7106d = uStack_120;
          uRam0000000180c71075 = uStack_118;
          uRam0000000180c7107d = uStack_110;
          DAT_180c71085 = local_108;
          _DAT_180c71088 = uVar5;
          DAT_180c7108c = '\x01';
          _DAT_180c70f3c = uVar15;
          goto LAB_1802161c3;
        }
      }
    }
    uVar12 = 0;
  }
  else {
LAB_1802161c3:
    uVar12 = 1;
  }
  return uVar12;
}



