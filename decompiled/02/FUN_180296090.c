// FUN_180296090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180296090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180296090(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,byte param_8,
                  undefined1 param_9,char param_10,undefined2 param_11)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *_Buf1;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined2 local_120;
  char local_118;
  longlong local_110;
  char local_108;
  uint local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  int local_90;
  int local_8c;
  int iStack_88;
  longlong local_80;
  int local_78;
  char local_70;
  ulonglong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_120 = param_11;
  local_108 = param_10;
  local_104 = 0;
  local_128 = CONCAT71(local_128._1_7_,param_10);
  local_c0 = param_1;
  plVar4 = (longlong *)FUN_18028c850(&local_d0,param_8,param_9,*param_7);
  local_d8 = *plVar4;
  lStack_c8 = plVar4[1];
  local_fc = (undefined4)lStack_c8;
  if (*(char *)((longlong)param_7 + 3) == '\0') {
  }
  if (local_d8 == 0) {
  }
  local_d0 = local_d8;
  FUN_18027c3e0(&local_98,param_2);
  iVar15 = -1;
  if ((((((local_70 != '\0') && (-1 < local_8c)) && (-1 < iStack_88)) &&
       ((((-1 < local_90 && (-1 < local_78)) && ((local_8c <= local_90 && (iStack_88 <= local_78))))
        && ((local_8c == 0 || (local_98 != 0)))))) && ((iStack_88 == 0 || (local_80 != 0)))) &&
     (local_8c <= 0x100000 - iStack_88)) {
    iVar15 = iStack_88 + local_8c;
  }
  (*param_3)(param_4,param_5,param_6,param_2);
  FUN_18027c3e0(&local_98,param_2);
  if (local_70 == '\0') {
  }
  if ((((((local_8c < 0) || (iStack_88 < 0)) || (local_90 < 0)) ||
       (((local_78 < 0 || (local_90 < local_8c)) ||
        ((local_78 < iStack_88 || ((local_8c != 0 && (local_98 == 0)))))))) ||
      ((iStack_88 != 0 && (local_80 == 0)))) ||
     (iVar13 = iStack_88 + local_8c, 0x100000 - iStack_88 < local_8c)) {
    iVar13 = -1;
  }
  if (iVar15 < 0) {
  }
  if (iVar13 <= iVar15) {
  }
  local_110 = 0x908060504030200;
  local_58 = unaff_XMM6_Qa;
  uStack_50 = unaff_XMM6_Qb;
  if (param_8 < 0xb) {
    bVar12 = param_8;
  }
  else if (param_8 < 0x13) {
    bVar12 = local_b8[(ulonglong)(param_8 - 0xb) - 0x58];
  }
  else {
    bVar12 = 2;
  }
  if ((param_11._1_1_ == '\0') || ((char)param_11 == '\0')) {
    local_110 = 0x908060504030200;
    if (param_8 < 0xb) {
LAB_1802962a0:
      if (((3 < (byte)(param_8 - 1)) && (param_8 != 10)) &&
         ((param_11._1_1_ == '\0' || ((bVar12 != 6 && (bVar12 != 0)))))) goto LAB_1802962bd;
    }
    else if (param_8 < 0x13) {
      param_8 = local_b8[(ulonglong)(param_8 - 0xb) - 0x58];
      goto LAB_1802962a0;
    }
    local_118 = '\x01';
  }
  else {
LAB_1802962bd:
    local_118 = '\0';
  }
  local_110 = 0x908060504030200;
  uVar16 = 0x3f800000;
  lVar11 = 0;
  local_100 = 0;
  lVar14 = (longlong)iVar15 * 0x70 + local_98;
  local_d0 = (((longlong)(iVar15 - local_8c) - (longlong)iVar15) * 0x70 - local_98) + local_80;
  do {
    local_e0 = FUN_18027c350(&local_98,iVar15);
    lVar10 = local_e0 + 0x20;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar10 == 0) {
      bVar1 = false;
    }
    else {
      local_110 = 0;
      cVar2 = FUN_1804514f0(&local_110,lVar10,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        local_f0 = local_110;
      }
    }
    lVar10 = local_f0;
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if ((bVar1) && (lVar10 != 0)) {
      lVar10 = lVar10 + 0x10;
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      if (lVar10 == 0) {
        bVar1 = false;
      }
      else {
        local_110 = 0;
        cVar2 = FUN_1804514f0(&local_110,lVar10,8);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          local_e8 = local_110;
        }
      }
      lVar10 = local_e8;
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      lVar5 = 0;
      if (bVar1) {
        lVar5 = lVar10;
      }
      if (lVar5 == 0) goto LAB_180296473;
      puVar6 = (undefined8 *)FUN_180454030(local_b8,lVar5,0x100);
      local_104 = local_104 | 1;
      _Buf1 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        _Buf1 = (undefined8 *)*puVar6;
      }
      lVar10 = puVar6[2];
      local_128 = 2;
      lVar5 = FUN_1801c56a0(_Buf1,lVar10);
      if (lVar5 != -1) {
        lVar10 = lVar10 - (lVar5 + 1);
        _Buf1 = (undefined8 *)((longlong)_Buf1 + lVar5 + 1);
      }
      if (((lVar10 != 0x1c) ||
          (iVar3 = memcmp(_Buf1,"solidcolor_glowproperty.vmat",0x1c), iVar3 != 0)) &&
         ((lVar10 != 0x1e ||
          (iVar3 = memcmp(_Buf1,"solidcolor_glowproperty.vmat_c",0x1e), iVar3 != 0))))
      goto LAB_180296473;
      bVar1 = true;
    }
    else {
LAB_180296473:
      bVar1 = false;
    }
    if ((local_104 & 1) != 0) {
      local_104 = local_104 & 0xfffffffe;
      FUN_18015c010(local_b8);
    }
    lVar10 = local_d8;
    if (!bVar1) {
      local_100 = local_100 + 1;
      iVar3 = FUN_18027c2f0(&local_98);
      lVar10 = local_d8;
      if (((iVar15 < 0) || (iVar3 < 0)) || (iVar3 <= iVar15)) {
        lVar5 = 0;
      }
      else if (iVar15 < local_8c) {
        lVar5 = lVar14;
      }
      else {
        lVar5 = local_d0 + lVar14;
      }
      FUN_18027c510(lVar5,local_d8,&local_fc);
      local_110 = CONCAT44(local_110._4_4_,uVar16);
      lVar5 = local_e0 + 0x54;
      if (lVar5 != 0) {
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        FUN_1801ad800(lVar5,&local_110);
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
      }
      if (local_118 != '\0') {
        FUN_18028b3b0(local_e0);
      }
    }
    lVar5 = local_c0;
    iVar15 = iVar15 + 1;
    lVar14 = lVar14 + 0x70;
  } while (iVar15 < iVar13);
  if (local_100 != 0) {
    if (local_118 == '\0') {
      if (local_108 == '\0') {
        iVar15 = FUN_1805f68d0(local_c0 + 0x130);
        if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (*(int *)(lVar5 + 0x17c) == 0x7fffffff) {
          *(undefined4 *)(lVar5 + 0x17c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_f4 = *(int *)(lVar5 + 0x200);
        local_f8 = 0;
        piVar9 = &local_f8;
        if (-1 < local_f4) {
          piVar9 = &local_f4;
        }
        if (0x10 < local_f4) {
          piVar9 = &DAT_1807d1134;
        }
        iVar15 = *piVar9;
        if (0 < iVar15) {
          plVar4 = (longlong *)(lVar5 + 0x180);
          do {
            if (*plVar4 == lVar10) goto LAB_18029666d;
            lVar11 = lVar11 + 1;
            plVar4 = plVar4 + 1;
          } while (lVar11 < iVar15);
        }
        if (iVar15 < 0x10) {
          *(longlong *)(lVar5 + 0x180 + (longlong)iVar15 * 8) = lVar10;
          *(int *)(lVar5 + 0x200) = iVar15 + 1;
        }
LAB_18029666d:
        FUN_1805f68fc(lVar5 + 0x130);
      }
      else {
        plVar4 = &DAT_180bbef88;
        while (lVar11 = *plVar4, lVar11 != lVar10) {
          if (lVar11 == 0) {
            LOCK();
            lVar14 = *plVar4;
            if (lVar14 == 0) {
              *plVar4 = lVar10;
            }
            else {
              lVar11 = lVar14;
            }
            UNLOCK();
            if (lVar14 == 0) {
            }
          }
          if (lVar11 == lVar10) {
          }
          plVar4 = plVar4 + 1;
          if (plVar4 == (longlong *)&DAT_180bbf038) {
          }
        }
      }
    }
    else {
      UVar8 = GetTickCount64();
      DAT_180bbef80 = UVar8 + 1000;
    }
  }
}



