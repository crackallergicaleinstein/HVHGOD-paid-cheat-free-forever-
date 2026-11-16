// FUN_1802224f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802224f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802235ac) */

void FUN_1802224f0(undefined8 param_1,longlong param_2,ulonglong param_3,undefined *param_4,
                  int param_5,undefined8 param_6)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined *puVar16;
  char cVar17;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  int local_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined8 local_670;
  int local_668;
  undefined *local_660;
  undefined *local_658;
  undefined8 local_650;
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  local_668 = CONCAT22(local_668._2_2_,(short)param_3);
  local_650 = param_6;
  local_660 = param_4;
  local_658 = param_4;
  if (DAT_180c63fec == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63ff0) {
    }
    local_670 = &DAT_1808ec750;
    iVar7 = FUN_1805f68d0(&DAT_1808ec750);
    if (iVar7 != 0) goto LAB_1802236f3;
    if (DAT_1808ec79c == 0x7fffffff) {
      DAT_1808ec79c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63fec == 0) && (DAT_180c63ff0 <= UVar9)) {
      DAT_180c63fec = FUN_1804174b0("C_EconItemView",0x34b55816);
      if (DAT_180c63fec == 0) {
        DAT_180c63ff0 = UVar9 + 1000;
      }
      else {
        DAT_180c63ff0 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63fec;
    FUN_1805f68fc(&DAT_1808ec750);
    if (iVar7 == 0) {
    }
  }
  if (DAT_180c63fe8 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63fe0) {
    }
    local_670 = &DAT_1808ec700;
    iVar7 = FUN_1805f68d0(&DAT_1808ec700);
    if (iVar7 != 0) goto LAB_1802236f3;
    if (DAT_1808ec74c == 0x7fffffff) {
      DAT_1808ec74c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63fe8 == 0) && (DAT_180c63fe0 <= UVar9)) {
      DAT_180c63fe8 = FUN_1804174b0("C_EconItemView",0x373ee446);
      if (DAT_180c63fe8 == 0) {
        DAT_180c63fe0 = UVar9 + 1000;
      }
      else {
        DAT_180c63fe0 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63fe8;
    FUN_1805f68fc(&DAT_1808ec700);
    if (iVar7 == 0) {
    }
  }
  if (DAT_180c63fd4 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63fd8) {
    }
    local_670 = &DAT_1808ec6b0;
    iVar7 = FUN_1805f68d0(&DAT_1808ec6b0);
    if (iVar7 != 0) goto LAB_1802236f3;
    if (DAT_1808ec6fc == 0x7fffffff) {
      DAT_1808ec6fc = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63fd4 == 0) && (DAT_180c63fd8 <= UVar9)) {
      DAT_180c63fd4 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
      if (DAT_180c63fd4 == 0) {
        DAT_180c63fd8 = UVar9 + 1000;
      }
      else {
        DAT_180c63fd8 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63fd4;
    FUN_1805f68fc(&DAT_1808ec6b0);
    if (iVar7 == 0) {
    }
  }
  if (DAT_180c63fd0 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63fc8) {
    }
    local_670 = &DAT_1808ec660;
    iVar7 = FUN_1805f68d0(&DAT_1808ec660);
    if (iVar7 != 0) goto LAB_1802236f3;
    if (DAT_1808ec6ac == 0x7fffffff) {
      DAT_1808ec6ac = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63fd0 == 0) && (DAT_180c63fc8 <= UVar9)) {
      DAT_180c63fd0 = FUN_1804174b0("C_EconItemView",0xc65de986);
      if (DAT_180c63fd0 == 0) {
        DAT_180c63fc8 = UVar9 + 1000;
      }
      else {
        DAT_180c63fc8 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63fd0;
    FUN_1805f68fc(&DAT_1808ec660);
    if (iVar7 == 0) {
    }
  }
  if (DAT_180c63fbc == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63fc0) {
    }
    local_670 = &DAT_1808ec610;
    iVar7 = FUN_1805f68d0(&DAT_1808ec610);
    if (iVar7 != 0) goto LAB_1802236f3;
    if (DAT_1808ec65c == 0x7fffffff) {
      DAT_1808ec65c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63fbc == 0) && (DAT_180c63fc0 <= UVar9)) {
      DAT_180c63fbc = FUN_1804174b0("C_EconItemView",0x710abdd);
      if (DAT_180c63fbc == 0) {
        DAT_180c63fc0 = UVar9 + 1000;
      }
      else {
        DAT_180c63fc0 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63fbc;
    FUN_1805f68fc(&DAT_1808ec610);
    if (iVar7 == 0) {
    }
  }
  if (DAT_180c63fb8 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63fb0) {
    }
    local_670 = &DAT_1808ec5c0;
    iVar7 = FUN_1805f68d0(&DAT_1808ec5c0);
    if (iVar7 != 0) goto LAB_1802236f3;
    if (DAT_1808ec60c == 0x7fffffff) {
      DAT_1808ec60c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63fb8 == 0) && (DAT_180c63fb0 <= UVar9)) {
      DAT_180c63fb8 = FUN_1804174b0("C_EconItemView",0x216db5e3);
      if (DAT_180c63fb8 == 0) {
        DAT_180c63fb0 = UVar9 + 1000;
      }
      else {
        DAT_180c63fb0 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63fb8;
    FUN_1805f68fc(&DAT_1808ec5c0);
    if (iVar7 == 0) {
    }
  }
  if (param_4 == (undefined *)0x0) {
  }
  if (DAT_180cca110 == 0) {
  }
  if (param_5 < 0) {
  }
  plVar13 = (longlong *)
            ((((param_3 & 0xffff) >> 8 ^ (param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3 & DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
  lVar10 = plVar13[1];
  if (lVar10 == DAT_180cc9c90) {
LAB_180222a27:
    lVar10 = 0;
  }
  else {
    sVar1 = *(short *)(lVar10 + 0x10);
    while ((short)param_3 != sVar1) {
      if (lVar10 == *plVar13) goto LAB_180222a27;
      lVar10 = *(longlong *)(lVar10 + 8);
      sVar1 = *(short *)(lVar10 + 0x10);
    }
  }
  lVar14 = DAT_180cc9c90;
  if (lVar10 != 0) {
    lVar14 = lVar10;
  }
  if (lVar14 == DAT_180cc9c90) {
  }
  lVar14 = *(longlong *)(lVar14 + 0x18) * 0xb8;
  lVar10 = DAT_180cc9bf8 + lVar14;
  if (lVar10 == 0) {
  }
  cVar17 = *(char *)(lVar10 + 0xb0);
  if ((cVar17 == '\0') || (cVar17 == '\x01')) {
    cVar17 = '\x01';
  }
  else {
    cVar17 = '\0';
  }
  lVar10 = FUN_18021b630(lVar14,param_4);
  iVar7 = DAT_180c63fa4;
  if (DAT_180c63fa4 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63fa8) {
      iVar7 = 0;
    }
    else {
      local_670 = &DAT_1808ec570;
      iVar7 = FUN_1805f68d0(&DAT_1808ec570);
      if (iVar7 != 0) goto LAB_1802236f3;
      if (DAT_1808ec5bc == 0x7fffffff) {
        DAT_1808ec5bc = 0x7ffffffe;
        goto LAB_180223708;
      }
      if ((DAT_180c63fa4 == 0) && (DAT_180c63fa8 <= UVar9)) {
        DAT_180c63fa4 = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
        if (DAT_180c63fa4 == 0) {
          DAT_180c63fa8 = UVar9 + 1000;
        }
        else {
          DAT_180c63fa8 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c63fa4;
      FUN_1805f68fc(&DAT_1808ec570);
    }
  }
  if ((lVar10 == 0) || (iVar7 == 0)) {
    local_670._0_5_ = (uint5)(uint)local_670;
    puVar16 = local_670;
  }
  else {
    lVar14 = FUN_18017ea70();
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
    if (iVar7 + lVar10 == 0) {
LAB_180222b7b:
      local_678._0_5_ = (uint5)(uint)local_678;
    }
    else {
      local_678 = (undefined *)((ulonglong)local_678 & 0xffffffff00000000);
      cVar6 = FUN_1804514f0(&local_678,iVar7 + lVar10,4);
      if (cVar6 == '\0') goto LAB_180222b7b;
      local_678._0_5_ = CONCAT14(1,(uint)local_678);
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    puVar16 = local_678;
  }
  local_670 = puVar16;
  if (cVar17 != '\0') {
    if (iVar7 != 0) {
      iVar8 = FUN_1805f68d0(&DAT_180cc9e50);
      if (iVar8 != 0) goto LAB_1802236f3;
      if (DAT_180cc9e9c == 0x7fffffff) {
        DAT_180cc9e9c = 0x7ffffffe;
        goto LAB_180223708;
      }
      puVar11 = DAT_180cca000;
      if (DAT_180cca000 != DAT_180cca008) {
        do {
          if ((undefined *)*puVar11 == param_4) break;
          puVar11 = puVar11 + 0x25;
        } while (puVar11 != DAT_180cca008);
        if (((puVar11 != DAT_180cca008) && (*(char *)(puVar11 + 0x22) != '\0')) &&
           (*(char *)((longlong)puVar11 + 0x111) == '\0')) {
          lVar10 = puVar11[1];
          lVar14 = FUN_18017ea70();
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
          bVar2 = false;
          if (lVar10 + 0x32 != 0) {
            local_678 = (undefined *)((ulonglong)local_678 & 0xffffffffffff0000);
            cVar6 = FUN_1804514f0(&local_678,lVar10 + 0x32,2);
            if (cVar6 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          uVar4 = (ushort)local_678;
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          if (bVar2) {
            local_670 = (undefined *)
                        (CONCAT44(local_670._4_4_,(uint)(uVar4 >> 5)) & 0xffffffff0000000f);
            local_670._0_5_ = CONCAT14(1,(uint)local_670);
            puVar16 = local_670;
          }
        }
      }
      FUN_1805f68fc(&DAT_180cc9e50);
    }
    if (local_670._4_1_ == '\0') {
    }
    if (0xf < (uint)puVar16) {
    }
  }
  iVar8 = DAT_180c63fa0;
  if (DAT_180c63fa0 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c63f98) {
      iVar8 = 0;
    }
    else {
      local_678 = &DAT_1808ec520;
      iVar8 = FUN_1805f68d0(&DAT_1808ec520);
      if (iVar8 != 0) goto LAB_1802236f3;
      if (DAT_1808ec56c == 0x7fffffff) {
        DAT_1808ec56c = 0x7ffffffe;
        goto LAB_180223708;
      }
      if ((DAT_180c63fa0 == 0) && (DAT_180c63f98 <= UVar9)) {
        DAT_180c63fa0 = FUN_1804174b0("C_EconItemView",0x34b55816);
        if (DAT_180c63fa0 == 0) {
          DAT_180c63f98 = UVar9 + 1000;
        }
        else {
          DAT_180c63f98 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c63fa0;
      FUN_1805f68fc(&DAT_1808ec520);
    }
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (iVar8 + param_2 == 0) {
    bVar2 = false;
    puVar16 = local_658;
  }
  else {
    local_678 = (undefined *)0x0;
    cVar6 = FUN_1804514f0(&local_678,iVar8 + param_2,8);
    if (cVar6 == '\0') {
      bVar2 = false;
      puVar16 = local_658;
    }
    else {
      bVar2 = true;
      puVar16 = local_678;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar8 = DAT_180c63f8c;
  if ((DAT_180c63f8c == 0) && (UVar9 = GetTickCount64(), DAT_180c63f90 <= UVar9)) {
    local_678 = &DAT_1808ec4d0;
    iVar8 = FUN_1805f68d0(&DAT_1808ec4d0);
    if (iVar8 != 0) goto LAB_1802236f3;
    if (DAT_1808ec51c == 0x7fffffff) {
      DAT_1808ec51c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63f8c == 0) && (DAT_180c63f90 <= UVar9)) {
      DAT_180c63f8c = FUN_1804174b0("C_EconItemView",0xc65de986);
      DAT_180c63f90 = 0xffffffffffffffff;
      if (DAT_180c63f8c == 0) {
        DAT_180c63f90 = UVar9 + 1000;
      }
    }
    iVar8 = DAT_180c63f8c;
    FUN_1805f68fc(&DAT_1808ec4d0);
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (iVar8 + param_2 == 0) {
    bVar3 = false;
    iVar8 = local_668;
  }
  else {
    local_678 = (undefined *)((ulonglong)local_678 & 0xffffffff00000000);
    cVar6 = FUN_1804514f0(&local_678,iVar8 + param_2,4);
    if (cVar6 == '\0') {
      bVar3 = false;
      iVar8 = local_668;
    }
    else {
      bVar3 = true;
      iVar8 = (uint)local_678;
    }
  }
  lVar10 = FUN_18017ea70();
  puVar5 = local_658;
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (!bVar2) {
  }
  if (!bVar3) {
  }
  if (((puVar16 != local_658) || (iVar8 != DAT_180cca110)) &&
     (cVar6 = FUN_1802239e0(param_2), cVar6 == '\0')) {
  }
  iVar8 = DAT_180c63f88;
  if ((DAT_180c63f88 == 0) && (UVar9 = GetTickCount64(), DAT_180c63f80 <= UVar9)) {
    local_678 = &DAT_1808ec480;
    iVar8 = FUN_1805f68d0(&DAT_1808ec480);
    if (iVar8 != 0) goto LAB_1802236f3;
    if (DAT_1808ec4cc == 0x7fffffff) {
      DAT_1808ec4cc = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63f88 == 0) && (DAT_180c63f80 <= UVar9)) {
      DAT_180c63f88 = FUN_1804174b0("C_EconItemView",0x34b55816);
      DAT_180c63f80 = 0xffffffffffffffff;
      if (DAT_180c63f88 == 0) {
        DAT_180c63f80 = UVar9 + 1000;
      }
    }
    iVar8 = DAT_180c63f88;
    FUN_1805f68fc(&DAT_1808ec480);
  }
  cVar6 = FUN_1804513c0(iVar8 + param_2,8,1);
  if (cVar6 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar6 = FUN_1801fde60(iVar8 + param_2,&local_660);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar8 = DAT_180c63f74;
  if (cVar6 == '\0') {
  }
  local_678 = (undefined *)CONCAT44(local_678._4_4_,(int)((ulonglong)puVar5 >> 0x20));
  if ((DAT_180c63f74 == 0) && (UVar9 = GetTickCount64(), DAT_180c63f78 <= UVar9)) {
    local_660 = &DAT_1808ec430;
    iVar8 = FUN_1805f68d0(&DAT_1808ec430);
    if (iVar8 != 0) goto LAB_1802236f3;
    if (DAT_1808ec47c == 0x7fffffff) {
      DAT_1808ec47c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63f74 == 0) && (DAT_180c63f78 <= UVar9)) {
      DAT_180c63f74 = FUN_1804174b0("C_EconItemView",0x373ee446);
      if (DAT_180c63f74 == 0) {
        DAT_180c63f78 = UVar9 + 1000;
      }
      else {
        DAT_180c63f78 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c63f74;
    FUN_1805f68fc(&DAT_1808ec430);
  }
  cVar6 = FUN_1804513c0(iVar8 + param_2,4,1);
  if (cVar6 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar6 = FUN_1801ad800(iVar8 + param_2,&local_678);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar8 = DAT_180c63f70;
  if (cVar6 == '\0') {
  }
  local_678 = (undefined *)CONCAT44(local_678._4_4_,(int)puVar5);
  if ((DAT_180c63f70 == 0) && (UVar9 = GetTickCount64(), DAT_180c63f68 <= UVar9)) {
    local_660 = &DAT_1808ec3e0;
    iVar8 = FUN_1805f68d0(&DAT_1808ec3e0);
    if (iVar8 != 0) goto LAB_1802236f3;
    if (DAT_1808ec42c == 0x7fffffff) {
      DAT_1808ec42c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63f70 == 0) && (DAT_180c63f68 <= UVar9)) {
      DAT_180c63f70 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
      if (DAT_180c63f70 == 0) {
        DAT_180c63f68 = UVar9 + 1000;
      }
      else {
        DAT_180c63f68 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c63f70;
    FUN_1805f68fc(&DAT_1808ec3e0);
  }
  cVar6 = FUN_1804513c0(iVar8 + param_2,4,1);
  if (cVar6 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar6 = FUN_1801ad800(iVar8 + param_2,&local_678);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar8 = DAT_180c63f5c;
  if (cVar6 == '\0') {
  }
  if ((DAT_180c63f5c == 0) && (UVar9 = GetTickCount64(), DAT_180c63f60 <= UVar9)) {
    local_660 = &DAT_1808ec390;
    iVar8 = FUN_1805f68d0(&DAT_1808ec390);
    if (iVar8 != 0) goto LAB_1802236f3;
    if (DAT_1808ec3dc == 0x7fffffff) {
      DAT_1808ec3dc = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63f5c == 0) && (DAT_180c63f60 <= UVar9)) {
      DAT_180c63f5c = FUN_1804174b0("C_EconItemView",0xc65de986);
      if (DAT_180c63f5c == 0) {
        DAT_180c63f60 = UVar9 + 1000;
      }
      else {
        DAT_180c63f60 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c63f5c;
    FUN_1805f68fc(&DAT_1808ec390);
  }
  cVar6 = FUN_1804513c0(iVar8 + param_2,4,1);
  if (cVar6 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar6 = FUN_1801ad800(iVar8 + param_2,&DAT_180cca110);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar8 = DAT_180c63f58;
  if (cVar6 == '\0') {
  }
  local_678 = (undefined *)CONCAT71(local_678._1_7_,1);
  if ((DAT_180c63f58 == 0) && (UVar9 = GetTickCount64(), DAT_180c63f50 <= UVar9)) {
    local_660 = &DAT_1808ec340;
    iVar8 = FUN_1805f68d0(&DAT_1808ec340);
    if (iVar8 != 0) goto LAB_1802236f3;
    if (DAT_1808ec38c == 0x7fffffff) {
      DAT_1808ec38c = 0x7ffffffe;
      goto LAB_180223708;
    }
    if ((DAT_180c63f58 == 0) && (DAT_180c63f50 <= UVar9)) {
      DAT_180c63f58 = FUN_1804174b0("C_EconItemView",0x710abdd);
      if (DAT_180c63f58 == 0) {
        DAT_180c63f50 = UVar9 + 1000;
      }
      else {
        DAT_180c63f50 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c63f58;
    FUN_1805f68fc(&DAT_1808ec340);
  }
  cVar6 = FUN_1804513c0(iVar8 + param_2,1,1);
  if (cVar6 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar6 = FUN_1801ad7b0(iVar8 + param_2,&local_678);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar8 = DAT_180c63f40;
  if (cVar6 == '\0') {
  }
  local_678 = (undefined *)((ulonglong)local_678 & 0xffffffffffffff00);
  if ((DAT_180c63f40 == 0) && (UVar9 = GetTickCount64(), DAT_180c63f48 <= UVar9)) {
    local_660 = &DAT_1808ec2f0;
    iVar8 = FUN_1805f68d0(&DAT_1808ec2f0);
    if (iVar8 != 0) {
LAB_1802236f3:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ec33c == 0x7fffffff) {
      DAT_1808ec33c = 0x7ffffffe;
LAB_180223708:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c63f40 == 0) && (DAT_180c63f48 <= UVar9)) {
      DAT_180c63f40 = FUN_1804174b0("C_EconItemView",0x216db5e3);
      if (DAT_180c63f40 == 0) {
        DAT_180c63f48 = UVar9 + 1000;
      }
      else {
        DAT_180c63f48 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c63f40;
    FUN_1805f68fc(&DAT_1808ec2f0);
  }
  cVar6 = FUN_1804513c0(iVar8 + param_2,1,1);
  if (cVar6 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar6 = FUN_1801ad7b0(iVar8 + param_2,&local_678);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (cVar6 == '\0') {
  }
  if (cVar17 != '\0') {
    cVar6 = FUN_1804513c0(iVar7 + param_2,4,1);
    if (cVar6 == '\0') {
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    cVar6 = FUN_1801ad800(iVar7 + param_2,&local_670);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (cVar6 == '\0') {
    }
  }
  uVar12 = FUN_1802196a0(param_2,3);
  cVar6 = FUN_1804513c0(uVar12,1,2);
  if (cVar6 == '\0') {
    cVar6 = '\0';
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_1801aec50(&local_670,uVar12,param_2);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    cVar6 = local_670._4_1_;
    if (((local_670._4_1_ != '\0') && ((uint)local_670 == param_5)) &&
       (cVar17 = FUN_180219160(param_2,local_650,cVar17), cVar17 != '\0')) {
    }
  }
  UVar9 = GetTickCount64();
  if (DAT_180c63f38 <= UVar9) {
    DAT_180c63f38 = UVar9 + 1000;
    LOCK();
    UNLOCK();
    uVar15 = 0xffffffff;
    if (cVar6 != '\0') {
      uVar15 = (uint)local_670;
    }
    FUN_18063ab10(local_648,0,0x600);
    local_690 = (char *)CONCAT44(local_690._4_4_,(int)(short)local_668);
    local_698 = (undefined **)local_658;
    local_688 = param_5;
    local_680 = uVar15;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "id=%llu definition=%d expected_paint=%d observed_paint=%d");
    local_698 = &PTR_180700558;
    if (local_648[0] != '\0') {
      local_698 = (undefined **)&DAT_1806bcfc0;
    }
    local_690 = local_648;
    FUN_1800f6900(2,local_698,"Inventory","MODEL_BIND_PENDING");
  }
}



