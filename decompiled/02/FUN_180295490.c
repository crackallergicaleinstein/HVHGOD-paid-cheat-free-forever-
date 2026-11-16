// FUN_180295490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180295490 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180295490(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  char cVar5;
  DWORD DVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  DWORD *pDVar13;
  byte bVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  float fVar18;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_2178 [32];
  longlong local_2158;
  undefined8 local_2150;
  undefined4 *local_2148;
  undefined1 local_2140;
  undefined1 local_2138;
  undefined1 local_2130;
  undefined2 local_2128;
  undefined4 local_2118;
  undefined4 local_2114;
  undefined4 local_2110;
  undefined8 *local_2108;
  longlong *local_2100;
  undefined8 *local_20f8;
  longlong *local_20f0;
  undefined8 *local_20e8;
  DWORD *local_20d8;
  undefined1 local_20d0 [24];
  undefined8 **local_20b8;
  undefined1 *local_20b0;
  undefined1 local_20a8 [4096];
  undefined4 local_10a8;
  undefined1 local_1088 [4128];
  undefined1 local_68 [8];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1802954bd;
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_2178;
  local_20d0._0_16_ = (undefined1  [16])0x0;
  plVar16 = param_1 + 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  plVar7 = (longlong *)FUN_180113860(plVar16);
  puVar4 = (undefined8 *)*param_1;
  local_20d0._8_8_ = plVar7;
  local_20d0._0_8_ = puVar4;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  LOCK();
  lVar9 = *plVar16;
  *plVar16 = (longlong)plVar7;
  UNLOCK();
  if (((byte)lVar9 & 3) == 2) {
    FUN_1805fa36c(plVar16);
  }
  if (puVar4 != (undefined8 *)0x0) {
    for (plVar16 = (longlong *)*puVar4; plVar16 != (longlong *)puVar4[1]; plVar16 = plVar16 + 0x211)
    {
      if (*plVar16 == local_res10) {
        UVar8 = GetTickCount64();
        uVar17 = FUN_180294960(plVar16,UVar8);
        if ((((local_res20 != 0) && (DAT_180cb1998 != '\0')) && (0.0 < (float)uVar17)) &&
           (plVar16[5] != plVar16[6])) {
          lVar9 = FUN_1803d4150(uVar17,(int)plVar16[4]);
          fVar18 = (float)uVar17;
          if ((lVar9 == plVar16[9]) &&
             (lVar9 = plVar16[6], lVar10 = FUN_1802921f0(), lVar10 == *(longlong *)(lVar9 + -8))) {
            uVar17 = FUN_180294ae0(local_1088,plVar16,UVar8);
            FUN_18063aed0(local_20a8,uVar17,0x1020);
            cVar5 = FUN_180291c60(plVar16,local_20a8,local_10a8);
            if (cVar5 != '\0') {
              lVar9 = plVar16[9];
              DVar6 = GetCurrentThreadId();
              local_20d8 = (DWORD *)0x0;
              if (DVar6 == 0) goto LAB_1802956d3;
              uVar11 = 0;
              goto LAB_1802956a0;
            }
          }
        }
        break;
      }
    }
  }
  goto LAB_18029554b;
  while (uVar12 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar12, uVar12 < 0x40) {
LAB_1802956a0:
    pDVar13 = &DAT_180c660c0 + uVar11;
    LOCK();
    DVar3 = *pDVar13;
    if (DVar3 == 0) {
      *pDVar13 = DVar6;
    }
    UNLOCK();
    if (DVar3 == 0) {
      LOCK();
      *(longlong *)(&DAT_180c65e40 + uVar11 * 8) = lVar9;
      UNLOCK();
      LOCK();
      DAT_180c65e3c = DAT_180c65e3c + 1;
      UNLOCK();
      local_20d8 = pDVar13;
      break;
    }
  }
LAB_1802956d3:
  pDVar13 = local_20d8;
  bVar14 = DAT_180cb1a78;
  if ((local_20d8 != (DWORD *)0x0) && (DAT_180cb1a00 != '\0')) {
    cVar5 = (char)(int)((float)(DAT_180cb1a68 >> 0x18) * fVar18);
    local_2110 = CONCAT13(cVar5,(int3)DAT_180cb1a68);
    local_2118 = CONCAT13((char)(int)((float)(DAT_180cb1a6c >> 0x18) * fVar18),(int3)DAT_180cb1a6c);
    uVar12 = DAT_180cb1a74;
    if (DAT_180cb1a74 == 0) {
      uVar12 = (uint)DAT_180cb1a70;
    }
    uVar15 = (uint)DAT_180cb1a78;
    local_2108 = &local_res18;
    local_2100 = &local_res20;
    local_20f8 = &param_5;
    local_20f0 = &local_res10;
    local_20e8 = &param_6;
    uVar11 = (ulonglong)local_2110;
    local_68[0] = FUN_18028c7b0(uVar15);
    local_20b8 = &local_2108;
    local_20b0 = local_68;
    FUN_1802986b0(local_68[0],uVar11 & 0xffffffff,local_2118,&local_20b8);
    if (uVar12 - 1 < 3) {
LAB_18029580e:
      if ((uVar12 != 0) && (cVar5 != '\0')) {
        local_2128 = 0x100;
        local_2130 = 1;
        local_2138 = 0;
        local_2140 = *(undefined1 *)
                      ((longlong)std::_Ref_count_obj2<int>::vftable + (longlong)(int)uVar12 + 0x1f);
        local_2148 = &local_2110;
        local_2150 = *local_20e8;
        local_2158 = *local_20f0;
        FUN_180296090(&DAT_180cc9690,*local_2108,*local_2100,*local_20f8);
      }
    }
    else {
      local_2118 = 0x4030200;
      local_2114 = 0x9080605;
      if (10 < bVar14) {
        if (bVar14 < 0x13) {
          bVar14 = local_20d0[(ulonglong)(uVar15 - 0xb) - 0x48];
        }
        else {
          bVar14 = 2;
        }
      }
      uVar11 = 0;
      do {
        if ((&DAT_1807d1130)[uVar11] == bVar14) {
          uVar12 = (int)uVar11 + 1;
          goto LAB_18029580e;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 3);
    }
  }
  if (pDVar13 != (DWORD *)0x0) {
    LOCK();
    *(undefined8 *)(&DAT_180c65e40 + ((longlong)(pDVar13 + -0x60319830) >> 2) * 8) = 0;
    UNLOCK();
    *pDVar13 = 0;
    LOCK();
    DAT_180c65e3c = DAT_180c65e3c + -1;
    UNLOCK();
  }
LAB_18029554b:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar7 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
}



