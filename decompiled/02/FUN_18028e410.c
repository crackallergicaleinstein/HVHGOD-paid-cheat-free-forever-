// FUN_18028e410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028e410 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18028e410(undefined8 param_1,char *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  char *pcVar7;
  longlong *plVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ULONGLONG UVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 in_ZMM6 [64];
  undefined1 auStack_3fa8 [32];
  undefined1 **local_3f88;
  double local_3f80;
  double local_3f78;
  double local_3f70;
  double local_3f68;
  double local_3f60;
  ulonglong local_3f58;
  ulonglong local_3f50;
  ulonglong local_3f48;
  undefined4 local_3f38;
  undefined4 local_3f34;
  uint local_3f30;
  undefined8 *local_3f28;
  undefined8 *local_3f20;
  char *local_3f18;
  undefined8 local_3f10;
  ulonglong local_3f08;
  undefined8 *local_3f00;
  undefined1 local_3ef8 [16];
  undefined1 local_3ee8 [16];
  undefined1 *local_3ed8;
  longlong *local_3ed0;
  longlong *local_3ec8;
  longlong **local_3ec0;
  undefined1 local_3eb8 [4];
  uint local_3eb4;
  longlong *local_3eb0;
  uint *local_3ea8;
  longlong local_3e98 [34];
  longlong local_3d88 [38];
  longlong local_3c58 [128];
  undefined8 local_3858 [3];
  undefined8 auStack_3840 [893];
  undefined8 local_1c58 [897];
  ulonglong local_50;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_3fa8;
  uVar26 = (ulonglong)(int)param_3;
  local_3ee8 = ZEXT816(0x1807d0d98);
  local_3f30 = param_3;
  local_3f18 = param_2;
  FUN_18017bf40(local_3ee8 + 8);
  uVar25 = DAT_180cc9890;
  lVar24 = 0;
  if (((param_3 == 0) || (param_2 == (char *)0x0)) || (0x100000 < param_3)) goto LAB_18028ecfc;
  local_3f38 = DAT_180cc9890;
  FUN_18063ab10(local_3e98 + 0xc,0,0xb0);
  uVar18 = 0;
  do {
    *(undefined8 *)((longlong)local_3e98 + uVar18 + 0x60) =
         *(undefined8 *)((longlong)&DAT_180bbef88 + uVar18);
    uVar18 = uVar18 + 8;
  } while (uVar18 < 0xb0);
  FUN_18063ab10(local_3c58,0,0x400);
  if (DAT_180cb15f8 != '\0') {
    local_3ef8 = ZEXT816(0x180b8e3d0);
    iVar11 = FUN_1805f68d8(&DAT_180b8e3d0);
    if (iVar11 == 0) {
      if (DAT_180b8e41c == 0x7fffffff) {
        DAT_180b8e41c = 0x7ffffffe;
        goto LAB_18028e534;
      }
      cVar10 = '\x01';
    }
    else {
LAB_18028e534:
      cVar10 = '\0';
    }
    local_3ef8[8] = cVar10;
    if (cVar10 != '\0') {
      uVar18 = 0;
      plVar14 = (longlong *)*DAT_180cc9698;
      if (plVar14 != DAT_180cc9698) {
        do {
          plVar8 = plVar14;
          while( true ) {
            plVar5 = plVar8;
            plVar8 = plVar5 + 4;
            if (plVar8 == plVar14 + 0x14) break;
            if (((*plVar8 != 0) && ((char)plVar5[6] != '\0')) && (uVar18 < 0x80)) {
              local_3c58[uVar18] = *plVar8;
              uVar18 = uVar18 + 1;
            }
          }
          plVar14 = (longlong *)*plVar14;
        } while (plVar14 != DAT_180cc9698);
        if (uVar18 != 0) {
          FUN_1801bbfa0(local_3c58,local_3858,0x80,0);
        }
      }
      FUN_1805f68fc(&DAT_180b8e3d0);
    }
  }
  local_3eb8[0] = local_3c58[0x7f] != 0;
  if (local_3c58[0x7f] == 0) {
    UVar13 = GetTickCount64();
    uVar18 = DAT_180bbef80;
    if (((DAT_180c6e220 <= UVar13) && ((int)uVar25 < 1)) &&
       (UVar13 = GetTickCount64(), uVar18 <= UVar13)) {
      plVar14 = local_3e98 + 0xc;
      do {
        if (*plVar14 != 0) goto LAB_18028e62b;
        plVar14 = plVar14 + 1;
      } while (plVar14 != local_3d88);
      goto LAB_18028ecfc;
    }
  }
LAB_18028e62b:
  if ((int)param_3 < 2) goto LAB_18028ecfc;
  FUN_18063ab10(local_3d88,0,0x130);
  local_3eb4 = 0;
  puVar15 = &local_3eb4;
  if (-1 < (int)uVar25) {
    puVar15 = &local_3f38;
  }
  if (0x10 < (int)uVar25) {
    puVar15 = &DAT_1807d1134;
  }
  local_3eb4 = *puVar15;
  if (0 < (int)local_3eb4) {
    lVar19 = 0;
    uVar18 = (ulonglong)local_3eb4;
    do {
      *(undefined8 *)((longlong)local_3d88 + lVar19) =
           *(undefined8 *)((longlong)&DAT_180cc9810 + lVar19);
      lVar19 = lVar19 + 8;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  plVar14 = local_3e98 + 0xc;
  do {
    if (*plVar14 != 0) {
      lVar19 = (longlong)(int)local_3eb4;
      local_3eb4 = local_3eb4 + 1;
      local_3d88[lVar19] = *plVar14;
    }
    plVar14 = plVar14 + 1;
  } while (plVar14 != local_3d88);
  local_3eb0 = local_3d88;
  local_3ea8 = &local_3eb4;
  local_3e98[0] = 0;
  local_3e98[1] = 0;
  local_3e98[2] = 0;
  local_3e98[3] = 0;
  local_3e98[4] = 0;
  local_3e98[5] = 0;
  local_3e98[6] = 0;
  local_3e98[7] = 0;
  local_3e98[8] = 0;
  local_3e98[9] = 0;
  local_3e98[10] = 0;
  local_3e98[0xb] = 0;
  pbVar22 = &DAT_1807d1130;
  local_3f38 = 0x4030200;
  local_3f34 = 0x9080605;
  plVar14 = local_3e98;
  do {
    bVar9 = *pbVar22;
    uVar18 = (ulonglong)bVar9;
    if (bVar9 < 0x13) {
      *plVar14 = *(longlong *)(&DAT_180c7c270 + uVar18 * 8);
      lVar19 = FUN_1803e6cb0(uVar18,0,0xff);
      plVar14[1] = lVar19;
      if (10 < bVar9) {
        bVar9 = local_3ef8[(ulonglong)(bVar9 - 0xb) - 0x40];
      }
    }
    else {
      *plVar14 = 0;
      lVar19 = FUN_1803e6cb0(uVar18,0,0xff);
      plVar14[1] = lVar19;
      bVar9 = 2;
    }
    plVar14[2] = *(longlong *)(&DAT_180c72200 + (ulonglong)bVar9 * 8);
    lVar19 = FUN_1803e6cb0(uVar18,1,0xff);
    plVar14[3] = lVar19;
    plVar14 = plVar14 + 4;
    pbVar22 = pbVar22 + 1;
  } while (pbVar22 != &DAT_1807d1133);
  local_3ed8 = local_3eb8;
  local_3ed0 = local_3c58;
  local_3ec8 = local_3e98;
  local_3ec0 = &local_3eb0;
  local_3f88 = &local_3ed8;
  local_3f08 = uVar26;
  FUN_180296d40(&local_3f38,param_2,uVar26);
  if ((local_3f38._1_1_ == '\0') || ((char)local_3f38 == '\0')) goto LAB_18028ecfc;
  FUN_18063ab10(local_3858,0,0x3800);
  puVar21 = auStack_3840;
  lVar19 = 0x10;
  do {
    *(undefined1 (*) [16])(puVar21 + -3) = (undefined1  [16])0x0;
    puVar21[-1] = 0;
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar21[4] = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar21[8] = 0;
    *(undefined4 *)(puVar21 + 9) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x4e) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x56) = 0;
    *(undefined1 (*) [16])(puVar21 + 0xb) = (undefined1  [16])0x0;
    puVar21[0xd] = 0;
    puVar21[0xe] = 0;
    puVar21[0xf] = 0;
    puVar21[0x10] = 0;
    puVar21[0x11] = 0;
    puVar21[0x12] = 0;
    puVar21[0x13] = 0;
    puVar21[0x14] = 0;
    puVar21[0x15] = 0;
    puVar21[0x16] = 0;
    *(undefined4 *)(puVar21 + 0x17) = 0;
    *(undefined2 *)((longlong)puVar21 + 0xbc) = 0;
    *(undefined8 *)((longlong)puVar21 + 0xbe) = 0;
    *(undefined2 *)((longlong)puVar21 + 0xc6) = 0;
    *(undefined1 (*) [16])(puVar21 + 0x19) = (undefined1  [16])0x0;
    puVar21[0x1b] = 0;
    puVar21[0x1c] = 0;
    puVar21[0x1d] = 0;
    puVar21[0x1e] = 0;
    puVar21[0x1f] = 0;
    puVar21[0x20] = 0;
    puVar21[0x21] = 0;
    puVar21[0x22] = 0;
    puVar21[0x23] = 0;
    puVar21[0x24] = 0;
    *(undefined4 *)(puVar21 + 0x25) = 0;
    *(undefined2 *)((longlong)puVar21 + 300) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x12e) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x136) = 0;
    *(undefined1 (*) [16])(puVar21 + 0x27) = (undefined1  [16])0x0;
    puVar21[0x29] = 0;
    puVar21[0x2a] = 0;
    puVar21[0x2b] = 0;
    puVar21[0x2c] = 0;
    puVar21[0x2d] = 0;
    puVar21[0x2e] = 0;
    puVar21[0x2f] = 0;
    puVar21[0x30] = 0;
    puVar21[0x31] = 0;
    puVar21[0x32] = 0;
    *(undefined4 *)(puVar21 + 0x33) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x19c) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x19e) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x1a6) = 0;
    *(undefined1 (*) [16])(puVar21 + 0x35) = (undefined1  [16])0x0;
    puVar21[0x37] = 0;
    puVar21[0x38] = 0;
    puVar21[0x39] = 0;
    puVar21[0x3a] = 0;
    puVar21[0x3b] = 0;
    puVar21[0x3c] = 0;
    puVar21[0x3d] = 0;
    puVar21[0x3e] = 0;
    puVar21[0x3f] = 0;
    puVar21[0x40] = 0;
    *(undefined4 *)(puVar21 + 0x41) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x20c) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x20e) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x216) = 0;
    *(undefined1 (*) [16])(puVar21 + 0x43) = (undefined1  [16])0x0;
    puVar21[0x45] = 0;
    puVar21[0x46] = 0;
    puVar21[0x47] = 0;
    puVar21[0x48] = 0;
    puVar21[0x49] = 0;
    puVar21[0x4a] = 0;
    puVar21[0x4b] = 0;
    puVar21[0x4c] = 0;
    puVar21[0x4d] = 0;
    puVar21[0x4e] = 0;
    *(undefined4 *)(puVar21 + 0x4f) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x27c) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x27e) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x286) = 0;
    *(undefined1 (*) [16])(puVar21 + 0x51) = (undefined1  [16])0x0;
    puVar21[0x53] = 0;
    puVar21[0x54] = 0;
    puVar21[0x55] = 0;
    puVar21[0x56] = 0;
    puVar21[0x57] = 0;
    puVar21[0x58] = 0;
    puVar21[0x59] = 0;
    puVar21[0x5a] = 0;
    puVar21[0x5b] = 0;
    puVar21[0x5c] = 0;
    *(undefined4 *)(puVar21 + 0x5d) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x2ec) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x2ee) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x2f6) = 0;
    *(undefined1 (*) [16])(puVar21 + 0x5f) = (undefined1  [16])0x0;
    puVar21[0x61] = 0;
    puVar21[0x62] = 0;
    puVar21[99] = 0;
    puVar21[100] = 0;
    puVar21[0x65] = 0;
    puVar21[0x66] = 0;
    puVar21[0x67] = 0;
    puVar21[0x68] = 0;
    puVar21[0x69] = 0;
    puVar21[0x6a] = 0;
    *(undefined4 *)(puVar21 + 0x6b) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x35c) = 0;
    *(undefined8 *)((longlong)puVar21 + 0x35e) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x366) = 0;
    puVar21 = puVar21 + 0x70;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  local_3f00 = (undefined8 *)0x0;
  if (uVar26 < 0x41) {
    local_3f20 = local_1c58;
    local_3f28 = local_3858;
LAB_18028eb84:
    puVar21 = local_3f00;
    puVar23 = local_3f28;
    local_3ef8._0_8_ = uVar26 * 0x70;
    lVar19 = FUN_18017ea70();
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
    cVar10 = FUN_1804514f0(puVar23,param_2,uVar26 * 0x70);
    lVar19 = FUN_18017ea70();
    if (*(int *)(lVar19 + 4) != 0) {
      *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
    }
    if (cVar10 != '\0') {
      uVar25 = 0;
      local_3f38 = 0;
      do {
        uVar6 = local_3f38;
        iVar11 = 0;
        lVar19 = 0;
        if (uVar26 != 0) {
          puVar23 = local_3f20 + lVar24 * 0xe;
          puVar21 = local_3f28;
          do {
            uVar12 = FUN_18028eef0(&local_3ed8,local_3f28 + (longlong)iVar11 * 0xe);
            if (uVar12 == uVar6) {
              uVar16 = puVar21[1];
              uVar3 = puVar21[2];
              uVar4 = puVar21[3];
              *puVar23 = *puVar21;
              puVar23[1] = uVar16;
              puVar23[2] = uVar3;
              puVar23[3] = uVar4;
              uVar16 = puVar21[5];
              uVar3 = puVar21[6];
              uVar4 = puVar21[7];
              puVar23[4] = puVar21[4];
              puVar23[5] = uVar16;
              puVar23[6] = uVar3;
              puVar23[7] = uVar4;
              uVar16 = puVar21[9];
              uVar3 = puVar21[10];
              uVar4 = puVar21[0xb];
              puVar23[8] = puVar21[8];
              puVar23[9] = uVar16;
              puVar23[10] = uVar3;
              puVar23[0xb] = uVar4;
              *(undefined1 (*) [16])(puVar23 + 0xc) = *(undefined1 (*) [16])(puVar21 + 0xc);
              uVar25 = uVar25 + 1;
              lVar24 = lVar24 + 1;
              puVar23 = puVar23 + 0xe;
            }
            iVar11 = iVar11 + 1;
            lVar19 = lVar19 + 1;
            puVar21 = puVar21 + 0xe;
          } while (lVar19 < (longlong)local_3f08);
          uVar26 = local_3f08;
        }
        puVar21 = local_3f00;
        puVar23 = local_3f20;
        local_3f38 = uVar6 + 1;
      } while ((int)local_3f38 < 9);
      if ((uVar25 == local_3f30) && (local_3f20 != (undefined8 *)0x0)) {
        uVar16 = local_3ef8._0_8_;
        if (local_3ef8._0_8_ != 0) {
          lVar24 = FUN_18017ea70();
          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
          FUN_1804514c0(local_3f18,puVar23,uVar16);
          lVar24 = FUN_18017ea70();
          if (*(int *)(lVar24 + 4) != 0) {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
          }
        }
      }
    }
  }
  else {
    uVar18 = uVar26 * 2;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar18;
    uVar16 = SUB168(ZEXT816(0x70) * auVar1,0);
    if (SUB168(ZEXT816(0x70) * auVar1,8) != 0) {
      uVar16 = 0xffffffffffffffff;
    }
    local_3f00 = (undefined8 *)FUN_1805f6194(uVar16,&DAT_1806898a0);
    if (local_3f00 != (undefined8 *)0x0) {
      if (uVar18 != 0) {
        puVar21 = local_3f00 + 4;
        do {
          *(undefined1 (*) [16])(puVar21 + -4) = (undefined1  [16])0x0;
          puVar21[-2] = 0;
          puVar21[-1] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          *(undefined4 *)(puVar21 + 8) = 0;
          *(undefined2 *)((longlong)puVar21 + 0x44) = 0;
          *(undefined8 *)((longlong)puVar21 + 0x46) = 0;
          *(undefined2 *)((longlong)puVar21 + 0x4e) = 0;
          puVar21 = puVar21 + 0xe;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      local_3f20 = local_3f00 + uVar26 * 0xe;
      local_3f28 = local_3f00;
      goto LAB_18028eb84;
    }
    puVar21 = (undefined8 *)0x0;
  }
  if (puVar21 != (undefined8 *)0x0) {
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_3f18 = "tier0.dll:g_pMemAlloc";
      local_3f10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_3f18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar21);
  }
LAB_18028ecfc:
  FUN_18017bf40(&local_3f18);
  pcVar7 = local_3f18;
  uVar20 = (longlong)local_3f18 - local_3ee8._8_8_;
  puVar17 = (ulonglong *)FUN_180299290();
  local_3f88 = (undefined1 **)(*puVar17 + 1);
  *puVar17 = (ulonglong)local_3f88;
  uVar26 = puVar17[1];
  puVar17[1] = uVar26 + uVar20;
  local_3f58 = puVar17[3] + (ulonglong)(999999 < uVar20);
  puVar17[3] = local_3f58;
  local_3f50 = puVar17[4] + (ulonglong)(4999999 < uVar20);
  puVar17[4] = local_3f50;
  local_3f48 = puVar17[5] + (ulonglong)(15999999 < uVar20);
  puVar17[5] = local_3f48;
  uVar18 = puVar17[2];
  if (puVar17[2] < uVar20) {
    puVar17[2] = uVar20;
    uVar18 = uVar20;
  }
  if ((pcVar7 == (char *)puVar17[7]) || ((longlong)puVar17[7] <= (longlong)pcVar7)) {
    local_3f68 = (double)(longlong)((longlong)pcVar7 - puVar17[6]) / 1000000.0;
    dVar2 = (double)(uVar26 + uVar20);
    local_3f60 = 0.0;
    if (0.0 < local_3f68) {
      local_3f60 = (dVar2 / 1000.0) / local_3f68;
    }
    local_3f70 = dVar2 / 1000000.0;
    local_3f78 = (double)uVar18 / 1000.0;
    local_3f80 = (dVar2 / (double)local_3f88) / 1000.0;
    FUN_1801af8a0(dVar2 / (double)local_3f88,local_3f80,local_3ee8._0_8_);
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[6] = (ulonglong)pcVar7;
    puVar17[7] = (ulonglong)(pcVar7 + 5000000000);
  }
}



