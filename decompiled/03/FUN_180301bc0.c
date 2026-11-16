// FUN_180301bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180301bc0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180301bc0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  short sVar3;
  ULONGLONG UVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auStack_1108 [32];
  ulonglong local_10e8;
  undefined1 local_10e0;
  undefined1 local_10d8;
  char *local_10c8;
  longlong *plStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 local_1078;
  ulonglong local_1070;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_1108;
  auVar18 = ZEXT1664(in_XMM1);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar10 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar10 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_10c8 = _DAT_180bb8890;
  plStack_10c0 = plRam0000000180bb8898;
  uStack_10b8 = uRam0000000180bb88a0;
  uStack_10b0 = uRam0000000180bb88a8;
  auVar18 = ZEXT1664(auVar18._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  plVar11 = plStack_10c0;
  auVar17 = auVar18._0_16_;
  uVar14 = 0xffffffffffffffff;
  if (plStack_10c0 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    iVar12 = DAT_180c6f218;
    if (DAT_180c6f218 == 0) {
      auVar18 = ZEXT1664(auVar17);
      UVar4 = GetTickCount64();
      auVar17 = auVar18._0_16_;
      if (UVar4 < DAT_180c6f220) {
        lVar13 = *plVar11;
        goto LAB_180301d3a;
      }
      local_10c8 = &DAT_1808ff270;
      iVar12 = FUN_1805f68d0(&DAT_1808ff270);
      if (iVar12 != 0) goto LAB_1803021ab;
      if (DAT_1808ff2bc == 0x7fffffff) {
        DAT_1808ff2bc = 0x7ffffffe;
        goto LAB_1803021c0;
      }
      if ((DAT_180c6f218 == 0) && (DAT_180c6f220 <= UVar4)) {
        DAT_180c6f218 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f218 == 0) {
          DAT_180c6f220 = UVar4 + 1000;
        }
        else {
          DAT_180c6f220 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c6f218;
      FUN_1805f68fc(&DAT_1808ff270);
      auVar17 = auVar18._0_16_;
    }
    lVar13 = *(longlong *)((longlong)iVar12 + (longlong)plVar11);
  }
LAB_180301d3a:
  if (puVar10 != (uint *)0x0) {
    lVar6 = 0;
    if (*(longlong *)(puVar10 + 0xc) != 0) {
      lVar6 = *(longlong *)(puVar10 + 0xc) + 0x10;
    }
    if (lVar6 == 0) {
    }
    if (lVar13 == 0) {
    }
    auVar18 = ZEXT1664(auVar17);
    sVar3 = thunk_FUN_180624430();
    if (0 < sVar3) {
    }
    iVar12 = 0;
    if (0 < (int)puVar10[4]) {
      plVar11 = *(longlong **)(puVar10 + 6);
      do {
        plVar11 = plVar11 + 1;
        puVar5 = (uint *)0x0;
        if (*plVar11 != 0) {
          puVar5 = (uint *)(*plVar11 + 0x10);
        }
        if (((puVar5 != (uint *)0x0) && (*(longlong *)(puVar5 + 2) == 0)) &&
           ((float)puVar5[5] <= 0.0)) goto LAB_180301de1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)puVar10[4]);
    }
    puVar5 = (uint *)0x0;
    if ((int)puVar10[4] < 0x1c) {
      puVar5 = (uint *)FUN_1803dfb00();
    }
LAB_180301de1:
    iVar12 = DAT_180c6f228;
    if (DAT_180c6f228 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6f200) {
        iVar12 = 0;
      }
      else {
        local_10c8 = &DAT_1808ff220;
        iVar12 = FUN_1805f68d0(&DAT_1808ff220);
        if (iVar12 != 0) goto LAB_1803021ab;
        if (DAT_1808ff26c == 0x7fffffff) {
          DAT_1808ff26c = 0x7ffffffe;
          goto LAB_1803021c0;
        }
        if ((DAT_180c6f228 == 0) && (DAT_180c6f200 <= UVar4)) {
          DAT_180c6f228 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
          if (DAT_180c6f228 == 0) {
            DAT_180c6f200 = UVar4 + 1000;
          }
          else {
            DAT_180c6f200 = 0xffffffffffffffff;
          }
        }
        iVar12 = DAT_180c6f228;
        FUN_1805f68fc(&DAT_1808ff220);
      }
    }
    auVar16 = ZEXT464(*(uint *)(iVar12 + lVar13));
    iVar12 = DAT_180c6f208;
    if (DAT_180c6f208 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6f210) {
        iVar12 = 0;
      }
      else {
        local_10c8 = &DAT_1808ff180;
        iVar12 = FUN_1805f68d0(&DAT_1808ff180);
        if (iVar12 != 0) {
LAB_1803021ab:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ff1cc == 0x7fffffff) {
          DAT_1808ff1cc = 0x7ffffffe;
LAB_1803021c0:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f208 == 0) && (DAT_180c6f210 <= UVar4)) {
          DAT_180c6f208 = FUN_1804174b0("CPlayer_MovementServices",0xb20fcc65);
          if (DAT_180c6f208 == 0) {
            uVar14 = UVar4 + 1000;
          }
          DAT_180c6f210 = uVar14;
        }
        iVar12 = DAT_180c6f208;
        FUN_1805f68fc(&DAT_1808ff180);
      }
    }
    auVar15 = ZEXT464(*(uint *)(iVar12 + lVar13));
    if (((puVar5 != (uint *)0x0) && (sVar3 = thunk_FUN_180624430(auVar16._0_8_), sVar3 < 1)) &&
       (sVar3 = thunk_FUN_180624430(auVar15._0_8_), sVar3 < 1)) {
      *puVar10 = *puVar10 | 4;
      puVar8 = (uint *)0x0;
      if (*(longlong *)(puVar10 + 0xc) != 0) {
        puVar8 = (uint *)(*(longlong *)(puVar10 + 0xc) + 0x10);
      }
      *puVar8 = *puVar8 | 2;
      puVar8[3] = auVar18._0_4_;
      puVar10[0x12] = 0x3f800000;
      puVar10[0x13] = 0;
      *puVar10 = *puVar10 | 0xc0;
      iVar12 = 0;
      if (0 < (int)puVar10[4]) {
        lVar13 = 0;
        do {
          lVar6 = *(longlong *)(lVar13 + 8 + *(longlong *)(puVar10 + 6));
          puVar8 = (uint *)0x0;
          if (lVar6 != 0) {
            puVar8 = (uint *)(lVar6 + 0x10);
          }
          if (puVar8 != (uint *)0x0) {
            *(ulonglong *)(puVar8 + 2) = *(ulonglong *)(puVar8 + 2) & 0xfffffffffffff9e7;
            puVar8[6] = 0;
            puVar8[7] = 0;
            *puVar8 = *puVar8 | 0x19;
          }
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + 8;
        } while (iVar12 < (int)puVar10[4]);
      }
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      puVar5[6] = (uint)(1.0 - auVar16._0_4_);
      *puVar5 = *puVar5 | 0x1f;
      puVar5[7] = auVar15._0_4_ ^ 0x80000000;
      uVar14 = *(ulonglong *)(param_1 + 0x60);
      uVar7 = uVar14 & 0xfffffffffffff9ef | 8;
      *(ulonglong *)(param_1 + 0x60) = uVar7;
      *(ulonglong *)(param_1 + 0x68) =
           *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar7 ^ (uint)uVar14) & 0x618);
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9e7;
      puVar5 = (uint *)0x0;
      if (*(longlong *)(puVar10 + 10) != 0) {
        puVar5 = (uint *)(*(longlong *)(puVar10 + 10) + 0x10);
      }
      if (puVar5 != (uint *)0x0) {
        *puVar10 = *puVar10 | 2;
        uVar2 = *(undefined8 *)(param_1 + 0x60);
        *puVar5 = *puVar5 | 1;
        uVar1 = *puVar5;
        *(undefined8 *)(puVar5 + 2) = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0x68);
        *puVar5 = uVar1 | 2;
        *(undefined8 *)(puVar5 + 4) = uVar2;
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        *puVar5 = uVar1 | 6;
        *(undefined8 *)(puVar5 + 6) = uVar2;
      }
      lVar6 = *(longlong *)(puVar10 + 6) + ((longlong)(int)puVar10[4] + 1) * 8;
      lVar13 = *(longlong *)(puVar10 + 6) + 8;
      lVar9 = lVar6 - lVar13 >> 3;
      if (lVar9 < 0x21) {
        FUN_180250340(lVar13,lVar6);
      }
      else {
        FUN_180250440(&local_1078,lVar9 - (lVar9 - (lVar6 - lVar13 >> 0x3f) >> 1));
        local_10e0 = local_10d8;
        local_10e8 = local_1070;
        FUN_180250540(lVar13,lVar6,lVar9,local_1078);
        if (0x200 < local_1070) {
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_10c8 = "tier0.dll:g_pMemAlloc";
            plStack_10c0 = (longlong *)0x15;
            DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_10c8);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1078);
        }
      }
    }
  }
}



